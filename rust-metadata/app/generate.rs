// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

use std::path::{Path, PathBuf};
use std::process::Command;

use windows_clang::*;

const SCRAPE_NAMESPACE: &str = "Windows.Win32";
const OUTPUT_ROOT: &str = "Windows.ServiceFabric";

/// MIDL-generated header stems in dependency order. Per-header scraping appends
/// each stem to `OUTPUT_ROOT` to form the final metadata namespace.
const PARTITIONS: &[&str] = &[
    "FabricTypes",
    "FabricCommon",
    "FabricClient",
    "FabricRuntime",
    "FabricTransport",
];

/// The `.idl` files to compile, resolved relative to the repository root.
/// Order matters for MIDL only in that imports must be resolvable via `/I`;
/// every file is compiled independently.
const IDLS: &[(&str, &str, &str)] = &[
    ("idl", "FabricTypes.idl", "FabricTypes.h"),
    ("idl", "FabricCommon.idl", "FabricCommon.h"),
    ("idl", "FabricClient.idl", "FabricClient.h"),
    ("idl", "FabricRuntime.idl", "FabricRuntime.h"),
    ("internal_idl", "fabrictransport_.idl", "FabricTransport.h"),
];

fn main() {
    // Repository root is the parent of this crate directory.
    let repo = Path::new(env!("CARGO_MANIFEST_DIR"))
        .parent()
        .expect("crate has a parent directory")
        .to_path_buf();

    let out = repo.join("target").join("metadata-gen");
    let headers = out.join("headers");
    let rdl_dir = out.join("rdl");
    let winmd_out = repo
        .join(".windows")
        .join("winmd")
        .join("Windows.ServiceFabric.winmd");
    recreate_dir(&headers);
    recreate_dir(&rdl_dir);
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
    println!("provisioning pinned libclang (network access may be required)...");
    ensure_libclang();
    assert_libclang_version();
    println!("libclang: {}", clang_version().expect("libclang version"));

    // The Win32 metadata the SF types reference (FILETIME, GUID, HRESULT, ...).
    //
    // This MUST be the flat Windows.Win32.winmd that windows-rs ships: the RDL
    // reader hardcodes the pseudo-attribute namespace to `Windows.Win32.Metadata`
    // (e.g. NativeEncodingAttribute), which only exists in that flat layout. The
    // The former package-sourced Win32 metadata puts those types in
    // `Windows.Win32.Foundation.Metadata`, so it cannot be used as the reference
    // here. Consequence: the generated SF winmd is tied to the new flat Win32
    // layout (and the matching new windows-bindgen consumer).
    let win32_winmd = write_default_win32(&out);
    println!("win32 winmd: {}", win32_winmd.display());

    // 2. IDL -> C/C++ headers via MIDL.
    let midl = find_midl();
    println!("midl: {}", midl.display());
    for (dir, idl, header) in IDLS {
        run_midl(&midl, &repo, dir, idl, header, &headers);
    }

    // 3. Each partition header -> per-header RDL via windows-clang.
    //
    // The partitions are processed in dependency order (Types, Common first).
    // Each partition is compiled to an intermediate flat winmd and supplied as
    // a reference to later scrapes. This excludes already-owned definitions
    // while keeping their bare names resolvable in the shared flat namespace.
    let mut include_args: Vec<String> = Vec::new();
    for dir in &include_dirs {
        include_args.push("-isystem".to_string());
        include_args.push(dir.clone());
    }
    let headers_arg = format!("-I{}", headers.display());
    let winmd_dir = out.join("winmd");
    recreate_dir(&winmd_dir);

    let mut rdl_paths: Vec<PathBuf> = Vec::new();
    let mut built_winmds: Vec<PathBuf> = Vec::new();
    let mut routes = std::collections::HashMap::<String, String>::new();

    // Self-contained seed defining `MarshalingBehaviorAttribute` +
    // `MarshalingType` (under Windows.ServiceFabric.Metadata). The post-scrape
    // rewrite (below) stamps every interface with this attribute so windows-bindgen
    // projects them as thread-agile (`Send` + `Sync`). Compiled into the
    // FabricTypes partition winmd so all later partitions resolve the attribute.
    let agile_seed = repo
        .join("rust-metadata")
        .join("seed")
        .join("FabricAgile.rdl");

    for header in PARTITIONS {
        let partition_rdl_dir = rdl_dir.join(header);
        std::fs::create_dir_all(&partition_rdl_dir)
            .unwrap_or_else(|e| panic!("create {} failed: {e}", partition_rdl_dir.display()));
        let rdl_path = partition_rdl_dir.join(format!("{}.rdl", header.to_ascii_lowercase()));
        let mut clang = clang();
        clang
            .target("x86_64-pc-windows-msvc")
            .args(["-x", "c++"])
            .arg(&headers_arg)
            .args(&include_args)
            .namespace(SCRAPE_NAMESPACE)
            .scope("headers")
            .scope_header(&format!("{header}.h"))
            .input(headers.join(format!("{header}.h")))
            .reference(&win32_winmd)
            .output(&partition_rdl_dir);
        // Already-built partitions exclude previously owned definitions while
        // keeping their names available to later flat scrapes.
        for winmd in &built_winmds {
            clang.reference(winmd);
        }
        println!("scraping {header} -> {}", rdl_path.display());
        clang
            .write_by_header()
            .unwrap_or_else(|e| panic!("clang scrape of {header} failed: {e}"));

        let emitted = std::fs::read_dir(&partition_rdl_dir)
            .unwrap()
            .filter_map(|entry| entry.ok().map(|entry| entry.path()))
            .filter(|path| path.extension().is_some_and(|extension| extension == "rdl"))
            .collect::<Vec<_>>();
        assert_eq!(
            emitted.as_slice(),
            std::slice::from_ref(&rdl_path),
            "expected one RDL partition for {header}"
        );

        {
            let text = std::fs::read_to_string(&rdl_path)
                .unwrap_or_else(|e| panic!("read {} failed: {e}", rdl_path.display()));

            // The new windows-bindgen projects unscoped (C-style) enums as a bare
            // `pub type X = i32` alias with plain integer constants, whereas the
            // old toolchain emitted a `pub struct X(pub i32)` newtype. mssf-core
            // relies on the newtype (constructs `FABRIC_X(v)` and reads `.0`). A
            // `ScopedEnumAttribute` (RDL `#[scoped]`) makes bindgen keep the
            // newtype projection. Every `#[repr(i32)]` in the scraped RDL precedes
            // an enum, so tag them all as scoped.
            let rewritten = text.replace("#[repr(i32)]", "#[repr(i32)] #[scoped]");

            // Preserve the retired generator's ^IFabric\w+$ agility scope.
            let rewritten = add_agility_attributes(&rewritten);

            std::fs::write(&rdl_path, rewritten)
                .unwrap_or_else(|e| panic!("write {} failed: {e}", rdl_path.display()));
        }

        // Compile this partition (plus its dependency winmds) into an
        // intermediate winmd that later partitions reference.
        let part_winmd = winmd_dir.join(format!("{header}.winmd"));
        let mut reader = windows_rdl::reader();
        reader.input(&rdl_path);
        reader.reference(&win32_winmd);
        if *header == "FabricTypes" {
            // Agile marker types (MarshalingBehaviorAttribute + MarshalingType).
            // Compiling them into FabricTypes.winmd lets every later partition
            // resolve the `#[MarshalingBehavior(Agile)]` stamped on its interfaces.
            reader.input(&agile_seed);
        }
        for winmd in &built_winmds {
            reader.reference(winmd);
        }
        reader
            .output(&part_winmd)
            .write()
            .unwrap_or_else(|e| panic!("winmd compile of {header} failed: {e}"));

        rdl_paths.push(rdl_path.clone());
        let target_namespace = format!("{OUTPUT_ROOT}.{header}");
        for name in windows_rdl::item_names(&rdl_path, SCRAPE_NAMESPACE)
            .unwrap_or_else(|e| panic!("read routes from {} failed: {e}", rdl_path.display()))
        {
            if let Some(previous) = routes.insert(name.clone(), target_namespace.clone()) {
                assert_eq!(
                    previous, target_namespace,
                    "item {name} is owned by multiple partitions"
                );
            }
        }
        if *header == "FabricTypes" {
            rdl_paths.push(agile_seed.clone());
        }
        built_winmds.push(part_winmd);
    }

    // 4. Compile the flat RDL partitions, then structurally remap each owned
    // item to its header namespace. Unrouted Win32 references remain external.
    println!("compiling {} flat RDL inputs", rdl_paths.len(),);
    let flat_winmd = out.join("Windows.ServiceFabric.flat.winmd");
    let mut reader = windows_rdl::reader();
    reader.inputs(&rdl_paths);
    reader.reference(&win32_winmd);
    reader
        .output(&flat_winmd)
        .write()
        .unwrap_or_else(|e| panic!("winmd compile failed: {e}"));

    let remapped_winmd = out.join("Windows.ServiceFabric.remapped.winmd");
    println!("remapping flat metadata");
    windows_metadata::remap()
        .input(&flat_winmd)
        .source(SCRAPE_NAMESPACE)
        .fallback(SCRAPE_NAMESPACE)
        .routes(routes)
        .output(&remapped_winmd)
        .remap()
        .unwrap_or_else(|e| panic!("winmd remap failed: {e}"));

    // Remapper 0.100 does not carry external assembly scopes into its output.
    // Round-tripping through RDL lets the final reader resolve external Win32
    // TypeRefs against the supplied reference metadata.
    let remapped_rdl = out.join("Windows.ServiceFabric.remapped.rdl");
    windows_rdl::writer()
        .input(&remapped_winmd)
        .output(&remapped_rdl)
        .write()
        .unwrap_or_else(|e| panic!("remapped RDL write failed: {e}"));
    let remapped_text = std::fs::read_to_string(&remapped_rdl)
        .unwrap_or_else(|e| panic!("read {} failed: {e}", remapped_rdl.display()));
    std::fs::write(
        &remapped_rdl,
        format!("use Windows::Win32::*;\n\n{remapped_text}"),
    )
    .unwrap_or_else(|e| panic!("write {} failed: {e}", remapped_rdl.display()));
    windows_rdl::reader()
        .input(&remapped_rdl)
        .reference(&win32_winmd)
        .output(&winmd_out)
        .write()
        .unwrap_or_else(|e| panic!("final winmd compile failed: {e}"));

    let final_rdl = out.join("Windows.ServiceFabric.final.rdl");
    windows_rdl::writer()
        .input(&winmd_out)
        .output(&final_rdl)
        .write()
        .unwrap_or_else(|e| panic!("final RDL write failed: {e}"));
    let final_text = std::fs::read_to_string(&final_rdl)
        .unwrap_or_else(|e| panic!("read {} failed: {e}", final_rdl.display()));
    assert_eq!(
        remapped_text, final_text,
        "reference-scope roundtrip changed normalized RDL"
    );

    println!("wrote {}", winmd_out.display());
}

