# ------------------------------------------------------------
# Copyright (c) Microsoft Corporation.  All rights reserved.
# Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
# ------------------------------------------------------------

# Runs the Rust winmd generator inside a VS Developer environment
# so that midl.exe and clang can find the Windows SDK / MSVC headers via INCLUDE.
#
# Usage:  pwsh -File rust-metadata/run.ps1
$ErrorActionPreference = 'Stop'

$vswhere = if ($env:SF_METADATA_VSWHERE) {
    $env:SF_METADATA_VSWHERE
} else {
    "C:\Program Files (x86)\Microsoft Visual Studio\Installer\vswhere.exe"
}
if (-not (Test-Path -LiteralPath $vswhere -PathType Leaf)) {
    throw "Visual Studio discovery tool not found at '$vswhere'. Install Visual Studio with C++ build tools, or set SF_METADATA_VSWHERE."
}
$env:PATH = "$(Split-Path -Parent $vswhere);$env:PATH"

$vsPath = if ($env:SF_METADATA_VS_INSTALL_PATH) {
    $env:SF_METADATA_VS_INSTALL_PATH
} else {
    & $vswhere -latest -property installationPath
}
if (-not $vsPath -or -not (Test-Path -LiteralPath $vsPath -PathType Container)) {
    throw "No Visual Studio installation found. Install Visual Studio with C++ build tools, or set SF_METADATA_VS_INSTALL_PATH."
}

$devShell = Join-Path $vsPath 'Common7\Tools\Microsoft.VisualStudio.DevShell.dll'
if (-not (Test-Path -LiteralPath $devShell -PathType Leaf)) {
    throw "Visual Studio Developer Shell module not found at '$devShell'. Install the C++ build tools workload."
}

$windowsKitsBin = if ($env:SF_METADATA_WINDOWS_KITS_BIN) {
    $env:SF_METADATA_WINDOWS_KITS_BIN
} else {
    "C:\Program Files (x86)\Windows Kits\10\bin"
}
$midl = Get-ChildItem -Path $windowsKitsBin -Filter midl.exe -File -Recurse -ErrorAction SilentlyContinue |
    Where-Object { $_.Directory.Name -eq 'x64' } |
    Sort-Object FullName |
    Select-Object -Last 1
if (-not $midl) {
    throw "x64 midl.exe not found under '$windowsKitsBin'. Install a Windows 10/11 SDK, or set SF_METADATA_WINDOWS_KITS_BIN."
}
$env:SF_METADATA_MIDL = $midl.FullName

Import-Module $devShell
Enter-VsDevShell -VsInstallPath $vsPath -SkipAutomaticLocation -DevCmdArguments '-arch=x64 -host_arch=x64' | Out-Null

$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location $scriptDir
cargo run --release --locked --bin sf-winmd-gen
exit $LASTEXITCODE
