package expo.modules.evskit

import android.util.Base64
import expo.modules.kotlin.modules.Module
import expo.modules.kotlin.modules.ModuleDefinition
import expo.modules.kotlin.Promise
import expo.modules.kotlin.records.Field
import expo.modules.kotlin.records.Record

// ---------------------------------------------------------------------------
// The SDK's service interfaces live in the UIKit.* package hierarchy, not
// under com.everysight.nativeevskit.*. The Evs entry point is at
// com.everysight.evskit.android.Evs (Android) / com.everysight.evskit.Evs
// (generic).
// ---------------------------------------------------------------------------
import com.everysight.evskit.Evs
import UIKit.services.IEvsGlassesEvents
import UIKit.services.IEvsSensorsEvents
import UIKit.services.IEvsYprSensorsEvents
import UIKit.services.IEvsQuaternionSensorsEvents
import UIKit.services.IEvsCommunicationService
import UIKit.services.IEvsDisplayService
import UIKit.services.IEvsAutoBrightnessController
import UIKit.app.data.TouchDirection
import UIKit.app.data.CalibrationStatus
import UIKit.app.data.PowerButtonAction
import UIKit.app.data.ProximityActionType
import UIKit.app.data.YprData
import UIKit.app.data.QuaternionData

class DeviceInfoRecord : Record {
  @Field val deviceId: String = ""
  @Field val name: String = ""
}

class AutoBrightnessOptionsRecord : Record {
  @Field val enabled: Boolean = false
}

class EvsKitModule : Module() {

  // Keep a reference so listeners registered against the SDK can be torn
  // down cleanly if the module is invalidated (app reload, etc).
  private var glassesEventsHandle: IEvsGlassesEvents? = null
  private var sensorsEventsHandle: IEvsSensorsEvents? = null

