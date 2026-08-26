# react-native-evskit

A modular Expo Module bridge for Everysight's [Maverick SDK](https://everysight.github.io/maverick_docs/) (`EvsKit` + `NativeEvsKit`), covering communication (BLE connect/pair), glasses state, display/brightness, sensors, auth, and the SDK's built-in stock UI screens.

## Status

The native module calls into `Evs.instance()...` are wired up in both `EvsKitModule.kt` and `EvsKitModule.swift`. The sample app consumes this package from a local `link:` dependency. You need an Everysight `sdk.key` and GitHub Packages access to compile the Android SDK.

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
│  ├─ RNEvsKit.podspec
│  └─ EvsKitModule.swift
├─ plugin/
│  └─ withEverysightBundleResources.js  # Adds SDK key files to the app bundle
├─ app.plugin.js            # Config plugin entry point Expo looks for
└─ expo-module.config.json
```

The JS API is grouped to match the SDK's own `IEvsApp` service breakdown (`comm()`, `glasses()`, `display()`, `sensors()`, `auth()`), so anything in the Maverick docs maps directly onto an equivalent call here. Initialise the SDK from within a `React.useEffect`, the exported screen/component itself must remain synchronous:

```ts
import * as React from 'react';
import { EvsKit, EvsComm, EvsDisplay, EvsSensors, useEvsKitEvent } from 'react-native-evskit';

export function HomeScreen() {
  React.useEffect(() => {
    async function initEvsKit() {
      await EvsKit.start();
      if (await EvsComm.hasConfiguredDevice()) {
        await EvsComm.connect();
      } else {
        await EvsKit.ui.show('configure');
      }
      await EvsSensors.enableTouch(true);
      await EvsDisplay.setAutoBrightness({ enabled: true });
    }

    void initEvsKit();
  }, []);

  useEvsKitEvent('onTouch', (direction) => {
    if (direction === 'tap') {
      // show a popup, trigger an action, etc.
    }
  });

  return null;
}
```

## Setup

### 1. Install this module

The sample app currently uses the package directly from this repository:

```json
{
  "dependencies": {
    "react-native-evskit": "link:../react-native-evskit"
  }
}
```

From `SampleEvsKitProject/`, install dependencies with `pnpm install`. Expo autolinking discovers the package through `expo-module.config.json`. If you use another app, install the published package or use an equivalent local dependency and add `react-native-evskit` to that app's Expo plugins.

### 2. Android

Follow the [Android setup guide](https://everysight.github.io/maverick_docs/libraries-api/android/):

- Add the Everysight GitHub Packages Maven repo (already referenced in `android/build.gradle` — set `EVERYSIGHT_GITHUB_USERNAME` / `EVERYSIGHT_GITHUB_TOKEN` env vars, or the equivalent `gradle.properties` keys, with a PAT scoped to `read:packages`).
- Add the `proguard-rules.pro` entries from the docs if you enable minify.
- Place your `sdk.key` (development) or `app.key` (production) file as an Android resource.
- Add `<uses-permission android:name="android.permission.INTERNET" />` — this module doesn't touch your `AndroidManifest.xml`, since you're likely managing permissions via an Expo config plugin already, given your `expo-build-properties` workarounds elsewhere in the project.

### 3. iOS

This package includes the prebuilt `EvsKit.xcframework` and `NativeEvsKit.xcframework` in its podspec. Expo autolinking adds `RNEvsKit.podspec` to the app's Podfile, and CocoaPods links both frameworks when you run `pnpm ios` or regenerate native projects.

The active config plugin adds key files to the app bundle. Enable the package plugin in `app.config.ts` and provide the key path:

```json
{
  "plugins": [
    ["react-native-evskit", { "bundleResources": ["./sdk.key"] }]
  ]
}
```

Typically, this is configured in `app.config.ts`:

```ts
['react-native-evskit', { bundleResources: ['./sdk.key'] }]
```
Do not commit key files. Keep `sdk.key` at the project root and then the plugin adds it to the generated iOS Resources build phase.

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

#### iOS — local Metro development

When running in simulator, as you'll see in the sample app, you may need the `ios` script to run something like this `cross-env REACT_NATIVE_PACKAGER_HOSTNAME=localhost expo run:ios`.

This is apparently required when macOS selects an interface such as an iPhone hotspot address (`192.0.0.2`). Without it, the simulator can try to load Metro over an HTTP address that iOS App Transport Security rejects. For another app, use `REACT_NATIVE_PACKAGER_HOSTNAME=localhost` with `expo run:ios` when the simulator and Metro run on the same Mac.

## Notes / deliberate scope cuts

- **BLE scanning** isn't wrapped here — the SDK docs specify scanning uses the platform's standard BLE APIs directly (`CBCentralManager` / `BluetoothLeScanner`) against `BTConstants.serviceUUID`, filtering for `EV####`-style device names. Pair this module with a BLE library (e.g. `react-native-ble-plx`) for a custom scan UI, or just call `EvsKit.ui.show('configure')` to use the SDK's built-in scan/pair screen.
- **Custom auto-brightness providers** (`IEvsAutoBrightnessProvider`) aren't exposed to JS — round-tripping ambient-lux → brightness through the RN bridge on every reading isn't a good fit for a hot sensor loop. Use the SDK's default `AutoBrightnessGainProvider` (wired via `setAutoBrightness`) or implement a custom `IEvsAutoBrightnessController` natively if you need different behaviour.
- The **UI Kit** (`Screen`, custom controls, animations) and **Line of Sight** kit are separate, larger surfaces not covered by this bridge — they're typically implemented natively per-screen rather than driven from JS, since they involve the glasses' own rendering pipeline.
