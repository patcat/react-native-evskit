/**
 * Type definitions mirroring Everysight's Maverick SDK interfaces
 * (IEvsCommunicationService, IEvsGlassesStateService, IEvsDisplayService,
 * IEvsSensorsService, IEvsAuthService).
 *
 * Signatures confirmed against the everysight-maverick/samples repo (v2.6.1)
 * and the MCP API reference.
 */

// ---------------------------------------------------------------------------
// Communication (IEvsCommunicationService)
// ---------------------------------------------------------------------------

export interface EvsDeviceInfo {
  /** Bluetooth device address/id, e.g. from a BLE scan (EV0080 style name). */
  deviceId: string;
  /** Bluetooth device name. */
  name: string;
}

export type EvsConnectionState =
  | 'disconnected'
  | 'connecting'
  | 'connected'
  | 'authenticating'
  | 'error';

// ---------------------------------------------------------------------------
// Glasses (IEvsGlassesStateService)
// ---------------------------------------------------------------------------

export interface EvsGlassesInfo {
  /** Battery percentage 0-100 from IEvsGlassesStateService.batteryPercentage(). */
  batteryLevel: number;
  /** Battery level category (Unknown/Critical/Low/Medium/High) from batteryLevel(). */
  batteryStatus: string;
  /** Estimated remaining operation time in minutes. */
  estimatedRemainingTime: number;
  /** Firmware version number (Int from fwVersion()). */
  firmwareVersion: number;
}

export type TouchDirection = 'backward' | 'forward' | 'tap' | 'longTap';

export type ProximityEvent = 'onFace' | 'offFace';

// ---------------------------------------------------------------------------
// Display (IEvsDisplayService)
// ---------------------------------------------------------------------------

export interface EvsAutoBrightnessOptions {
  enabled: boolean;
}

// ---------------------------------------------------------------------------
// Sensors (IEvsSensorsService)
// ---------------------------------------------------------------------------

export type CalibrationStatus = 'calibrated' | 'inProgress' | 'required';

/** Currently only rate0 and rate1 are operational per the SDK docs; the rest are experimental. */
export type SensorRate = 'rate0' | 'rate1' | 'rate2' | 'rate3';

export interface EvsYprData {
  yaw: number;
  pitch: number;
  roll: number;
}

export interface EvsQuaternionData {
  w: number;
  x: number;
  y: number;
  z: number;
}

export interface EvsVector3 {
  x: number;
  y: number;
  z: number;
}

export interface EvsSensorSample<T> {
  timestampMs: number;
  data: T;
}

export interface EvsYprSample extends EvsSensorSample<EvsYprData> {
  calibrationStatus: CalibrationStatus;
}

export interface EvsQuaternionSample extends EvsSensorSample<EvsQuaternionData> {
  calibrationStatus: CalibrationStatus;
}

// ---------------------------------------------------------------------------
// Stock UI (Evs.instance().showUI(...))
// ---------------------------------------------------------------------------

export type EvsStockUIScreen = 'configure' | 'adjust' | 'calibrate';

// ---------------------------------------------------------------------------
// Auth (IEvsAuthService) / lifecycle events (IEvsAppEvents)
// ---------------------------------------------------------------------------

export interface EvsBeginAuthEvent {
  serial: string;
  fwVersion: number;
}

// ---------------------------------------------------------------------------
// Native event map — every event the native module can emit to JS via
// EventEmitter. Keep this in sync with EvsKitModule.kt / EvsKitModule.swift.
// ---------------------------------------------------------------------------

export type EvsKitEvents = {
  onConnectionStateChanged: (state: EvsConnectionState) => void;
  onBeginAuth: (event: EvsBeginAuthEvent) => void;
  onGlassesInfoChanged: (info: EvsGlassesInfo) => void;
  onTouch: (direction: TouchDirection) => void;
  onProximity: (event: ProximityEvent) => void;
  onAmbient: (lux: number) => void;
  onYpr: (sample: EvsYprSample) => void;
  onQuaternion: (sample: EvsQuaternionSample) => void;
  onError: (message: string) => void;
};
