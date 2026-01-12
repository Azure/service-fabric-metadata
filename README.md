# fabric-metadata
![ci](https://github.com/Azure/service-fabric-metadata/actions/workflows/build.yaml/badge.svg)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://raw.githubusercontent.com/Azure/service-fabric-metadata/main/LICENSE)

Metadata of service-fabric copied and selected from: [service-fabric](https://github.com/microsoft/service-fabric) 

# Depenencies
* service fabric runtime installation. See [get-started](https://learn.microsoft.com/en-us/azure/service-fabric/service-fabric-get-started)

# Code Generation Dependencies
The use of this repo as a dependency does not require these dependencies.
* dotnet `winget install Microsoft.DotNet.SDK.6` and `winget install Microsoft.DotNet.Runtime.8`
* ClangSharpPInvokeGenerator `dotnet tool install --global ClangSharpPInvokeGenerator --version 17.0.1`

# Contents
idl from https://github.com/microsoft/service-fabric/tree/master/src/prod/src/idl into [idl](./idl/) and [internal_idl](./internal_idl/)

winmd for service-fabric that is used to generate csharp or rust code in [.windows](./.windows) folder.

# Rust
Exposes fabric support libs to rust lang through build.rs.
winmd is used by windows rust tool chain to generate rust bindings. See [service-fabric-rs](https://github.com/Azure/service-fabric-rs) for details.

# License
Microsoft MIT license