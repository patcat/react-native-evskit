# react-native-evskit

A tidy, modular Expo Module bridge for Everysight's [Maverick SDK](https://everysight.github.io/maverick_docs/) (`EvsKit` + `NativeEvsKit`), covering communication (BLE connect/pair), glasses state, display/brightness, sensors, auth, and the SDK's built-in stock UI screens.

## Status

The native module calls into `Evs.instance()...` are wired up in both `EvsKitModule.kt` and `EvsKitModule.swift`. Note - you need Everysight's `sdk.key` / GitHub Packages access to compile against the SDK.

Everything in `src/` (the TypeScript API, types, event system, React hook) is complete and shouldn't need changes.

## Project layout

```
react-native-evskit/
├─ src/
│  ├─ EvsKit.types.ts     # Shared TS types (mirrors SDK interfaces)
│  ├─ EvsKitModule.ts     # Raw native module binding (1:1 with SDK methods)
│  └─ index.ts            # Public API: EvsComm / EvsGlasses / EvsDisplay /
│                          #   EvsSensors / EvsAuth / EvsUI + useEvsKitEvent hook
├─ android/
│  ├─ build.gradle
│  └─ src/main/java/expo/modules/evskit/EvsKitModule.kt
├─ ios/
│  ├─ EvsKit.podspec
│  └─ EvsKitModule.swift
├─ plugin/
│  └─ withEverysightSPM.js  # Adds the SPM package to the Xcode project on prebuild
├─ app.plugin.js            # Config plugin entry point Expo looks for
└─ expo-module.config.json
```

The JS API is grouped to match the SDK's own `IEvsApp` service breakdown (`comm()`, `glasses()`, `display()`, `sensors()`, `auth()`), so anything in the Maverick docs maps directly onto an equivalent call here:

```ts
import { EvsKit, EvsComm, EvsGlasses, EvsDisplay, EvsSensors, useEvsKitEvent } from 'react-native-evskit';

await EvsKit.start();

if (await EvsComm.hasConfiguredDevice()) {
  await EvsComm.connect();
} else {
  // Simplest path: let the SDK's own scan/pair UI handle it
  await EvsKit.ui.show('configure');
}

useEvsKitEvent('onTouch', (direction) => {
  if (direction === 'tap') {
    // show a popup, trigger an action, etc.
  }
});

await EvsSensors.enableTouch(true);
await EvsDisplay.setAutoBrightness({ enabled: true });
```

## Setup

### 1. Install this module

Since it's not (yet) published, use it as a local Expo module — copy this folder into `modules/evskit` in your app and it'll autolink automatically (Expo autolinking picks up any package with `expo-module.config.json` under `modules/`), or publish it to a private npm registry.

### 2. Android

