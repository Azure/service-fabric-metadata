# ------------------------------------------------------------
# Copyright (c) Microsoft Corporation.  All rights reserved.
# Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
# ------------------------------------------------------------

param(
    [string]$RepositoryRoot = (Split-Path -Parent $PSScriptRoot),
    [string]$PublicBaseUri = 'https://raw.githubusercontent.com/Azure/sf-c-util/bb29234abb6c542bd71bf7710fcc2aa7f04683cb/deps/servicefabric/idl',
    [string]$InternalBaseUri = 'https://raw.githubusercontent.com/microsoft/service-fabric/master/src/prod/src/idl/internal'
)

$ErrorActionPreference = 'Stop'

if (-not (Test-Path -LiteralPath $RepositoryRoot -PathType Container)) {
    throw "Repository root not found at '$RepositoryRoot'."
}

# Public IDLs are pinned to the Service Fabric 11.1 snapshot in sf-c-util.
# Internal IDLs retain the existing source on the service-fabric master branch.
$inputs = @(
    [pscustomobject]@{ Directory = 'idl'; Name = 'FabricClient.idl'; BaseUri = $PublicBaseUri }
    [pscustomobject]@{ Directory = 'idl'; Name = 'FabricCommon.idl'; BaseUri = $PublicBaseUri }
    [pscustomobject]@{ Directory = 'idl'; Name = 'FabricRuntime.idl'; BaseUri = $PublicBaseUri }
    [pscustomobject]@{ Directory = 'idl'; Name = 'FabricTypes.idl'; BaseUri = $PublicBaseUri }
    [pscustomobject]@{ Directory = 'internal_idl'; Name = 'fabricservicecommunication_.idl'; BaseUri = $InternalBaseUri }
    [pscustomobject]@{ Directory = 'internal_idl'; Name = 'fabrictransport_.idl'; BaseUri = $InternalBaseUri }
    [pscustomobject]@{ Directory = 'internal_idl'; Name = 'FabricTypes_.idl'; BaseUri = $InternalBaseUri }
)

foreach ($input in $inputs) {
    $directory = Join-Path $RepositoryRoot $input.Directory
    $destination = Join-Path $directory $input.Name
    if (Test-Path -LiteralPath $destination -PathType Leaf) {
        continue
    }
    if (Test-Path -LiteralPath $destination) {
        throw "IDL destination exists but is not a file: '$destination'."
    }

    [void](New-Item -ItemType Directory -Path $directory -Force)
    $uri = "$($input.BaseUri.TrimEnd('/'))/$($input.Name)"
    $temporary = "$destination.$([guid]::NewGuid().ToString('N')).download"
    Write-Host "downloading $($input.Name)"

    try {
        Invoke-WebRequest -Uri $uri -OutFile $temporary
        Move-Item -LiteralPath $temporary -Destination $destination
    } catch {
        if (Test-Path -LiteralPath $temporary) {
            Remove-Item -LiteralPath $temporary -Force
        }
        throw "Failed to download '$($input.Name)' from '$uri': $($_.Exception.Message)"
    }
}
