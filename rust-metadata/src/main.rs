use std::path::{Path, PathBuf};
use std::process::Command;

use windows_clang::*;

/// A metadata partition: one winmd namespace produced from one MIDL-generated
/// header. Mirrors `.metadata/Partitions/<Name>/{settings.rsp,main.cpp}` in the
/// dotnet flow (`--namespace` + `--traverse <IncludeRoot>/<header>`).
struct Partition {
    /// Winmd namespace, e.g. `Microsoft.ServiceFabric.FabricClient`.
    namespace: &'static str,
    /// The MIDL-generated header (stem, no extension) that defines this
    /// partition's types, e.g. `FabricClient`.
    header: &'static str,
}

const PARTITIONS: &[Partition] = &[
    Partition { namespace: "Microsoft.ServiceFabric.FabricTypes", header: "FabricTypes" },
    Partition { namespace: "Microsoft.ServiceFabric.FabricCommon", header: "FabricCommon" },
    Partition { namespace: "Microsoft.ServiceFabric.FabricClient", header: "FabricClient" },
    Partition { namespace: "Microsoft.ServiceFabric.FabricRuntime", header: "FabricRuntime" },
    Partition { namespace: "Microsoft.ServiceFabric.FabricTransport", header: "fabrictransport_" },
];

/// The `.idl` files to compile, resolved relative to the repository root.
/// Order matters for MIDL only in that imports must be resolvable via `/I`;
/// every file is compiled independently.
const IDLS: &[(&str, &str)] = &[
    ("idl", "FabricTypes.idl"),
    ("idl", "FabricCommon.idl"),
    ("idl", "FabricClient.idl"),
    ("idl", "FabricRuntime.idl"),
    ("internal_idl", "fabrictransport_.idl"),
];

