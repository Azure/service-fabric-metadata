# Experiment: Generating the Service Fabric winmd with Rust (windows-rs)

Status: **experiment / proof of concept**. Tooling lives in
[`../rust-metadata`](../rust-metadata); this document records the findings.

## Goal

The repository currently generates `Microsoft.ServiceFabric.winmd` with the
dotnet `Microsoft.Windows.WinmdGenerator` (win32metadata) toolchain, driven from
[`.metadata/generate.proj`](../.metadata/generate.proj). This experiment
evaluates whether the new windows-rs Rust crates can generate the same winmd,
following windows-rs issue
[#4194](https://github.com/microsoft/windows-rs/issues/4194) and the
`crates/tools/win32` + `crates/tools/package` examples.

The relevant crates (`windows-clang`, `windows-rdl`, `windows-metadata`) are not
yet published, so they are consumed as **git dependencies** from the windows-rs
repository.

## Crate publication status

As of 2026-07-15, the crates this experiment depends on are **not published** —
git dependencies are mandatory, not a convenience:

| Crate | crates.io | Status |
|---|---|---|
| `windows-clang` | `0.0.0` only | Empty placeholder (~760 bytes, 0 lines of code), name reserved 2025-01-24. **Not published.** |
| `windows-rdl` | `0.0.0` only | Empty placeholder (~750 bytes, 0 lines), name reserved 2025-04-16. **Not published.** |
| `windows-metadata` | 0.60.0 | Published; matches the git tree. |
| `windows-bindgen` | 0.66.0 (2026-01-08) | Published, but **predates** the in-house-metadata work below. |
| `windows-core` | 0.62.2 | Published. |

The winmd **generation** path (`windows-clang` + `windows-rdl`) therefore exists
only in the windows-rs git repo.

Two timing caveats matter for adoption:

- The in-house metadata generation series
  ([#4649](https://github.com/microsoft/windows-rs/pull/4649),
  [#4689](https://github.com/microsoft/windows-rs/pull/4689),
  [#4693](https://github.com/microsoft/windows-rs/pull/4693)) landed
  2026-07-13, roughly six months **after** the published `windows-bindgen`
  0.66.0 (2026-01-08). The in-tree version is still labeled `0.66.0`, so this
  work has not been released under a new number yet.
- Consequently the **published** `windows-bindgen` (0.66.0) still honors
  `AgileAttribute`; the change that ignores it (see below) is git-only and not in
  any release.

This is fast-moving, unreleased upstream code — track the windows-rs releases
before committing to a migration.

## Pipeline

The Rust tool ([`rust-metadata/src/main.rs`](../rust-metadata/src/main.rs))
reproduces the dotnet flow in four stages:

1. **Provision libclang** — `windows_clang::ensure_libclang()` downloads and
   caches a pinned libclang (18.1.1); no system LLVM required.
2. **IDL → headers** — runs the Windows SDK `midl.exe` on the SF `.idl` files
   (same step the dotnet flow performs internally).
3. **Headers → per-namespace RDL** — for each partition (namespace), runs
   `windows-clang` on the corresponding MIDL header, mirroring the
   `.metadata/Partitions/<Name>/{settings.rsp,main.cpp}` `--namespace` /
   `--traverse` inputs.
4. **RDL → winmd** — compiles all partitions into a single winmd via the
   `windows-rdl` reader.

`run.ps1` enters a Visual Studio Developer environment so `INCLUDE` is populated
for both `midl` and clang.

## Result

The pipeline succeeds end to end and produces a winmd essentially equivalent to
the dotnet baseline:

| | Rust output | dotnet baseline |
|---|---|---|
| winmd size | ~260 KB | ~254 KB |
| `IFabric*` interfaces | 272 | 275 |

The only difference is three mangled duplicate artifacts
(`IFabric…EventHandler0000/0001`) that **only the dotnet output** carries; the
real interfaces are present in both. The Rust output is arguably cleaner.

## Findings

### 1. Cross-namespace references need incremental reference winmds

`windows-clang`'s public `write()` emits one namespace at a time. A bare
cross-namespace reference (e.g. `FabricClient` using a `FabricTypes` struct)
cannot be resolved by the RDL reader (`error: type not found`). The fix is to
process partitions in dependency order and feed each already-built partition
winmd back in as a reference, so clang emits namespace-qualified names.

### 2. Win32 base types need a `Windows.Win32.winmd` reference

SF types reference Win32 types such as `FILETIME`, `GUID`, `HRESULT`. These are
supplied by referencing a `Windows.Win32.winmd` during both the clang scrape and
the RDL compile. (`LPCWSTR`, `GUID` resolve as RDL builtins; structs like
`FILETIME` do not.)

### 3. The toolchain is locked to the new flat `Windows.Win32` layout

This is the most consequential finding. The RDL reader **hardcodes** the
pseudo-attribute namespace:

```rust
// windows-rs crates/libs/rdl/src/lib.rs
pub(crate) const METADATA_NAMESPACE: &str = "Windows.Win32.Metadata";
```

Pseudo-attributes such as `#[encoding("utf-16")]` are resolved to
`Windows.Win32.Metadata.NativeEncodingAttribute`. That type only exists in the
flat `Windows.Win32.winmd` that windows-rs ships. The dotnet-era win32metadata
winmd places the same types under `Windows.Win32.Foundation.Metadata`, so using
it as the reference fails with `error: pseudo-attribute type not found`.

**Consequence:** a Rust-generated SF winmd must reference the flat windows-rs
`Windows.Win32.winmd`, and its external references land in the flat
`Windows.Win32.*` namespaces (e.g. `Windows.Win32.FILETIME`) rather than the
dotnet layout (`Windows.Win32.Foundation.FILETIME`). It is therefore **not a
byte-for-byte drop-in**; it is tied to the new windows-rs Win32 layout and the
matching new `windows` / `windows-bindgen` consumer.

### 4. A dropped MIDL struct alias

`windows-clang` drops the MIDL struct alias
`typedef struct FABRIC_APPLICATION_PARAMETER FABRIC_STRING_PAIR;` while still
emitting references to it, leaving a dangling reference. (dotnet win32metadata
instead rewrites references to the underlying struct and emits no
`FABRIC_STRING_PAIR`.) It is the only such alias in the codebase and is
re-supplied by a one-line seed,
[`rust-metadata/seed/FabricTypes.rdl`](../rust-metadata/seed/FabricTypes.rdl).

## The `[Agile]` attribute

The dotnet flow tags every `IFabric*` interface with `[Agile]` via
[`.metadata/emitter.settings.rsp`](../.metadata/emitter.settings.rsp)
(`--memberRemap ^IFabric\w+$=[Agile]`). The *older* `windows` crate read that
`AgileAttribute` to emit `unsafe impl Send`/`Sync` on the interface, which is why
the SF Rust bindings could be moved across threads.

### Not reproducible with the stock toolchain

- RDL recognizes only a fixed attribute set (`const, encoding, flags, guid,
  library, retval, static, win32`) — no generic custom attribute and no `agile`
  pseudo-attribute.
- The flat `Windows.Win32.winmd` does not even define `AgileAttribute`.

Emitting it would require patching `windows-rdl` (a new pseudo-attribute plus the
attribute type) and `windows-clang` (an `IFabric*` member remap).

### The new bindgen ignores `AgileAttribute`

`windows-bindgen` still generates `unsafe impl Send`/`Sync`, gated on
`TypeDef::is_agile()` (`interface.rs`, `class.rs`, `cpp_interface.rs`). What
changed is the **source** of agility:

| Attribute | Before | Current |
|---|---|---|
| `AgileAttribute` (win32metadata marker, used by SF) | agile → `Send`/`Sync` | **ignored** |
| `MarshalingBehaviorAttribute == 2` (WinRT) | agile | agile |
| async types | agile | agile |

The `AgileAttribute` branch was removed from `is_agile()` in
**PR [#4689](https://github.com/microsoft/windows-rs/pull/4689)**
(commit `c669bdff6`, *"Generate `windows`/`windows-sys` from in-house metadata
directly from the Windows SDK"*):

```rust
 fn is_agile(&self) -> bool {
     for attribute in self.attributes() {
-        match attribute.name() {
-            "AgileAttribute" => return true,
-            "MarshalingBehaviorAttribute" => { /* value == 2 */ return true }
-            _ => {}
-        }
+        if attribute.name() == "MarshalingBehaviorAttribute"
+            && /* value == 2 */ { return true; }
     }
     self.is_async()
 }
```

Related commits in the same series:
[#4649](https://github.com/microsoft/windows-rs/pull/4649) (`windows-clang`
in-house metadata generation) and
[#4693](https://github.com/microsoft/windows-rs/pull/4693) (remove retired Win32
metadata workarounds). The in-house `windows-clang` metadata no longer emits
`AgileAttribute` (WinRT agility is carried by `MarshalingBehaviorAttribute`), so
the bindgen branch for it became dead code and was dropped.

### Thread-agility in the new model

With the new stack, `IFabric*` interface handles are `!Send`/`!Sync`. Moving a
COM object across threads is done explicitly with `AgileReference<T>` (backed by
`IAgileObject` / `RoGetAgileReference`) rather than relying on the interface
being `Send` because of a metadata flag.

## Recommendation

Generating the SF winmd with Rust is viable and produces near-identical
interface coverage, but it is not a byte-for-byte replacement: it binds the
winmd (and the consumer) to the new flat `Windows.Win32` layout and the new
`windows` / `windows-bindgen` toolchain. Adopting it means:

1. Regenerate `Microsoft.ServiceFabric.winmd` with the Rust tool (referencing the
   flat windows-rs `Windows.Win32.winmd`).
2. Migrate the consumer (service-fabric-rs) to the new `windows` crate.
3. Replace any reliance on `[Agile]`-derived `Send` with explicit
   `AgileReference<T>` where cross-thread access is required.

If staying on the current win32metadata + older `windows` crate consumer is a
requirement, the stock windows-rs RDL toolchain cannot target that layout without
patching the crates, and the `[Agile]` marker cannot be emitted.
