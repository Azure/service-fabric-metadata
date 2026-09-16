# ------------------------------------------------------------
# Copyright (c) Microsoft Corporation.  All rights reserved.
# Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
# ------------------------------------------------------------

param(
    [Parameter(Mandatory)]
    [string]$WinmdPath
)

$ErrorActionPreference = 'Stop'

# windows-metadata's high-level Type representation retains a reference's
# namespace and name but not its raw ECMA-335 ResolutionScope. Read the metadata
# tables directly so this test distinguishes a valid external reference from an
# unresolved module-local TypeRef with the same name.
$stream = [System.IO.File]::OpenRead((Resolve-Path $WinmdPath))
try {
    $pe = [System.Reflection.PortableExecutable.PEReader]::new($stream)
    $reader = [System.Reflection.Metadata.PEReaderExtensions]::GetMetadataReader($pe)

    # These foundational references exercise both Win32 value types and COM/
    # string wrappers used throughout the Service Fabric surface.
    $required = [System.Collections.Generic.HashSet[string]]::new(
        [string[]]@('BOOL', 'FILETIME', 'GUID', 'HRESULT', 'IUnknown', 'PCWSTR')
    )
    $count = 0

    foreach ($handle in $reader.TypeReferences) {
        $reference = $reader.GetTypeReference($handle)
        $namespace = $reader.GetString($reference.Namespace)
        if (-not $namespace.StartsWith('Windows.Win32', [System.StringComparison]::Ordinal)) {
            continue
        }

        $count++
        $name = $reader.GetString($reference.Name)
        [void]$required.Remove($name)
        if ($reference.ResolutionScope.Kind -ne [System.Reflection.Metadata.HandleKind]::AssemblyReference) {
            throw "$namespace.$name has $($reference.ResolutionScope.Kind) scope; expected AssemblyReference"
        }

        # ResolutionScope stores a coded AssemblyRef row. Resolve that row and
        # verify it names the external flat metadata assembly.
        $row = [System.Reflection.Metadata.Ecma335.MetadataTokens]::GetRowNumber(
            $reference.ResolutionScope
        )
        $assemblyHandle =
            [System.Reflection.Metadata.Ecma335.MetadataTokens]::AssemblyReferenceHandle($row)
        $assembly = $reader.GetAssemblyReference($assemblyHandle)
        $assemblyName = $reader.GetString($assembly.Name)
        if ($assemblyName -ne 'Windows.Win32') {
            throw "$namespace.$name resolves through '$assemblyName'; expected 'Windows.Win32'"
        }
    }

    if ($count -eq 0) {
        throw 'No external Windows.Win32 type references were found'
    }
    # A nonempty set catches accidental loss of a whole reference category even
    # when other Windows.Win32 TypeRefs still keep the loop nonempty.
    if ($required.Count -ne 0) {
        throw "Required external references were not found: $([string]::Join(', ', $required))"
    }
} finally {
    if ($null -ne $pe) {
        $pe.Dispose()
    }
    $stream.Dispose()
}
