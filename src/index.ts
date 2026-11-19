import type { EventSubscription } from "expo-modules-core";
import { useEffect } from "react";

import type {
  EvsAutoBrightnessOptions,
  EvsDeclarativeScreenSpec,
  EvsDeviceInfo,
  EvsGlassesInfo,
  EvsKitEvents,
  EvsPopupMessageSpec,
  EvsScreenId,
  EvsStockUIScreen,
} from "./EvsKit.types";
import { normalizePopupSpec, normalizeScreenSpec } from "./EvsDeclarativeUtils";
import EvsKitNative from "./EvsKitModule";

export * from "./EvsKit.types";
export * from "./EvsDeclarative.types";
export * from "./EvsDeclarativeUtils";
export * from "./GlassesScreen";

/**
 * Communication service — mirrors IEvsCommunicationService
 * (`Evs.instance().comm()`).
 *
 * Scanning for glasses is NOT handled here: the SDK docs specify scanning
 * is done with the platform's standard BLE APIs (CBCentralManager /
 * BluetoothLeScanner) against `BTConstants.serviceUUID`, filtering for the
 * "EV####" name pattern. Pair that with a BLE library (e.g. react-native-ble-plx)
 * or just use `EvsUI.show('configure')` for the SDK's built-in scan/pair flow.
 */
export const EvsComm = {
  setDeviceInfo(info: EvsDeviceInfo) {
    return EvsKitNative.setDeviceInfo(info);
  },
  connect() {
    return EvsKitNative.connect();
  },
  /** Use instead of connect() when the app requires BLE pairing. */
  connectSecured() {
    return EvsKitNative.connectSecured();
  },
  disconnect() {
    return EvsKitNative.disconnect();
  },
  hasConfiguredDevice() {
    return EvsKitNative.hasConfiguredDevice();
  },
};

/** Mirrors IEvsGlassesStateService (`Evs.instance().glasses()`). */
export const EvsGlasses = {
  getInfo(): Promise<EvsGlassesInfo> {
    return EvsKitNative.getGlassesInfo();
  },
  turnOff() {
    return EvsKitNative.turnGlassesOff();
  },
};

/** Mirrors IEvsDisplayService (`Evs.instance().display()`) plus screen offset controls. */
export const EvsDisplay = {
  turnOn() {
    return EvsKitNative.turnDisplayOn();
  },
  /** Continuous scale, 1-255. Prefer setBrightnessLevel() where possible. */
  setBrightness(value: number) {
    return EvsKitNative.setBrightness(value);
  },
  /** Discrete brightness level via the SDK's display-optimized controller. */
  setBrightnessLevel(level: number) {
    return EvsKitNative.setBrightnessLevel(level);
  },
  setAutoBrightness(options: EvsAutoBrightnessOptions) {
    return EvsKitNative.setAutoBrightness(options);
  },
  /** Adjust the virtual rendering area's center offset within the 640x400 display. */
  setRenderingCenter(dx: number, dy: number) {
    return Promise.all([
      EvsKitNative.setRenderingCenterX(dx),
      EvsKitNative.setRenderingCenterY(dy),
    ]);
  },
};

/**
 * Mirrors IEvsSensorsService (`Evs.instance().sensors()`).
 * Remember to disable sensors and unsubscribe events when no longer needed —
 * the SDK docs call this out explicitly for battery/bandwidth reasons.
 */
export const EvsSensors = {
  enableTouch(enabled: boolean) {
    return EvsKitNative.enableTouch(enabled);
  },
  enableAmbient(enabled: boolean) {
    return EvsKitNative.enableAmbient(enabled);
  },
  enableGyro(enabled: boolean) {
    return EvsKitNative.enableGyro(enabled);
  },
  enableMagnetometer(enabled: boolean) {
    return EvsKitNative.enableMagnetometer(enabled);
  },
  enableAccelerometer(enabled: boolean) {
    return EvsKitNative.enableAccelerometer(enabled);
  },
  /** Enables Gyro + Magnetometer + Accelerometer and starts the fusion algorithm. */
  enableFusion(enabled: boolean) {
    return EvsKitNative.enableSensorsFusion(enabled);
  },
};

