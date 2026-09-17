# Development

## Prerequisites

- Rust stable toolchain
- Visual Studio with the C++ build tools workload
- A Windows 10 or 11 SDK containing the x64 `midl.exe`
- PowerShell 7 (`pwsh`)
- [`just`](https://github.com/casey/just)

The generator provisions its pinned libclang release on first use, so the first
run requires network access.

Install `just` on Windows with one of these supported methods:

```pwsh
cargo install just --version 1.58.0 --locked
winget install --id Casey.Just --exact
```

Prebuilt Windows binaries are also available from the
[`just` releases](https://github.com/casey/just/releases). CI pins version
1.58.0.

## Generate and validate metadata

List the available repository recipes:

```pwsh
just --list
```

Generate or validate the committed metadata:

```pwsh
just generate
just validate
```

The generation recipe restores missing IDL inputs, enters the Visual Studio
developer environment, and writes
`.windows/winmd/Windows.ServiceFabric.winmd`. The validation recipe runs the
metadata integration tests and rejects staged or unstaged differences from the
committed binary.

Run the same clean workflow as CI with `just ci`. The `just clean` recipe
removes `.windows`, `target`, and `rust-metadata/target`; because `.windows`
contains the tracked winmd, run generation afterward to restore it.

For direct generator troubleshooting:

```pwsh
pwsh -File rust-metadata/run.ps1
```