fn main() {
    // Repository root is the parent of this crate directory.
    let repo = Path::new(env!("CARGO_MANIFEST_DIR"))
        .parent()
        .expect("crate has a parent directory")
        .to_path_buf();

    let out = repo.join("rust-metadata").join("target").join("gen");
    let headers = out.join("headers");
    let rdl_dir = out.join("rdl");
    // Experiment output: keep it out of the committed .windows/ dir so it does
    // not clobber the dotnet-generated baseline. Compare against
    // .windows/winmd/Microsoft.ServiceFabric.winmd to evaluate parity.
    let winmd_out = out.join("Microsoft.ServiceFabric.winmd");
    std::fs::create_dir_all(&headers).unwrap();
    std::fs::create_dir_all(&rdl_dir).unwrap();
    std::fs::create_dir_all(winmd_out.parent().unwrap()).unwrap();

    // The VS Developer environment must be active so `INCLUDE` points at the
    // Windows SDK + MSVC headers/idls that MIDL and clang both consume.
    let include = std::env::var("INCLUDE")
        .expect("INCLUDE not set - run inside a VS Developer PowerShell (see run.ps1)");
    let include_dirs: Vec<String> = include
        .split(';')
        .filter(|s| !s.is_empty())
        .map(|s| s.to_string())
        .collect();

    // 1. Provision the pinned libclang (cached after first download).
    ensure_libclang();
    assert_libclang_version();
    println!("libclang: {}", clang_version().expect("libclang version"));

    // The Win32 metadata the SF types reference (FILETIME, GUID, HRESULT, ...).
    //
    // This MUST be the flat Windows.Win32.winmd that windows-rs ships: the RDL
    // reader hardcodes the pseudo-attribute namespace to `Windows.Win32.Metadata`
    // (e.g. NativeEncodingAttribute), which only exists in that flat layout. The
    // dotnet-era win32metadata winmd puts those types in
    // `Windows.Win32.Foundation.Metadata`, so it cannot be used as the reference
    // here. Consequence: the generated SF winmd is tied to the new flat Win32
    // layout (and the matching new windows-bindgen consumer).
    let win32_winmd = find_win32_winmd();
    println!("win32 winmd: {win32_winmd}");

    // 2. IDL -> C/C++ headers via MIDL.
    let midl = find_midl();
    println!("midl: {}", midl.display());
    for (dir, idl) in IDLS {
        run_midl(&midl, &repo, dir, idl, &headers);
    }

    // 3. Each partition header -> per-namespace RDL via windows-clang.
    //
    // The partitions are processed in dependency order (Types, Common first).
    // Cross-namespace type references (e.g. FabricClient using a FabricTypes
    // struct) can only be emitted *namespace-qualified* if clang is given a
    // reference winmd that already owns those types. So each partition is
    // compiled to an intermediate winmd as we go, and every subsequent
    // partition is scraped and compiled with all previously-built winmds as
    // references. Without this the RDL reader fails with "type not found" on
    // the bare cross-namespace name.
    let mut include_args: Vec<String> = Vec::new();
    for dir in &include_dirs {
        include_args.push("-isystem".to_string());
        include_args.push(dir.clone());
    }
    let headers_arg = format!("-I{}", headers.display());
    let winmd_dir = out.join("winmd");
    std::fs::create_dir_all(&winmd_dir).unwrap();

    let mut rdl_paths: Vec<String> = Vec::new();
    let mut built_winmds: Vec<String> = Vec::new();

    // Seed RDL supplying the MIDL struct alias windows-clang drops (see the file
    // for details). It belongs to the FabricTypes namespace.
    let seed = repo
        .join("rust-metadata")
        .join("seed")
        .join("FabricTypes.rdl")
        .to_string_lossy()
        .replace('\\', "/");

    // Self-contained seed defining FILETIME under Microsoft.ServiceFabric.FabricTypes.
    // The SF surface's only Win32 base *struct* is FILETIME (GUID/HRESULT/IUnknown/
    // BOOL/BOOLEAN/PCWSTR are windows-core builtins that bindgen never emits).
    // Defining FILETIME SF-locally and rewriting its references (below) keeps the
    // final winmd single-rooted under `Microsoft` so the windows-bindgen
    // `--package` writer can consume it (it panics on a second, bare `Windows` root).
    let win32_seed = repo
        .join("rust-metadata")
        .join("seed")
        .join("FabricTypesWin32.rdl")
        .to_string_lossy()
        .replace('\\', "/");

    for p in PARTITIONS {
        let rdl_path = rdl_dir.join(format!("{}.rdl", p.header));
        let source = format!("#include <{}.h>", p.header);
        let mut clang = clang();
        clang
            .target("x86_64-pc-windows-msvc")
            .args(["-x", "c++"])
            .arg(&headers_arg)
            .args(&include_args)
            .namespace(p.namespace)
            .filter(&format!("{}.h", p.header))
            .input_str(&source)
            .input(&win32_winmd)
            .output(&rdl_path.to_string_lossy());
        // Already-built partitions act as the cross-namespace reference so
        // clang emits qualified names for their types.
        for winmd in &built_winmds {
            clang.input(winmd);
        }
        println!("scraping {} -> {}", p.header, rdl_path.display());
        clang
            .write()
            .unwrap_or_else(|e| panic!("clang scrape of {} failed: {e}", p.header));

        // windows-clang qualifies FILETIME to the external flat Windows.Win32
        // layout. Rewrite that single reference to the SF-local definition
        // supplied by the FabricTypesWin32 seed, so nothing lands under a second
        // `Windows` root. All other Windows::Win32::* references are builtins.
        {
            let text = std::fs::read_to_string(&rdl_path)
                .unwrap_or_else(|e| panic!("read {} failed: {e}", rdl_path.display()));
            let rewritten = text.replace(
                "Windows::Win32::FILETIME",
                "Microsoft::ServiceFabric::FabricTypes::FILETIME",
            );
            std::fs::write(&rdl_path, rewritten)
                .unwrap_or_else(|e| panic!("write {} failed: {e}", rdl_path.display()));
        }

        // Compile this partition (plus its dependency winmds) into an
        // intermediate winmd that later partitions reference.
        let part_winmd = winmd_dir.join(format!("{}.winmd", p.header));
        let mut reader = windows_rdl::reader();
        reader.input(&rdl_path.to_string_lossy());
        reader.input(&win32_winmd);
        // The alias seed lives in the FabricTypes namespace; supply it when
        // compiling that partition so its winmd (and every downstream
        // reference) carries FABRIC_STRING_PAIR. The FILETIME seed is supplied
        // the same way so downstream partitions resolve FILETIME to the SF-local
        // definition rather than an external Windows.Win32 type.
        if p.header == "FabricTypes" {
            reader.input(&seed);
            reader.input(&win32_seed);
        }
        for winmd in &built_winmds {
            reader.input(winmd);
        }
        reader
            .output(&part_winmd.to_string_lossy())
            .write()
            .unwrap_or_else(|e| panic!("winmd compile of {} failed: {e}", p.header));

        rdl_paths.push(rdl_path.to_string_lossy().replace('\\', "/"));
        if p.header == "FabricTypes" {
            rdl_paths.push(seed.clone());
            rdl_paths.push(win32_seed.clone());
        }
        built_winmds.push(part_winmd.to_string_lossy().replace('\\', "/"));
    }

    // 4. Compile all RDL partitions together into the single combined winmd.
    // Every RDL now carries qualified cross-namespace names, so all five
    // namespaces resolve against each other with no external reference.
    println!("compiling {} rdl partitions -> {}", rdl_paths.len(), winmd_out.display());
    let mut reader = windows_rdl::reader();
    reader.inputs(&rdl_paths);
    reader.input(&win32_winmd);
    reader
        .output(&winmd_out.to_string_lossy())
        .write()
        .unwrap_or_else(|e| panic!("winmd compile failed: {e}"));

    println!("wrote {}", winmd_out.display());
}