  override fun definition() = ModuleDefinition {
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

    AsyncFunction("start") { promise: Promise ->
      try {
        val context = appContext.reactContext ?: throw IllegalStateException("No context")
        Evs.init(context).start()
        if (Evs.instance().comm().hasConfiguredDevice()) {
          Evs.instance().comm().connect()
        }
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_START_FAILED", e.message, e)
      }
    }

    AsyncFunction("isStarted") { promise: Promise ->
      promise.resolve(Evs.isStarted())
    }

    // --- Stock UI --------------------------------------------------------------

    AsyncFunction("showUI") { screen: String, promise: Promise ->
      try {
        Evs.instance().showUI(screen)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SHOW_UI_FAILED", e.message, e)
      }
    }

    // --- Communication (IEvsCommunicationService) -----------------------------

    AsyncFunction("setDeviceInfo") { info: DeviceInfoRecord, promise: Promise ->
      try {
        Evs.instance().comm().setDeviceInfo(info.deviceId, info.name)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_DEVICE_INFO_FAILED", e.message, e)
      }
    }

    AsyncFunction("connect") { promise: Promise ->
      try {
        Evs.instance().comm().connect()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_CONNECT_FAILED", e.message, e)
      }
    }

    AsyncFunction("connectSecured") { promise: Promise ->
      try {
        Evs.instance().comm().connectSecured()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_CONNECT_SECURED_FAILED", e.message, e)
      }
    }

    AsyncFunction("disconnect") { promise: Promise ->
      try {
        Evs.instance().comm().disconnect()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_DISCONNECT_FAILED", e.message, e)
      }
    }

    AsyncFunction("hasConfiguredDevice") { promise: Promise ->
      promise.resolve(Evs.instance().comm().hasConfiguredDevice())
    }

    // --- Glasses (IEvsGlassesStateService) -------------------------------------

    AsyncFunction("getGlassesInfo") { promise: Promise ->
      try {
        val glasses = Evs.instance().glasses()
        val info = mapOf(
          "batteryLevel" to glasses.batteryPercentage(),
          "batteryStatus" to glasses.batteryLevel().name,
          "estimatedRemainingTime" to glasses.estimatedRemainingTime(),
          "firmwareVersion" to glasses.fwVersion()
        )
        promise.resolve(info)
      } catch (e: Exception) {
        promise.reject("EVSKIT_GLASSES_INFO_FAILED", e.message, e)
      }
    }

    AsyncFunction("turnGlassesOff") { promise: Promise ->
      try {
        Evs.instance().glasses().turnOff()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_TURN_OFF_FAILED", e.message, e)
      }
    }

    // --- Display (IEvsDisplayService) ------------------------------------------

    AsyncFunction("turnDisplayOn") { promise: Promise ->
      try {
        Evs.instance().display().turnDisplayOn()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_TURN_DISPLAY_ON_FAILED", e.message, e)
      }
    }

    AsyncFunction("setBrightness") { value: Int, promise: Promise ->
      try {
        Evs.instance().display().setBrightness(value)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_BRIGHTNESS_FAILED", e.message, e)
      }
    }

    AsyncFunction("setBrightnessLevel") { level: Int, promise: Promise ->
      try {
        Evs.instance().display().desecrateBrightness().setBrightnessLevel(level)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_BRIGHTNESS_LEVEL_FAILED", e.message, e)
      }
    }

    AsyncFunction("setAutoBrightness") { options: AutoBrightnessOptionsRecord, promise: Promise ->
      try {
        Evs.instance().display().autoBrightness().setProvider(AutoBrightnessGainProvider())
        Evs.instance().display().autoBrightness().enable(options.enabled)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_AUTO_BRIGHTNESS_FAILED", e.message, e)
      }
    }

    // --- Screens -----------------------------------------------------------------

    AsyncFunction("setRenderingCenterX") { dx: Float, promise: Promise ->
      try {
        Evs.instance().screens().setRenderingCenterX(dx)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_RENDERING_CENTER_X_FAILED", e.message, e)
      }
    }

    AsyncFunction("setRenderingCenterY") { dy: Float, promise: Promise ->
      try {
        Evs.instance().screens().setRenderingCenterY(dy)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_RENDERING_CENTER_Y_FAILED", e.message, e)
      }
    }

    // --- Sensors (IEvsSensorsService) -------------------------------------------

    AsyncFunction("enableTouch") { enabled: Boolean, promise: Promise ->
      try {
        Evs.instance().sensors().enableTouch(enabled)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_ENABLE_TOUCH_FAILED", e.message, e)
      }
    }

    AsyncFunction("enableAmbient") { enabled: Boolean, promise: Promise ->
      try {
        Evs.instance().sensors().enableAmbient(enabled)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_ENABLE_AMBIENT_FAILED", e.message, e)
      }
    }

    AsyncFunction("enableGyro") { enabled: Boolean, promise: Promise ->
      try {
        if (enabled) Evs.instance().sensors().enableGyro()
        else Evs.instance().sensors().disableInertialSensors()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_ENABLE_GYRO_FAILED", e.message, e)
      }
    }

    AsyncFunction("enableMagnetometer") { enabled: Boolean, promise: Promise ->
      try {
        if (enabled) Evs.instance().sensors().enableMagnetometer()
        else Evs.instance().sensors().disableInertialSensors()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_ENABLE_MAGNETOMETER_FAILED", e.message, e)
      }
    }

    AsyncFunction("enableAccelerometer") { enabled: Boolean, promise: Promise ->
      try {
        if (enabled) Evs.instance().sensors().enableAccelerometer()
        else Evs.instance().sensors().disableInertialSensors()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_ENABLE_ACCELEROMETER_FAILED", e.message, e)
      }
    }

    AsyncFunction("enableSensorsFusion") { enabled: Boolean, promise: Promise ->
      try {
        if (enabled) Evs.instance().sensors().enableSensorsFusion()
        else Evs.instance().sensors().disableInertialSensors()
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_ENABLE_SENSORS_FUSION_FAILED", e.message, e)
      }
    }

    // --- Auth (IEvsAuthService) --------------------------------------------------

    AsyncFunction("setApiKeyName") { fileNameWithoutExt: String, promise: Promise ->
      try {
        Evs.instance().auth().setApiKeyName(fileNameWithoutExt)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_API_KEY_NAME_FAILED", e.message, e)
      }
    }

    AsyncFunction("setApiKey") { base64Key: String, promise: Promise ->
      try {
        val bytes = Base64.decode(base64Key, Base64.DEFAULT)
        Evs.instance().auth().setApiKey(bytes)
        promise.resolve(null)
      } catch (e: Exception) {
        promise.reject("EVSKIT_SET_API_KEY_FAILED", e.message, e)
      }
    }
  }