Follow the [Android setup guide](https://everysight.github.io/maverick_docs/libraries-api/android/):

- Add the Everysight GitHub Packages Maven repo (already referenced in `android/build.gradle` — set `EVERYSIGHT_GITHUB_USERNAME` / `EVERYSIGHT_GITHUB_TOKEN` env vars, or the equivalent `gradle.properties` keys, with a PAT scoped to `read:packages`).
- Add the `proguard-rules.pro` entries from the docs if you enable minify.
- Place your `sdk.key` (dev) or `app.key` (prod) file as an Android resource.
- Add `<uses-permission android:name="android.permission.INTERNET" />` — this module doesn't touch your `AndroidManifest.xml`, since you're likely managing permissions via an Expo config plugin already, given your `expo-build-properties` workarounds elsewhere in the project.

### 3. iOS

CocoaPods can't consume Swift Package Manager dependencies directly, and [m1-ios-spm](https://github.com/everysight-maverick/m1-ios-spm) — confirmed by reading that repo — is *only* a `Package.swift` pointing at two prebuilt binary targets (`EvsKit.xcframework.zip`, `NativeEvsKit.xcframework.zip`), no source. So this package ships a **config plugin**, `withEverysightSPM`, that adds the SPM package reference and links both products (`EvsKit`, `NativeEvsKit`) to your app target automatically on every `expo prebuild` — no manual Xcode step, no drift after a clean prebuild.

Enable it in `app.json` / `app.config.js`:

```json
{
  "expo": {
    "plugins": ["react-native-evskit"]
  }
}
```

Or pin a specific SDK version (defaults to `2.6.1`, matching the Android setup guide):

```json
{
  "expo": {
    "plugins": [["react-native-evskit", { "version": "2.6.1" }]]
  }
}
```

**Caveat on how this plugin works:** `@expo/config-plugins` (and the underlying `xcode` npm package) has no first-class API for SPM package references, so `plugin/withEverysightSPM.js` writes the `XCRemoteSwiftPackageReference` / `XCSwiftPackageProductDependency` pbxproj entries directly. It's written to be idempotent and defensive, but pbxproj manipulation by hand is inherently more fragile than a real API — if a future Xcode project format change breaks it, the fallback is opening `ios/YourApp.xcworkspace` and adding the package manually via `File > Add Packages...` with the URL/version above, then dropping the plugin from `app.json`.

Place your `sdk.key` / `app.key` as a bundle resource (add it via `expo.ios.bundleResources` in app.config or your own plugin, depending on how you're already managing resources).

#### Android — GitHub Packages credentials

The Everysight Android SDK is published to a private GitHub Packages Maven registry. **Anyone building an app that includes this bridge** needs a GitHub **Personal Access Token (PAT)** with the `read:packages` scope — this isn't just for developing the bridge itself, because the SDK `.aar` artifacts are pulled at build time by Gradle:

1. Go to GitHub → Settings → Developer settings → Personal access tokens
2. Click **Generate new token (classic)**
3. Select the `read:packages` scope
4. Generate and copy the token

Set it as an environment variable before building:

```bash
export EVERYSIGHT_GITHUB_USERNAME=your-github-username
export EVERYSIGHT_GITHUB_TOKEN=ghp_xxxxxxxxxxxx
```

Or add it to `~/.gradle/gradle.properties` (do NOT commit this file):

```properties
everysightGithubUsername=your-github-username
everysightGithubToken=ghp_xxxxxxxxxxxx
```

You can also keep these in a `.env` file in the project root and load them before building:

```bash
source .env
./gradlew build
```

**Make sure `.env` is in `.gitignore`** — never commit real credentials.

Then run `./gradlew build` to verify.

#### iOS — SPM package

The iOS SDK is distributed as an SPM package at `https://github.com/everysight-maverick/m1-ios-spm`. No credentials are needed — it's a public repo with prebuilt binary `.xcframework.zip` releases (`EvsKit` and `NativeEvsKit`).

The included `plugin/withEverysightSPM.js` config plugin handles adding the SPM package reference automatically during `expo prebuild`. Just make sure the plugin is enabled in your `app.json`:

```json
{
  "expo": {
    "plugins": ["react-native-evskit"]
  }
}
```

If you hit a prebuild issue with the pbxproj manipulation, the fallback is opening `ios/YourApp.xcworkspace` in Xcode and adding the package manually via `File > Add Packages...` using the URL above, then removing the plugin from `app.json`.

## Notes / deliberate scope cuts

- **BLE scanning** isn't wrapped here — the SDK docs specify scanning uses the platform's standard BLE APIs directly (`CBCentralManager` / `BluetoothLeScanner`) against `BTConstants.serviceUUID`, filtering for `EV####`-style device names. Pair this module with a BLE library (e.g. `react-native-ble-plx`) for a custom scan UI, or just call `EvsKit.ui.show('configure')` to use the SDK's built-in scan/pair screen.
- **Custom auto-brightness providers** (`IEvsAutoBrightnessProvider`) aren't exposed to JS — round-tripping ambient-lux → brightness through the RN bridge on every reading isn't a good fit for a hot sensor loop. Use the SDK's default `AutoBrightnessGainProvider` (wired via `setAutoBrightness`) or implement a custom `IEvsAutoBrightnessController` natively if you need different behaviour.
- The **UI Kit** (`Screen`, custom controls, animations) and **Line of Sight** kit are separate, larger surfaces not covered by this bridge — they're typically implemented natively per-screen rather than driven from JS, since they involve the glasses' own rendering pipeline.
