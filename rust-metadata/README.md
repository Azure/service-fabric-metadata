# rust-metadata

Rust-based generator for `.windows/winmd/Windows.ServiceFabric.winmd`, using
the published `windows-clang`, `windows-rdl`, `windows-metadata`, and
`windows-default` crates at version `0.100.0`.

All Service Fabric namespaces use the `Windows.ServiceFabric.*` root, allowing
direct references to types such as `Windows.Win32.FILETIME`.

## Pipeline

1. Provision the pinned libclang release.
2. Compile Service Fabric IDL files into headers with the Windows SDK
   `midl.exe`.
3. Scrape the five headers into flat RDL partitions using windows-rs's
   per-header canonicalization.
4. Compile the flat metadata and structurally remap each partition into its
   `Windows.ServiceFabric.*` namespace.
5. Recompile the remapped metadata with the Win32 reference to preserve
   external assembly-resolution scopes.
6. Apply the Service Fabric-specific enum and agility metadata in
   `app/generate.rs`
   and `seed/FabricAgile.rdl`.
7. Write the remapped metadata directly to
   `.windows/winmd/Windows.ServiceFabric.winmd`.

Intermediates are written under the repository-root `target/metadata-gen/`.
The embedded
`Windows.Win32.winmd` there is a generation-only reference and is not
distributed with the final artifact.

## Run

Requires a stable Rust toolchain, Visual Studio C++ build tools, a Windows 10
or 11 SDK, and PowerShell 7 (`pwsh`). The repository's standard CMake workflow
also requires CMake:

```pwsh
pwsh -File rust-metadata/run.ps1
```

The script discovers Visual Studio and x64 `midl.exe`, enters the developer
environment, and runs the locked release build.

## Validate

From the repository root:

```pwsh
cargo test --workspace --locked
```

The focused integration tests validate the committed metadata namespaces,
aliases, external Win32 references, type uniqueness, and interface agility.
They also inspect raw TypeRef resolution scopes through
`System.Reflection.Metadata` and exercise downstream `windows-bindgen
--package` generation with the default metadata inputs.
The CMake `validate_winmd` target additionally verifies that regeneration does
not change the committed binary.

See [the detailed generation guide](../docs/RustWinmdGeneration.md) for design
decisions, transformations, and troubleshooting.
