# ------------------------------------------------------------
# Copyright (c) Microsoft Corporation.  All rights reserved.
# Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
# ------------------------------------------------------------

set shell := ["pwsh", "-NoProfile", "-Command"]

# List available repository recipes.
default:
    @just --list

# Download IDL inputs that are not already present.
fetch:
    pwsh -NoProfile -File scripts/fetch_idl.ps1

# Generate the Service Fabric metadata artifact.
generate: fetch
    pwsh -NoProfile -File rust-metadata/run.ps1

# Run the locked Rust workspace tests.
test:
    cargo test --workspace --locked

# Regenerate and verify the committed metadata artifact.
validate: generate test
    git --no-pager diff --exit-code -- .windows/winmd/Windows.ServiceFabric.winmd
    git --no-pager diff --cached --exit-code HEAD -- .windows/winmd/Windows.ServiceFabric.winmd

# Remove generated metadata and Cargo outputs.
clean:
    $ErrorActionPreference = 'Stop'; $paths = '.windows', 'target', 'rust-metadata/target'; $paths | Where-Object { Test-Path -LiteralPath $_ } | ForEach-Object { Remove-Item -LiteralPath $_ -Recurse -Force }

# Run the cold validation workflow used by CI.
ci: clean validate