/** Mirrors IEvsAuthService (`Evs.instance().auth()`). Usually unnecessary — see API Keys docs. */
export const EvsAuth = {
  setApiKeyName(fileNameWithoutExt: string) {
    return EvsKitNative.setApiKeyName(fileNameWithoutExt);
  },
  setApiKey(base64Key: string) {
    return EvsKitNative.setApiKey(base64Key);
  },
};

/** Mirrors `Evs.instance().showUI(...)` plus heads-up popup notifications. */
export const EvsUI = {
  show(screen: EvsStockUIScreen) {
    return EvsKitNative.showUI(screen);
  },
  /** Shows a transient popup notification overlay on the active glasses screen. */
  showPopup(spec: EvsPopupMessageSpec) {
    return EvsKitNative.showPopupMessage(normalizePopupSpec(spec));
  },
};

/**
 * App-owned glasses screens (`Evs.instance().screens()`).
 *
 * Supports both:
 * 1. Declarative real-time screens (`EvsScreens.render(...)` or `<GlassesScreen>`).
 * 2. Native Swift/Kotlin screens registered via `EvsScreenRegistry` (`EvsScreens.show(id)`).
 */
export const EvsScreens = {
  /**
   * Idempotently renders or reconciles a declarative screen on the glasses.
   * If a screen with this `id` already exists, it is updated in-place.
   */
  render(spec: EvsDeclarativeScreenSpec) {
    return EvsKitNative.renderDeclarativeScreen(normalizeScreenSpec(spec));
  },
  /** Pushes an app-registered native Swift/Kotlin screen by id. */
  show(id: EvsScreenId) {
    return EvsKitNative.showScreen(id);
  },
  /** Removes a declarative or native screen from the glasses screen stack by id. */
  remove(id: EvsScreenId) {
    return EvsKitNative.removeScreen(id);
  },
  removeTopmost() {
    return EvsKitNative.removeTopmostScreen();
  },
  getTopmost() {
    return EvsKitNative.getTopmostScreen();
  },
};

/** Top-level lifecycle, matching `Evs.init(context).start()` / `Evs.instance().start()`. */
export const EvsKit = {
  start() {
    return EvsKitNative.start();
  },
  isStarted() {
    return EvsKitNative.isStarted();
  },
  comm: EvsComm,
  glasses: EvsGlasses,
  display: EvsDisplay,
  sensors: EvsSensors,
  auth: EvsAuth,
  ui: EvsUI,
  screens: EvsScreens,
};

export default EvsKit;

// ---------------------------------------------------------------------------
// Event subscription helpers
// ---------------------------------------------------------------------------

/** Subscribe to a single EvsKit event; call the returned function to unsubscribe. */
export function addEvsKitListener<K extends keyof EvsKitEvents>(
  eventName: K,
  listener: EvsKitEvents[K],
): EventSubscription {
  return EvsKitNative.addListener(eventName, listener as any);
}

/**
 * React hook that subscribes to an EvsKit event for the lifetime of the
 * component. Pass a stable callback (e.g. via useCallback) to avoid
 * resubscribing every render.
 *
 * @example
 * useEvsKitEvent('onTouch', (direction) => {
 *   if (direction === 'tap') showPopup();
 * });
 */
export function useEvsKitEvent<K extends keyof EvsKitEvents>(
  eventName: K,
  listener: EvsKitEvents[K],
) {
  useEffect(() => {
    const subscription = addEvsKitListener(eventName, listener);
    return () => subscription.remove();
    // eslint-disable-next-line react-hooks/exhaustive-deps
  }, [eventName, listener]);
}
