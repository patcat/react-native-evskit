import ExpoModulesCore

// ---------------------------------------------------------------------------
// The SDK's EvsKit module provides the entry point. Service interfaces live
// in NativeEvsKit.
// ---------------------------------------------------------------------------
import EvsKit
import NativeEvsKit

struct DeviceInfoRecord: Record {
  @Field var deviceId: String = ""
  @Field var name: String = ""
}

struct AutoBrightnessOptionsRecord: Record {
  @Field var enabled: Bool = false
}

public class EvsKitModule: Module {

  private var glassesEventsHandle: GlassesEventsHandler?
  private var sensorsEventsHandle: SensorsEventsHandler?
  private var yprEventsHandle: YprEventsHandler?
  private var quaternionEventsHandle: QuaternionEventsHandler?

  public func definition() -> ModuleDefinition {
    Name("RNEvsKit")

    Events(
      "onConnectionStateChanged",
      "onBeginAuth",
      "onGlassesInfoChanged",
      "onTouch",
      "onProximity",
      "onAmbient",
      "onYpr",
      "onQuaternion",
      "onError"
    )

    OnCreate {
      registerNativeListeners()
    }

    OnDestroy {
      unregisterNativeListeners()
    }

    // --- Lifecycle -----------------------------------------------------------

    AsyncFunction("start") { () -> Void in
      Evs.instance().start()
      if Evs.instance().comm().hasConfiguredDevice() {
        Evs.instance().comm().connect()
      }
    }

    AsyncFunction("isStarted") { () -> Bool in
      return Evs.instance().isReady()
    }

    // --- Stock UI --------------------------------------------------------------

    AsyncFunction("showUI") { (screen: String) -> Void in
      Evs.instance().showUI(name: screen)
    }

    // --- Communication (IEvsCommunicationService) -----------------------------

    AsyncFunction("setDeviceInfo") { (info: DeviceInfoRecord) -> Void in
      Evs.instance().comm().setDeviceInfo(deviceId: info.deviceId, name: info.name)
    }

    AsyncFunction("connect") { () -> Void in
      Evs.instance().comm().connect()
    }

    AsyncFunction("connectSecured") { () -> Void in
      Evs.instance().comm().connectSecured()
    }

    AsyncFunction("disconnect") { () -> Void in
      Evs.instance().comm().disconnect()
    }

    AsyncFunction("hasConfiguredDevice") { () -> Bool in
      return Evs.instance().comm().hasConfiguredDevice()
    }

    // --- Glasses (IEvsGlassesStateService) -------------------------------------

    AsyncFunction("getGlassesInfo") { () -> [String: Any] in
      let glasses = Evs.instance().glasses()
      return [
        "batteryLevel": glasses.batteryPercentage(),
        "batteryStatus": String(describing: glasses.batteryLevel()),
        "estimatedRemainingTime": glasses.estimatedRemainingTime(),
        "firmwareVersion": glasses.fwVersion()
      ]
    }

    AsyncFunction("turnGlassesOff") { () -> Void in
      Evs.instance().glasses().turnOff()
    }

    // --- Display (IEvsDisplayService) ------------------------------------------

    AsyncFunction("turnDisplayOn") { () -> Void in
      Evs.instance().display().turnDisplayOn()
    }

    AsyncFunction("setBrightness") { (value: Int) -> Void in
      Evs.instance().display().setBrightness(value: Int16(value))
    }

    AsyncFunction("setBrightnessLevel") { (level: Int) -> Void in
      Evs.instance().display().desecrateBrightness().setBrightnessLevel(levelIndex: Int32(level))
    }

    AsyncFunction("setAutoBrightness") { (options: AutoBrightnessOptionsRecord) -> Void in
      Evs.instance().display().autoBrightness().setProvider(provider: AutoBrightnessGainProvider())
      Evs.instance().display().autoBrightness().enable(isEnabled: options.enabled)
    }

    // --- Screens -----------------------------------------------------------------

    AsyncFunction("setRenderingCenterX") { (dx: Float) -> Void in
      Evs.instance().screens().setRenderingCenterX(centerX: dx)
    }

    AsyncFunction("setRenderingCenterY") { (dy: Float) -> Void in
      Evs.instance().screens().setRenderingCenterY(centerY: dy)
    }

    // --- Sensors (IEvsSensorsService) -------------------------------------------

    AsyncFunction("enableTouch") { (enabled: Bool) -> Void in
      Evs.instance().sensors().enableTouch(enable: enabled)
    }

    AsyncFunction("enableAmbient") { (enabled: Bool) -> Void in
      Evs.instance().sensors().enableAmbient(enable: enabled)
    }

    AsyncFunction("enableGyro") { (enabled: Bool) -> Void in
      if enabled {
        Evs.instance().sensors().enableGyro()
      } else {
        Evs.instance().sensors().disableInertialSensors()
      }
    }

    AsyncFunction("enableMagnetometer") { (enabled: Bool) -> Void in
      if enabled {
        Evs.instance().sensors().enableMagnetometer()
      } else {
        Evs.instance().sensors().disableInertialSensors()
      }
    }

    AsyncFunction("enableAccelerometer") { (enabled: Bool) -> Void in
      if enabled {
        Evs.instance().sensors().enableAccelerometer()
      } else {
        Evs.instance().sensors().disableInertialSensors()
      }
    }

    AsyncFunction("enableSensorsFusion") { (enabled: Bool) -> Void in
      if enabled {
        Evs.instance().sensors().enableInertialSensors()
      } else {
        Evs.instance().sensors().disableInertialSensors()
      }
    }

    // --- Auth (IEvsAuthService) --------------------------------------------------

    AsyncFunction("setApiKeyName") { (fileNameWithoutExt: String) -> Void in
      Evs.instance().auth().setApiKeyName(fileNameWithoutExt: fileNameWithoutExt)
    }

    AsyncFunction("setApiKey") { (base64Key: String) -> Void in
      guard let data = Data(base64Encoded: base64Key) else { return }
      let byteArray = KotlinByteArray(size: Int32(data.count))
      for i in 0..<data.count {
        byteArray.set(index: Int32(i), value: Int8(data[i]))
      }
      Evs.instance().auth().setApiKey(apiKey: byteArray)
    }
  }

