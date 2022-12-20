# auraglow

this is a unity app that works together with the Magic Leap 1.

## requirements
you need git installed and git-lfs. both installable via brew.

the unity editor version is 2020.3.42f. I recommend installing it via the unity hub.

Developing and testing of the app can be done through the Magic leap app "The Lab"

If you actually want to build and run on the glasses, you need a developer certificate. 
This can be gotten online within the Magic leap account.

You also need an C# Editor, I use VSCode, Rider also works just fine.


Project Tree Structure:

``` tree
├── Assembly-CSharp.csproj
├── Assets
│   ├── Aura Effect
│   ├── Aura Effect.meta
│   ├── Plugins
│   ├── Plugins.meta
│   ├── Scenes
│   ├── Scenes.meta
│   ├── Scripts
│   ├── Scripts.meta
│   ├── Sources
│   ├── Sources.meta
│   ├── StreamingAssets
│   ├── StreamingAssets.meta
│   ├── XR
│   ├── XR.meta
│   ├── dreamfusion
│   ├── dreamfusion.meta
│   ├── magic-leap-setup-tool
│   └── magic-leap-setup-tool.meta
├── Library
│   ├── APIUpdater
│   ├── AnnotationManager
│   ├── ArtifactDB
│   ├── ArtifactDB-lock
│   ├── Artifacts
│   ├── BuildPlayer.prefs
│   ├── BuildPlayerData
│   ├── BuildSettings.asset
│   ├── CurrentLayout-default.dwlt
│   ├── CurrentMaximizeLayout.dwlt
│   ├── EditorInstance.json
│   ├── EditorOnlyScriptingSettings.json
│   ├── EditorOnlyVirtualTextureState.json
│   ├── EditorSnapSettings.asset
│   ├── EditorUserBuildSettings.asset
│   ├── Il2cppBuildCache
│   ├── InspectorExpandedItems.asset
│   ├── LastBuild.buildreport
│   ├── LastSceneManagerSetup.txt
│   ├── LibraryFormatVersion.txt
│   ├── MLImageTracking
│   ├── Mabu
│   ├── MonoManager.asset
│   ├── PackageCache
│   ├── PackageManager
│   ├── PlayerDataCache
│   ├── SceneVisibilityState.asset
│   ├── ScriptAssemblies
│   ├── ScriptMapper
│   ├── ShaderCache
│   ├── ShaderCache.db
│   ├── SourceAssetDB
│   ├── SourceAssetDB-lock
│   ├── SpriteAtlasDatabase.asset
│   ├── StateCache
│   ├── Style.catalog
│   ├── TempArtifacts
│   ├── UIElements
│   ├── expandedItems
│   └── il2cpp_cache
├── Logs
│   ├── AssetImportWorker0-prev.log
│   ├── Packages-Update.log
│   └── shadercompiler-UnityShaderCompiler0.log
├── MagicLeap.SetupTool.Editor.csproj
├── Packages
│   ├── com.magicleap.unitysdk
│   ├── manifest.json
│   └── packages-lock.json
├── ProjectSettings
│   ├── AudioManager.asset
│   ├── ClusterInputManager.asset
│   ├── DynamicsManager.asset
│   ├── EditorBuildSettings.asset
│   ├── EditorSettings.asset
│   ├── GraphicsSettings.asset
│   ├── InputManager.asset
│   ├── NavMeshAreas.asset
│   ├── PackageManagerSettings.asset
│   ├── Physics2DSettings.asset
│   ├── PresetManager.asset
│   ├── ProjectSettings.asset
│   ├── ProjectVersion.txt
│   ├── QualitySettings.asset
│   ├── SceneTemplateSettings.json
│   ├── TagManager.asset
│   ├── TimeManager.asset
│   ├── UnityConnectSettings.asset
│   ├── VFXManager.asset
│   ├── VersionControlSettings.asset
│   ├── XRPackageSettings.asset
│   └── XRSettings.asset
├── Temp
│   ├── ProcessJobs
│   ├── UnityLockfile
│   └── workerlic
├── UserSettings
│   └── EditorUserSettings.asset
├── auraglow.cert
├── auraglow.privkey
├── auraglow.sln
├── readme.md
└── requirements.txt
```


