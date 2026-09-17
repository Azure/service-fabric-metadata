## mssf-metadata

The `mssf-metadata` crate embeds the
[Windows Metadata](https://learn.microsoft.com/en-us/uwp/winrt-cref/winmd-files)
(`.winmd`) describing the Microsoft Service Fabric native APIs
(`Windows.ServiceFabric.*`), generated from the IDL committed in
[Azure/service-fabric-metadata](https://github.com/Azure/service-fabric-metadata).
Downstream tools such as `windows-bindgen` can consume `METADATA` directly
without locating or distributing the `.winmd` file separately, mirroring how
the [`windows-default`](https://crates.io/crates/windows-default) crate embeds
`Windows.Win32.winmd` and `Windows.winmd`.

Start by adding the following to your Cargo.toml file:

```toml
[dependencies]
mssf-metadata = "0.0.3"
```

```rust
use mssf_metadata::METADATA;

assert!(!METADATA.is_empty());
```

See [the generation guide](../docs/RustWinmdGeneration.md) for how the
metadata is produced and [`just generate`](../justfile) for regenerating it.