fn recreate_dir(path: &Path) {
    if path.exists() {
        std::fs::remove_dir_all(path)
            .unwrap_or_else(|e| panic!("clean {} failed: {e}", path.display()));
    }
    std::fs::create_dir_all(path)
        .unwrap_or_else(|e| panic!("create {} failed: {e}", path.display()));
}

fn add_agility_attributes(input: &str) -> String {
    const ATTRIBUTE: &str = "#[Windows::ServiceFabric::Metadata::MarshalingBehavior(Agile)]";

    let mut output = String::with_capacity(input.len());
    for line in input.split_inclusive('\n') {
        let content = line.trim_end_matches(['\r', '\n']);
        let trimmed = content.trim_start();
        if let Some(declaration) = trimmed.strip_prefix("interface ") {
            let name = declaration
                .split(|character: char| !character.is_ascii_alphanumeric() && character != '_')
                .next()
                .unwrap_or_default();
            if name.len() > "IFabric".len()
                && name.starts_with("IFabric")
                && name
                    .chars()
                    .all(|character| character.is_ascii_alphanumeric() || character == '_')
            {
                let indent = &content[..content.len() - trimmed.len()];
                output.push_str(indent);
                output.push_str(ATTRIBUTE);
                output.push_str(if line.ends_with("\r\n") { "\r\n" } else { "\n" });
            }
        }
        output.push_str(line);
    }
    output
}