/// Locates the flat `Windows.Win32.winmd` that windows-rs ships, inside the
/// cargo git checkout of the windows-rs dependency. This is the reference the
/// RDL reader requires (its pseudo-attribute namespace is hardcoded to the
/// flat `Windows.Win32.Metadata` layout this winmd uses).
fn find_win32_winmd() -> String {
    let cargo_home = std::env::var("CARGO_HOME")
        .map(PathBuf::from)
        .unwrap_or_else(|_| {
            PathBuf::from(std::env::var("USERPROFILE").expect("USERPROFILE")).join(".cargo")
        });
    let checkouts = cargo_home.join("git").join("checkouts");
    for repo in std::fs::read_dir(&checkouts).expect("cargo git checkouts").flatten() {
        if !repo.file_name().to_string_lossy().starts_with("windows-rs-") {
            continue;
        }
        for rev in std::fs::read_dir(repo.path()).expect("checkout revs").flatten() {
            let candidate = rev
                .path()
                .join("crates/libs/bindgen/default/Windows.Win32.winmd");
            if candidate.is_file() {
                return candidate.to_string_lossy().replace('\\', "/");
            }
        }
    }
    panic!("could not locate Windows.Win32.winmd in the windows-rs git checkout");
}

/// Locates the newest `x64\midl.exe` under the Windows Kits 10 bin directory.
fn find_midl() -> PathBuf {
    let base = Path::new(r"C:\Program Files (x86)\Windows Kits\10\bin");
    let mut candidates: Vec<PathBuf> = std::fs::read_dir(base)
        .expect("Windows Kits 10 bin directory")
        .filter_map(|e| e.ok())
        .map(|e| e.path().join("x64").join("midl.exe"))
        .filter(|p| p.is_file())
        .collect();
    candidates.sort();
    candidates
        .pop()
        .expect("no x64\\midl.exe found under Windows Kits 10 bin")
}

/// Runs MIDL to turn `<dir>/<idl>` into a header in `headers`, resolving imports
/// from both SF idl directories and the SDK (`INCLUDE`).
fn run_midl(midl: &Path, repo: &Path, dir: &str, idl: &str, headers: &Path) {
    let idl_path = repo.join(dir).join(idl);
    let status = Command::new(midl)
        .current_dir(repo)
        .args(["/nologo", "/char", "signed", "/env", "x64", "/notlb"])
        .arg("/I")
        .arg(repo.join("idl"))
        .arg("/I")
        .arg(repo.join("internal_idl"))
        .arg("/out")
        .arg(headers)
        .arg(&idl_path)
        .status()
        .unwrap_or_else(|e| panic!("failed to launch midl for {idl}: {e}"));
    assert!(status.success(), "midl failed for {idl}");
}
