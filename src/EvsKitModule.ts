import { NativeModule, requireNativeModule } from 'expo-modules-core';

import type {
  EvsAutoBrightnessOptions,
  EvsDeviceInfo,
  EvsGlassesInfo,
  EvsKitEvents,
  EvsStockUIScreen,
} from './EvsKit.types';

/**
 * Raw native surface. This intentionally mirrors the SDK's service methods
 * 1:1 (comm/glasses/display/sensors/auth) rather than inventing a different
 * shape, so the JS API stays easy to cross-reference against the Maverick
 * docs. Prefer using the higher-level classes exported from `src/index.ts`
 * over calling this module directly.
 */
declare class EvsKitNativeModule extends NativeModule<EvsKitEvents> {
  // --- Lifecycle -----------------------------------------------------------
  /** Evs.init(context).start() on Android / Evs.instance().start() on iOS. */
  start(): Promise<void>;
  isStarted(): Promise<boolean>;

  // --- Stock UI --------------------------------------------------------------
  /** Evs.instance().showUI(name) — "configure" | "adjust" | "calibrate". */
  showUI(screen: EvsStockUIScreen): Promise<void>;

  // --- Communication (IEvsCommunicationService) -----------------------------
  setDeviceInfo(info: EvsDeviceInfo): Promise<void>;
  connect(): Promise<void>;
  connectSecured(): Promise<void>;
  disconnect(): Promise<void>;
  hasConfiguredDevice(): Promise<boolean>;

  // --- Glasses (IEvsGlassesStateService) -------------------------------------
  getGlassesInfo(): Promise<EvsGlassesInfo>;
  turnGlassesOff(): Promise<void>;

  // --- Display (IEvsDisplayService) ------------------------------------------
  turnDisplayOn(): Promise<void>;
  /** Continuous brightness, 1-255. */
  setBrightness(value: number): Promise<void>;
  /** Discrete, display-optimized brightness controller. */
  setBrightnessLevel(level: number): Promise<void>;
  setAutoBrightness(options: EvsAutoBrightnessOptions): Promise<void>;

  // --- Screens (rendering offset) ---------------------------------------------
  setRenderingCenterX(dx: number): Promise<void>;
  setRenderingCenterY(dy: number): Promise<void>;

  // --- Sensors (IEvsSensorsService) -------------------------------------------
  enableTouch(enabled: boolean): Promise<void>;
  enableAmbient(enabled: boolean): Promise<void>;
  enableGyro(enabled: boolean): Promise<void>;
  enableMagnetometer(enabled: boolean): Promise<void>;
  enableAccelerometer(enabled: boolean): Promise<void>;
  enableSensorsFusion(enabled: boolean): Promise<void>;

  // --- Auth (IEvsAuthService) --------------------------------------------------
  setApiKeyName(fileNameWithoutExt: string): Promise<void>;
  /** base64-encoded key bytes. */
  setApiKey(base64Key: string): Promise<void>;
}

export default requireNativeModule<EvsKitNativeModule>('RNEvsKit');
