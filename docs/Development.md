# Notes
The winmd generator has check of VS compenents but are not necessary. 
If locally winmd generate may fail due to vs components missing, even though they are not needed.

This fails:
& "C:\Program Files (x86)\Microsoft Visual Studio\Installer\vswhere.exe" -prerelease -format xml `
-version "[17.0,18.0)" `
-latest -requires Microsoft.NetCore.Component.Runtime.6.0 -requires Microsoft.NetCore.Component.SDK `
-requires Microsoft.VisualStudio.Component.VC.Tools.ARM64 -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 `
-requires Microsoft.VisualStudio.Component.Windows11SDK.22000