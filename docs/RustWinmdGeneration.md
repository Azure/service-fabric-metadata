# Generating Service Fabric metadata with Rust

`rust-metadata` is the repository's supported generator for
`mssf-metadata/Windows.ServiceFabric.winmd`. It uses the published
windows-rs metadata crates and does not require a separate managed SDK or
package restore.

Service Fabric types are emitted under `Windows.ServiceFabric.*`. Sharing the
`Windows` top-level root with `Windows.Win32.*` lets metadata reference
`Windows.Win32.FILETIME` directly without defining a Service Fabric-local copy.

## Pipeline

1. `run.ps1` discovers Visual Studio and the Windows SDK, then enters an x64
   developer environment.
2. `windows-clang` provisions its pinned libclang release.
3. The Windows SDK `midl.exe` compiles the Service Fabric IDL files into
   headers.
4. `windows-clang` uses its SDK-style per-header mode to scrape five flat RDL
   partitions in dependency order.
5. `windows-rdl` compiles the flat partitions, then `windows-metadata`
   structurally remaps each header's owned items into
   `Windows.ServiceFabric.<Partition>`.
6. The remapped metadata is round-tripped through RDL and recompiled with
   `Windows.Win32.winmd` as a reference. This preserves external assembly
   resolution scopes that `windows-metadata` 0.100's remapper does not carry
   into its output.
7. The generator verifies normalized RDL equality across that scope-repair
   roundtrip and writes the single `Windows.ServiceFabric.winmd`.

Intermediate headers, RDL, partition metadata, and the embedded flat Win32
reference remain under `target/metadata-gen`. Only the final Service
Fabric metadata file is committed.

## Required transformations

Per-header scraping applies the same structural canonicalization used to build
the base windows-rs Win32 metadata:

- Canonicalizes `LPCWSTR` references to `Windows.Win32.PCWSTR` and suppresses
  the redundant local alias.
- Preserves `FABRIC_STRING_PAIR` automatically as a secondary record alias of
  `FABRIC_APPLICATION_PARAMETER`.
- Emits `FABRIC_URI` as its source-defined transparent alias of `PCWSTR`,
  rather than manufacturing a distinct handle-like newtype.
- Preserves source IDL spellings, including
  `FABRIC_AAD_ClAIMS_RETRIEVAL_METADATA`, rather than applying name-specific
  corrections after scraping.
- Keeps `FILETIME` as `Windows.Win32.FILETIME`; Service Fabric metadata also
  uses the `Windows` root, so the final metadata remains single-rooted without
  a local duplicate definition.

The generator performs only the Service Fabric-specific metadata additions
after scraping:

- Marks C-style enums as scoped so binding generation preserves their newtype
  representation.
- Marks interfaces whose names match `IFabric\w+` with
  `MarshalingBehaviorAttribute(Agile)` so binding generation retains the
  expected thread-agility behavior. Non-matching interfaces are not marked.

The agility marker definitions are in `rust-metadata/seed/FabricAgile.rdl`.

## Generate

Prerequisites are a stable Rust toolchain, Visual Studio C++ build tools, a
Windows 10 or 11 SDK containing x64 `midl.exe`, PowerShell 7 (`pwsh`), and
`just`. The first run may download the pinned libclang component.

Use the standard recipe:

```pwsh
just generate
```

Or run the generator directly:

```pwsh
pwsh -File rust-metadata/run.ps1
```

Both commands write `mssf-metadata/Windows.ServiceFabric.winmd`. Run
`just fetch` manually beforehand to restore any missing IDL inputs; no other
recipe depends on it.

## Validate

```pwsh
just validate
```

Validation regenerates metadata, runs the focused integration tests, and then
requires the binary to match both the index and `HEAD`:

```pwsh
cargo test --workspace --locked
git diff --exit-code -- mssf-metadata/Windows.ServiceFabric.winmd
git diff --cached --exit-code HEAD -- mssf-metadata/Windows.ServiceFabric.winmd
```

Use `just ci` for the cold CI sequence. It removes `target` and
`rust-metadata/target` before validation; the committed winmd is overwritten
in place by `generate`.

## Consuming the metadata

The [`mssf-metadata`](../mssf-metadata) crate embeds its committed
`Windows.ServiceFabric.winmd` (living alongside its `Cargo.toml`) as a
`pub static METADATA: &[u8]`, the same pattern the
[`windows-default`](https://crates.io/crates/windows-default) crate uses for
`Windows.Win32.winmd` and `Windows.winmd`. Downstream tools such as
`windows-bindgen` can consume `METADATA` directly instead of locating or
distributing the `.winmd` file separately, and because the file lives inside
the crate directory, `mssf-metadata` packages and publishes correctly with
`cargo package`/`cargo publish`.

The tests check namespace ownership, type counts and uniqueness, canonical
Win32 references, Service Fabric aliases, source-defined spellings, and the
`IFabric*` agility contract. A raw ECMA-335 check also verifies that every
external `Windows.Win32` TypeRef resolves through the `Windows.Win32`
AssemblyRef rather than the local module.

The suite also runs the downstream package scenario with
`windows-bindgen 0.100.0`, the custom Service Fabric winmd, `--in default`, and
`--package`. Keeping all owned metadata under the top-level `Windows` root
avoids the package writer's multiple-root panic.

The initial Rust migration was checked once against the retired baseline: the
previous artifact contained 1,263 types and the Windows-rooted Rust artifact
contains 1,278 types. All 272 real `IFabric*` interfaces retained their short
names, GUIDs, and ordered method names. Three duplicate mangled artifacts that
did not represent distinct APIs were intentionally omitted:

- `IFabricClientConnectionEventHandler0000`
- `IFabricClientConnectionEventHandler0001`
- `IFabricServiceNotificationEventHandler0000`

## Troubleshooting

- **`just` is missing**: install version 1.58.0 with Cargo, install
  `Casey.Just` with WinGet, or download a prebuilt Windows release.
- **Visual Studio discovery fails**: install Visual Studio C++ build tools, or
  set `SF_METADATA_VSWHERE` / `SF_METADATA_VS_INSTALL_PATH`.
- **`midl.exe` is missing**: install a Windows 10 or 11 SDK, or set
  `SF_METADATA_WINDOWS_KITS_BIN`.
- **libclang provisioning fails**: verify network access on the first run; the
  provisioned component is cached for later runs.
- **Validation reports differences**: inspect the failing invariant or generated
  binary diff, and commit the updated winmd only when the metadata change is
  expected.
