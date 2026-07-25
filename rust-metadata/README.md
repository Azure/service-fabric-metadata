# rust-metadata (experiment)

Experimental replacement for the dotnet `Microsoft.Windows.WinmdGenerator`
(win32metadata) winmd generation, using the windows-rs Rust crates
[`windows-clang`](https://github.com/microsoft/windows-rs/tree/master/crates/libs/clang)
and `windows-rdl` (see windows-rs issue
[#4194](https://github.com/microsoft/windows-rs/issues/4194) and the
`tools/win32` / `tools/package` examples).

The crates are not yet published, so they are referenced as git dependencies in
[Cargo.toml](Cargo.toml).

## What it does

1. `ensure_libclang()` provisions the pinned libclang (cached).
2. Runs `midl.exe` (Windows SDK) to compile the SF `.idl` files into C/C++
   headers.
3. For each partition (namespace), runs `windows-clang` to scrape the
   corresponding header into per-namespace `.rdl`, using previously built
   partition winmds plus the flat `Windows.Win32.winmd` shipped by windows-rs as
   cross-namespace references so type names are emitted namespace-qualified.
4. Compiles all `.rdl` into `target/gen/Microsoft.ServiceFabric.winmd` via the
   `windows-rdl` reader.

Output goes to `target/gen/` and does **not** overwrite the committed dotnet
baseline in `.windows/winmd/`, so the two can be compared.

## Run

Requires: Rust, Visual Studio (for `midl.exe` + the Windows SDK). The script
enters a VS Developer environment so `INCLUDE` is set:

```pwsh
pwsh -File rust-metadata/run.ps1
```

## Findings vs the dotnet toolchain

- Interface parity is effectively complete: 272 `IFabric*` interfaces vs the
  dotnet baseline's 275 — the 3-name difference is mangled duplicate artifacts
  (`IFabric...EventHandler0000/0001`) that only the dotnet output carries; the
  real interfaces are present in both.
- `windows-clang` drops the MIDL struct-alias
  `typedef struct FABRIC_APPLICATION_PARAMETER FABRIC_STRING_PAIR;` while still
  emitting references to it. The single affected alias is re-supplied by
  [seed/FabricTypes.rdl](seed/FabricTypes.rdl). (dotnet win32metadata instead
  rewrites the reference to the underlying struct.)
- The dotnet flow references the win32metadata NuGet `Windows.Win32.winmd`; this
  tool references the flat `Windows.Win32.winmd` that windows-rs ships. This is
  **required, not a choice**: the RDL reader hardcodes the pseudo-attribute
  namespace to `Windows.Win32.Metadata` (e.g. `NativeEncodingAttribute`), which
  only exists in the flat layout. The win32metadata winmd puts those types in
  `Windows.Win32.Foundation.Metadata`, so it cannot be used as the reference —
  the stock windows-rs RDL toolchain is locked to the new flat Win32 layout.

## The `[Agile]` attribute

The dotnet flow tags every `IFabric*` interface with `[Agile]`
(`emitter.settings.rsp`), which the *older* `windows` crate reads to implement
`Send` on the interface. This experiment does **not** reproduce it, and doing so
is neither supported nor necessary:

- **Not supported by the toolchain.** RDL recognises only a fixed attribute set
  (`const, encoding, flags, guid, library, retval, static, win32`) with no
  generic custom-attribute or `agile` pseudo-attribute, and the flat
  `Windows.Win32.winmd` does not even define `AgileAttribute`. Emitting it would
  require patching `windows-rdl` (a new pseudo-attribute + the attribute type)
  and `windows-clang` (an `IFabric*` member remap).
- **Obsolete in the new consumer model.** The new `windows-core` no longer
  derives `Send`/`Sync` from metadata; the new `windows-bindgen` emits neither.
  COM interface handles are `!Send`/`!Sync`, and thread-agility is now an
  explicit runtime wrapper, `AgileReference<T>` (backed by `IAgileObject` /
  `RoGetAgileReference`), rather than a compile-time `Send` implied by an
  `AgileAttribute`.

## Adoption note

Generating the winmd with Rust ties it to the new flat `Windows.Win32` layout
and the matching new `windows`/`windows-bindgen` consumer. Adopting it therefore
also means migrating the consumer (service-fabric-rs) to the new `windows` crate
and replacing any reliance on `[Agile]`-derived `Send` with `AgileReference<T>`
where cross-thread access is needed.

