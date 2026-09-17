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

The generation recipe enters the Visual Studio developer environment and
writes `mssf-metadata/Windows.ServiceFabric.winmd`. The validation recipe
runs the metadata integration tests and rejects staged or unstaged differences
from the committed binary. Run `just fetch` manually to restore any missing
IDL inputs; no other recipe depends on it.

Run the same clean workflow as CI with `just ci`. The `just clean` recipe
removes `target` and `rust-metadata/target`; it does not touch the committed
`mssf-metadata/Windows.ServiceFabric.winmd`, which `just generate` overwrites
in place.

For direct generator troubleshooting:

```pwsh
pwsh -File rust-metadata/run.ps1
```