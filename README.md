# fabric-metadata
![ci](https://github.com/Azure/service-fabric-metadata/actions/workflows/build.yaml/badge.svg)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://raw.githubusercontent.com/Azure/service-fabric-metadata/main/LICENSE)

Metadata of service-fabric copied and selected from: [service-fabric](https://github.com/microsoft/service-fabric) and [sf-c-util](https://github.com/Azure/sf-c-util)

Currently the public idl version used is SF 11.1.

# Dependencies
* service fabric runtime installation. See [get-started](https://learn.microsoft.com/en-us/azure/service-fabric/service-fabric-get-started)

# Code Generation Dependencies
The use of this repo as a dependency does not require these dependencies.
* Rust stable toolchain
* Visual Studio C++ build tools and a Windows 10 or 11 SDK (for `midl.exe`)
* PowerShell 7 (`pwsh`) and CMake

Generate and validate the committed metadata:

```pwsh
cmake . -B build -T host=x64 -A x64
cmake --build build --target generate_winmd
cmake --build build --target validate_winmd
```

# Contents
idl from https://github.com/microsoft/service-fabric/tree/master/src/prod/src/idl into [idl](./idl/) and [internal_idl](./internal_idl/)

`Windows.ServiceFabric.winmd`, used to generate C# or Rust bindings, is in the
[.windows](./.windows) folder. Its metadata namespaces are rooted at
`Windows.ServiceFabric`.

# Rust
Exposes fabric support libs to rust lang through build.rs.
winmd is used by windows rust tool chain to generate rust bindings. See [service-fabric-rs](https://github.com/Azure/service-fabric-rs) for details.

# License
Microsoft MIT license