  // ---------------------------------------------------------------------------
  // Wires the SDK's delegate/callback-style listeners to this module's
  // `sendEvent(...)`, mirroring the Android implementation.
  //
  // The handler classes are declared at class scope (not inside the method)
  // so the stored properties above can reference them, and each implements
  // the full protocol surface required by the SDK.
  //
  // Note: Expo's `sendEvent` requires a `[String: Any?]` dictionary as the
  // payload — plain values are not accepted.
  // ---------------------------------------------------------------------------

  private class GlassesEventsHandler: IEvsGlassesEvents {
    weak var module: EvsKitModule?
    func onTouch(touch: TouchDirection) {
      module?.sendEvent("onTouch", ["direction": String(describing: touch)])
    }
    func onBatteryChanged(percentage: Int32) {
      module?.sendEvent("onGlassesInfoChanged", ["batteryLevel": percentage])
    }
    func onChargerStateChanged(isChargerConnected: Bool) {
      module?.sendEvent("onGlassesInfoChanged", ["isCharging": isChargerConnected])
    }
    func onDisplayState(isDisplayOn: Bool) {
      // Not mapped to JS — display state is internal
    }
    func onPowerButton(action: PowerButtonAction) {
      // Not mapped to JS — power button is a hardware event
    }
    func onBrightnessChangeRequested(value: Int16) {
      // Not mapped to JS — brightness changes are handled by setBrightness
    }
    func onProximity(state: ProximityActionType) {
      module?.sendEvent("onProximity", ["state": state == .onface ? "onFace" : "offFace"])
    }
  }

  private class SensorsEventsHandler: IEvsSensorsEvents {
    weak var module: EvsKitModule?
    func onAmbient(lux: Float) {
      module?.sendEvent("onAmbient", ["lux": lux])
    }
    func onProximity(proximity: ProximityActionType) -> Bool {
      module?.sendEvent("onProximity", ["state": proximity == .onface ? "onFace" : "offFace"])
      return true
    }
    func onSensorEnableChange(sType: SensorType, isEnabled: Bool) {
      // Not mapped to JS — sensor enable state is internal
    }
    func onSensorEnableRequested(sType: SensorType, isEnabledRequested: Bool) {
      // Not mapped to JS — sensor enable requests are handled internally
    }
  }

  private class YprEventsHandler: IEvsYprSensorsEvents {
    weak var module: EvsKitModule?
    func onYpr(timestampMs: Int64, yprData: YprData, calibrationStatus: CalibrationStatus) {
      module?.sendEvent("onYpr", [
        "timestampMs": timestampMs,
        "data": ["yaw": yprData.yaw, "pitch": yprData.pitch, "roll": yprData.roll],
        "calibrationStatus": String(describing: calibrationStatus)
      ])
    }
  }

  private class QuaternionEventsHandler: IEvsQuaternionSensorsEvents {
    weak var module: EvsKitModule?
    func onQuaternion(timestampMs: Int64, quaternionsData: QuaternionData, calibrationStatus: CalibrationStatus) {
      module?.sendEvent("onQuaternion", [
        "timestampMs": timestampMs,
        "data": [
          "w": quaternionsData.w,
          "x": quaternionsData.x,
          "y": quaternionsData.y,
          "z": quaternionsData.z
        ],
        "calibrationStatus": String(describing: calibrationStatus)
      ])
    }
  }

  private func registerNativeListeners() {
    let glassesHandler = GlassesEventsHandler()
    glassesHandler.module = self
    glassesEventsHandle = glassesHandler
    Evs.instance().glasses().registerGlassesEvents(listener: glassesHandler)

    let sensorsHandler = SensorsEventsHandler()
    sensorsHandler.module = self
    sensorsEventsHandle = sensorsHandler
    Evs.instance().sensors().registerSensorsEvents(listener: sensorsHandler)

    let yprHandler = YprEventsHandler()
    yprHandler.module = self
    yprEventsHandle = yprHandler
    Evs.instance().sensors().registerYprSensorsEvents(listener: yprHandler)

    let quaternionHandler = QuaternionEventsHandler()
    quaternionHandler.module = self
    quaternionEventsHandle = quaternionHandler
    Evs.instance().sensors().registerQuaternionSensorsEvents(listener: quaternionHandler)
  }

  private func unregisterNativeListeners() {
    if let handle = glassesEventsHandle {
      Evs.instance().glasses().unregisterGlassesEvents(listener: handle)
    }
    if let handle = sensorsEventsHandle {
      Evs.instance().sensors().unregisterSensorsEvents(listener: handle)
    }
    if let handle = yprEventsHandle {
      Evs.instance().sensors().unregisterYprSensorsEvents(listener: handle)
    }
    if let handle = quaternionEventsHandle {
      Evs.instance().sensors().unregisterQuaternionSensorsEvents(listener: handle)
    }
  }
}