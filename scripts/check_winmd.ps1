#!/usr/bin/env pwsh
<#
.SYNOPSIS
    Validates that regenerated winmd files only differ in expected metadata fields.

.DESCRIPTION
    This script compares a regenerated winmd file with the version in git to ensure
    only expected non-functional metadata differs (MVID and Image base address).
    
.PARAMETER WinmdPath
    Path to the winmd file to check. Defaults to .windows/winmd/Microsoft.ServiceFabric.winmd

.EXAMPLE
    .\scripts\check_winmd.ps1
    
.EXAMPLE
    .\scripts\check_winmd.ps1 -WinmdPath .windows/winmd/Microsoft.ServiceFabric.winmd
#>

param(
    [string]$WinmdPath = ".windows/winmd/Microsoft.ServiceFabric.winmd"
)

$ErrorActionPreference = "Stop"

# Ensure we're in the repo root
$repoRoot = git rev-parse --show-toplevel 2>$null
if (-not $repoRoot) {
    Write-Error "Not in a git repository"
    exit 1
}
Set-Location $repoRoot

# Check if file exists
if (-not (Test-Path $WinmdPath)) {
    Write-Error "Winmd file not found: $WinmdPath"
    exit 1
}

# Check if ildasm is available
$ildasmPath = Get-Command ildasm -ErrorAction SilentlyContinue
if (-not $ildasmPath) {
    Write-Error "ildasm not found. Please run this script from a Visual Studio Developer PowerShell."
    Write-Host "You can load VS Developer Shell with:"
    Write-Host "  & 'C:\Program Files\Microsoft Visual Studio\2022\Enterprise\Common7\Tools\Launch-VsDevShell.ps1'"
    exit 1
}

Write-Host "Checking winmd file: $WinmdPath" -ForegroundColor Cyan

# Create temp directory for comparison files
$tempDir = Join-Path $env:TEMP "winmd_check_$(Get-Random)"
New-Item -ItemType Directory -Path $tempDir -Force | Out-Null

try {
    # Extract old version from git
    $gitPath = $WinmdPath -replace '\\', '/'
    $oldWinmdPath = Join-Path $tempDir "old.winmd"
    
    Write-Host "Extracting git version..." -ForegroundColor Gray
    # Use git to write directly to file (works better for binary)
    git show "HEAD:$gitPath" > $oldWinmdPath
    
    if (-not (Test-Path $oldWinmdPath)) {
        Write-Error "Failed to extract winmd from git"
        exit 1
    }
    
    # Disassemble both versions
    $oldIlPath = Join-Path $tempDir "old.il"
    $newIlPath = Join-Path $tempDir "new.il"
    
    Write-Host "Disassembling git version..." -ForegroundColor Gray
    ildasm /text $oldWinmdPath /out=$oldIlPath | Out-Null
    
    Write-Host "Disassembling current version..." -ForegroundColor Gray
    ildasm /text $WinmdPath /out=$newIlPath | Out-Null
    
    if (-not (Test-Path $oldIlPath) -or -not (Test-Path $newIlPath)) {
        Write-Error "Failed to disassemble winmd files"
        exit 1
    }
    
    # Read IL files
    $oldContent = Get-Content $oldIlPath -Raw
    $newContent = Get-Content $newIlPath -Raw
    
    # Extract MVID and Image base from both
    $oldMvid = if ($oldContent -match '// MVID: \{([A-F0-9-]+)\}') { $matches[1] } else { $null }
    $newMvid = if ($newContent -match '// MVID: \{([A-F0-9-]+)\}') { $matches[1] } else { $null }
    
    $oldImageBase = if ($oldContent -match '// Image base: (0x[0-9A-F]+)') { $matches[1] } else { $null }
    $newImageBase = if ($newContent -match '// Image base: (0x[0-9A-F]+)') { $matches[1] } else { $null }
    
    Write-Host ""
    Write-Host "Comparison Results:" -ForegroundColor Yellow
    Write-Host "===================" -ForegroundColor Yellow
    Write-Host "Git MVID:        $oldMvid"
    Write-Host "Current MVID:    $newMvid"
    Write-Host "Git Image base:  $oldImageBase"
    Write-Host "Current Image:   $newImageBase"
    Write-Host ""
    
    # Normalize content by removing known variable fields
    $normalizedOld = $oldContent -replace '// MVID: \{[A-F0-9-]+\}', '// MVID: {NORMALIZED}'
    $normalizedOld = $normalizedOld -replace '// Image base: 0x[0-9A-F]+', '// Image base: 0xNORMALIZED'
    
    $normalizedNew = $newContent -replace '// MVID: \{[A-F0-9-]+\}', '// MVID: {NORMALIZED}'
    $normalizedNew = $normalizedNew -replace '// Image base: 0x[0-9A-F]+', '// Image base: 0xNORMALIZED'
    
    # Compare normalized content
    if ($normalizedOld -eq $normalizedNew) {
        Write-Host "✓ SUCCESS: Winmd files are functionally identical" -ForegroundColor Green
        Write-Host "  Only MVID and Image base differ (as expected)" -ForegroundColor Green
        exit 0
    } else {
        Write-Host "✗ FAILURE: Winmd files have unexpected differences" -ForegroundColor Red
        Write-Host ""
        Write-Host "Running detailed diff..." -ForegroundColor Yellow
        
        # Show detailed diff
        $diffOutput = git diff --no-index $oldIlPath $newIlPath 2>&1
        if ($diffOutput) {
            Write-Host $diffOutput
        }
        
        exit 1
    }
    
} finally {
    # Cleanup
    if (Test-Path $tempDir) {
        Remove-Item -Path $tempDir -Recurse -Force -ErrorAction SilentlyContinue
    }
}
