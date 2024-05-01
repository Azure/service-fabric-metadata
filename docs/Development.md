# Notes
The winmd generator has check of VS compenents but are not necessary. 
If locally winmd generate may fail due to vs components missing, even though they are not needed.

This fails:
& "C:\Program Files (x86)\Microsoft Visual Studio\Installer\vswhere.exe" -prerelease -format xml `
-version "[17.0,18.0)" `
-latest -requires Microsoft.NetCore.Component.Runtime.6.0 -requires Microsoft.NetCore.Component.SDK `
-requires Microsoft.VisualStudio.Component.VC.Tools.ARM64 -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 `
-requires Microsoft.VisualStudio.Component.Windows11SDK.22000

## Winmd generator
For generator usage see [doc](https://github.com/microsoft/win32metadata/blob/main/CONTRIBUTING.md)

To auto install the vs components required by generator:
```ps1
$HOME\.nuget\packages\microsoft.windows.winmdgenerator\0.56.13-preview\scripts\Install-VS.ps1
```