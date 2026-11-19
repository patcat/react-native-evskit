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
import { EvsKit, EvsComm, EvsDisplay, EvsSensors, useEvsKitEvent } from '@therealitycrafters/react-native-evskit';

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

From `SampleEvsKitProject/`, install dependencies with `pnpm install`. Expo autolinking discovers the package through `expo-module.config.json`. If you use another app, install the published package or use an equivalent local dependency and add `@therealitycrafters/react-native-evskit` to that app's Expo plugins.

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
    ["@therealitycrafters/react-native-evskit", { "bundleResources": ["./sdk.key"] }]
  ]
}
```

Typically, this is configured in `app.config.ts`:

```ts
['@therealitycrafters/react-native-evskit', { bundleResources: ['./sdk.key'] }]
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

## Declarative Glasses Screens (Real-Time HUDs)

You can define and iterate on screens directly in React Native in real time without recompiling native Swift or Kotlin code. Changes update immediately with Metro Fast Refresh.

### Declarative React Component

```tsx
import React, { useState } from 'react';
import {
  GlassesScreen,
  GlassesText,
  GlassesLine,
  GlassesArrow,
  GlassesRect,
  EvsUI,
} from '@therealitycrafters/react-native-evskit';

export function NavigationHud({ speed, isConnected }: { speed: number; isConnected: boolean }) {
  return (
    <GlassesScreen
      id="nav-hud"
      width={420}
      height={150}
      visible={isConnected}
      onTouch={(e) => {
        if (e.direction === 'tap') {
          EvsUI.showPopup({ text: 'Lap Recorded', color: '#00ff00', timeoutMs: 2000 });
        }
      }}
    >
      {/* Outer border */}
      <GlassesRect x={0} y={0} width={420} height={150} color="#00ff00" />

      {/* Speedometer */}
      <GlassesText
        key="speed"
        x={70}
        y={65}
        text={`${speed}`}
        font="large"
        align="center"
        color="#00ff00"
      />
      <GlassesText
        key="unit"
        x={70}
        y={105}
        text="KM/H"
        font="small"
        align="center"
        color="#00ff00"
      />

      {/* Vertical divider */}
      <GlassesLine x={140} y={15} x1={140} y1={135} thickness={2} color="#00ff00" />

      {/* Direction arrow */}
      <GlassesArrow
        key="arrow"
        x={220}
        y={50}
        direction="up"
        color="#ffff00"
        fillColor="#00ff00"
      />

      {/* Direction text */}
      <GlassesText
        key="turn-info"
        x={310}
        y={75}
        text="Turn right in 200m"
        font="medium"
        align="left"
        color="#ffffff"
      />
    </GlassesScreen>
  );
}
```

### Low-Level Imperative API

Outside of React components, you can also render declarative screens imperatively:

```ts
import { EvsScreens, EvsUI } from '@therealitycrafters/react-native-evskit';

// Idempotent: creates screen or reconciles properties in-place
await EvsScreens.render({
  id: 'status',
  width: 420,
  height: 150,
  elements: [
    {
      key: 'msg',
      type: 'text',
      text: 'Connected',
      x: '50%',
      y: 75,
      align: 'center',
      font: 'medium',
      color: '#00ff00',
    },
  ],
});

// Show heads-up notification popup
await EvsUI.showPopup({
  text: 'Battery Low',
  color: '#ff0000',
  alignV: 'bottom',
  timeoutMs: 3000,
});

// Remove screen
await EvsScreens.remove('status');
```

## Notes / deliberate scope cuts

- **BLE scanning** isn't wrapped here — the SDK docs specify scanning uses the platform's standard BLE APIs directly (`CBCentralManager` / `BluetoothLeScanner`) against `BTConstants.serviceUUID`, filtering for `EV####`-style device names. Pair this module with a BLE library (e.g. `react-native-ble-plx`) for a custom scan UI, or just call `EvsKit.ui.show('configure')` to use the SDK's built-in scan/pair screen.
- **Custom auto-brightness providers** (`IEvsAutoBrightnessProvider`) aren't exposed to JS — round-tripping ambient-lux → brightness through the RN bridge on every reading isn't a good fit for a hot sensor loop. Use the SDK's default `AutoBrightnessGainProvider` (wired via `setAutoBrightness`) or implement a custom `IEvsAutoBrightnessController` natively if you need different behaviour.
- The **UI Kit** (`Screen`, custom controls, animations) and **Line of Sight** kit are separate, larger surfaces not covered by this bridge — they're typically implemented natively per-screen rather than driven from JS, since they involve the glasses' own rendering pipeline.