  // ---------------------------------------------------------------------------
  // Wires the SDK's callback-style listeners (IEvsGlassesEvents,
  // IEvsSensorsEvents, IEvsYprSensorsEvents, IEvsQuaternionSensorsEvents) to
  // this module's `sendEvent(...)`, so JS can subscribe via
  // `addEvsKitListener` / `useEvsKitEvent` instead of touching native code.
  // ---------------------------------------------------------------------------

  private fun registerNativeListeners() {
    glassesEventsHandle = object : IEvsGlassesEvents {
      override fun onTouch(touch: TouchDirection) {
        sendEvent("onTouch", mapOf("direction" to touch.name))
      }
      override fun onBatteryChanged(percentage: Int) {
        sendEvent("onGlassesInfoChanged", mapOf("batteryLevel" to percentage))
      }
      override fun onChargerStateChanged(isChargerConnected: Boolean) {
        sendEvent("onGlassesInfoChanged", mapOf("isCharging" to isChargerConnected))
      }
      override fun onDisplayState(isDisplayOn: Boolean) {
        // Not mapped to JS — display state is internal
      }
      override fun onPowerButton(action: PowerButtonAction) {
        // Not mapped to JS — power button is a hardware event
      }
      override fun onBrightnessChangeRequested(value: Short) {
        // Not mapped to JS — brightness changes are handled by setBrightness
      }
    }
    Evs.instance().glasses().registerGlassesEvents(glassesEventsHandle)

    sensorsEventsHandle = object : IEvsSensorsEvents {
      override fun onAmbient(lux: Float) {
        sendEvent("onAmbient", lux)
      }
      override fun onProximity(proximity: ProximityActionType): Boolean {
        sendEvent("onProximity", if (proximity == ProximityActionType.OnFace) "onFace" else "offFace")
        return true
      }
    }
    Evs.instance().sensors().registerSensorsEvents(sensorsEventsHandle)

    Evs.instance().sensors().registerYprSensorsEvents(object : IEvsYprSensorsEvents {
      override fun onYpr(timestampMs: Long, yprData: YprData, calibrationStatus: CalibrationStatus) {
        sendEvent("onYpr", mapOf(
          "timestampMs" to timestampMs,
          "data" to mapOf("yaw" to yprData.yaw, "pitch" to yprData.pitch, "roll" to yprData.roll),
          "calibrationStatus" to calibrationStatus.name
        ))
      }
    })

    Evs.instance().sensors().registerQuaternionSensorsEvents(object : IEvsQuaternionSensorsEvents {
      override fun onQuaternion(timestampMs: Long, quaternionsData: QuaternionData, calibrationStatus: CalibrationStatus) {
        sendEvent("onQuaternion", mapOf(
          "timestampMs" to timestampMs,
          "data" to mapOf(
            "w" to quaternionsData.w,
            "x" to quaternionsData.x,
            "y" to quaternionsData.y,
            "z" to quaternionsData.z
          ),
          "calibrationStatus" to calibrationStatus.name
        ))
      }
    })
  }

  private fun unregisterNativeListeners() {
    glassesEventsHandle?.let { Evs.instance().glasses().unregisterGlassesEvents(it) }
    sensorsEventsHandle?.let { Evs.instance().sensors().unregisterSensorsEvents(it) }
  }
}