/// Materializes the flat Win32 metadata embedded by the published
/// `windows-default` crate so windows-clang and windows-rdl can consume it as a
/// normal file reference.
fn write_default_win32(out: &Path) -> PathBuf {
    let path = out.join("Windows.Win32.winmd");
    std::fs::write(&path, windows_default::WIN32)
        .unwrap_or_else(|e| panic!("write {} failed: {e}", path.display()));
    path
}

/// Locates the newest `x64\midl.exe` under the Windows Kits 10 bin directory.
fn find_midl() -> PathBuf {
    if let Some(path) = std::env::var_os("SF_METADATA_MIDL") {
        let path = PathBuf::from(path);
        assert!(
            path.is_file(),
            "SF_METADATA_MIDL does not point to a file: {}",
            path.display()
        );
        return path;
    }

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
fn run_midl(midl: &Path, repo: &Path, dir: &str, idl: &str, header: &str, headers: &Path) {
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
        .arg("/h")
        .arg(header)
        .arg(&idl_path)
        .status()
        .unwrap_or_else(|e| panic!("failed to launch midl for {idl}: {e}"));
    assert!(status.success(), "midl failed for {idl}");
}

#[cfg(test)]
mod tests {
    use super::add_agility_attributes;

    #[test]
    fn marks_only_ifabric_interfaces_as_agile() {
        let input = concat!(
            "            interface IFabricClient : IUnknown {\n",
            "            interface IExtentLogicalLog : IUnknown {\n",
            "            interface IFabric : IUnknown {\n",
            "            interface IFabric_Test : IUnknown {\n",
        );

        let output = add_agility_attributes(input);

        assert_eq!(output.matches("MarshalingBehavior(Agile)").count(), 2);
        assert!(output.contains("MarshalingBehavior(Agile)]\n            interface IFabricClient"));
        assert!(output.contains("MarshalingBehavior(Agile)]\n            interface IFabric_Test"));
        assert!(
            !output.contains("MarshalingBehavior(Agile)]\n            interface IExtentLogicalLog")
        );
        assert!(!output.contains("MarshalingBehavior(Agile)]\n            interface IFabric :"));
    }
}
