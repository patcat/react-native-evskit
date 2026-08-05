#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NEKActivationResult, NEKAlign, NEKAlignCompanion, NEKAlignV, NEKAlignVCompanion, NEKAnimator, NEKAppErrorCode, NEKArFactoryCompanion, NEKArModel, NEKArPrimitive, NEKArWindow, NEKArWindowGeoLocation, NEKArc, NEKArc2, NEKArrow, NEKAutoLayout, NEKBTConstants, NEKBatteryLevel, NEKBlobDataType, NEKBlobDataTypeCompanion, NEKBoundingBox, NEKBoundingSphere, NEKCalibrationStatus, NEKCanvasBuffer, NEKConnectionState, NEKConnectionStateCompanion, NEKControllerAction, NEKControllerButton, NEKControllerButtonCompanion, NEKDeviceType, NEKDeviceTypeCompanion, NEKDirection, NEKDirectionCompanion, NEKDisplayState, NEKDisplayStateCompanion, NEKDrawable, NEKEllipse, NEKEvsApiTokenClaims, NEKEvsApiTokenClaimsResult, NEKEvsColor, NEKEvsGlassesClaims, NEKEvsGlassesClaimsResult, NEKEvsPhoneNotification, NEKFailedToConnectReason, NEKFillStyle, NEKFillStyleCompanion, NEKFillableElement, NEKFont, NEKFontData, NEKFontFamily, NEKFontSlot, NEKFontSlotCompanion, NEKFontStockFont, NEKFontStyle, NEKFontType, NEKFontTypeCompanion, NEKFontWeight, NEKFrameSize, NEKFrameSizeCompanion, NEKGlassesType, NEKGlassesTypeCompanion, NEKIEvsApp, NEKIEvsDataProviderProviderState, NEKIEvsSensorsFusionManager, NEKImage, NEKImageData, NEKImageType, NEKImageTypeCompanion, NEKImgSrc, NEKImgSrcSlot, NEKImgSrcSlotCompanion, NEKInputType, NEKInputTypeCompanion, NEKKotlinArray<T>, NEKKotlinByteArray, NEKKotlinByteIterator, NEKKotlinDoubleArray, NEKKotlinDoubleIterator, NEKKotlinEnum<E>, NEKKotlinEnumCompanion, NEKKotlinFloatArray, NEKKotlinFloatIterator, NEKKotlinIntArray, NEKKotlinIntIterator, NEKKotlinPair<__covariant A, __covariant B>, NEKLine, NEKLineStyle, NEKLineStyleCompanion, NEKLosData, NEKM, NEKModifier, NEKModifierVisibility, NEKOtaBleMetaData, NEKOtaErrorCode, NEKOtaMetaData, NEKOtaVersion, NEKPath, NEKPenShape, NEKPenShapeCompanion, NEKPivot, NEKPivotCompanion, NEKPoint, NEKPolygon, NEKPolyline, NEKPopupMessage, NEKPowerButtonAction, NEKPowerButtonActionCompanion, NEKProximityActionType, NEKProximityActionTypeCompanion, NEKQuaternion, NEKQuaternionData, NEKRect, NEKRotationDirection, NEKRotationDirectionCompanion, NEKRttInfo, NEKScreen, NEKScreenRenderRate, NEKScreenRenderRateCompanion, NEKSendPriority, NEKSensorData, NEKSensorRate, NEKSensorRateCompanion, NEKSensorType, NEKSensorTypeCompanion, NEKSystemBit, NEKSystemBitCompanion, NEKSystemEti, NEKSystemStatus, NEKText, NEKTextBlock, NEKTextBlockDisplayEffect, NEKTextBlockLineModifier, NEKTextParams, NEKTouchDirection, NEKTouchDirectionCompanion, NEKUIElement, NEKUIElementsGroup, NEKUIResource, NEKUIResourceElement, NEKViewport, NEKYprData, NSData;

@protocol NEKAnimatorIEvsAnimationListener, NEKHttpRequestCallback, NEKIArElement, NEKIEvsAddOn, NEKIEvsAppEvents, NEKIEvsAuthService, NEKIEvsAutoBrightnessController, NEKIEvsAutoBrightnessEvents, NEKIEvsAutoBrightnessProvider, NEKIEvsClientUIManager, NEKIEvsColors, NEKIEvsCommunicationChannel, NEKIEvsCommunicationChannelListener, NEKIEvsCommunicationEvents, NEKIEvsCommunicationService, NEKIEvsConnectable, NEKIEvsContext, NEKIEvsController, NEKIEvsControllerListener, NEKIEvsDataProvider, NEKIEvsDiscreteBrightnessController, NEKIEvsDisplayService, NEKIEvsGlassesChannel, NEKIEvsGlassesEvents, NEKIEvsGlassesStateService, NEKIEvsInertialSensorsEvents, NEKIEvsLogger, NEKIEvsNotificationEvents, NEKIEvsNotificationsService, NEKIEvsOtaAvailableHandler, NEKIEvsOtaEventsHandler, NEKIEvsOtaService, NEKIEvsPreferences, NEKIEvsQuaternionSensorsEvents, NEKIEvsRawInertialSensorsEvents, NEKIEvsResourcesManager, NEKIEvsScanCallback, NEKIEvsScreenService, NEKIEvsSensorsEvents, NEKIEvsSensorsService, NEKIEvsSystemLogger, NEKIEvsTechnicianEvents, NEKIEvsYprSensorsEvents, NEKKotlinComparable, NEKKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface NEKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface NEKBase (NEKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface NEKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface NEKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorNEKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface NEKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface NEKByte : NEKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface NEKUByte : NEKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface NEKShort : NEKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface NEKUShort : NEKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface NEKInt : NEKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface NEKUInt : NEKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface NEKLong : NEKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface NEKULong : NEKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface NEKFloat : NEKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface NEKDouble : NEKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface NEKBoolean : NEKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("IEvsAddOn")))
@protocol NEKIEvsAddOn
@required
- (NSString *)getAddOnName __attribute__((swift_name("getAddOnName()")));
@end

__attribute__((swift_name("IEvsConnectable")))
@protocol NEKIEvsConnectable
@required
- (BOOL)connect __attribute__((swift_name("connect()")));
- (BOOL)connectSecured __attribute__((swift_name("connectSecured()")));
- (BOOL)disconnect __attribute__((swift_name("disconnect()")));
- (NSString * _Nullable)getDeviceId __attribute__((swift_name("getDeviceId()")));
- (NSString * _Nullable)getDeviceName __attribute__((swift_name("getDeviceName()")));
- (BOOL)hasConfiguredDevice __attribute__((swift_name("hasConfiguredDevice()")));
- (BOOL)isAdapterEnabled __attribute__((swift_name("isAdapterEnabled()")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
- (BOOL)isConnecting __attribute__((swift_name("isConnecting()")));
- (void)setDeviceInfoDeviceId:(NSString * _Nullable)deviceId name:(NSString * _Nullable)name __attribute__((swift_name("setDeviceInfo(deviceId:name:)")));
- (BOOL)wasConnectRequested __attribute__((swift_name("wasConnectRequested()")));
@end

__attribute__((swift_name("IEvsController")))
@protocol NEKIEvsController <NEKIEvsConnectable, NEKIEvsAddOn>
@required
- (NSString *)getControllerType __attribute__((swift_name("getControllerType()")));
- (BOOL)isScanning __attribute__((swift_name("isScanning()")));
- (void)registerControllerListenerListener:(id<NEKIEvsControllerListener>)listener __attribute__((swift_name("registerControllerListener(listener:)")));
- (BOOL)requestBatteryStateCallback:(void (^)(NEKInt *))callback __attribute__((swift_name("requestBatteryState(callback:)")));
- (BOOL)startScanCallback:(id<NEKIEvsScanCallback>)callback __attribute__((swift_name("startScan(callback:)")));
- (void)stopScan __attribute__((swift_name("stopScan()")));
- (void)unregisterControllerListenerListener:(id<NEKIEvsControllerListener>)listener __attribute__((swift_name("unregisterControllerListener(listener:)")));
@end

__attribute__((swift_name("IEvsCommunicationEvents")))
@protocol NEKIEvsCommunicationEvents
@required
- (void)onAdapterStateChangedIsEnabled:(BOOL)isEnabled __attribute__((swift_name("onAdapterStateChanged(isEnabled:)")));
- (void)onConnected __attribute__((swift_name("onConnected()")));
- (void)onConnecting __attribute__((swift_name("onConnecting()")));
- (void)onDisconnected __attribute__((swift_name("onDisconnected()")));
- (void)onFailedToConnect __attribute__((swift_name("onFailedToConnect()")));
@end

__attribute__((swift_name("IEvsControllerListener")))
@protocol NEKIEvsControllerListener <NEKIEvsCommunicationEvents>
@required
- (void)onControllerActionButton:(NEKControllerButton *)button action:(NEKControllerAction *)action __attribute__((swift_name("onControllerAction(button:action:)")));
@end

__attribute__((swift_name("IEvsDeveloperService")))
@protocol NEKIEvsDeveloperService <NEKIEvsAddOn>
@required
- (BOOL)isDebugLayout __attribute__((swift_name("isDebugLayout()")));
- (BOOL)isDebugLogLevel __attribute__((swift_name("isDebugLogLevel()")));
- (BOOL)isShowBordersActive __attribute__((swift_name("isShowBordersActive()")));
- (void)setDebugLayoutDebugLayout:(BOOL)debugLayout __attribute__((swift_name("setDebugLayout(debugLayout:)")));
- (void)setDebugLogLevelDebugLogLevel:(BOOL)debugLogLevel __attribute__((swift_name("setDebugLogLevel(debugLogLevel:)")));
- (void)setShowBordersValue:(BOOL)value __attribute__((swift_name("setShowBorders(value:)")));
- (BOOL)startOtaSimSimResult:(NEKOtaErrorCode * _Nullable)simResult __attribute__((swift_name("startOtaSim(simResult:)")));
- (BOOL)startOtaSimulationEnvironmentOtaAvailableHandler:(id<NEKIEvsOtaAvailableHandler>)otaAvailableHandler otaProcessHandler:(id<NEKIEvsOtaEventsHandler>)otaProcessHandler __attribute__((swift_name("startOtaSimulationEnvironment(otaAvailableHandler:otaProcessHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Animator")))
@interface NEKAnimator : NEKBase
- (instancetype)initWithUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("init(uiElement:)"))) __attribute__((objc_designated_initializer));
- (NEKAnimator *)blinkIntervalMs:(int64_t)intervalMs __attribute__((swift_name("blink(intervalMs:)")));
- (NEKAnimator *)blinkIntervalOffMs:(int64_t)intervalOffMs intervalOnMs:(int64_t)intervalOnMs __attribute__((swift_name("blink(intervalOffMs:intervalOnMs:)")));
- (NEKAnimator *)bounce __attribute__((swift_name("bounce()")));
- (NEKAnimator *)cancel __attribute__((swift_name("cancel()")));
- (NEKAnimator *)durationMs:(int32_t)ms __attribute__((swift_name("duration(ms:)")));
- (NEKPoint *)estimatePositionAtTimestamp:(int64_t)timestamp __attribute__((swift_name("estimatePositionAt(timestamp:)")));
- (NEKFloat * _Nullable)getCurrentAngle __attribute__((swift_name("getCurrentAngle()")));
- (NEKFloat * _Nullable)getCurrentScaleX __attribute__((swift_name("getCurrentScaleX()")));
- (NEKFloat * _Nullable)getCurrentScaleY __attribute__((swift_name("getCurrentScaleY()")));
- (NEKFloat * _Nullable)getCurrentX __attribute__((swift_name("getCurrentX()")));
- (NEKFloat * _Nullable)getCurrentY __attribute__((swift_name("getCurrentY()")));
- (float)getProgress __attribute__((swift_name("getProgress()")));
- (BOOL)isBlinking __attribute__((swift_name("isBlinking()")));
- (BOOL)isStarted __attribute__((swift_name("isStarted()")));
- (NEKAnimator *)registerListener:(id<NEKAnimatorIEvsAnimationListener>)listener __attribute__((swift_name("register(listener:)")));
- (NEKAnimator *)repeat __attribute__((swift_name("repeat()")));
- (NEKAnimator *)reverse __attribute__((swift_name("reverse()")));
- (NEKAnimator *)rotateAngleDegrees:(float)angleDegrees __attribute__((swift_name("rotate(angleDegrees:)")));
- (NEKAnimator *)rotateAngleDegrees:(float)angleDegrees px:(float)px py:(float)py __attribute__((swift_name("rotate(angleDegrees:px:py:)")));
- (NEKAnimator *)rotateAngleDegrees:(float)angleDegrees px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("rotate(angleDegrees:px:py:pivot:)")));
- (NEKAnimator *)scaleScaleFactor:(float)scaleFactor __attribute__((swift_name("scale(scaleFactor:)")));
- (NEKAnimator *)scaleXScaleFactor:(float)scaleFactor __attribute__((swift_name("scaleX(scaleFactor:)")));
- (NEKAnimator *)scaleYScaleFactor:(float)scaleFactor __attribute__((swift_name("scaleY(scaleFactor:)")));
- (NEKAnimator *)start __attribute__((swift_name("start()")));
- (NEKAnimator *)translateByDx:(float)dx dy:(float)dy __attribute__((swift_name("translateBy(dx:dy:)")));
- (NEKAnimator *)translateToX:(float)x y:(float)y __attribute__((swift_name("translateTo(x:y:)")));
- (NEKAnimator *)unregister __attribute__((swift_name("unregister()")));
@end

__attribute__((swift_name("AnimatorIEvsAnimationListener")))
@protocol NEKAnimatorIEvsAnimationListener
@required
- (void)animationEndedUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("animationEnded(uiElement:)")));
- (void)animationLoopedUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("animationLooped(uiElement:)")));
- (void)animationStartedUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("animationStarted(uiElement:)")));
- (void)animationStepUiElement:(NEKUIElement *)uiElement progress:(double)progress __attribute__((swift_name("animationStep(uiElement:progress:)")));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalUnsignedTypes
*/
__attribute__((swift_name("CanvasBuffer")))
@interface NEKCanvasBuffer : NEKBase
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)clearRectX:(float)x y:(float)y width:(float)width height:(float)height __attribute__((swift_name("clearRect(x:y:width:height:)")));
- (BOOL)clipBb:(NEKBoundingBox *)bb __attribute__((swift_name("clip(bb:)")));
- (BOOL)clipUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("clip(uiElement:)")));
- (BOOL)clipTopLeftX:(float)topLeftX topLeftY:(float)topLeftY bottomRightX:(float)bottomRightX bottomRightY:(float)bottomRightY __attribute__((swift_name("clip(topLeftX:topLeftY:bottomRightX:bottomRightY:)")));
- (BOOL)doCopyToScreenX:(float)x y:(float)y width:(float)width height:(float)height __attribute__((swift_name("doCopyToScreen(x:y:width:height:)")));
- (BOOL)drawArcUiElement:(NEKUIElement *)uiElement x:(float)x y:(float)y radius:(float)radius degreesFrom:(float)degreesFrom degreesTo:(float)degreesTo __attribute__((swift_name("drawArc(uiElement:x:y:radius:degreesFrom:degreesTo:)")));
- (BOOL)drawEllipseUiElement:(NEKUIElement *)uiElement centerX:(float)centerX centerY:(float)centerY rx:(float)rx ry:(float)ry style:(NEKFillStyle *)style angle:(float)angle __attribute__((swift_name("drawEllipse(uiElement:centerX:centerY:rx:ry:style:angle:)")));
- (BOOL)drawImageUiElement:(NEKUIElement *)uiElement image:(NEKImgSrc *)image x:(float)x y:(float)y __attribute__((swift_name("drawImage(uiElement:image:x:y:)")));
- (BOOL)drawLineUiElement:(NEKUIElement *)uiElement x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 __attribute__((swift_name("drawLine(uiElement:x1:y1:x2:y2:)")));
- (BOOL)drawPathUiElement:(NEKUIElement *)uiElement xyPoints:(NEKKotlinFloatArray *)xyPoints size:(int32_t)size stride:(int32_t)stride __attribute__((swift_name("drawPath(uiElement:xyPoints:size:stride:)")));
- (BOOL)drawPolygonUiElement:(NEKUIElement *)uiElement xyPoints:(NEKKotlinFloatArray *)xyPoints size:(int32_t)size style:(NEKFillStyle *)style convex:(BOOL)convex offset:(int32_t)offset stride:(int32_t)stride __attribute__((swift_name("drawPolygon(uiElement:xyPoints:size:style:convex:offset:stride:)")));
- (BOOL)drawPolygonExUiElement:(NEKUIElement *)uiElement xyPoints:(NEKKotlinFloatArray *)xyPoints size:(int32_t)size xShiftPix:(float)xShiftPix yShiftPix:(float)yShiftPix style:(NEKFillStyle *)style convex:(BOOL)convex offset:(int32_t)offset stride:(int32_t)stride __attribute__((swift_name("drawPolygonEx(uiElement:xyPoints:size:xShiftPix:yShiftPix:style:convex:offset:stride:)")));
- (BOOL)drawRectUiElement:(NEKUIElement *)uiElement x:(float)x y:(float)y width:(float)width height:(float)height radius:(float)radius style:(NEKFillStyle *)style __attribute__((swift_name("drawRect(uiElement:x:y:width:height:radius:style:)")));
- (BOOL)drawTextUiElement:(NEKUIElement *)uiElement font:(NEKFont *)font x:(float)x y:(float)y textBytes:(NEKKotlinByteArray *)textBytes alignment:(NEKAlign *)alignment __attribute__((swift_name("drawText(uiElement:font:x:y:textBytes:alignment:)")));
- (BOOL)drawTextUiElement:(NEKUIElement *)uiElement font:(NEKFont *)font x:(float)x y:(float)y text:(NSString *)text alignment:(NEKAlign *)alignment __attribute__((swift_name("drawText(uiElement:font:x:y:text:alignment:)")));
- (int32_t)getColor __attribute__((swift_name("getColor()")));
- (int32_t)getPenThickness __attribute__((swift_name("getPenThickness()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)roundCoordV:(float)v __attribute__((swift_name("roundCoord(v:)")));
- (BOOL)setColorRgba:(int32_t)rgba __attribute__((swift_name("setColor(rgba:)")));
- (BOOL)setLineStyleLineStyle:(NEKLineStyle *)lineStyle __attribute__((swift_name("setLineStyle(lineStyle:)")));
- (BOOL)setPenShapeShape:(NEKPenShape *)shape __attribute__((swift_name("setPenShape(shape:)")));
- (BOOL)setPenThicknessThicknessPixels:(int32_t)thicknessPixels __attribute__((swift_name("setPenThickness(thicknessPixels:)")));
@end

__attribute__((swift_name("Viewport")))
@interface NEKViewport : NEKBase
- (float)getHeight __attribute__((swift_name("getHeight()")));
- (int32_t)getId __attribute__((swift_name("getId()")));
- (NSString *)getName __attribute__((swift_name("getName()")));
- (float)getWidth __attribute__((swift_name("getWidth()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)isDuringResourceUpload __attribute__((swift_name("isDuringResourceUpload()")));
- (BOOL)isPaused __attribute__((swift_name("isPaused()")));
- (BOOL)isResumed __attribute__((swift_name("isResumed()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCreate __attribute__((swift_name("onCreate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDestroy __attribute__((swift_name("onDestroy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPause __attribute__((swift_name("onPause()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onRenderingCenterChangedX:(float)x y:(float)y __attribute__((swift_name("onRenderingCenterChanged(x:y:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onResourceUploadResultResource:(NEKUIResource *)resource __attribute__((swift_name("onResourceUploadResult(resource:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onResourcesUploadEnd __attribute__((swift_name("onResourcesUploadEnd()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onResume __attribute__((swift_name("onResume()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)onTouchTouchDirection:(NEKTouchDirection *)touchDirection __attribute__((swift_name("onTouch(touchDirection:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onUpdateUITimestampMs:(int64_t)timestampMs __attribute__((swift_name("onUpdateUI(timestampMs:)")));
- (void)removeAll __attribute__((swift_name("removeAll()")));
- (BOOL)requestResourcesUploadResources:(NSArray<NEKUIResource *> *)resources __attribute__((swift_name("requestResourcesUpload(resources:)")));
- (void)setScreenRenderRateRate:(NEKScreenRenderRate *)rate __attribute__((swift_name("setScreenRenderRate(rate:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)wasCreated __attribute__((swift_name("wasCreated()")));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalUnsignedTypes
*/
__attribute__((swift_name("Screen")))
@interface NEKScreen : NEKViewport
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenWidth:(float)screenWidth screenHeight:(float)screenHeight __attribute__((swift_name("init(screenWidth:screenHeight:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name screenWidth:(float)screenWidth screenHeight:(float)screenHeight __attribute__((swift_name("init(name:screenWidth:screenHeight:)"))) __attribute__((objc_designated_initializer));
- (void)addUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("add(uiElement:)")));
- (void)addAllUiElements:(NSArray<NEKUIElement *> *)uiElements __attribute__((swift_name("addAll(uiElements:)")));
- (void)clipShouldClip:(BOOL)shouldClip __attribute__((swift_name("clip(shouldClip:)")));
- (void)closePopup __attribute__((swift_name("closePopup()")));
- (NEKUIElement * _Nullable)getElementByIdId:(NSString *)id __attribute__((swift_name("getElementById(id:)")));
- (NSMutableArray<NEKUIElement *> *)getElements __attribute__((swift_name("getElements()")));
- (BOOL)getHasElements __attribute__((swift_name("getHasElements()")));
- (NEKPopupMessage * _Nullable)getPopupMessage __attribute__((swift_name("getPopupMessage()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPopupClosedMessage:(NEKPopupMessage *)message __attribute__((swift_name("onPopupClosed(message:)")));
- (void)removeUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("remove(uiElement:)")));
- (void)removeSelf __attribute__((swift_name("removeSelf()")));
- (void)sendToBackUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("sendToBack(uiElement:)")));
- (void)setTopmostUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("setTopmost(uiElement:)")));
- (BOOL)showPopupMessage:(NEKPopupMessage *)message __attribute__((swift_name("showPopup(message:)")));
@end

__attribute__((swift_name("FullScreen")))
@interface NEKFullScreen : NEKScreen
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenWidth:(float)screenWidth screenHeight:(float)screenHeight __attribute__((swift_name("init(screenWidth:screenHeight:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name screenWidth:(float)screenWidth screenHeight:(float)screenHeight __attribute__((swift_name("init(name:screenWidth:screenHeight:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol NEKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface NEKKotlinEnum<E> : NEKBase <NEKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NEKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Align")))
@interface NEKAlign : NEKKotlinEnum<NEKAlign *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKAlignCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKAlign *left __attribute__((swift_name("left")));
@property (class, readonly) NEKAlign *center __attribute__((swift_name("center")));
@property (class, readonly) NEKAlign *right __attribute__((swift_name("right")));
+ (NEKKotlinArray<NEKAlign *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKAlign *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Align.Companion")))
@interface NEKAlignCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKAlignCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKAlign * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlignV")))
@interface NEKAlignV : NEKKotlinEnum<NEKAlignV *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKAlignVCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKAlignV *top __attribute__((swift_name("top")));
@property (class, readonly) NEKAlignV *center __attribute__((swift_name("center")));
@property (class, readonly) NEKAlignV *bottom __attribute__((swift_name("bottom")));
+ (NEKKotlinArray<NEKAlignV *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKAlignV *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlignV.Companion")))
@interface NEKAlignVCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKAlignVCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKAlignV * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BTConstants")))
@interface NEKBTConstants : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bTConstants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKBTConstants *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *charControlUUID __attribute__((swift_name("charControlUUID")));
@property (readonly) NSString *charJustSecuredUUID __attribute__((swift_name("charJustSecuredUUID")));
@property (readonly) NSString *charNotifyUUID __attribute__((swift_name("charNotifyUUID")));
@property (readonly) NSString *serviceUUID __attribute__((swift_name("serviceUUID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BatteryLevel")))
@interface NEKBatteryLevel : NEKKotlinEnum<NEKBatteryLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKBatteryLevel *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NEKBatteryLevel *critical __attribute__((swift_name("critical")));
@property (class, readonly) NEKBatteryLevel *low __attribute__((swift_name("low")));
@property (class, readonly) NEKBatteryLevel *medium __attribute__((swift_name("medium")));
@property (class, readonly) NEKBatteryLevel *high __attribute__((swift_name("high")));
+ (NEKKotlinArray<NEKBatteryLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKBatteryLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoundingBox")))
@interface NEKBoundingBox : NEKBase
- (instancetype)initWithTopLeftX:(float)topLeftX topLeftY:(float)topLeftY bottomRightX:(float)bottomRightX bottomRightY:(float)bottomRightY __attribute__((swift_name("init(topLeftX:topLeftY:bottomRightX:bottomRightY:)"))) __attribute__((objc_designated_initializer));
- (NEKBoundingBox *)clone __attribute__((swift_name("clone()")));
- (NEKBoundingBox *)doCopyTopLeftX:(float)topLeftX topLeftY:(float)topLeftY bottomRightX:(float)bottomRightX bottomRightY:(float)bottomRightY __attribute__((swift_name("doCopy(topLeftX:topLeftY:bottomRightX:bottomRightY:)")));
- (void)doCopyFromOther:(NEKBoundingBox *)other __attribute__((swift_name("doCopyFrom(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NEKBoundingBox *)expandByPixels:(float)pixels clone:(BOOL)clone __attribute__((swift_name("expandBy(pixels:clone:)")));
- (NEKBoundingBox *)expandUpToOther:(NEKBoundingBox *)other clone:(BOOL)clone __attribute__((swift_name("expandUpTo(other:clone:)")));
- (NEKBoundingBox *)expandUpToMinX:(float)minX minY:(float)minY maxX:(float)maxX maxY:(float)maxY clone:(BOOL)clone __attribute__((swift_name("expandUpTo(minX:minY:maxX:maxY:clone:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (float)height __attribute__((swift_name("height()")));
- (NEKBoundingBox *)intersectOther:(NEKBoundingBox *)other clone:(BOOL)clone __attribute__((swift_name("intersect(other:clone:)")));
- (NEKBoundingBox *)intersectTopLeftX:(float)topLeftX topLeftY:(float)topLeftY bottomRightX:(float)bottomRightX bottomRightY:(float)bottomRightY clone:(BOOL)clone __attribute__((swift_name("intersect(topLeftX:topLeftY:bottomRightX:bottomRightY:clone:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isInsideX:(float)x y:(float)y __attribute__((swift_name("isInside(x:y:)")));
- (BOOL)isIntersectingOther:(NEKBoundingBox *)other __attribute__((swift_name("isIntersecting(other:)")));
- (BOOL)isIntersectingTopLeftX:(float)topLeftX topLeftY:(float)topLeftY bottomRightX:(float)bottomRightX bottomRightY:(float)bottomRightY __attribute__((swift_name("isIntersecting(topLeftX:topLeftY:bottomRightX:bottomRightY:)")));
- (BOOL)isSameAsOther:(NEKBoundingBox *)other __attribute__((swift_name("isSameAs(other:)")));
- (BOOL)isSameAsTopLeftX:(float)topLeftX topLeftY:(float)topLeftY bottomRightX:(float)bottomRightX bottomRightY:(float)bottomRightY __attribute__((swift_name("isSameAs(topLeftX:topLeftY:bottomRightX:bottomRightY:)")));
- (BOOL)isValid __attribute__((swift_name("isValid()")));
- (void)setEmpty __attribute__((swift_name("setEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NEKBoundingBox *)unionOther:(NEKBoundingBox *)other clone:(BOOL)clone __attribute__((swift_name("union(other:clone:)")));
- (float)width __attribute__((swift_name("width()")));
@property float bottomRightX __attribute__((swift_name("bottomRightX")));
@property float bottomRightY __attribute__((swift_name("bottomRightY")));
@property float topLeftX __attribute__((swift_name("topLeftX")));
@property float topLeftY __attribute__((swift_name("topLeftY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationStatus")))
@interface NEKCalibrationStatus : NEKKotlinEnum<NEKCalibrationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKCalibrationStatus *calibrated __attribute__((swift_name("calibrated")));
@property (class, readonly) NEKCalibrationStatus *inprogress __attribute__((swift_name("inprogress")));
@property (class, readonly) NEKCalibrationStatus *required __attribute__((swift_name("required")));
+ (NEKKotlinArray<NEKCalibrationStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKCalibrationStatus *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionState")))
@interface NEKConnectionState : NEKKotlinEnum<NEKConnectionState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKConnectionStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKConnectionState *disconnected __attribute__((swift_name("disconnected")));
@property (class, readonly) NEKConnectionState *connecting __attribute__((swift_name("connecting")));
@property (class, readonly) NEKConnectionState *connected __attribute__((swift_name("connected")));
+ (NEKKotlinArray<NEKConnectionState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKConnectionState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionState.Companion")))
@interface NEKConnectionStateCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKConnectionStateCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKConnectionState * _Nullable)invokeRawValue:(int32_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllerAction")))
@interface NEKControllerAction : NEKKotlinEnum<NEKControllerAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKControllerAction *actionShort __attribute__((swift_name("actionShort")));
@property (class, readonly) NEKControllerAction *actionLong __attribute__((swift_name("actionLong")));
@property (class, readonly) NEKControllerAction *actionDouble __attribute__((swift_name("actionDouble")));
+ (NEKKotlinArray<NEKControllerAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKControllerAction *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllerButton")))
@interface NEKControllerButton : NEKKotlinEnum<NEKControllerButton *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKControllerButtonCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKControllerButton *right __attribute__((swift_name("right")));
@property (class, readonly) NEKControllerButton *left __attribute__((swift_name("left")));
@property (class, readonly) NEKControllerButton *up __attribute__((swift_name("up")));
@property (class, readonly) NEKControllerButton *down __attribute__((swift_name("down")));
@property (class, readonly) NEKControllerButton *primary __attribute__((swift_name("primary")));
+ (NEKKotlinArray<NEKControllerButton *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKControllerButton *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllerButton.Companion")))
@interface NEKControllerButtonCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKControllerButtonCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKControllerButton * _Nullable)invokeRawValue:(int32_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Direction")))
@interface NEKDirection : NEKKotlinEnum<NEKDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKDirectionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKDirection *up __attribute__((swift_name("up")));
@property (class, readonly) NEKDirection *down __attribute__((swift_name("down")));
@property (class, readonly) NEKDirection *left __attribute__((swift_name("left")));
@property (class, readonly) NEKDirection *right __attribute__((swift_name("right")));
+ (NEKKotlinArray<NEKDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKDirection *> *entries __attribute__((swift_name("entries")));
- (BOOL)isHorizontal __attribute__((swift_name("isHorizontal()")));
- (BOOL)isVertical __attribute__((swift_name("isVertical()")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Direction.Companion")))
@interface NEKDirectionCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKDirectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKDirection * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayState")))
@interface NEKDisplayState : NEKKotlinEnum<NEKDisplayState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKDisplayStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKDisplayState *off __attribute__((swift_name("off")));
@property (class, readonly) NEKDisplayState *on __attribute__((swift_name("on")));
+ (NEKKotlinArray<NEKDisplayState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKDisplayState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayState.Companion")))
@interface NEKDisplayStateCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKDisplayStateCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKDisplayState * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsColor")))
@interface NEKEvsColor : NEKKotlinEnum<NEKEvsColor *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKEvsColor *white __attribute__((swift_name("white")));
@property (class, readonly) NEKEvsColor *black __attribute__((swift_name("black")));
@property (class, readonly) NEKEvsColor *green __attribute__((swift_name("green")));
@property (class, readonly) NEKEvsColor *red __attribute__((swift_name("red")));
@property (class, readonly) NEKEvsColor *blue __attribute__((swift_name("blue")));
@property (class, readonly) NEKEvsColor *cyan __attribute__((swift_name("cyan")));
@property (class, readonly) NEKEvsColor *magenta __attribute__((swift_name("magenta")));
@property (class, readonly) NEKEvsColor *yellow __attribute__((swift_name("yellow")));
@property (class, readonly) NEKEvsColor *purple __attribute__((swift_name("purple")));
@property (class, readonly) NEKEvsColor *orange __attribute__((swift_name("orange")));
+ (NEKKotlinArray<NEKEvsColor *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKEvsColor *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rgba __attribute__((swift_name("rgba")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FillStyle")))
@interface NEKFillStyle : NEKKotlinEnum<NEKFillStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKFillStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKFillStyle *outline __attribute__((swift_name("outline")));
@property (class, readonly) NEKFillStyle *fill __attribute__((swift_name("fill")));
+ (NEKKotlinArray<NEKFillStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFillStyle *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FillStyle.Companion")))
@interface NEKFillStyleCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKFillStyleCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKFillStyle * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontType")))
@interface NEKFontType : NEKKotlinEnum<NEKFontType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKFontTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKFontType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NEKFontType *sif4bpp __attribute__((swift_name("sif4bpp")));
@property (class, readonly) NEKFontType *sif2bpp __attribute__((swift_name("sif2bpp")));
@property (class, readonly) NEKFontType *sif4bppZipped __attribute__((swift_name("sif4bppZipped")));
@property (class, readonly) NEKFontType *sif2bppZipped __attribute__((swift_name("sif2bppZipped")));
+ (NEKKotlinArray<NEKFontType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFontType *> *entries __attribute__((swift_name("entries")));
- (NSString *)toResourceExt __attribute__((swift_name("toResourceExt()")));
- (NSString *)toResourceExtBpp __attribute__((swift_name("toResourceExtBpp()")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontType.Companion")))
@interface NEKFontTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKFontTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKKotlinPair<NEKInt *, NEKInt *> * _Nullable)fontDimsFromNameNameWithExtension:(NSString *)nameWithExtension __attribute__((swift_name("fontDimsFromName(nameWithExtension:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKFontType *)fromResourceExtExt:(NSString *)ext __attribute__((swift_name("fromResourceExt(ext:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKFontType *)fromResourceExtBbp:(int32_t)bbp ext:(NSString *)ext __attribute__((swift_name("fromResourceExt(bbp:ext:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKFontType *)invokeRawValue:(int32_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NSString *)removeFileExtensionFileName:(NSString *)fileName __attribute__((swift_name("removeFileExtension(fileName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FrameSize")))
@interface NEKFrameSize : NEKKotlinEnum<NEKFrameSize *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKFrameSizeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKFrameSize *medium __attribute__((swift_name("medium")));
@property (class, readonly) NEKFrameSize *large __attribute__((swift_name("large")));
+ (NEKKotlinArray<NEKFrameSize *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFrameSize *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FrameSize.Companion")))
@interface NEKFrameSizeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKFrameSizeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKFrameSize * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlassesType")))
@interface NEKGlassesType : NEKKotlinEnum<NEKGlassesType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKGlassesTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKGlassesType *color __attribute__((swift_name("color")));
+ (NEKKotlinArray<NEKGlassesType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKGlassesType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlassesType.Companion")))
@interface NEKGlassesTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKGlassesTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKGlassesType * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((swift_name("IEvsColors")))
@protocol NEKIEvsColors
@required
- (int32_t)fromHexStringHexColor:(NSString *)hexColor __attribute__((swift_name("fromHexString(hexColor:)")));
- (int32_t)fromRgbR:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("fromRgb(r:g:b:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageType")))
@interface NEKImageType : NEKKotlinEnum<NEKImageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKImageTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKImageType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NEKImageType *png __attribute__((swift_name("png")));
@property (class, readonly) NEKImageType *jpg __attribute__((swift_name("jpg")));
+ (NEKKotlinArray<NEKImageType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKImageType *> *entries __attribute__((swift_name("entries")));
- (NSString *)toResourceExt __attribute__((swift_name("toResourceExt()")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageType.Companion")))
@interface NEKImageTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKImageTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKImageType *)fromResourceExtExt:(NSString *)ext __attribute__((swift_name("fromResourceExt(ext:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKImageType *)invokeRawValue:(int32_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NSString *)removeFileExtensionFileName:(NSString *)fileName __attribute__((swift_name("removeFileExtension(fileName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineStyle")))
@interface NEKLineStyle : NEKKotlinEnum<NEKLineStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKLineStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKLineStyle *solid __attribute__((swift_name("solid")));
@property (class, readonly) NEKLineStyle *dash __attribute__((swift_name("dash")));
@property (class, readonly) NEKLineStyle *dot __attribute__((swift_name("dot")));
@property (class, readonly) NEKLineStyle *dotcorners __attribute__((swift_name("dotcorners")));
+ (NEKKotlinArray<NEKLineStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKLineStyle *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LineStyle.Companion")))
@interface NEKLineStyleCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKLineStyleCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKLineStyle * _Nullable)invokeRawValue:(int32_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PenShape")))
@interface NEKPenShape : NEKKotlinEnum<NEKPenShape *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKPenShapeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKPenShape *round __attribute__((swift_name("round")));
@property (class, readonly) NEKPenShape *flat __attribute__((swift_name("flat")));
+ (NEKKotlinArray<NEKPenShape *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKPenShape *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PenShape.Companion")))
@interface NEKPenShapeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKPenShapeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKPenShape * _Nullable)invokeRawValue:(int32_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pivot")))
@interface NEKPivot : NEKKotlinEnum<NEKPivot *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKPivotCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKPivot *relativetoself __attribute__((swift_name("relativetoself")));
@property (class, readonly) NEKPivot *relativetoparent __attribute__((swift_name("relativetoparent")));
+ (NEKKotlinArray<NEKPivot *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKPivot *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pivot.Companion")))
@interface NEKPivotCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKPivotCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKPivot * _Nullable)invokeRawValue:(int32_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface NEKPoint : NEKBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerButtonAction")))
@interface NEKPowerButtonAction : NEKKotlinEnum<NEKPowerButtonAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKPowerButtonActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKPowerButtonAction *released __attribute__((swift_name("released")));
@property (class, readonly) NEKPowerButtonAction *pressed __attribute__((swift_name("pressed")));
@property (class, readonly) NEKPowerButtonAction *longPressed __attribute__((swift_name("longPressed")));
@property (class, readonly) NEKPowerButtonAction *beforeShutdown __attribute__((swift_name("beforeShutdown")));
+ (NEKKotlinArray<NEKPowerButtonAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKPowerButtonAction *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerButtonAction.Companion")))
@interface NEKPowerButtonActionCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKPowerButtonActionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKPowerButtonAction * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProximityActionType")))
@interface NEKProximityActionType : NEKKotlinEnum<NEKProximityActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKProximityActionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKProximityActionType *offface __attribute__((swift_name("offface")));
@property (class, readonly) NEKProximityActionType *onface __attribute__((swift_name("onface")));
+ (NEKKotlinArray<NEKProximityActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKProximityActionType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProximityActionType.Companion")))
@interface NEKProximityActionTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKProximityActionTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKProximityActionType * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuaternionData")))
@interface NEKQuaternionData : NEKBase
- (instancetype)initWithX:(float)x y:(float)y z:(float)z w:(float)w __attribute__((swift_name("init(x:y:z:w:)"))) __attribute__((objc_designated_initializer));
- (NEKQuaternionData *)doCopyX:(float)x y:(float)y z:(float)z w:(float)w __attribute__((swift_name("doCopy(x:y:z:w:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float w __attribute__((swift_name("w")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@property (readonly) float z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RotationDirection")))
@interface NEKRotationDirection : NEKKotlinEnum<NEKRotationDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKRotationDirectionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKRotationDirection *cw __attribute__((swift_name("cw")));
@property (class, readonly) NEKRotationDirection *ccw __attribute__((swift_name("ccw")));
+ (NEKKotlinArray<NEKRotationDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKRotationDirection *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RotationDirection.Companion")))
@interface NEKRotationDirectionCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKRotationDirectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKRotationDirection * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SafeListeners")))
@interface NEKSafeListeners<T> : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addListener:(T _Nullable)listener __attribute__((swift_name("add(listener:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)forEachExecute:(void (^)(T _Nullable))execute __attribute__((swift_name("forEach(execute:)")));
- (void)forEachIfUnlockedExecute:(void (^)(T _Nullable))execute __attribute__((swift_name("forEachIfUnlocked(execute:)")));
- (void)removeListener:(T _Nullable)listener __attribute__((swift_name("remove(listener:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) BOOL isLocked __attribute__((swift_name("isLocked")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRenderRate")))
@interface NEKScreenRenderRate : NEKKotlinEnum<NEKScreenRenderRate *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKScreenRenderRateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKScreenRenderRate *efficient __attribute__((swift_name("efficient")));
@property (class, readonly) NEKScreenRenderRate *normal __attribute__((swift_name("normal")));
@property (class, readonly) NEKScreenRenderRate *animation __attribute__((swift_name("animation")));
@property (class, readonly) NEKScreenRenderRate *fast __attribute__((swift_name("fast")));
@property (class, readonly) NEKScreenRenderRate *video __attribute__((swift_name("video")));
@property (class, readonly) NEKScreenRenderRate *los __attribute__((swift_name("los")));
+ (NEKKotlinArray<NEKScreenRenderRate *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKScreenRenderRate *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRenderRate.Companion")))
@interface NEKScreenRenderRateCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKScreenRenderRateCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (int32_t)count __attribute__((swift_name("count()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKScreenRenderRate * _Nullable)invokeValue:(int32_t)value __attribute__((swift_name("invoke(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorRate")))
@interface NEKSensorRate : NEKKotlinEnum<NEKSensorRate *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKSensorRateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKSensorRate *rate0 __attribute__((swift_name("rate0")));
@property (class, readonly) NEKSensorRate *rate1 __attribute__((swift_name("rate1")));
@property (class, readonly) NEKSensorRate *rate2 __attribute__((swift_name("rate2")));
@property (class, readonly) NEKSensorRate *rate3 __attribute__((swift_name("rate3")));
+ (NEKKotlinArray<NEKSensorRate *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKSensorRate *> *entries __attribute__((swift_name("entries")));
- (int32_t)toHz __attribute__((swift_name("toHz()")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorRate.Companion")))
@interface NEKSensorRateCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKSensorRateCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKSensorRate * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorType")))
@interface NEKSensorType : NEKKotlinEnum<NEKSensorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKSensorTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKSensorType *touch __attribute__((swift_name("touch")));
@property (class, readonly) NEKSensorType *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) NEKSensorType *mag __attribute__((swift_name("mag")));
@property (class, readonly) NEKSensorType *gyro __attribute__((swift_name("gyro")));
@property (class, readonly) NEKSensorType *acc __attribute__((swift_name("acc")));
@property (class, readonly) NEKSensorType *ambient __attribute__((swift_name("ambient")));
@property (class, readonly) NEKSensorType *ans __attribute__((swift_name("ans")));
+ (NEKKotlinArray<NEKSensorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKSensorType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorType.Companion")))
@interface NEKSensorTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKSensorTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKSensorType * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchDirection")))
@interface NEKTouchDirection : NEKKotlinEnum<NEKTouchDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKTouchDirectionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKTouchDirection *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NEKTouchDirection *backward __attribute__((swift_name("backward")));
@property (class, readonly) NEKTouchDirection *forward __attribute__((swift_name("forward")));
@property (class, readonly) NEKTouchDirection *tap __attribute__((swift_name("tap")));
@property (class, readonly) NEKTouchDirection *longtap __attribute__((swift_name("longtap")));
+ (NEKKotlinArray<NEKTouchDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKTouchDirection *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchDirection.Companion")))
@interface NEKTouchDirectionCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKTouchDirectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKTouchDirection * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YprData")))
@interface NEKYprData : NEKBase
- (instancetype)initWithYaw:(float)yaw pitch:(float)pitch roll:(float)roll __attribute__((swift_name("init(yaw:pitch:roll:)"))) __attribute__((objc_designated_initializer));
- (NEKYprData *)doCopyYaw:(float)yaw pitch:(float)pitch roll:(float)roll __attribute__((swift_name("doCopy(yaw:pitch:roll:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float pitch __attribute__((swift_name("pitch")));
@property (readonly) float roll __attribute__((swift_name("roll")));
@property (readonly) float yaw __attribute__((swift_name("yaw")));
@end

__attribute__((swift_name("IEvsApp")))
@interface NEKIEvsApp : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<NEKIEvsAuthService>)auth __attribute__((swift_name("auth()")));
- (id<NEKIEvsCommunicationService>)comm __attribute__((swift_name("comm()")));
- (id<NEKIEvsDisplayService>)display __attribute__((swift_name("display()")));
- (id<NEKIEvsAddOn> _Nullable)getAddOnAddOnName:(NSString *)addOnName __attribute__((swift_name("getAddOn(addOnName:)")));
- (NSString *)getSDKVersion __attribute__((swift_name("getSDKVersion()")));
- (id<NEKIEvsGlassesStateService>)glasses __attribute__((swift_name("glasses()")));
- (BOOL)hasOptionOption:(NSString *)option __attribute__((swift_name("hasOption(option:)")));
- (BOOL)isReady __attribute__((swift_name("isReady()")));
- (id<NEKIEvsOtaService>)ota __attribute__((swift_name("ota()")));
- (void)registerAppEventsListener:(id<NEKIEvsAppEvents>)listener __attribute__((swift_name("registerAppEvents(listener:)")));
- (id<NEKIEvsScreenService>)screens __attribute__((swift_name("screens()")));
- (id<NEKIEvsSensorsService>)sensors __attribute__((swift_name("sensors()")));
- (BOOL)showUIName:(NSString *)name __attribute__((swift_name("showUI(name:)")));
- (BOOL)start __attribute__((swift_name("start()")));
- (BOOL)startExtOptions:(NEKMutableSet<NSString *> *)options __attribute__((swift_name("startExt(options:)")));
- (BOOL)stop __attribute__((swift_name("stop()")));
- (void)unregisterAppEventsListener:(id<NEKIEvsAppEvents>)listener __attribute__((swift_name("unregisterAppEvents(listener:)")));
@end

__attribute__((swift_name("IEvsLogger")))
@protocol NEKIEvsLogger
@required
- (void)debugTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("debug(tag:message:)")));
- (void)errorTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("error(tag:message:)")));
- (BOOL)isDebug __attribute__((swift_name("isDebug()")));
- (void)logTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("log(tag:message:)")));
- (void)setDebugModeIsDebug:(BOOL)isDebug __attribute__((swift_name("setDebugMode(isDebug:)")));
- (void)warningTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("warning(tag:message:)")));
@end

__attribute__((swift_name("IEvsSystemLogger")))
@protocol NEKIEvsSystemLogger
@required
- (id<NEKIEvsLogger> _Nullable)doInitType:(NSString *)type headers:(NEKKotlinArray<NSString *> *)headers __attribute__((swift_name("doInit(type:headers:)")));
- (BOOL)isDebug __attribute__((swift_name("isDebug()")));
- (id<NEKIEvsLogger> _Nullable)loggerType:(NSString *)type __attribute__((swift_name("logger(type:)")));
- (void)setDebugModeIsDebug:(BOOL)isDebug __attribute__((swift_name("setDebugMode(isDebug:)")));
- (void)terminate __attribute__((swift_name("terminate()")));
@end

__attribute__((swift_name("UIResource")))
@interface NEKUIResource : NEKBase
- (NSString *)failedReason __attribute__((swift_name("failedReason()")));
- (BOOL)failedToUpload __attribute__((swift_name("failedToUpload()")));
- (int32_t)getMaxSizeBytes __attribute__((swift_name("getMaxSizeBytes()")));
- (NSString *)getResourceName __attribute__((swift_name("getResourceName()")));
- (BOOL)loadResource __attribute__((swift_name("loadResource()")));
- (void)retryUploadScreen:(NEKScreen *)screen __attribute__((swift_name("retryUpload(screen:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setResourceDataData:(NEKKotlinByteArray * _Nullable)data resourceType:(int32_t)resourceType resourceSlotNumber:(int32_t)resourceSlotNumber __attribute__((swift_name("setResourceData(data:resourceType:resourceSlotNumber:)")));
- (BOOL)wasConfigured __attribute__((swift_name("wasConfigured()")));
- (BOOL)wasDataLoaded __attribute__((swift_name("wasDataLoaded()")));
- (BOOL)wasUploadedToGlasses __attribute__((swift_name("wasUploadedToGlasses()")));
@end

__attribute__((swift_name("Font")))
@interface NEKFont : NEKUIResource
- (instancetype)initWithStockFont:(NEKFontStockFont *)stockFont __attribute__((swift_name("init(stockFont:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNameWithExtension:(NSString *)nameWithExtension slot:(NEKFontSlot *)slot __attribute__((swift_name("init(nameWithExtension:slot:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNameWithExtension:(NSString *)nameWithExtension slot:(NEKFontSlot *)slot maxW:(NEKInt * _Nullable)maxW maxH:(NEKInt * _Nullable)maxH __attribute__((swift_name("init(nameWithExtension:slot:maxW:maxH:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithData:(NEKKotlinByteArray *)data fType:(NEKFontType *)fType slot:(NEKFontSlot *)slot maxW:(int32_t)maxW maxH:(int32_t)maxH __attribute__((swift_name("init(data:fType:slot:maxW:maxH:)"))) __attribute__((objc_designated_initializer));
- (int32_t)countCharsCoverageText:(NSString *)text __attribute__((swift_name("countCharsCoverage(text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)failedToUpload __attribute__((swift_name("failedToUpload()")));
- (int32_t)getMaxSizeBytes __attribute__((swift_name("getMaxSizeBytes()")));
- (float)getMeasuredContentHeightText:(NSString *)text __attribute__((swift_name("getMeasuredContentHeight(text:)")));
- (float)getMeasuredContentWidthText:(NSString *)text __attribute__((swift_name("getMeasuredContentWidth(text:)")));
- (NSString *)getResourceName __attribute__((swift_name("getResourceName()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)loadResource __attribute__((swift_name("loadResource()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)trimUncoveredText:(NSString *)text __attribute__((swift_name("trimUncovered(text:)")));
- (BOOL)wasConfigured __attribute__((swift_name("wasConfigured()")));
- (BOOL)wasUploadedToGlasses __attribute__((swift_name("wasUploadedToGlasses()")));
@property (readonly) int32_t maxH __attribute__((swift_name("maxH")));
@property (readonly) int32_t maxW __attribute__((swift_name("maxW")));
@property (readonly) NEKFontSlot * _Nullable slot __attribute__((swift_name("slot")));
@property (readonly) NEKFontStockFont * _Nullable stockFont __attribute__((swift_name("stockFont")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Font.Slot")))
@interface NEKFontSlot : NEKKotlinEnum<NEKFontSlot *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKFontSlotCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKFontSlot *s0 __attribute__((swift_name("s0")));
@property (class, readonly) NEKFontSlot *s1 __attribute__((swift_name("s1")));
@property (class, readonly) NEKFontSlot *s2 __attribute__((swift_name("s2")));
@property (class, readonly) NEKFontSlot *s3 __attribute__((swift_name("s3")));
@property (class, readonly) NEKFontSlot *s4 __attribute__((swift_name("s4")));
@property (class, readonly) NEKFontSlot *s5 __attribute__((swift_name("s5")));
@property (class, readonly) NEKFontSlot *s6 __attribute__((swift_name("s6")));
@property (class, readonly) NEKFontSlot *s7 __attribute__((swift_name("s7")));
@property (class, readonly) NEKFontSlot *s8 __attribute__((swift_name("s8")));
@property (class, readonly) NEKFontSlot *s9 __attribute__((swift_name("s9")));
@property (class, readonly) NEKFontSlot *s10 __attribute__((swift_name("s10")));
@property (class, readonly) NEKFontSlot *s11 __attribute__((swift_name("s11")));
+ (NEKKotlinArray<NEKFontSlot *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFontSlot *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Font.SlotCompanion")))
@interface NEKFontSlotCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKFontSlotCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKFontSlot *)invokeValue:(int32_t)value __attribute__((swift_name("invoke(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKFontSlot *)maxSlot __attribute__((swift_name("maxSlot()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Font.StockFont")))
@interface NEKFontStockFont : NEKKotlinEnum<NEKFontStockFont *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKFontStockFont *small __attribute__((swift_name("small")));
@property (class, readonly) NEKFontStockFont *medium __attribute__((swift_name("medium")));
@property (class, readonly) NEKFontStockFont *large __attribute__((swift_name("large")));
+ (NEKKotlinArray<NEKFontStockFont *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFontStockFont *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("ImgSrc")))
@interface NEKImgSrc : NEKUIResource
- (instancetype)initWithTextParams:(NEKTextParams *)textParams slot:(NEKImgSrcSlot *)slot __attribute__((swift_name("init(textParams:slot:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNameWithExtension:(NSString *)nameWithExtension slot:(NEKImgSrcSlot *)slot __attribute__((swift_name("init(nameWithExtension:slot:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithData:(NEKKotlinByteArray *)data iType:(NEKImageType *)iType slot:(NEKImgSrcSlot *)slot width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(data:iType:slot:width:height:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int32_t)getMaxSizeBytes __attribute__((swift_name("getMaxSizeBytes()")));
- (NSString *)getResourceName __attribute__((swift_name("getResourceName()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)loadResource __attribute__((swift_name("loadResource()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)wasConfigured __attribute__((swift_name("wasConfigured()")));
@property int32_t imageHeight __attribute__((swift_name("imageHeight")));
@property int32_t imageWidth __attribute__((swift_name("imageWidth")));
@property (readonly) NEKImgSrcSlot *slot __attribute__((swift_name("slot")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImgSrc.Slot")))
@interface NEKImgSrcSlot : NEKKotlinEnum<NEKImgSrcSlot *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKImgSrcSlotCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKImgSrcSlot *s0 __attribute__((swift_name("s0")));
@property (class, readonly) NEKImgSrcSlot *s1 __attribute__((swift_name("s1")));
@property (class, readonly) NEKImgSrcSlot *s2 __attribute__((swift_name("s2")));
@property (class, readonly) NEKImgSrcSlot *s3 __attribute__((swift_name("s3")));
@property (class, readonly) NEKImgSrcSlot *s4 __attribute__((swift_name("s4")));
@property (class, readonly) NEKImgSrcSlot *s5 __attribute__((swift_name("s5")));
@property (class, readonly) NEKImgSrcSlot *s6 __attribute__((swift_name("s6")));
@property (class, readonly) NEKImgSrcSlot *s7 __attribute__((swift_name("s7")));
@property (class, readonly) NEKImgSrcSlot *s8 __attribute__((swift_name("s8")));
@property (class, readonly) NEKImgSrcSlot *s9 __attribute__((swift_name("s9")));
@property (class, readonly) NEKImgSrcSlot *s10 __attribute__((swift_name("s10")));
@property (class, readonly) NEKImgSrcSlot *s11 __attribute__((swift_name("s11")));
@property (class, readonly) NEKImgSrcSlot *s12 __attribute__((swift_name("s12")));
@property (class, readonly) NEKImgSrcSlot *s13 __attribute__((swift_name("s13")));
@property (class, readonly) NEKImgSrcSlot *s14 __attribute__((swift_name("s14")));
@property (class, readonly) NEKImgSrcSlot *s15 __attribute__((swift_name("s15")));
@property (class, readonly) NEKImgSrcSlot *s16 __attribute__((swift_name("s16")));
@property (class, readonly) NEKImgSrcSlot *s17 __attribute__((swift_name("s17")));
@property (class, readonly) NEKImgSrcSlot *s18 __attribute__((swift_name("s18")));
@property (class, readonly) NEKImgSrcSlot *s19 __attribute__((swift_name("s19")));
@property (class, readonly) NEKImgSrcSlot *s20 __attribute__((swift_name("s20")));
@property (class, readonly) NEKImgSrcSlot *s21 __attribute__((swift_name("s21")));
@property (class, readonly) NEKImgSrcSlot *s22 __attribute__((swift_name("s22")));
@property (class, readonly) NEKImgSrcSlot *s23 __attribute__((swift_name("s23")));
@property (class, readonly) NEKImgSrcSlot *s24 __attribute__((swift_name("s24")));
@property (class, readonly) NEKImgSrcSlot *s25 __attribute__((swift_name("s25")));
@property (class, readonly) NEKImgSrcSlot *s26 __attribute__((swift_name("s26")));
@property (class, readonly) NEKImgSrcSlot *s27 __attribute__((swift_name("s27")));
@property (class, readonly) NEKImgSrcSlot *s28 __attribute__((swift_name("s28")));
@property (class, readonly) NEKImgSrcSlot *s29 __attribute__((swift_name("s29")));
@property (class, readonly) NEKImgSrcSlot *s30 __attribute__((swift_name("s30")));
@property (class, readonly) NEKImgSrcSlot *s31 __attribute__((swift_name("s31")));
+ (NEKKotlinArray<NEKImgSrcSlot *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKImgSrcSlot *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImgSrc.SlotCompanion")))
@interface NEKImgSrcSlotCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKImgSrcSlotCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKImgSrcSlot *)invokeValue:(int32_t)value __attribute__((swift_name("invoke(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKImgSrcSlot *)maxSlot __attribute__((swift_name("maxSlot()")));
@end

__attribute__((swift_name("SpriteImgSrc")))
@interface NEKSpriteImgSrc : NEKImgSrc
- (instancetype)initWithNameWithExtension:(NSString *)nameWithExtension spriteX:(int32_t)spriteX spriteY:(int32_t)spriteY spriteWidth:(int32_t)spriteWidth spriteHeight:(int32_t)spriteHeight tag:(NSString *)tag __attribute__((swift_name("init(nameWithExtension:spriteX:spriteY:spriteWidth:spriteHeight:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNameWithExtension:(NSString *)nameWithExtension spriteX:(int16_t)spriteX spriteY:(int16_t)spriteY spriteWidth:(int16_t)spriteWidth spriteHeight:(int16_t)spriteHeight tag_:(NSString *)tag __attribute__((swift_name("init(nameWithExtension:spriteX:spriteY:spriteWidth:spriteHeight:tag_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithData:(NEKKotlinByteArray *)data iType:(NEKImageType *)iType spriteX:(int32_t)spriteX spriteY:(int32_t)spriteY spriteWidth:(int32_t)spriteWidth spriteHeight:(int32_t)spriteHeight tag:(NSString *)tag __attribute__((swift_name("init(data:iType:spriteX:spriteY:spriteWidth:spriteHeight:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTextParams:(NEKTextParams *)textParams slot:(NEKImgSrcSlot *)slot __attribute__((swift_name("init(textParams:slot:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithNameWithExtension:(NSString *)nameWithExtension slot:(NEKImgSrcSlot *)slot __attribute__((swift_name("init(nameWithExtension:slot:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithData:(NEKKotlinByteArray *)data iType:(NEKImageType *)iType slot:(NEKImgSrcSlot *)slot width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(data:iType:slot:width:height:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)loadResource __attribute__((swift_name("loadResource()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t spriteHeight __attribute__((swift_name("spriteHeight")));
@property int32_t spriteWidth __attribute__((swift_name("spriteWidth")));
@property int32_t spriteX __attribute__((swift_name("spriteX")));
@property int32_t spriteY __attribute__((swift_name("spriteY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlobDataType")))
@interface NEKBlobDataType : NEKKotlinEnum<NEKBlobDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKBlobDataTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKBlobDataType *inertial __attribute__((swift_name("inertial")));
@property (class, readonly) NEKBlobDataType *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) NEKBlobDataType *userdata __attribute__((swift_name("userdata")));
+ (NEKKotlinArray<NEKBlobDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKBlobDataType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlobDataType.Companion")))
@interface NEKBlobDataTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKBlobDataTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKBlobDataType * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType")))
@interface NEKDeviceType : NEKKotlinEnum<NEKDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKDeviceType *touch __attribute__((swift_name("touch")));
@property (class, readonly) NEKDeviceType *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) NEKDeviceType *mag __attribute__((swift_name("mag")));
@property (class, readonly) NEKDeviceType *gyro __attribute__((swift_name("gyro")));
@property (class, readonly) NEKDeviceType *acc __attribute__((swift_name("acc")));
@property (class, readonly) NEKDeviceType *ambient __attribute__((swift_name("ambient")));
@property (class, readonly) NEKDeviceType *display __attribute__((swift_name("display")));
@property (class, readonly) NEKDeviceType *glasses __attribute__((swift_name("glasses")));
@property (class, readonly) NEKDeviceType *autoBri __attribute__((swift_name("autoBri")));
@property (class, readonly) NEKDeviceType *ans __attribute__((swift_name("ans")));
@property (class, readonly) NEKDeviceType *fpga __attribute__((swift_name("fpga")));
@property (class, readonly) NEKDeviceType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) NEKDeviceType *temperature __attribute__((swift_name("temperature")));
@property (class, readonly) NEKDeviceType *palette __attribute__((swift_name("palette")));
+ (NEKKotlinArray<NEKDeviceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKDeviceType *> *entries __attribute__((swift_name("entries")));
- (BOOL)isSetBitSet:(int32_t)bitSet __attribute__((swift_name("isSet(bitSet:)")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType.Companion")))
@interface NEKDeviceTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKDeviceTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKDeviceType * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontData")))
@interface NEKFontData : NEKBase
- (instancetype)initWithData:(NEKKotlinByteArray *)data max_height:(int32_t)max_height char_width:(NEKMutableDictionary<NEKInt *, NEKInt *> *)char_width __attribute__((swift_name("init(data:max_height:char_width:)"))) __attribute__((objc_designated_initializer));
- (NEKFontData *)doCopyData:(NEKKotlinByteArray *)data max_height:(int32_t)max_height char_width:(NEKMutableDictionary<NEKInt *, NEKInt *> *)char_width __attribute__((swift_name("doCopy(data:max_height:char_width:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NEKMutableDictionary<NEKInt *, NEKInt *> *char_width __attribute__((swift_name("char_width")));
@property NEKKotlinByteArray *data __attribute__((swift_name("data")));
@property int32_t max_height __attribute__((swift_name("max_height")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageData")))
@interface NEKImageData : NEKBase
- (instancetype)initWithData:(NEKKotlinByteArray *)data imageType:(NEKImageType *)imageType height:(int32_t)height width:(int32_t)width __attribute__((swift_name("init(data:imageType:height:width:)"))) __attribute__((objc_designated_initializer));
- (NEKImageData *)doCopyData:(NEKKotlinByteArray *)data imageType:(NEKImageType *)imageType height:(int32_t)height width:(int32_t)width __attribute__((swift_name("doCopy(data:imageType:height:width:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NEKKotlinByteArray *data __attribute__((swift_name("data")));
@property int32_t height __attribute__((swift_name("height")));
@property NEKImageType *imageType __attribute__((swift_name("imageType")));
@property int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputType")))
@interface NEKInputType : NEKKotlinEnum<NEKInputType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKInputTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKInputType *touch __attribute__((swift_name("touch")));
@property (class, readonly) NEKInputType *powerbutton __attribute__((swift_name("powerbutton")));
@property (class, readonly) NEKInputType *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) NEKInputType *chargerConnected __attribute__((swift_name("chargerConnected")));
@property (class, readonly) NEKInputType *charging __attribute__((swift_name("charging")));
@property (class, readonly) NEKInputType *display __attribute__((swift_name("display")));
@property (class, readonly) NEKInputType *onFace __attribute__((swift_name("onFace")));
+ (NEKKotlinArray<NEKInputType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKInputType *> *entries __attribute__((swift_name("entries")));
- (BOOL)isSetBitSet:(int32_t)bitSet __attribute__((swift_name("isSet(bitSet:)")));
- (int32_t)setBitBitSet:(int32_t)bitSet isOn:(BOOL)isOn __attribute__((swift_name("setBit(bitSet:isOn:)")));
@property (readonly) int8_t rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputType.Companion")))
@interface NEKInputTypeCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKInputTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKInputType * _Nullable)invokeRawValue:(int8_t)rawValue __attribute__((swift_name("invoke(rawValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtaBleMetaData")))
@interface NEKOtaBleMetaData : NEKBase
- (instancetype)initWithVersionBle:(int32_t)versionBle fileNameBle:(NSString *)fileNameBle __attribute__((swift_name("init(versionBle:fileNameBle:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fileNameBle __attribute__((swift_name("fileNameBle")));
@property (readonly) int32_t versionBle __attribute__((swift_name("versionBle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtaMetaData")))
@interface NEKOtaMetaData : NEKBase
- (instancetype)initWithVersion:(int32_t)version fileNameSt:(NSString *)fileNameSt fileNameMaxim:(NSString *)fileNameMaxim __attribute__((swift_name("init(version:fileNameSt:fileNameMaxim:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *fileNameMaxim __attribute__((swift_name("fileNameMaxim")));
@property NSString *fileNameSt __attribute__((swift_name("fileNameSt")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtaVersion")))
@interface NEKOtaVersion : NEKBase
- (instancetype)initWithVersion:(int32_t)version releaseDate:(NSString *)releaseDate required:(BOOL)required formal:(BOOL)formal description:(NSString *)description __attribute__((swift_name("init(version:releaseDate:required:formal:description:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property NEKOtaBleMetaData * _Nullable ble __attribute__((swift_name("ble")));
@property NEKOtaMetaData * _Nullable cpu __attribute__((swift_name("cpu")));
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) BOOL formal __attribute__((swift_name("formal")));
@property NSString *releaseDate __attribute__((swift_name("releaseDate")));
@property (readonly) BOOL required __attribute__((swift_name("required")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RttInfo")))
@interface NEKRttInfo : NEKBase
- (NEKRttInfo *)doCopyRequestTs:(uint32_t)requestTs responseTs:(uint32_t)responseTs tsStStart:(uint32_t)tsStStart tsMaxim:(uint32_t)tsMaxim tsStEnd:(uint32_t)tsStEnd __attribute__((swift_name("doCopy(requestTs:responseTs:tsStStart:tsMaxim:tsStEnd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)log __attribute__((swift_name("log()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (uint32_t)totalMs __attribute__((swift_name("totalMs()")));
@property (readonly) uint32_t requestTs __attribute__((swift_name("requestTs")));
@property (readonly) uint32_t responseTs __attribute__((swift_name("responseTs")));
@property (readonly) uint32_t tsMaxim __attribute__((swift_name("tsMaxim")));
@property (readonly) uint32_t tsStEnd __attribute__((swift_name("tsStEnd")));
@property (readonly) uint32_t tsStStart __attribute__((swift_name("tsStStart")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemBit")))
@interface NEKSystemBit : NEKKotlinEnum<NEKSystemBit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NEKSystemBitCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NEKSystemBit *cpu2Handshake __attribute__((swift_name("cpu2Handshake")));
@property (class, readonly) NEKSystemBit *bleFifoOverflowIn __attribute__((swift_name("bleFifoOverflowIn")));
@property (class, readonly) NEKSystemBit *bleFifoOverflowOut __attribute__((swift_name("bleFifoOverflowOut")));
@property (class, readonly) NEKSystemBit *bitUartError __attribute__((swift_name("bitUartError")));
@property (class, readonly) NEKSystemBit *bitUartOverflow __attribute__((swift_name("bitUartOverflow")));
@property (class, readonly) NEKSystemBit *packetDecode __attribute__((swift_name("packetDecode")));
@property (class, readonly) NEKSystemBit *touchProbe __attribute__((swift_name("touchProbe")));
@property (class, readonly) NEKSystemBit *pmicProbe __attribute__((swift_name("pmicProbe")));
@property (class, readonly) NEKSystemBit *bleFwError __attribute__((swift_name("bleFwError")));
@property (class, readonly) NEKSystemBit *displayProbe __attribute__((swift_name("displayProbe")));
@property (class, readonly) NEKSystemBit *pmicBatFault __attribute__((swift_name("pmicBatFault")));
@property (class, readonly) NEKSystemBit *magProbe __attribute__((swift_name("magProbe")));
@property (class, readonly) NEKSystemBit *gyroAccProbe __attribute__((swift_name("gyroAccProbe")));
@property (class, readonly) NEKSystemBit *proxProbe __attribute__((swift_name("proxProbe")));
@property (class, readonly) NEKSystemBit *ambientProbe __attribute__((swift_name("ambientProbe")));
@property (class, readonly) NEKSystemBit *assertFailed __attribute__((swift_name("assertFailed")));
@property (class, readonly) NEKSystemBit *fuelGaugeProbe __attribute__((swift_name("fuelGaugeProbe")));
@property (class, readonly) NEKSystemBit *batBadFcc __attribute__((swift_name("batBadFcc")));
@property (class, readonly) NEKSystemBit *ancsError __attribute__((swift_name("ancsError")));
@property (class, readonly) NEKSystemBit *blePhy2mInUse __attribute__((swift_name("blePhy2mInUse")));
@property (class, readonly) NEKSystemBit *overTemp __attribute__((swift_name("overTemp")));
@property (class, readonly) NEKSystemBit *bitCpu2Timeout __attribute__((swift_name("bitCpu2Timeout")));
+ (NEKKotlinArray<NEKSystemBit *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKSystemBit *> *entries __attribute__((swift_name("entries")));
- (BOOL)isSetBitSet:(int32_t)bitSet __attribute__((swift_name("isSet(bitSet:)")));
- (BOOL)isSetBitSet_:(uint32_t)bitSet __attribute__((swift_name("isSet(bitSet_:)")));
- (BOOL)isSupportedFwVersion:(int32_t)fwVersion __attribute__((swift_name("isSupported(fwVersion:)")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemBit.Companion")))
@interface NEKSystemBitCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKSystemBitCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NEKSystemBit * _Nullable)invokeIndex:(int32_t)index __attribute__((swift_name("invoke(index:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemEti")))
@interface NEKSystemEti : NEKBase
- (NEKSystemEti *)doCopySystem_eti:(uint32_t)system_eti display_eti:(uint32_t)display_eti last_on_time:(uint32_t)last_on_time num_shutdowns:(uint32_t)num_shutdowns num_charges:(uint32_t)num_charges charging_time_mins:(uint32_t)charging_time_mins sticky_bit:(uint32_t)sticky_bit app_usages:(NSMutableArray<NEKInt *> *)app_usages first_on_time_sec:(uint32_t)first_on_time_sec flash_erase_count:(uint32_t)flash_erase_count __attribute__((swift_name("doCopy(system_eti:display_eti:last_on_time:num_shutdowns:num_charges:charging_time_mins:sticky_bit:app_usages:first_on_time_sec:flash_erase_count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSMutableArray<NEKKotlinPair<NEKSystemBit *, NEKBoolean *> *> *)getStickyBitVersion:(int32_t)version __attribute__((swift_name("getStickyBit(version:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<NEKInt *> *app_usages __attribute__((swift_name("app_usages")));
@property (readonly) uint32_t charging_time_mins __attribute__((swift_name("charging_time_mins")));
@property (readonly) uint32_t display_eti __attribute__((swift_name("display_eti")));
@property (readonly) uint32_t first_on_time_sec __attribute__((swift_name("first_on_time_sec")));
@property (readonly) uint32_t flash_erase_count __attribute__((swift_name("flash_erase_count")));
@property (readonly) uint32_t last_on_time __attribute__((swift_name("last_on_time")));
@property (readonly) uint32_t num_charges __attribute__((swift_name("num_charges")));
@property (readonly) uint32_t num_shutdowns __attribute__((swift_name("num_shutdowns")));
@property (readonly) uint32_t sticky_bit __attribute__((swift_name("sticky_bit")));
@property (readonly) uint32_t system_eti __attribute__((swift_name("system_eti")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemStatus")))
@interface NEKSystemStatus : NEKBase
- (NEKSystemStatus *)doCopyBatteryPercent:(int32_t)batteryPercent fw_version:(int32_t)fw_version fw_version2:(int32_t)fw_version2 glassesType:(NEKGlassesType *)glassesType serial:(NSString *)serial bit:(uint32_t)bit battery_mW:(int16_t)battery_mW systemOnState:(int16_t)systemOnState glassesApiVersion:(uint8_t)glassesApiVersion bleVersion:(int32_t)bleVersion authSystemTimeSec:(uint32_t)authSystemTimeSec batteryFCCmWH:(int16_t)batteryFCCmWH __attribute__((swift_name("doCopy(batteryPercent:fw_version:fw_version2:glassesType:serial:bit:battery_mW:systemOnState:glassesApiVersion:bleVersion:authSystemTimeSec:batteryFCCmWH:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSMutableArray<NEKKotlinPair<NEKInputType *, NEKBoolean *> *> *)getInputOnOffState __attribute__((swift_name("getInputOnOffState()")));
- (NSMutableArray<NEKKotlinPair<NEKDeviceType *, NEKBoolean *> *> *)getSensorOnOffState __attribute__((swift_name("getSensorOnOffState()")));
- (NSMutableArray<NEKKotlinPair<NEKSystemBit *, NEKBoolean *> *> *)getSystemBit __attribute__((swift_name("getSystemBit()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property uint32_t authSystemTimeSec __attribute__((swift_name("authSystemTimeSec")));
@property int16_t batteryFCCmWH __attribute__((swift_name("batteryFCCmWH")));
@property int16_t battery_mW __attribute__((swift_name("battery_mW")));
@property uint32_t bit __attribute__((swift_name("bit")));
@property int32_t bleVersion __attribute__((swift_name("bleVersion")));
@property int32_t fw_version __attribute__((swift_name("fw_version")));
@property int32_t fw_version2 __attribute__((swift_name("fw_version2")));
@property uint8_t glassesApiVersion __attribute__((swift_name("glassesApiVersion")));
@property NEKGlassesType *glassesType __attribute__((swift_name("glassesType")));
@property NSString *serial __attribute__((swift_name("serial")));
@property int16_t systemOnState __attribute__((swift_name("systemOnState")));
@end

__attribute__((swift_name("IEvsAutoBrightnessProvider")))
@protocol NEKIEvsAutoBrightnessProvider
@required
- (float)getBrightnessByLuxLux:(float)lux __attribute__((swift_name("getBrightnessByLux(lux:)")));
- (int32_t)getGain __attribute__((swift_name("getGain()")));
- (void)onDisconnected __attribute__((swift_name("onDisconnected()")));
- (void)onReady __attribute__((swift_name("onReady()")));
- (void)setGainGain:(int32_t)gain __attribute__((swift_name("setGain(gain:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoBrightnessGainProvider")))
@interface NEKAutoBrightnessGainProvider : NEKBase <NEKIEvsAutoBrightnessProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (float)getBrightnessByLuxLux:(float)lux __attribute__((swift_name("getBrightnessByLux(lux:)")));
- (int32_t)getGain __attribute__((swift_name("getGain()")));
- (void)onReady __attribute__((swift_name("onReady()")));
- (void)setGainGain:(int32_t)gain __attribute__((swift_name("setGain(gain:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FastFIFO")))
@interface NEKFastFIFO<E> : NEKBase
- (instancetype)initWithInitSize:(int32_t)initSize __attribute__((swift_name("init(initSize:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (E _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (E _Nullable)peek __attribute__((swift_name("peek()")));
- (E _Nullable)pop __attribute__((swift_name("pop()")));
- (void)pushE:(E _Nullable)e __attribute__((swift_name("push(e:)")));
- (void)setI:(int32_t)i e:(E _Nullable)e __attribute__((swift_name("set(i:e:)")));
- (E _Nullable)tryPop __attribute__((swift_name("tryPop()")));
@property (getter=doInitSize) int32_t initSize __attribute__((swift_name("initSize")));
@property int32_t readIdx __attribute__((swift_name("readIdx")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FastQue")))
@interface NEKFastQue<E> : NEKBase
- (instancetype)initWithInitSize:(int32_t)initSize __attribute__((swift_name("init(initSize:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (void)clearMemory __attribute__((swift_name("clearMemory()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (E _Nullable)peek __attribute__((swift_name("peek()")));
- (E _Nullable)pop __attribute__((swift_name("pop()")));
- (void)pushE:(E _Nullable)e __attribute__((swift_name("push(e:)")));
- (E _Nullable)tryPop __attribute__((swift_name("tryPop()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontFamily")))
@interface NEKFontFamily : NEKBase
- (instancetype)initWithTypefaceName:(NSString *)typefaceName __attribute__((swift_name("init(typefaceName:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *typefaceName __attribute__((swift_name("typefaceName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontStyle")))
@interface NEKFontStyle : NEKKotlinEnum<NEKFontStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKFontStyle *normal __attribute__((swift_name("normal")));
@property (class, readonly) NEKFontStyle *bold __attribute__((swift_name("bold")));
@property (class, readonly) NEKFontStyle *italic __attribute__((swift_name("italic")));
@property (class, readonly) NEKFontStyle *boldItalic __attribute__((swift_name("boldItalic")));
+ (NEKKotlinArray<NEKFontStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFontStyle *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t style __attribute__((swift_name("style")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontWeight")))
@interface NEKFontWeight : NEKKotlinEnum<NEKFontWeight *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKFontWeight *thin __attribute__((swift_name("thin")));
@property (class, readonly) NEKFontWeight *extraLight __attribute__((swift_name("extraLight")));
@property (class, readonly) NEKFontWeight *light __attribute__((swift_name("light")));
@property (class, readonly) NEKFontWeight *normal __attribute__((swift_name("normal")));
@property (class, readonly) NEKFontWeight *medium __attribute__((swift_name("medium")));
@property (class, readonly) NEKFontWeight *semiBold __attribute__((swift_name("semiBold")));
@property (class, readonly) NEKFontWeight *bold __attribute__((swift_name("bold")));
@property (class, readonly) NEKFontWeight *extraBold __attribute__((swift_name("extraBold")));
@property (class, readonly) NEKFontWeight *black __attribute__((swift_name("black")));
+ (NEKKotlinArray<NEKFontWeight *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFontWeight *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextParams")))
@interface NEKTextParams : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NEKTextParams *)setAlignmentAlign:(NEKAlign *)align __attribute__((swift_name("setAlignment(align:)")));
- (NEKTextParams *)setBackgroundColorBgColor:(NEKEvsColor *)bgColor __attribute__((swift_name("setBackgroundColor(bgColor:)")));
- (NEKTextParams *)setBorderColorColor:(NEKEvsColor *)color __attribute__((swift_name("setBorderColor(color:)")));
- (NEKTextParams *)setBorderCornerRadiusRadius:(float)radius __attribute__((swift_name("setBorderCornerRadius(radius:)")));
- (NEKTextParams *)setBorderWidthWidth:(float)width __attribute__((swift_name("setBorderWidth(width:)")));
- (NEKTextParams *)setCustomFontFontFamily:(NEKFontFamily *)fontFamily __attribute__((swift_name("setCustomFont(fontFamily:)")));
- (NEKTextParams *)setFontStyleStyle:(NEKFontStyle *)style __attribute__((swift_name("setFontStyle(style:)")));
- (NEKTextParams *)setFontWeightWeight:(NEKFontWeight *)weight __attribute__((swift_name("setFontWeight(weight:)")));
- (NEKTextParams *)setHeightHeight:(int32_t)height __attribute__((swift_name("setHeight(height:)")));
- (NEKTextParams *)setLineSpacingSpacing:(float)spacing __attribute__((swift_name("setLineSpacing(spacing:)")));
- (NEKTextParams *)setMaxHeightMaxHeight:(int32_t)maxHeight __attribute__((swift_name("setMaxHeight(maxHeight:)")));
- (NEKTextParams *)setMaxLinesLines:(int32_t)lines __attribute__((swift_name("setMaxLines(lines:)")));
- (NEKTextParams *)setMaxWidthMaxWidth:(int32_t)maxWidth __attribute__((swift_name("setMaxWidth(maxWidth:)")));
- (NEKTextParams *)setPaddingPadding:(float)padding __attribute__((swift_name("setPadding(padding:)")));
- (NEKTextParams *)setTextText:(NSString *)text __attribute__((swift_name("setText(text:)")));
- (NEKTextParams *)setTextColorTextColor:(NEKEvsColor *)textColor __attribute__((swift_name("setTextColor(textColor:)")));
- (NEKTextParams *)setTextSizeSize:(float)size __attribute__((swift_name("setTextSize(size:)")));
- (NEKTextParams *)setTransparentIsTransparent:(BOOL)isTransparent __attribute__((swift_name("setTransparent(isTransparent:)")));
- (NEKTextParams *)setWidthWidth:(int32_t)width __attribute__((swift_name("setWidth(width:)")));
- (float)totalPadding __attribute__((swift_name("totalPadding()")));
@property (readonly) NEKEvsColor * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NEKEvsColor * _Nullable borderColor __attribute__((swift_name("borderColor")));
@property (readonly) float borderCornerRadiusPx __attribute__((swift_name("borderCornerRadiusPx")));
@property (readonly) float borderWidthPx __attribute__((swift_name("borderWidthPx")));
@property (readonly) NEKFontFamily * _Nullable customFont __attribute__((swift_name("customFont")));
@property (readonly) float fontSize __attribute__((swift_name("fontSize")));
@property (readonly) NEKFontStyle *fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) NEKFontWeight *fontWeight __attribute__((swift_name("fontWeight")));
@property (readonly) NEKInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) BOOL isTransparent __attribute__((swift_name("isTransparent")));
@property (readonly) float lineSpacingPx __attribute__((swift_name("lineSpacingPx")));
@property (readonly) int32_t maxHeight __attribute__((swift_name("maxHeight")));
@property (readonly) int32_t maxLines __attribute__((swift_name("maxLines")));
@property (readonly) int32_t maxWidth __attribute__((swift_name("maxWidth")));
@property (readonly) float paddingPx __attribute__((swift_name("paddingPx")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NEKAlign * _Nullable textAlign __attribute__((swift_name("textAlign")));
@property (readonly) NEKEvsColor *textColor __attribute__((swift_name("textColor")));
@property (readonly) NEKInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("Drawable")))
@interface NEKDrawable : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKUIElementsGroup * _Nullable)getParent __attribute__((swift_name("getParent()")));
- (BOOL)hasParent __attribute__((swift_name("hasParent()")));
- (NEKDrawable *)invalidate __attribute__((swift_name("invalidate()")));
- (BOOL)isAttachedToScreen __attribute__((swift_name("isAttachedToScreen()")));
- (BOOL)isVisible __attribute__((swift_name("isVisible()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onAttachedToScreen __attribute__((swift_name("onAttachedToScreen()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onBeforeDetachFromScreen __attribute__((swift_name("onBeforeDetachFromScreen()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onBeforeDrawTimestampMs:(int64_t)timestampMs __attribute__((swift_name("onBeforeDraw(timestampMs:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCreate __attribute__((swift_name("onCreate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKDrawable *)setVisibilityIsVisible:(BOOL)isVisible __attribute__((swift_name("setVisibility(isVisible:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)wasCreated __attribute__((swift_name("wasCreated()")));
@property (readonly) NSString *Id __attribute__((swift_name("Id")));
@property (readonly) NEKViewport * _Nullable attachedToScreen __attribute__((swift_name("attachedToScreen")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("IArElement")))
@protocol NEKIArElement
@required
- (NEKKotlinFloatArray *)getWorldPosition __attribute__((swift_name("getWorldPosition()")));
- (float)getZIndex __attribute__((swift_name("getZIndex()")));
- (BOOL)isInScreenBounds __attribute__((swift_name("isInScreenBounds()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArModel")))
@interface NEKArModel : NEKDrawable <NEKIArElement>
- (instancetype)initWithP:(NEKArPrimitive *)p __attribute__((swift_name("init(p:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPrimitives:(NSMutableArray<NEKArPrimitive *> *)primitives name:(NSString *)name __attribute__((swift_name("init(primitives:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NEKBoundingSphere *)getBoundingSphere __attribute__((swift_name("getBoundingSphere()")));
- (NEKKotlinFloatArray *)getWorldPosition __attribute__((swift_name("getWorldPosition()")));
- (float)getZIndex __attribute__((swift_name("getZIndex()")));
- (BOOL)isInScreenBounds __attribute__((swift_name("isInScreenBounds()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onAttachedToScreen __attribute__((swift_name("onAttachedToScreen()")));

/**
 * @note annotations
 *   kotlin.ExperimentalUnsignedTypes
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKArModel *)rotateEast:(float)east north:(float)north up:(float)up __attribute__((swift_name("rotate(east:north:up:)")));
- (NEKArModel *)scaleFactor:(float)factor __attribute__((swift_name("scale(factor:)")));
- (NEKArModel *)scaleEast:(float)east north:(float)north up:(float)up __attribute__((swift_name("scale(east:north:up:)")));
- (NEKArModel *)setColorColor:(int32_t)color __attribute__((swift_name("setColor(color:)")));
- (void)setCustomBoundingSphereIndicesPrimitiveIndices:(NEKKotlinIntArray *)primitiveIndices __attribute__((swift_name("setCustomBoundingSphereIndices(primitiveIndices:)")));
- (NEKArModel *)setModelMatrixMat:(NEKKotlinFloatArray *)mat __attribute__((swift_name("setModelMatrix(mat:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NEKArModel *)translateEast:(float)east north:(float)north up:(float)up __attribute__((swift_name("translate(east:north:up:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("UIElement")))
@interface NEKUIElement : NEKDrawable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKUIElement *)addToScreen:(NEKScreen *)screen __attribute__((swift_name("addTo(screen:)")));
- (NEKUIElement *)addToGroup:(NEKUIElementsGroup *)group __attribute__((swift_name("addTo(group:)")));
- (NEKAnimator *)animator __attribute__((swift_name("animator()")));
- (NEKUIElement *)cancelAnimations __attribute__((swift_name("cancelAnimations()")));
- (NEKUIElement *)clearBackgroundColor __attribute__((swift_name("clearBackgroundColor()")));
- (NEKDrawable *)clipShouldClip:(BOOL)shouldClip __attribute__((swift_name("clip(shouldClip:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)drawBackgroundCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("drawBackground(canvas:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)drawBorderCanvas:(NEKCanvasBuffer *)canvas color:(int32_t)color widthPix:(int32_t)widthPix cornerRadiusPix:(float)cornerRadiusPix __attribute__((swift_name("drawBorder(canvas:color:widthPix:cornerRadiusPix:)")));
- (NEKInt * _Nullable)getBackgroundColor __attribute__((swift_name("getBackgroundColor()")));
- (NEKBoundingBox *)getBoundingBox __attribute__((swift_name("getBoundingBox()")));
- (int32_t)getForegroundColor __attribute__((swift_name("getForegroundColor()")));
- (float)getHeight __attribute__((swift_name("getHeight()")));
- (NEKLineStyle *)getLineStyle __attribute__((swift_name("getLineStyle()")));
- (NEKPenShape *)getPenShape __attribute__((swift_name("getPenShape()")));
- (int32_t)getPenThickness __attribute__((swift_name("getPenThickness()")));
- (float)getScreenX __attribute__((swift_name("getScreenX()")));
- (float)getScreenY __attribute__((swift_name("getScreenY()")));
- (float)getWidth __attribute__((swift_name("getWidth()")));
- (float)getX __attribute__((swift_name("getX()")));
- (float)getXEnd __attribute__((swift_name("getXEnd()")));
- (float)getY __attribute__((swift_name("getY()")));
- (float)getYBottom __attribute__((swift_name("getYBottom()")));
- (BOOL)hasAnimation __attribute__((swift_name("hasAnimation()")));
- (NEKUIElement *)invalidate __attribute__((swift_name("invalidate()")));
- (BOOL)isDirty __attribute__((swift_name("isDirty()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKUIElement *)removeAfterRemoveAfterMs:(int64_t)removeAfterMs __attribute__((swift_name("removeAfter(removeAfterMs:)")));
- (NEKUIElement *)removeAfterRemoveAfterMs:(int64_t)removeAfterMs onRemove:(void (^)(NEKUIElement *))onRemove __attribute__((swift_name("removeAfter(removeAfterMs:onRemove:)")));
- (void)removeSelf __attribute__((swift_name("removeSelf()")));
- (void)resetTransformations __attribute__((swift_name("resetTransformations()")));
- (NEKUIElement *)rotateAngleDegrees:(float)angleDegrees __attribute__((swift_name("rotate(angleDegrees:)")));
- (NEKUIElement *)rotateAngleDegrees:(float)angleDegrees px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("rotate(angleDegrees:px:py:pivot:)")));
- (NEKUIElement *)scaleFactor:(float)factor __attribute__((swift_name("scale(factor:)")));
- (NEKUIElement *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (NEKUIElement *)scaleFactor:(float)factor px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("scale(factor:px:py:pivot:)")));
- (NEKUIElement *)scaleSx:(float)sx sy:(float)sy px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("scale(sx:sy:px:py:pivot:)")));
- (NEKUIElement *)setBackgroundColorEvsColor:(NEKEvsColor *)evsColor __attribute__((swift_name("setBackgroundColor(evsColor:)")));
- (NEKUIElement *)setBackgroundColorColor:(int32_t)color __attribute__((swift_name("setBackgroundColor(color:)")));
- (NEKUIElement *)setBorderStyleColor:(int32_t)color widthPix:(int32_t)widthPix cornerRadiusPix:(float)cornerRadiusPix __attribute__((swift_name("setBorderStyle(color:widthPix:cornerRadiusPix:)")));
- (NEKUIElement *)setDimensionsX:(float)x y:(float)y width:(float)width height:(float)height __attribute__((swift_name("setDimensions(x:y:width:height:)")));
- (NEKUIElement *)setForegroundColorEvsColor:(NEKEvsColor *)evsColor __attribute__((swift_name("setForegroundColor(evsColor:)")));
- (NEKUIElement *)setForegroundColorColor:(int32_t)color __attribute__((swift_name("setForegroundColor(color:)")));
- (NEKUIElement *)setHeightHeight:(float)height __attribute__((swift_name("setHeight(height:)")));
- (NEKUIElement *)setLineStyleLineStyle:(NEKLineStyle *)lineStyle __attribute__((swift_name("setLineStyle(lineStyle:)")));
- (NEKUIElement *)setPenShapeShape:(NEKPenShape *)shape __attribute__((swift_name("setPenShape(shape:)")));
- (NEKUIElement *)setPenThicknessThicknessPixels:(int32_t)thicknessPixels __attribute__((swift_name("setPenThickness(thicknessPixels:)")));
- (NEKUIElement *)setVisibilityIsVisible:(BOOL)isVisible __attribute__((swift_name("setVisibility(isVisible:)")));
- (NEKUIElement *)setWidthWidth:(float)width __attribute__((swift_name("setWidth(width:)")));
- (NEKUIElement *)setWidthHeightWidth:(float)width height:(float)height __attribute__((swift_name("setWidthHeight(width:height:)")));
- (NEKUIElement *)setXX:(float)x __attribute__((swift_name("setX(x:)")));
- (NEKUIElement *)setXYX:(float)x y:(float)y __attribute__((swift_name("setXY(x:y:)")));
- (NEKUIElement *)setYY:(float)y __attribute__((swift_name("setY(y:)")));
- (NEKUIElement *)showBorderShow:(BOOL)show __attribute__((swift_name("showBorder(show:)")));
- (NEKUIElement *)startAnimations __attribute__((swift_name("startAnimations()")));
- (NEKUIElement *)translateByDx:(float)dx dy:(float)dy __attribute__((swift_name("translateBy(dx:dy:)")));
- (NEKUIElement *)translateToX:(float)x y:(float)y __attribute__((swift_name("translateTo(x:y:)")));
@end

__attribute__((swift_name("UIElementsGroup")))
@interface NEKUIElementsGroup : NEKUIElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKUIElementsGroup *)addUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("add(uiElement:)")));
- (NEKUIElementsGroup *)addAllUiElements:(NSArray<NEKUIElement *> *)uiElements __attribute__((swift_name("addAll(uiElements:)")));
- (NEKViewport * _Nullable)getAttachToScreen __attribute__((swift_name("getAttachToScreen()")));
- (NEKUIElement * _Nullable)getElementByIdId:(NSString *)id __attribute__((swift_name("getElementById(id:)")));
- (NSMutableArray<NEKUIElement *> *)getElements __attribute__((swift_name("getElements()")));
- (int32_t)getElementsCount __attribute__((swift_name("getElementsCount()")));
- (BOOL)getHasElements __attribute__((swift_name("getHasElements()")));
- (NEKUIElementsGroup *)removeUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("remove(uiElement:)")));
- (NEKUIElementsGroup *)removeAll __attribute__((swift_name("removeAll()")));
- (NEKUIElementsGroup *)sendToBackUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("sendToBack(uiElement:)")));
- (NEKUIElementsGroup *)setTopmostUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("setTopmost(uiElement:)")));
@end

__attribute__((swift_name("ArWindow")))
@interface NEKArWindow : NEKUIElementsGroup <NEKIArElement>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithQtrn:(NEKQuaternion *)qtrn __attribute__((swift_name("init(qtrn:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTargetPosition:(NEKArWindowGeoLocation *)targetPosition userPosition:(NEKArWindowGeoLocation *)userPosition __attribute__((swift_name("init(targetPosition:userPosition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEast:(float)east north:(float)north up:(float)up __attribute__((swift_name("init(east:north:up:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithQtrn:(NEKQuaternion *)qtrn xEye:(float)xEye yEye:(float)yEye zEye:(float)zEye __attribute__((swift_name("init(qtrn:xEye:yEye:zEye:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NEKUIElementsGroup *)addUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("add(uiElement:)")));
- (NEKUIElementsGroup *)addAllUiElements:(NSArray<NEKUIElement *> *)uiElements __attribute__((swift_name("addAll(uiElements:)")));
- (NEKKotlinFloatArray *)getWorldPosition __attribute__((swift_name("getWorldPosition()")));
- (float)getZIndex __attribute__((swift_name("getZIndex()")));
- (BOOL)isInScreenBounds __attribute__((swift_name("isInScreenBounds()")));
- (NEKArWindow *)setEyePositionQtrn:(NEKQuaternion *)qtrn __attribute__((swift_name("setEyePosition(qtrn:)")));
- (NEKArWindow *)setEyePositionQtrn:(NEKQuaternion *)qtrn eyePosition:(NEKKotlinFloatArray *)eyePosition __attribute__((swift_name("setEyePosition(qtrn:eyePosition:)")));
- (NEKArWindow *)setEyePositionQtrn:(NEKQuaternion *)qtrn eyeRight:(float)eyeRight eyeUp:(float)eyeUp eyeBack:(float)eyeBack __attribute__((swift_name("setEyePosition(qtrn:eyeRight:eyeUp:eyeBack:)")));
- (NEKArWindow *)setGeoPositionTargetPosition:(NEKArWindowGeoLocation *)targetPosition userPosition:(NEKArWindowGeoLocation *)userPosition __attribute__((swift_name("setGeoPosition(targetPosition:userPosition:)")));
- (NEKArWindow *)setWorldPositionWorldPosition:(NEKKotlinFloatArray *)worldPosition __attribute__((swift_name("setWorldPosition(worldPosition:)")));
- (NEKArWindow *)setWorldPositionEast:(float)east north:(float)north up:(float)up __attribute__((swift_name("setWorldPosition(east:north:up:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArWindow.GeoLocation")))
@interface NEKArWindowGeoLocation : NEKBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude altitude:(double)altitude __attribute__((swift_name("init(latitude:longitude:altitude:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NEKKotlinDoubleArray *lla __attribute__((swift_name("lla")));
@end

__attribute__((swift_name("ArPrimitive")))
@interface NEKArPrimitive : NEKBase
- (int32_t)forEachWorldPointIndexExecute:(void (^)(NEKInt *))execute __attribute__((swift_name("forEachWorldPointIndex(execute:)")));
- (int32_t)getColor __attribute__((swift_name("getColor()")));
- (void)setColorColor:(int32_t)color __attribute__((swift_name("setColor(color:)")));
@property float maxDepth __attribute__((swift_name("maxDepth")));
@property float minDepth __attribute__((swift_name("minDepth")));
@property (readonly) NEKKotlinFloatArray *screenPoints __attribute__((swift_name("screenPoints")));
@property int32_t screenPointsValid __attribute__((swift_name("screenPointsValid")));
@property (readonly) NEKKotlinFloatArray *worldPoints __attribute__((swift_name("worldPoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArLines")))
@interface NEKArLines : NEKArPrimitive
- (instancetype)initWithWorldPoints:(NEKKotlinFloatArray *)worldPoints color:(int32_t)color lineWidth:(float)lineWidth __attribute__((swift_name("init(worldPoints:color:lineWidth:)"))) __attribute__((objc_designated_initializer));
- (float)getLineWidth __attribute__((swift_name("getLineWidth()")));
- (void)setLineWidthLineWidth:(float)lineWidth __attribute__((swift_name("setLineWidth(lineWidth:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArPoints")))
@interface NEKArPoints : NEKArPrimitive
- (instancetype)initWithWorldPoints:(NEKKotlinFloatArray *)worldPoints color:(int32_t)color pointSize:(float)pointSize __attribute__((swift_name("init(worldPoints:color:pointSize:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArTriangles")))
@interface NEKArTriangles : NEKArPrimitive
- (instancetype)initWithWorldPoints:(NEKKotlinFloatArray *)worldPoints fillColor:(int32_t)fillColor lineWidth:(float)lineWidth __attribute__((swift_name("init(worldPoints:fillColor:lineWidth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWorldPointsReference:(NEKKotlinFloatArray *)worldPointsReference worldPointsIndices:(NEKKotlinIntArray *)worldPointsIndices fillColor:(int32_t)fillColor lineWidth:(float)lineWidth __attribute__((swift_name("init(worldPointsReference:worldPointsIndices:fillColor:lineWidth:)"))) __attribute__((objc_designated_initializer));
- (int32_t)forEachWorldPointIndexExecute:(void (^)(NEKInt *))execute __attribute__((swift_name("forEachWorldPointIndex(execute:)")));
- (float)getLineWidth __attribute__((swift_name("getLineWidth()")));
- (void)setLineWidthLineWidth:(float)lineWidth __attribute__((swift_name("setLineWidth(lineWidth:)")));
@end

__attribute__((swift_name("ArScreen")))
@interface NEKArScreen : NEKViewport
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (void)addArElement:(NEKArModel *)arElement __attribute__((swift_name("add(arElement:)")));
- (void)addArWindow:(NEKArWindow *)arWindow __attribute__((swift_name("add(arWindow:)")));
- (void)addUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("add(uiElement:)")));
- (NEKDrawable * _Nullable)getElementByIdId:(NSString *)id __attribute__((swift_name("getElementById(id:)")));
- (NSMutableArray<NEKDrawable *> *)getElements __attribute__((swift_name("getElements()")));
- (BOOL)getHasElements __attribute__((swift_name("getHasElements()")));
- (float)getHorizontalFovDeg __attribute__((swift_name("getHorizontalFovDeg()")));
- (float)getVerticalFovDeg __attribute__((swift_name("getVerticalFovDeg()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCreate __attribute__((swift_name("onCreate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPause __attribute__((swift_name("onPause()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onResume __attribute__((swift_name("onResume()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onUpdateUITimestampMs:(int64_t)timestampMs __attribute__((swift_name("onUpdateUI(timestampMs:)")));
- (void)removeArElement:(NEKArModel *)arElement __attribute__((swift_name("remove(arElement:)")));
- (void)removeArWindow:(NEKArWindow *)arWindow __attribute__((swift_name("remove(arWindow:)")));
- (void)removeUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("remove(uiElement:)")));
- (void)removeSelf __attribute__((swift_name("removeSelf()")));
- (void)sendToBackUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("sendToBack(uiElement:)")));
- (void)setTopmostUiElement:(NEKUIElement *)uiElement __attribute__((swift_name("setTopmost(uiElement:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property BOOL keepSensorsOn __attribute__((swift_name("keepSensorsOn")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NEKCalibrationStatus * _Nullable lastCalibrationStatus __attribute__((swift_name("lastCalibrationStatus")));
@property (readonly) NEKQuaternion *quat __attribute__((swift_name("quat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArFactory")))
@interface NEKArFactory : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NEKArFactoryCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArFactory.Companion")))
@interface NEKArFactoryCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKArFactoryCompanion *shared __attribute__((swift_name("shared")));
- (NSMutableArray<NEKArModel *> *)fromObjFileObjFileNameWithoutExtension:(NSString *)objFileNameWithoutExtension __attribute__((swift_name("fromObjFile(objFileNameWithoutExtension:)")));
- (NEKArModel *)makeArrow __attribute__((swift_name("makeArrow()")));
- (NEKArModel *)makeCube __attribute__((swift_name("makeCube()")));
- (NEKArModel *)makeCubeColors:(NEKKotlinArray<NEKEvsColor *> *)colors __attribute__((swift_name("makeCube(colors:)")));
- (NEKArWindow *)makeStar __attribute__((swift_name("makeStar()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoundingSphere")))
@interface NEKBoundingSphere : NEKBase
- (instancetype)initWithCenterWorldPosition:(NEKKotlinFloatArray *)centerWorldPosition radius:(float)radius __attribute__((swift_name("init(centerWorldPosition:radius:)"))) __attribute__((objc_designated_initializer));
- (BOOL)hitTestQuaternion:(NEKQuaternion *)quaternion __attribute__((swift_name("hitTest(quaternion:)")));
- (BOOL)hitTestOriginWorldPosition:(NEKKotlinFloatArray *)originWorldPosition destWorldPosition:(NEKKotlinFloatArray *)destWorldPosition __attribute__((swift_name("hitTest(originWorldPosition:destWorldPosition:)")));
- (BOOL)isInsideWorldPosition:(NEKKotlinFloatArray *)worldPosition __attribute__((swift_name("isInside(worldPosition:)")));
- (BOOL)isIntersectingOther:(NEKBoundingSphere *)other __attribute__((swift_name("isIntersecting(other:)")));
@property (readonly) NEKKotlinFloatArray *centerWorldPosition __attribute__((swift_name("centerWorldPosition")));
@property (readonly) float radius __attribute__((swift_name("radius")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("M")))
@interface NEKM : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)m __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKM *shared __attribute__((swift_name("shared")));
- (void)EulerAnglesBetweenVectorsA:(NEKKotlinFloatArray *)a b:(NEKKotlinFloatArray *)b res:(NEKKotlinFloatArray *)res __attribute__((swift_name("EulerAnglesBetweenVectors(a:b:res:)")));
- (void)LLA2worldTargetLLA:(NEKKotlinDoubleArray *)targetLLA userLLA:(NEKKotlinDoubleArray *)userLLA res:(NEKKotlinFloatArray *)res __attribute__((swift_name("LLA2world(targetLLA:userLLA:res:)")));
- (void)RotationAxis2EulerAxis:(NEKKotlinFloatArray *)axis angle:(float)angle res:(NEKKotlinFloatArray *)res __attribute__((swift_name("RotationAxis2Euler(axis:angle:res:)")));
- (NEKKotlinFloatArray *)Slerp31x31Start:(NEKKotlinFloatArray *)start end:(NEKKotlinFloatArray *)end alpha:(float)alpha __attribute__((swift_name("Slerp31x31(start:end:alpha:)")));
- (NEKKotlinFloatArray *)Slerp31x31vStart:(NEKKotlinFloatArray *)start startOffset:(int32_t)startOffset end:(NEKKotlinFloatArray *)end endOffset:(int32_t)endOffset alpha:(float)alpha __attribute__((swift_name("Slerp31x31v(start:startOffset:end:endOffset:alpha:)")));
- (float)VectorAngleA:(NEKKotlinFloatArray *)a b:(NEKKotlinFloatArray *)b __attribute__((swift_name("VectorAngle(a:b:)")));
- (float)absAngleDiffX:(float)x y:(float)y __attribute__((swift_name("absAngleDiff(x:y:)")));
- (void)concat33x31M1:(NEKKotlinFloatArray *)m1 m2:(NEKKotlinFloatArray *)m2 res:(NEKKotlinFloatArray *)res __attribute__((swift_name("concat33x31(m1:m2:res:)")));
- (void)cross31x31V1:(NEKKotlinFloatArray *)v1 v2:(NEKKotlinFloatArray *)v2 res:(NEKKotlinFloatArray *)res __attribute__((swift_name("cross31x31(v1:v2:res:)")));
- (float)dotA:(NEKKotlinFloatArray *)a b:(NEKKotlinFloatArray *)b __attribute__((swift_name("dot(a:b:)")));
- (float)dotA:(NEKKotlinFloatArray *)a aOffset:(int32_t)aOffset aLength:(int32_t)aLength b:(NEKKotlinFloatArray *)b bOffset:(int32_t)bOffset __attribute__((swift_name("dot(a:aOffset:aLength:b:bOffset:)")));
- (float)dot3x3A:(NEKKotlinFloatArray *)a b:(NEKKotlinFloatArray *)b __attribute__((swift_name("dot3x3(a:b:)")));
- (void)eye2worldEyeVec:(NEKKotlinFloatArray *)eyeVec q:(NEKQuaternion *)q res:(NEKKotlinFloatArray *)res __attribute__((swift_name("eye2world(eyeVec:q:res:)")));
- (void)eye2worldXEye:(float)xEye yEye:(float)yEye zEye:(float)zEye q:(NEKQuaternion *)q res:(NEKKotlinFloatArray *)res __attribute__((swift_name("eye2world(xEye:yEye:zEye:q:res:)")));
- (void)identity3x3Res:(NEKKotlinFloatArray *)res __attribute__((swift_name("identity3x3(res:)")));
- (void)identity4x4Res:(NEKKotlinFloatArray *)res __attribute__((swift_name("identity4x4(res:)")));
- (void)inverse44M:(NEKKotlinFloatArray *)m res:(NEKKotlinFloatArray *)res __attribute__((swift_name("inverse44(m:res:)")));
- (void)invert33M:(NEKKotlinFloatArray *)m res:(NEKKotlinFloatArray *)res __attribute__((swift_name("invert33(m:res:)")));
- (NEKKotlinFloatArray *)lerp31x31Start:(NEKKotlinFloatArray *)start end:(NEKKotlinFloatArray *)end alpha:(float)alpha __attribute__((swift_name("lerp31x31(start:end:alpha:)")));
- (NEKKotlinFloatArray *)lerp31x31vStart:(NEKKotlinFloatArray *)start startOffset:(int32_t)startOffset end:(NEKKotlinFloatArray *)end endOffset:(int32_t)endOffset alpha:(float)alpha __attribute__((swift_name("lerp31x31v(start:startOffset:end:endOffset:alpha:)")));
- (void)mulM:(NEKKotlinFloatArray *)m scalar:(float)scalar __attribute__((swift_name("mul(m:scalar:)")));
- (void)mul33x31M:(NEKKotlinFloatArray *)m v:(NEKKotlinFloatArray *)v res:(NEKKotlinFloatArray *)res __attribute__((swift_name("mul33x31(m:v:res:)")));
- (void)mul33x33M1:(NEKKotlinFloatArray *)m1 m2:(NEKKotlinFloatArray *)m2 res:(NEKKotlinFloatArray *)res __attribute__((swift_name("mul33x33(m1:m2:res:)")));
- (void)mul34x41M:(NEKKotlinFloatArray *)m v:(NEKKotlinFloatArray *)v res:(NEKKotlinFloatArray *)res __attribute__((swift_name("mul34x41(m:v:res:)")));
- (void)mul44x31oneM1:(NEKKotlinFloatArray *)m1 v:(NEKKotlinFloatArray *)v vOffset:(int32_t)vOffset res:(NEKKotlinFloatArray *)res __attribute__((swift_name("mul44x31one(m1:v:vOffset:res:)")));
- (void)mul44x41M1:(NEKKotlinFloatArray *)m1 v:(NEKKotlinFloatArray *)v res:(NEKKotlinFloatArray *)res __attribute__((swift_name("mul44x41(m1:v:res:)")));
- (void)mul44x44M1:(NEKKotlinFloatArray *)m1 m2:(NEKKotlinFloatArray *)m2 res:(NEKKotlinFloatArray *)res __attribute__((swift_name("mul44x44(m1:m2:res:)")));
- (void)normalizeVec:(NEKKotlinFloatArray *)vec __attribute__((swift_name("normalize(vec:)")));
- (void)normalize31Res:(NEKKotlinFloatArray *)res __attribute__((swift_name("normalize31(res:)")));
- (float)normalizeAngleIx:(float)ix __attribute__((swift_name("normalizeAngle(ix:)")));
- (void)perspective4x4Fovy:(float)fovy aspect:(float)aspect zNear:(float)zNear zFar:(float)zFar res:(NEKKotlinFloatArray *)res __attribute__((swift_name("perspective4x4(fovy:aspect:zNear:zFar:res:)")));
- (void)rotMat44Deg:(float)deg x:(float)x y:(float)y z:(float)z res:(NEKKotlinFloatArray *)res __attribute__((swift_name("rotMat44(deg:x:y:z:res:)")));
- (void)rotateMat3x3Deg:(float)deg x:(float)x y:(float)y res:(NEKKotlinFloatArray *)res __attribute__((swift_name("rotateMat3x3(deg:x:y:res:)")));
- (void)scaleMat3x3Sx:(float)sx sy:(float)sy x:(float)x y:(float)y res:(NEKKotlinFloatArray *)res __attribute__((swift_name("scaleMat3x3(sx:sy:x:y:res:)")));
- (void)scaleMat44Sx:(float)sx sy:(float)sy sz:(float)sz res:(NEKKotlinFloatArray *)res __attribute__((swift_name("scaleMat44(sx:sy:sz:res:)")));
- (void)translateMat3x3Tx:(float)tx ty:(float)ty res:(NEKKotlinFloatArray *)res __attribute__((swift_name("translateMat3x3(tx:ty:res:)")));
- (void)translateMat44Tx:(float)tx ty:(float)ty tz:(float)tz res:(NEKKotlinFloatArray *)res __attribute__((swift_name("translateMat44(tx:ty:tz:res:)")));
- (void)transpose33M:(NEKKotlinFloatArray *)m res:(NEKKotlinFloatArray *)res __attribute__((swift_name("transpose33(m:res:)")));
- (void)transpose44M:(NEKKotlinFloatArray *)m res:(NEKKotlinFloatArray *)res __attribute__((swift_name("transpose44(m:res:)")));
- (void)world2eyeWorldVec:(NEKKotlinFloatArray *)worldVec q:(NEKQuaternion *)q outEyeVec:(NEKKotlinFloatArray *)outEyeVec __attribute__((swift_name("world2eye(worldVec:q:outEyeVec:)")));
- (void)wrap33x44M1:(NEKKotlinFloatArray *)m1 res:(NEKKotlinFloatArray *)res __attribute__((swift_name("wrap33x44(m1:res:)")));
- (void)zeroM:(NEKKotlinFloatArray *)m __attribute__((swift_name("zero(m:)")));
@property (readonly) float PI __attribute__((swift_name("PI")));
@property (readonly) float TO_DEG __attribute__((swift_name("TO_DEG")));
@property (readonly) float TO_RAD __attribute__((swift_name("TO_RAD")));
@property (readonly) float TWO_PI __attribute__((swift_name("TWO_PI")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Quaternion")))
@interface NEKQuaternion : NEKBase
- (instancetype)initWithO:(NEKQuaternion *)o __attribute__((swift_name("init(o:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithV:(NEKKotlinFloatArray *)v __attribute__((swift_name("init(v:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX:(float)x y:(float)y z:(float)z w:(float)w __attribute__((swift_name("init(x:y:z:w:)"))) __attribute__((objc_designated_initializer));
- (void)SlerpQ1:(NEKQuaternion *)q1 q2:(NEKQuaternion *)q2 alpha:(float)alpha res:(NEKQuaternion *)res __attribute__((swift_name("Slerp(q1:q2:alpha:res:)")));
- (float)angleA:(NEKQuaternion *)a b:(NEKQuaternion *)b __attribute__((swift_name("angle(a:b:)")));
- (float)dotO:(NEKQuaternion *)o __attribute__((swift_name("dot(o:)")));
- (void)fromEulerYaw:(float)yaw pitch:(float)pitch roll:(float)roll __attribute__((swift_name("fromEuler(yaw:pitch:roll:)")));
- (NEKQuaternion *)fromMat4M:(NEKKotlinFloatArray *)m __attribute__((swift_name("fromMat4(m:)")));
- (NEKQuaternion *)fromRotationVectorAngleRad:(float)angleRad x:(float)x y:(float)y z:(float)z __attribute__((swift_name("fromRotationVector(angleRad:x:y:z:)")));
- (void)getValuesRes:(NEKKotlinFloatArray *)res __attribute__((swift_name("getValues(res:)")));
- (void)identity __attribute__((swift_name("identity()")));
- (void)inverseRes:(NEKQuaternion *)res __attribute__((swift_name("inverse(res:)")));
- (void)inverseQ:(NEKQuaternion *)q res:(NEKQuaternion *)res __attribute__((swift_name("inverse(q:res:)")));
- (float)length __attribute__((swift_name("length()")));
- (NEKQuaternion *)mulO:(NEKQuaternion *)o __attribute__((swift_name("mul(o:)")));
- (void)mulQ:(NEKQuaternion *)q o:(NEKQuaternion *)o res:(NEKQuaternion *)res __attribute__((swift_name("mul(q:o:res:)")));
- (void)normalize __attribute__((swift_name("normalize()")));
- (void)normalizeQ:(NEKQuaternion *)q __attribute__((swift_name("normalize(q:)")));
- (void)rotateVectorV3:(NEKKotlinFloatArray *)v3 out:(NEKKotlinFloatArray *)out offset:(int32_t)offset __attribute__((swift_name("rotateVector(v3:out:offset:)")));
- (void)rotateVectorX:(float)x y:(float)y z:(float)z out:(NEKKotlinFloatArray *)out offset:(int32_t)offset __attribute__((swift_name("rotateVector(x:y:z:out:offset:)")));
- (void)setValuesO:(NEKQuaternion *)o __attribute__((swift_name("setValues(o:)")));
- (void)setValuesV:(NEKKotlinFloatArray *)v __attribute__((swift_name("setValues(v:)")));
- (void)setValuesX:(float)x y:(float)y z:(float)z w:(float)w __attribute__((swift_name("setValues(x:y:z:w:)")));
- (void)swapRotationDirection __attribute__((swift_name("swapRotationDirection()")));
- (NEKKotlinFloatArray *)toEuler __attribute__((swift_name("toEuler()")));
- (void)toMat4Res:(NEKKotlinFloatArray *)res __attribute__((swift_name("toMat4(res:)")));
- (void)toRotationVectorVec:(NEKKotlinFloatArray *)vec __attribute__((swift_name("toRotationVector(vec:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)zero __attribute__((swift_name("zero()")));
@property (readonly) BOOL isIdentity __attribute__((swift_name("isIdentity")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property float w __attribute__((swift_name("w")));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@property float z __attribute__((swift_name("z")));
@end

__attribute__((swift_name("PopupMessage")))
@interface NEKPopupMessage : NEKBase
- (instancetype)initWithView:(NEKUIElement *)view alignV:(NEKAlignV *)alignV timeoutMs:(int32_t)timeoutMs onClosed:(void (^ _Nullable)(NEKPopupMessage *))onClosed __attribute__((swift_name("init(view:alignV:timeoutMs:onClosed:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isVisible __attribute__((swift_name("isVisible()")));
- (void)reTriggerTimeout __attribute__((swift_name("reTriggerTimeout()")));
@property (readonly) NEKAlignV *alignV __attribute__((swift_name("alignV")));
@property int32_t enterAnimDuration __attribute__((swift_name("enterAnimDuration")));
@property int32_t exitAnimDuration __attribute__((swift_name("exitAnimDuration")));
@property float marginVertical __attribute__((swift_name("marginVertical")));
@property (readonly) void (^ _Nullable onClosed)(NEKPopupMessage *) __attribute__((swift_name("onClosed")));
@property (readonly) int32_t timeoutMs __attribute__((swift_name("timeoutMs")));
@property (readonly) NEKUIElement *view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivationResult")))
@interface NEKActivationResult : NEKKotlinEnum<NEKActivationResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKActivationResult *ok __attribute__((swift_name("ok")));
@property (class, readonly) NEKActivationResult *certificatebadormalformed __attribute__((swift_name("certificatebadormalformed")));
@property (class, readonly) NEKActivationResult *certificateexpired __attribute__((swift_name("certificateexpired")));
@property (class, readonly) NEKActivationResult *certificateinvalidsignature __attribute__((swift_name("certificateinvalidsignature")));
@property (class, readonly) NEKActivationResult *certificateinvalidapp __attribute__((swift_name("certificateinvalidapp")));
@property (class, readonly) NEKActivationResult *certificateinvalidserial __attribute__((swift_name("certificateinvalidserial")));
@property (class, readonly) NEKActivationResult *certificateinvalidversion __attribute__((swift_name("certificateinvalidversion")));
@property (class, readonly) NEKActivationResult *servererror __attribute__((swift_name("servererror")));
@property (class, readonly) NEKActivationResult *missingfile __attribute__((swift_name("missingfile")));
+ (NEKKotlinArray<NEKActivationResult *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKActivationResult *> *entries __attribute__((swift_name("entries")));
- (BOOL)hasError __attribute__((swift_name("hasError()")));
- (BOOL)isOk __attribute__((swift_name("isOk()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsApiTokenClaims")))
@interface NEKEvsApiTokenClaims : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setAndParseScopeScope:(NSString *)scope __attribute__((swift_name("setAndParseScope(scope:)")));
@property NSString * _Nullable appNamespace __attribute__((swift_name("appNamespace")));
@property NSString * _Nullable appType __attribute__((swift_name("appType")));
@property NEKMutableDictionary<NSString *, id> *claims __attribute__((swift_name("claims")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NEKKotlinArray<NSString *> *scopes __attribute__((swift_name("scopes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsApiTokenClaimsResult")))
@interface NEKEvsApiTokenClaimsResult : NEKBase
- (instancetype)initWithResult:(NEKActivationResult *)result claims:(NEKEvsApiTokenClaims *)claims __attribute__((swift_name("init(result:claims:)"))) __attribute__((objc_designated_initializer));
- (NEKAppErrorCode * _Nullable)toAppError __attribute__((swift_name("toAppError()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *apiToken __attribute__((swift_name("apiToken")));
@property NEKEvsApiTokenClaims *claims __attribute__((swift_name("claims")));
@property NEKActivationResult *result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsGlassesClaims")))
@interface NEKEvsGlassesClaims : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *appNamespace __attribute__((swift_name("appNamespace")));
@property NSString *appVersion __attribute__((swift_name("appVersion")));
@property NEKMutableDictionary<NSString *, id> *claims __attribute__((swift_name("claims")));
@property int64_t expirationTimestamp __attribute__((swift_name("expirationTimestamp")));
@property NEKKotlinByteArray *glassesCertificate __attribute__((swift_name("glassesCertificate")));
@property NSString *glassesSerial __attribute__((swift_name("glassesSerial")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsGlassesClaimsResult")))
@interface NEKEvsGlassesClaimsResult : NEKBase
- (instancetype)initWithResult:(NEKActivationResult *)result claims:(NEKEvsGlassesClaims *)claims __attribute__((swift_name("init(result:claims:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property NEKEvsGlassesClaims *claims __attribute__((swift_name("claims")));
@property NEKActivationResult *result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsPhoneNotification")))
@interface NEKEvsPhoneNotification : NEKBase
- (instancetype)initWithMessage:(NSString *)message title:(NSString *)title subTitle:(NSString *)subTitle appName:(NSString *)appName time:(NSString *)time __attribute__((swift_name("init(message:title:subTitle:appName:time:)"))) __attribute__((objc_designated_initializer));
- (NEKEvsPhoneNotification *)doCopyMessage:(NSString *)message title:(NSString *)title subTitle:(NSString *)subTitle appName:(NSString *)appName time:(NSString *)time __attribute__((swift_name("doCopy(message:title:subTitle:appName:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *appName __attribute__((swift_name("appName")));
@property NEKImageData * _Nullable largeIcon __attribute__((swift_name("largeIcon")));
@property NSString *message __attribute__((swift_name("message")));
@property NEKImageData * _Nullable smallIcon __attribute__((swift_name("smallIcon")));
@property NSString *subTitle __attribute__((swift_name("subTitle")));
@property NSString *time __attribute__((swift_name("time")));
@property NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailedToConnectReason")))
@interface NEKFailedToConnectReason : NEKKotlinEnum<NEKFailedToConnectReason *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKFailedToConnectReason *generalerror __attribute__((swift_name("generalerror")));
@property (class, readonly) NEKFailedToConnectReason *failedpairing __attribute__((swift_name("failedpairing")));
+ (NEKKotlinArray<NEKFailedToConnectReason *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKFailedToConnectReason *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("HttpRequestCallback")))
@protocol NEKHttpRequestCallback
@required
- (void)onHttpErrorError:(NSString *)error __attribute__((swift_name("onHttpError(error:)")));
- (void)onHttpSuccessResponse:(NSString *)response __attribute__((swift_name("onHttpSuccess(response:)")));
@end

__attribute__((swift_name("IEvsCommunicationChannel")))
@protocol NEKIEvsCommunicationChannel
@required
- (BOOL)connect __attribute__((swift_name("connect()")));
- (BOOL)connectSecured __attribute__((swift_name("connectSecured()")));
- (BOOL)disconnect __attribute__((swift_name("disconnect()")));
- (int32_t)getMtuSize __attribute__((swift_name("getMtuSize()")));
- (BOOL)isAdapterEnabled __attribute__((swift_name("isAdapterEnabled()")));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));
- (BOOL)isConnecting __attribute__((swift_name("isConnecting()")));
- (int32_t)registerEventsListener:(id<NEKIEvsCommunicationChannelListener>)listener __attribute__((swift_name("registerEvents(listener:)")));
- (BOOL)requestBatteryReadCallback:(void (^)(NEKInt *))callback __attribute__((swift_name("requestBatteryRead(callback:)")));
- (BOOL)requestRssiReadCallback:(void (^)(NEKInt *))callback __attribute__((swift_name("requestRssiRead(callback:)")));
- (void)setDeviceInfoId:(NSString *)id name:(NSString *)name __attribute__((swift_name("setDeviceInfo(id:name:)")));
- (void)unregisterEventsWithId:(int32_t)withId __attribute__((swift_name("unregisterEvents(withId:)")));
@end

__attribute__((swift_name("IBleDevice")))
@protocol NEKIBleDevice <NEKIEvsCommunicationChannel>
@required
- (BOOL)hasConsumers __attribute__((swift_name("hasConsumers()")));
- (NSString *)name_ __attribute__((swift_name("name()")));
- (void)registerNotifyServiceUUID:(NSString *)serviceUUID charaUUID:(NSString *)charaUUID listener:(id<NEKIEvsCommunicationChannelListener>)listener __attribute__((swift_name("registerNotify(serviceUUID:charaUUID:listener:)")));
- (BOOL)sendNowServiceUUID:(NSString *)serviceUUID charaUUID:(NSString *)charaUUID data:(NEKKotlinByteArray *)data __attribute__((swift_name("sendNow(serviceUUID:charaUUID:data:)")));
- (void)unregisterNotifyServiceUUID:(NSString *)serviceUUID charaUUID:(NSString *)charaUUID listener:(id<NEKIEvsCommunicationChannelListener>)listener __attribute__((swift_name("unregisterNotify(serviceUUID:charaUUID:listener:)")));
@property BOOL enableAutoConnect __attribute__((swift_name("enableAutoConnect")));
@end

__attribute__((swift_name("IEvsClientUIManager")))
@protocol NEKIEvsClientUIManager
@required
- (BOOL)showUIName:(NSString *)name options:(NEKMutableSet<NSString *> *)options __attribute__((swift_name("showUI(name:options:)")));
@end

__attribute__((swift_name("IEvsCommunicationChannelListener")))
@protocol NEKIEvsCommunicationChannelListener
@required
- (void)onAdapterStateChangedIsEnabled:(BOOL)isEnabled __attribute__((swift_name("onAdapterStateChanged(isEnabled:)")));
- (void)onConnected __attribute__((swift_name("onConnected()")));
- (void)onConnecting __attribute__((swift_name("onConnecting()")));
- (void)onDisconnected __attribute__((swift_name("onDisconnected()")));
- (void)onFailedToConnectReason:(NEKFailedToConnectReason *)reason __attribute__((swift_name("onFailedToConnect(reason:)")));
- (void)onMtuChangedMtu:(int32_t)mtu __attribute__((swift_name("onMtuChanged(mtu:)")));
- (void)onNewDataTimestamp:(int64_t)timestamp data:(NEKKotlinByteArray *)data __attribute__((swift_name("onNewData(timestamp:data:)")));
@end

__attribute__((swift_name("IEvsContext")))
@protocol NEKIEvsContext
@required
- (id<NEKIEvsClientUIManager>)getClientUIManager __attribute__((swift_name("getClientUIManager()")));
- (id<NEKIEvsGlassesChannel>)getCommChannel __attribute__((swift_name("getCommChannel()")));
- (id<NEKIEvsController>)getController __attribute__((swift_name("getController()")));
- (id<NEKIEvsNotificationsService> _Nullable)getNotificationService __attribute__((swift_name("getNotificationService()")));
- (id<NEKIEvsPreferences>)getPersistentPreferences __attribute__((swift_name("getPersistentPreferences()")));
- (id<NEKIEvsResourcesManager>)getResourcesManager __attribute__((swift_name("getResourcesManager()")));
- (NEKIEvsSensorsFusionManager *)getSensorsFusionManager __attribute__((swift_name("getSensorsFusionManager()")));
- (void)terminate __attribute__((swift_name("terminate()")));
@end

__attribute__((swift_name("IEvsDataProvider")))
@protocol NEKIEvsDataProvider
@required
- (void)handledState:(NEKIEvsDataProviderProviderState *)state __attribute__((swift_name("handled(state:)")));
- (BOOL)hasData __attribute__((swift_name("hasData()")));
- (int32_t)popToFillBuffer:(NEKKotlinByteArray *)buffer offset:(int32_t)offset __attribute__((swift_name("popToFill(buffer:offset:)")));
- (BOOL)shouldCompress __attribute__((swift_name("shouldCompress()")));
- (BOOL)shouldHandleAsync __attribute__((swift_name("shouldHandleAsync()")));
- (int32_t)size __attribute__((swift_name("size()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IEvsDataProviderProviderState")))
@interface NEKIEvsDataProviderProviderState : NEKKotlinEnum<NEKIEvsDataProviderProviderState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKIEvsDataProviderProviderState *pending __attribute__((swift_name("pending")));
@property (class, readonly) NEKIEvsDataProviderProviderState *sent __attribute__((swift_name("sent")));
@property (class, readonly) NEKIEvsDataProviderProviderState *skipped __attribute__((swift_name("skipped")));
@property (class, readonly) NEKIEvsDataProviderProviderState *failed __attribute__((swift_name("failed")));
+ (NEKKotlinArray<NEKIEvsDataProviderProviderState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKIEvsDataProviderProviderState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("IEvsGlassesChannel")))
@protocol NEKIEvsGlassesChannel <NEKIEvsCommunicationChannel>
@required
- (void)clearSendQueuePriority:(NEKSendPriority *)priority __attribute__((swift_name("clearSendQueue(priority:)")));
- (NSString *)getGlassesName __attribute__((swift_name("getGlassesName()")));
- (BOOL)isFastChannel __attribute__((swift_name("isFastChannel()")));
- (BOOL)isSimulator __attribute__((swift_name("isSimulator()")));
- (void)reportConnectionIntervalIntervalMs:(int32_t)intervalMs __attribute__((swift_name("reportConnectionInterval(intervalMs:)")));
- (void)sendDataDataProvider:(id<NEKIEvsDataProvider>)dataProvider priority:(NEKSendPriority *)priority flush:(BOOL)flush __attribute__((swift_name("sendData(dataProvider:priority:flush:)")));
@end

__attribute__((swift_name("IEvsNotificationEvents")))
@protocol NEKIEvsNotificationEvents
@required
- (void)onNewNotificationNotification:(NEKEvsPhoneNotification *)notification __attribute__((swift_name("onNewNotification(notification:)")));
@end

__attribute__((swift_name("IEvsNotificationsService")))
@protocol NEKIEvsNotificationsService <NEKIEvsAddOn>
@required
- (BOOL)disable __attribute__((swift_name("disable()")));
- (BOOL)enable __attribute__((swift_name("enable()")));
- (BOOL)isEnabled __attribute__((swift_name("isEnabled()")));
- (void)registerNotificationListener:(id<NEKIEvsNotificationEvents>)notificationListener __attribute__((swift_name("register(notificationListener:)")));
- (void)unregisterNotificationListener:(id<NEKIEvsNotificationEvents>)notificationListener __attribute__((swift_name("unregister(notificationListener:)")));
@end

__attribute__((swift_name("IEvsPreferences")))
@protocol NEKIEvsPreferences
@required
- (int16_t)getBrightness __attribute__((swift_name("getBrightness()")));
- (NSString * _Nullable)getConfiguredControllerDeviceId __attribute__((swift_name("getConfiguredControllerDeviceId()")));
- (NSString * _Nullable)getConfiguredControllerName __attribute__((swift_name("getConfiguredControllerName()")));
- (NSString * _Nullable)getConfiguredGlassesDeviceId __attribute__((swift_name("getConfiguredGlassesDeviceId()")));
- (NSString * _Nullable)getConfiguredGlassesName __attribute__((swift_name("getConfiguredGlassesName()")));
- (NSString *)getLanguage __attribute__((swift_name("getLanguage()")));
- (float)getRenderingCenterX __attribute__((swift_name("getRenderingCenterX()")));
- (float)getRenderingCenterY __attribute__((swift_name("getRenderingCenterY()")));
- (NSString *)getUnits __attribute__((swift_name("getUnits()")));
- (BOOL)isDebugLayout __attribute__((swift_name("isDebugLayout()")));
- (BOOL)isShowBordersActive __attribute__((swift_name("isShowBordersActive()")));
- (BOOL)loadBoolKey:(NSString *)key default:(BOOL)default_ __attribute__((swift_name("loadBool(key:default:)")));
- (NEKKotlinByteArray * _Nullable)loadByteArrayKey:(NSString *)key __attribute__((swift_name("loadByteArray(key:)")));
- (int32_t)loadIntKey:(NSString *)key default:(int32_t)default_ __attribute__((swift_name("loadInt(key:default:)")));
- (int64_t)loadLongKey:(NSString *)key default:(int64_t)default_ __attribute__((swift_name("loadLong(key:default:)")));
- (NSString * _Nullable)loadStringKey:(NSString *)key __attribute__((swift_name("loadString(key:)")));
- (void)saveBoolKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("saveBool(key:value:)")));
- (void)saveByteArrayKey:(NSString *)key value:(NEKKotlinByteArray * _Nullable)value __attribute__((swift_name("saveByteArray(key:value:)")));
- (void)saveIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("saveInt(key:value:)")));
- (void)saveLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("saveLong(key:value:)")));
- (void)saveStringKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("saveString(key:value:)")));
- (void)setBrightnessValue:(int16_t)value __attribute__((swift_name("setBrightness(value:)")));
- (void)setConfiguredControllerDeviceId:(NSString * _Nullable)deviceId name:(NSString * _Nullable)name __attribute__((swift_name("setConfiguredController(deviceId:name:)")));
- (void)setConfiguredGlassesDeviceId:(NSString * _Nullable)deviceId name:(NSString * _Nullable)name __attribute__((swift_name("setConfiguredGlasses(deviceId:name:)")));
- (void)setDebugLayoutDebugLayout:(BOOL)debugLayout __attribute__((swift_name("setDebugLayout(debugLayout:)")));
- (void)setRenderingCenterXCenterX:(float)centerX __attribute__((swift_name("setRenderingCenterX(centerX:)")));
- (void)setRenderingCenterYCenterY:(float)centerY __attribute__((swift_name("setRenderingCenterY(centerY:)")));
- (void)setShowBordersValue:(BOOL)value __attribute__((swift_name("setShowBorders(value:)")));
@end

__attribute__((swift_name("IEvsRawInertialSensorsEvents")))
@protocol NEKIEvsRawInertialSensorsEvents
@required
- (void)onSensorSType:(NEKSensorType *)sType timestamp:(int64_t)timestamp x:(int16_t)x y:(int16_t)y z:(int16_t)z __attribute__((swift_name("onSensor(sType:timestamp:x:y:z:)")));
- (void)onTemperatureTimestamp:(int64_t)timestamp magTempC:(float)magTempC gyroTempC:(float)gyroTempC accTempC:(float)accTempC __attribute__((swift_name("onTemperature(timestamp:magTempC:gyroTempC:accTempC:)")));
@end

__attribute__((swift_name("IEvsResourcesManager")))
@protocol NEKIEvsResourcesManager
@required
- (NEKImageData * _Nullable)createImageFromTextTextImageBuilder:(NEKTextParams *)textImageBuilder __attribute__((swift_name("createImageFromText(textImageBuilder:)")));
- (NSString *)getAppVersion __attribute__((swift_name("getAppVersion()")));
- (NSString *)getBuildDescription __attribute__((swift_name("getBuildDescription()")));
- (NSString *)getNamespaceOrBundleId __attribute__((swift_name("getNamespaceOrBundleId()")));
- (int32_t)getPlatformBatteryPercentage __attribute__((swift_name("getPlatformBatteryPercentage()")));
- (BOOL)isFileExistFileName:(NSString *)fileName __attribute__((swift_name("isFileExist(fileName:)")));
- (NEKEvsApiTokenClaimsResult *)loadAndValidateApiKeyDataFileNameWithoutExt:(NSString *)fileNameWithoutExt extensionType:(NSString *)extensionType bas64PublicKey:(NSString *)bas64PublicKey __attribute__((swift_name("loadAndValidateApiKeyData(fileNameWithoutExt:extensionType:bas64PublicKey:)")));
- (NEKKotlinByteArray * _Nullable)loadCertificateDataFileNameWithoutExt:(NSString *)fileNameWithoutExt __attribute__((swift_name("loadCertificateData(fileNameWithoutExt:)")));
- (NEKKotlinByteArray * _Nullable)loadDefaultCertificateData __attribute__((swift_name("loadDefaultCertificateData()")));
- (NEKKotlinByteArray * _Nullable)loadFileName:(NSString *)name extensionType:(NSString *)extensionType __attribute__((swift_name("loadFile(name:extensionType:)")));
- (NEKFontData * _Nullable)loadFontName:(NSString *)name fontType:(NEKFontType *)fontType __attribute__((swift_name("loadFont(name:fontType:)")));
- (NEKImageData * _Nullable)loadImageName:(NSString *)name imageType:(NEKImageType *)imageType __attribute__((swift_name("loadImage(name:imageType:)")));
- (NEKImageData * _Nullable)loadImageAndResizeName:(NSString *)name imageType:(NEKImageType *)imageType w:(int32_t)w h:(int32_t)h __attribute__((swift_name("loadImageAndResize(name:imageType:w:h:)")));
- (NEKKotlinByteArray * _Nullable)loadOtaDataName:(NSString *)name extensionType:(NSString *)extensionType __attribute__((swift_name("loadOtaData(name:extensionType:)")));
- (void)loadOtasMetaDataOtaVersionRef:(NSMutableArray<NEKOtaVersion *> *)otaVersionRef __attribute__((swift_name("loadOtasMetaData(otaVersionRef:)")));
- (void)makeHttpRequestAsyncUrlString:(NSString *)urlString token:(NSString *)token callback:(id<NEKHttpRequestCallback>)callback __attribute__((swift_name("makeHttpRequestAsync(urlString:token:callback:)")));
- (NEKImageData * _Nullable)resizeImageAsJpgData:(NEKKotlinByteArray *)data maxWidth:(int32_t)maxWidth maxHeight:(int32_t)maxHeight compression:(int32_t)compression __attribute__((swift_name("resizeImageAsJpg(data:maxWidth:maxHeight:compression:)")));
- (NEKImageData * _Nullable)resizeImageAsPngData:(NEKKotlinByteArray *)data maxWidth:(int32_t)maxWidth maxHeight:(int32_t)maxHeight __attribute__((swift_name("resizeImageAsPng(data:maxWidth:maxHeight:)")));
- (void)sleepMs:(int64_t)ms __attribute__((swift_name("sleep(ms:)")));
- (int64_t)timestampMs __attribute__((swift_name("timestampMs()")));
- (NEKEvsApiTokenClaimsResult *)validateAndParseCustomApiKeyDataToken:(NSString *)token bas64PublicKey:(NSString *)bas64PublicKey __attribute__((swift_name("validateAndParseCustomApiKeyData(token:bas64PublicKey:)")));
- (NEKEvsGlassesClaimsResult *)validateTokenAndGetGlassesCertificateClaimsPublicKeyBase64:(NSString *)publicKeyBase64 token:(NSString *)token __attribute__((swift_name("validateTokenAndGetGlassesCertificateClaims(publicKeyBase64:token:)")));
@end

__attribute__((swift_name("IEvsSensorsFusionManager")))
@interface NEKIEvsSensorsFusionManager : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NEKLosData * _Nullable)getFusedLosShouldCalcQuaternion:(BOOL)shouldCalcQuaternion shouldCalcYpr:(BOOL)shouldCalcYpr __attribute__((swift_name("getFusedLos(shouldCalcQuaternion:shouldCalcYpr:)")));
- (NEKSensorData * _Nullable)getFusedSensorSensorType:(NEKSensorType *)sensorType __attribute__((swift_name("getFusedSensor(sensorType:)")));
- (float)getLastGetFusedLosResult __attribute__((swift_name("getLastGetFusedLosResult()")));
- (int32_t)getLosInitResult __attribute__((swift_name("getLosInitResult()")));
- (BOOL)getPredictionEnabled __attribute__((swift_name("getPredictionEnabled()")));
- (NSString *)getUserSensorsCalibrationData __attribute__((swift_name("getUserSensorsCalibrationData()")));
- (int64_t)getUserSensorsCalibrationTimestamp __attribute__((swift_name("getUserSensorsCalibrationTimestamp()")));
- (int32_t)onSensorBulkData:(NEKKotlinByteArray *)data offset:(int32_t)offset __attribute__((swift_name("onSensorBulk(data:offset:)")));
- (void)onSensorsCalibrationDataData:(NEKKotlinByteArray *)data userCalibrationData:(NEKKotlinByteArray * _Nullable)userCalibrationData freqHz:(int32_t)freqHz frameSize:(int32_t)frameSize __attribute__((swift_name("onSensorsCalibrationData(data:userCalibrationData:freqHz:frameSize:)")));
- (void)setMagneticDeclinationDeclinationRad:(float)declinationRad __attribute__((swift_name("setMagneticDeclination(declinationRad:)")));
- (void)setPredictionConstantPredictionConst:(int64_t)predictionConst __attribute__((swift_name("setPredictionConstant(predictionConst:)")));
- (void)setPredictionEnabledOn:(BOOL)on __attribute__((swift_name("setPredictionEnabled(on:)")));
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
@end

__attribute__((swift_name("IEvsSetup")))
@protocol NEKIEvsSetup
@required
- (void)setLoggerLogger:(id<NEKIEvsLogger> _Nullable)logger __attribute__((swift_name("setLogger(logger:)")));
- (void)setSystemLoggerLogger:(id<NEKIEvsSystemLogger> _Nullable)logger __attribute__((swift_name("setSystemLogger(logger:)")));
- (BOOL)setupEvsContext:(id<NEKIEvsContext>)evsContext __attribute__((swift_name("setup(evsContext:)")));
@end

__attribute__((swift_name("IEvsTechnician")))
@protocol NEKIEvsTechnician <NEKIEvsAddOn>
@required
- (NEKKotlinArray<NSString *> *)checkBit __attribute__((swift_name("checkBit()")));
- (NSArray<NEKOtaVersion *> *)embeddedOtaVersionsGlasses:(NEKGlassesType *)glasses __attribute__((swift_name("embeddedOtaVersions(glasses:)")));
- (void)enableAutoBrightnessEnable:(BOOL)enable __attribute__((swift_name("enableAutoBrightness(enable:)")));
- (void)enableDisplayFpgaEnable:(BOOL)enable __attribute__((swift_name("enableDisplayFpga(enable:)")));
- (void)enableProximityEnable:(BOOL)enable __attribute__((swift_name("enableProximity(enable:)")));
- (void)execTestStart:(BOOL)start testName:(NSString *)testName params:(NEKMutableDictionary<NSString *, NSString *> * _Nullable)params __attribute__((swift_name("execTest(start:testName:params:)")));
- (void)execTestWithStringParamStart:(BOOL)start testName:(NSString *)testName params:(NSString *)params __attribute__((swift_name("execTestWithStringParam(start:testName:params:)")));
- (int64_t)getAutoScreenOffWhileCharging __attribute__((swift_name("getAutoScreenOffWhileCharging()")));
- (NSString *)getBuildDescription __attribute__((swift_name("getBuildDescription()")));
- (NEKLosData * _Nullable)getFusedLosRaw __attribute__((swift_name("getFusedLosRaw()")));
- (float)getLastGetFusedLosResult __attribute__((swift_name("getLastGetFusedLosResult()")));
- (NEKSystemEti * _Nullable)getLastSystemEtiData __attribute__((swift_name("getLastSystemEtiData()")));
- (int32_t)getLosInitResult __attribute__((swift_name("getLosInitResult()")));
- (NEKKotlinByteArray * _Nullable)getSensorsCalibrationData __attribute__((swift_name("getSensorsCalibrationData()")));
- (NEKSystemStatus * _Nullable)getSystemStatusData __attribute__((swift_name("getSystemStatusData()")));
- (void)injectBleOtaOtaVersion:(NEKOtaVersion *)otaVersion __attribute__((swift_name("injectBleOta(otaVersion:)")));
- (void)injectCpuOtaOtaVersion:(NEKOtaVersion *)otaVersion __attribute__((swift_name("injectCpuOta(otaVersion:)")));
- (BOOL)isDeviceEnabledDType:(NEKDeviceType *)dType __attribute__((swift_name("isDeviceEnabled(dType:)")));
- (BOOL)isTestRunningTestName:(NSString *)testName __attribute__((swift_name("isTestRunning(testName:)")));
- (void)registerAppExtEventsListener:(id<NEKIEvsTechnicianEvents>)listener __attribute__((swift_name("registerAppExtEvents(listener:)")));
- (void)registerRawInertialSensorsEventsListener:(id<NEKIEvsRawInertialSensorsEvents>)listener __attribute__((swift_name("registerRawInertialSensorsEvents(listener:)")));
- (void)requestBlobDataDataType:(NEKBlobDataType *)dataType __attribute__((swift_name("requestBlobData(dataType:)")));
- (void)requestEtiInfo __attribute__((swift_name("requestEtiInfo()")));
- (void)requestSystemInfo __attribute__((swift_name("requestSystemInfo()")));
- (void)rttMeasureDrawOnceOnRttiArrived:(void (^)(NEKRttInfo *))onRttiArrived __attribute__((swift_name("rttMeasureDrawOnce(onRttiArrived:)")));
- (BOOL)runCommandCommand:(NSString *)command __attribute__((swift_name("runCommand(command:)")));
- (void)setAutoScreenOffWhileChargingTurnOffIntervalMs:(int64_t)turnOffIntervalMs __attribute__((swift_name("setAutoScreenOffWhileCharging(turnOffIntervalMs:)")));
- (void)setTickRateRenderingRate:(int16_t)renderingRate bleConnectionRate:(int16_t)bleConnectionRate __attribute__((swift_name("setTickRate(renderingRate:bleConnectionRate:)")));
- (void)setUserLosCalibrationDataUserCalibrationData:(NEKKotlinByteArray * _Nullable)userCalibrationData __attribute__((swift_name("setUserLosCalibrationData(userCalibrationData:)")));
- (void)unregisterAppExtEventsListener:(id<NEKIEvsTechnicianEvents>)listener __attribute__((swift_name("unregisterAppExtEvents(listener:)")));
- (void)unregisterRawInertialSensorsEventsListener:(id<NEKIEvsRawInertialSensorsEvents>)listener __attribute__((swift_name("unregisterRawInertialSensorsEvents(listener:)")));
@end

__attribute__((swift_name("IEvsTechnicianEvents")))
@protocol NEKIEvsTechnicianEvents
@required
- (void)onResourceCrcError __attribute__((swift_name("onResourceCrcError()")));
- (void)onSensorsCalibrationDataDataType:(NEKBlobDataType *)dataType data:(NEKKotlinByteArray *)data __attribute__((swift_name("onSensorsCalibrationData(dataType:data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LosData")))
@interface NEKLosData : NEKBase
- (instancetype)initWithRawData:(NEKKotlinFloatArray *)rawData hasQuaternions:(BOOL)hasQuaternions hasYpr:(BOOL)hasYpr __attribute__((swift_name("init(rawData:hasQuaternions:hasYpr:)"))) __attribute__((objc_designated_initializer));
- (NEKCalibrationStatus *)getCalibrationStatus __attribute__((swift_name("getCalibrationStatus()")));
- (NEKQuaternionData *)getQuaternions __attribute__((swift_name("getQuaternions()")));
- (NEKYprData *)getYpr __attribute__((swift_name("getYpr()")));
- (BOOL)hasQuaternions __attribute__((swift_name("hasQuaternions()")));
- (BOOL)hasYpr __attribute__((swift_name("hasYpr()")));
- (BOOL)isValid __attribute__((swift_name("isValid()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendPriority")))
@interface NEKSendPriority : NEKKotlinEnum<NEKSendPriority *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKSendPriority *besteffort __attribute__((swift_name("besteffort")));
@property (class, readonly) NEKSendPriority *high __attribute__((swift_name("high")));
@property (class, readonly) NEKSendPriority *critical __attribute__((swift_name("critical")));
+ (NEKKotlinArray<NEKSendPriority *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKSendPriority *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorData")))
@interface NEKSensorData : NEKBase
- (instancetype)initWithTimestamp:(int64_t)timestamp type:(NEKSensorType *)type x:(float)x y:(float)y z:(float)z isValid:(BOOL)isValid calibrationStatusRawValue:(float)calibrationStatusRawValue __attribute__((swift_name("init(timestamp:type:x:y:z:isValid:calibrationStatusRawValue:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NEKCalibrationStatus *calibrationStatus __attribute__((swift_name("calibrationStatus")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NEKSensorType *type __attribute__((swift_name("type")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@property (readonly) float z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppErrorCode")))
@interface NEKAppErrorCode : NEKKotlinEnum<NEKAppErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKAppErrorCode *generalerror __attribute__((swift_name("generalerror")));
@property (class, readonly) NEKAppErrorCode *apikeymissing __attribute__((swift_name("apikeymissing")));
@property (class, readonly) NEKAppErrorCode *apikeyinvalid __attribute__((swift_name("apikeyinvalid")));
@property (class, readonly) NEKAppErrorCode *apikeyexpired __attribute__((swift_name("apikeyexpired")));
@property (class, readonly) NEKAppErrorCode *apikeybadserial __attribute__((swift_name("apikeybadserial")));
@property (class, readonly) NEKAppErrorCode *otherappisconnected __attribute__((swift_name("otherappisconnected")));
@property (class, readonly) NEKAppErrorCode *failedtoconnect __attribute__((swift_name("failedtoconnect")));
@property (class, readonly) NEKAppErrorCode *oldsdk __attribute__((swift_name("oldsdk")));
@property (class, readonly) NEKAppErrorCode *displayerrlowbat __attribute__((swift_name("displayerrlowbat")));
@property (class, readonly) NEKAppErrorCode *syncerror __attribute__((swift_name("syncerror")));
@property (class, readonly) NEKAppErrorCode *failedpairing __attribute__((swift_name("failedpairing")));
@property (class, readonly) NEKAppErrorCode *activationerror __attribute__((swift_name("activationerror")));
+ (NEKKotlinArray<NEKAppErrorCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKAppErrorCode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("IEvsAppEvents")))
@protocol NEKIEvsAppEvents
@required
- (void)onBeforeRenderingTimestamp:(int64_t)timestamp __attribute__((swift_name("onBeforeRendering(timestamp:)")));
- (void)onBeginAuthSerial:(NSString *)serial fwVersion:(int32_t)fwVersion __attribute__((swift_name("onBeginAuth(serial:fwVersion:)")));
- (void)onErrorErrCode:(NEKAppErrorCode *)errCode description:(NSString *)description __attribute__((swift_name("onError(errCode:description:)")));
- (void)onReady __attribute__((swift_name("onReady()")));
- (void)onUnReady __attribute__((swift_name("onUnReady()")));
@end

__attribute__((swift_name("IEvsAuthService")))
@protocol NEKIEvsAuthService
@required
- (BOOL)setApiKeyApiKey:(NEKKotlinByteArray * _Nullable)apiKey __attribute__((swift_name("setApiKey(apiKey:)")));
- (BOOL)setApiKeyNameFileNameWithoutExt:(NSString * _Nullable)fileNameWithoutExt __attribute__((swift_name("setApiKeyName(fileNameWithoutExt:)")));
- (BOOL)setCertificateCertificate:(NEKKotlinByteArray * _Nullable)certificate __attribute__((swift_name("setCertificate(certificate:)")));
- (BOOL)setCertificateNameFileNameWithoutExt:(NSString * _Nullable)fileNameWithoutExt __attribute__((swift_name("setCertificateName(fileNameWithoutExt:)")));
@end

__attribute__((swift_name("IEvsAutoBrightnessController")))
@protocol NEKIEvsAutoBrightnessController
@required
- (void)addGainDeltaGain:(int32_t)deltaGain __attribute__((swift_name("addGain(deltaGain:)")));
- (BOOL)enableIsEnabled:(BOOL)isEnabled __attribute__((swift_name("enable(isEnabled:)")));
- (int32_t)getGain __attribute__((swift_name("getGain()")));
- (BOOL)getIsAmbientSensorControl __attribute__((swift_name("getIsAmbientSensorControl()")));
- (id<NEKIEvsAutoBrightnessProvider> _Nullable)getProvider __attribute__((swift_name("getProvider()")));
- (BOOL)hasProvider __attribute__((swift_name("hasProvider()")));
- (BOOL)isEnabled __attribute__((swift_name("isEnabled()")));
- (void)registerForAutoBriEventsListener:(id<NEKIEvsAutoBrightnessEvents>)listener __attribute__((swift_name("registerForAutoBriEvents(listener:)")));
- (void)setGainGain:(int32_t)gain __attribute__((swift_name("setGain(gain:)")));
- (void)setIsAmbientSensorControlControl:(BOOL)control __attribute__((swift_name("setIsAmbientSensorControl(control:)")));
- (void)setProviderProvider:(id<NEKIEvsAutoBrightnessProvider> _Nullable)provider __attribute__((swift_name("setProvider(provider:)")));
- (void)unregisterForAutoBriEventsListener:(id<NEKIEvsAutoBrightnessEvents>)listener __attribute__((swift_name("unregisterForAutoBriEvents(listener:)")));
@end

__attribute__((swift_name("IEvsAutoBrightnessEvents")))
@protocol NEKIEvsAutoBrightnessEvents
@required
- (void)onAutoBriEnableChangedIsEnabled:(BOOL)isEnabled __attribute__((swift_name("onAutoBriEnableChanged(isEnabled:)")));
- (void)onAutoBriGainChangedGain:(int32_t)gain __attribute__((swift_name("onAutoBriGainChanged(gain:)")));
- (void)onAutoBriValueLux:(float)lux brightness:(int16_t)brightness __attribute__((swift_name("onAutoBriValue(lux:brightness:)")));
@end

__attribute__((swift_name("IEvsCommunicationService")))
@protocol NEKIEvsCommunicationService <NEKIEvsConnectable>
@required
- (int32_t)getMtu __attribute__((swift_name("getMtu()")));
- (void)registerCommunicationEventsListener:(id<NEKIEvsCommunicationEvents>)listener __attribute__((swift_name("registerCommunicationEvents(listener:)")));
- (BOOL)requestRssiReadCallback:(void (^)(NEKInt *))callback __attribute__((swift_name("requestRssiRead(callback:)")));
- (void)unregisterCommunicationEventsListener:(id<NEKIEvsCommunicationEvents>)listener __attribute__((swift_name("unregisterCommunicationEvents(listener:)")));
@end

__attribute__((swift_name("IEvsDiscreteBrightnessController")))
@protocol NEKIEvsDiscreteBrightnessController
@required
- (void)decreaseBrightness __attribute__((swift_name("decreaseBrightness()")));
- (int32_t)getBrightnessLevel __attribute__((swift_name("getBrightnessLevel()")));
- (NSArray<NEKShort *> *)getBrightnessValues __attribute__((swift_name("getBrightnessValues()")));
- (int32_t)getNumberOfBrightnessLevels __attribute__((swift_name("getNumberOfBrightnessLevels()")));
- (void)increaseBrightness __attribute__((swift_name("increaseBrightness()")));
- (void)setBrightnessLevelLevelIndex:(int32_t)levelIndex __attribute__((swift_name("setBrightnessLevel(levelIndex:)")));
@end

__attribute__((swift_name("IEvsDisplayService")))
@protocol NEKIEvsDisplayService
@required
- (id<NEKIEvsAutoBrightnessController>)autoBrightness __attribute__((swift_name("autoBrightness()")));
- (id<NEKIEvsDiscreteBrightnessController>)desecrateBrightness __attribute__((swift_name("desecrateBrightness()")));
- (int16_t)getBrightness __attribute__((swift_name("getBrightness()")));
- (float)height __attribute__((swift_name("height()")));
- (BOOL)isDisplayOn __attribute__((swift_name("isDisplayOn()")));
- (void)setBrightnessValue:(int16_t)value __attribute__((swift_name("setBrightness(value:)")));
- (void)toggleDisplayOnOff __attribute__((swift_name("toggleDisplayOnOff()")));
- (void)turnDisplayOff __attribute__((swift_name("turnDisplayOff()")));
- (void)turnDisplayOn __attribute__((swift_name("turnDisplayOn()")));
- (float)width __attribute__((swift_name("width()")));
@end

__attribute__((swift_name("IEvsGlassesEvents")))
@protocol NEKIEvsGlassesEvents
@required
- (void)onBatteryChangedPercentage:(int32_t)percentage __attribute__((swift_name("onBatteryChanged(percentage:)")));
- (void)onBrightnessChangeRequestedValue:(int16_t)value __attribute__((swift_name("onBrightnessChangeRequested(value:)")));
- (void)onChargerStateChangedIsChargerConnected:(BOOL)isChargerConnected __attribute__((swift_name("onChargerStateChanged(isChargerConnected:)")));
- (void)onDisplayStateIsDisplayOn:(BOOL)isDisplayOn __attribute__((swift_name("onDisplayState(isDisplayOn:)")));
- (void)onPowerButtonAction:(NEKPowerButtonAction *)action __attribute__((swift_name("onPowerButton(action:)")));
- (void)onTouchTouch:(NEKTouchDirection *)touch __attribute__((swift_name("onTouch(touch:)")));
@end

__attribute__((swift_name("IEvsGlassesStateService")))
@protocol NEKIEvsGlassesStateService
@required
- (NEKBatteryLevel *)batteryLevel __attribute__((swift_name("batteryLevel()")));
- (int32_t)batteryPercentage __attribute__((swift_name("batteryPercentage()")));
- (float)estimatedRemainingTime __attribute__((swift_name("estimatedRemainingTime()")));
- (NEKFrameSize * _Nullable)frameSize __attribute__((swift_name("frameSize()")));
- (NSString *)fwVersion __attribute__((swift_name("fwVersion()")));
- (int32_t)fwVersionN __attribute__((swift_name("fwVersionN()")));
- (NSString * _Nullable)getGlassesName __attribute__((swift_name("getGlassesName()")));
- (NSString *)getSerialInfoSerial:(NSString *)serial __attribute__((swift_name("getSerialInfo(serial:)")));
- (NSString *)info __attribute__((swift_name("info()")));
- (BOOL)isChargerConnected __attribute__((swift_name("isChargerConnected()")));
- (void)registerGlassesEventsListener:(id<NEKIEvsGlassesEvents>)listener __attribute__((swift_name("registerGlassesEvents(listener:)")));
- (NSString *)serial __attribute__((swift_name("serial()")));
- (void)turnOff __attribute__((swift_name("turnOff()")));
- (void)unregisterGlassesEventsListener:(id<NEKIEvsGlassesEvents>)listener __attribute__((swift_name("unregisterGlassesEvents(listener:)")));
@end

__attribute__((swift_name("IEvsInertialSensorsEvents")))
@protocol NEKIEvsInertialSensorsEvents
@required
- (void)onSensorSensorType:(NEKSensorType *)sensorType timestampNs:(int64_t)timestampNs x:(float)x y:(float)y z:(float)z __attribute__((swift_name("onSensor(sensorType:timestampNs:x:y:z:)")));
@end

__attribute__((swift_name("IEvsOtaAvailableHandler")))
@protocol NEKIEvsOtaAvailableHandler
@required
- (void)onOtaAvailableVersion:(int32_t)version __attribute__((swift_name("onOtaAvailable(version:)")));
@end

__attribute__((swift_name("IEvsOtaEventsHandler")))
@protocol NEKIEvsOtaEventsHandler
@required
- (void)onOtaFailedErrCode:(NEKOtaErrorCode *)errCode description:(NSString *)description __attribute__((swift_name("onOtaFailed(errCode:description:)")));
- (void)onOtaInstallCompleted __attribute__((swift_name("onOtaInstallCompleted()")));
- (void)onOtaInstallStarted __attribute__((swift_name("onOtaInstallStarted()")));
- (void)onOtaProgressProgress:(int32_t)progress __attribute__((swift_name("onOtaProgress(progress:)")));
- (void)onOtaStartedFilesCount:(int32_t)filesCount __attribute__((swift_name("onOtaStarted(filesCount:)")));
- (void)onOtaUploadCompleted __attribute__((swift_name("onOtaUploadCompleted()")));
@end

__attribute__((swift_name("IEvsOtaService")))
@protocol NEKIEvsOtaService
@required
- (NSArray<NEKInt *> *)embeddedOtaVersionsGlasses:(NEKGlassesType *)glasses __attribute__((swift_name("embeddedOtaVersions(glasses:)")));
- (NEKInt * _Nullable)getAvailableOta __attribute__((swift_name("getAvailableOta()")));
- (BOOL)isDuringOta __attribute__((swift_name("isDuringOta()")));
- (BOOL)isOtaAvailableNotificationPaused __attribute__((swift_name("isOtaAvailableNotificationPaused()")));
- (void)overrideOtaAvailableHandlerHandler:(id<NEKIEvsOtaAvailableHandler>)handler __attribute__((swift_name("overrideOtaAvailableHandler(handler:)")));
- (void)overrideOtaProcessHandlerHandler:(id<NEKIEvsOtaEventsHandler>)handler __attribute__((swift_name("overrideOtaProcessHandler(handler:)")));
- (void)pauseOtaAvailableNotificationShouldPause:(BOOL)shouldPause __attribute__((swift_name("pauseOtaAvailableNotification(shouldPause:)")));
- (void)restoreOtaDefaultHandlers __attribute__((swift_name("restoreOtaDefaultHandlers()")));
- (void)startOtaProcess __attribute__((swift_name("startOtaProcess()")));
@end

__attribute__((swift_name("IEvsQuaternionSensorsEvents")))
@protocol NEKIEvsQuaternionSensorsEvents
@required
- (void)onQuaternionTimestampMs:(int64_t)timestampMs quaternionsData:(NEKQuaternionData *)quaternionsData calibrationStatus:(NEKCalibrationStatus *)calibrationStatus __attribute__((swift_name("onQuaternion(timestampMs:quaternionsData:calibrationStatus:)")));
@end

__attribute__((swift_name("IEvsScanCallback")))
@protocol NEKIEvsScanCallback
@required
- (BOOL)deviceFoundDeviceId:(NSString *)deviceId name:(NSString *)name rssi:(int32_t)rssi advRecord:(NEKKotlinByteArray * _Nullable)advRecord __attribute__((swift_name("deviceFound(deviceId:name:rssi:advRecord:)")));
- (void)scanEnded __attribute__((swift_name("scanEnded()")));
- (void)scanFailed __attribute__((swift_name("scanFailed()")));
@end

__attribute__((swift_name("IEvsScreenService")))
@protocol NEKIEvsScreenService
@required
- (void)addScreenScreen:(NEKViewport *)screen __attribute__((swift_name("addScreen(screen:)")));
- (BOOL)getEnforceRenderingBorders __attribute__((swift_name("getEnforceRenderingBorders()")));
- (float)getRenderingCenterX __attribute__((swift_name("getRenderingCenterX()")));
- (float)getRenderingCenterY __attribute__((swift_name("getRenderingCenterY()")));
- (NEKViewport *)getTopmostScreen __attribute__((swift_name("getTopmostScreen()")));
- (void)removeScreenScreen:(NEKViewport *)screen __attribute__((swift_name("removeScreen(screen:)")));
- (NEKViewport * _Nullable)removeTopmostScreen __attribute__((swift_name("removeTopmostScreen()")));
- (void)setEnforceRenderingBordersEnforceBorders:(BOOL)enforceBorders __attribute__((swift_name("setEnforceRenderingBorders(enforceBorders:)")));
- (void)setRenderingCenterXCenterX:(float)centerX __attribute__((swift_name("setRenderingCenterX(centerX:)")));
- (void)setRenderingCenterYCenterY:(float)centerY __attribute__((swift_name("setRenderingCenterY(centerY:)")));
@end

__attribute__((swift_name("IEvsSensorsEvents")))
@protocol NEKIEvsSensorsEvents
@required
- (void)onAmbientLux:(float)lux __attribute__((swift_name("onAmbient(lux:)")));
- (BOOL)onProximityProximity:(NEKProximityActionType *)proximity __attribute__((swift_name("onProximity(proximity:)")));
- (void)onSensorEnableChangeSType:(NEKSensorType *)sType isEnabled:(BOOL)isEnabled __attribute__((swift_name("onSensorEnableChange(sType:isEnabled:)")));
- (void)onSensorEnableRequestedSType:(NEKSensorType *)sType isEnabledRequested:(BOOL)isEnabledRequested __attribute__((swift_name("onSensorEnableRequested(sType:isEnabledRequested:)")));
@end

__attribute__((swift_name("IEvsSensorsService")))
@protocol NEKIEvsSensorsService
@required
- (void)disableInertialSensors __attribute__((swift_name("disableInertialSensors()")));
- (void)disableMagneticDeclinationCorrection __attribute__((swift_name("disableMagneticDeclinationCorrection()")));
- (void)enableAccelerometer __attribute__((swift_name("enableAccelerometer()")));
- (void)enableAmbientEnable:(BOOL)enable __attribute__((swift_name("enableAmbient(enable:)")));
- (void)enableGyro __attribute__((swift_name("enableGyro()")));
- (void)enableInertialSensors __attribute__((swift_name("enableInertialSensors()")));
- (NEKFloat * _Nullable)enableMagneticDeclinationCorrectionLat:(float)lat lon:(float)lon alt:(float)alt __attribute__((swift_name("enableMagneticDeclinationCorrection(lat:lon:alt:)")));
- (void)enableMagnetometer __attribute__((swift_name("enableMagnetometer()")));
- (void)enableTouchEnable:(BOOL)enable __attribute__((swift_name("enableTouch(enable:)")));
- (NEKSensorRate *)getSensorsRate __attribute__((swift_name("getSensorsRate()")));
- (BOOL)getUsePrediction __attribute__((swift_name("getUsePrediction()")));
- (BOOL)isEnabledSensor:(NEKSensorType *)sensor __attribute__((swift_name("isEnabled(sensor:)")));
- (BOOL)isSupportedSensor:(NEKSensorType *)sensor __attribute__((swift_name("isSupported(sensor:)")));
- (NEKProximityActionType *)proximityState __attribute__((swift_name("proximityState()")));
- (void)registerInertialSensorsEventsListener:(id<NEKIEvsInertialSensorsEvents>)listener __attribute__((swift_name("registerInertialSensorsEvents(listener:)")));
- (void)registerQuaternionSensorsEventsListener:(id<NEKIEvsQuaternionSensorsEvents>)listener __attribute__((swift_name("registerQuaternionSensorsEvents(listener:)")));
- (void)registerSensorsEventsListener:(id<NEKIEvsSensorsEvents>)listener __attribute__((swift_name("registerSensorsEvents(listener:)")));
- (void)registerYprSensorsEventsListener:(id<NEKIEvsYprSensorsEvents>)listener __attribute__((swift_name("registerYprSensorsEvents(listener:)")));
- (void)setSensorsRateRate:(NEKSensorRate *)rate __attribute__((swift_name("setSensorsRate(rate:)")));
- (void)setUsePredictionUsePrediction:(BOOL)usePrediction __attribute__((swift_name("setUsePrediction(usePrediction:)")));
- (void)unregisterInertialSensorsEventsListener:(id<NEKIEvsInertialSensorsEvents>)listener __attribute__((swift_name("unregisterInertialSensorsEvents(listener:)")));
- (void)unregisterQuaternionSensorsEventsListener:(id<NEKIEvsQuaternionSensorsEvents>)listener __attribute__((swift_name("unregisterQuaternionSensorsEvents(listener:)")));
- (void)unregisterSensorsEventsListener:(id<NEKIEvsSensorsEvents>)listener __attribute__((swift_name("unregisterSensorsEvents(listener:)")));
- (void)unregisterYprSensorsEventsListener:(id<NEKIEvsYprSensorsEvents>)listener __attribute__((swift_name("unregisterYprSensorsEvents(listener:)")));
@end

__attribute__((swift_name("IEvsYprSensorsEvents")))
@protocol NEKIEvsYprSensorsEvents
@required
- (void)onYprTimestampMs:(int64_t)timestampMs yprData:(NEKYprData *)yprData calibrationStatus:(NEKCalibrationStatus *)calibrationStatus __attribute__((swift_name("onYpr(timestampMs:yprData:calibrationStatus:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtaErrorCode")))
@interface NEKOtaErrorCode : NEKKotlinEnum<NEKOtaErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKOtaErrorCode *noupdateisrequired __attribute__((swift_name("noupdateisrequired")));
@property (class, readonly) NEKOtaErrorCode *notsupported __attribute__((swift_name("notsupported")));
@property (class, readonly) NEKOtaErrorCode *commerror __attribute__((swift_name("commerror")));
@property (class, readonly) NEKOtaErrorCode *uploaderror __attribute__((swift_name("uploaderror")));
@property (class, readonly) NEKOtaErrorCode *installerror __attribute__((swift_name("installerror")));
@property (class, readonly) NEKOtaErrorCode *badmetadata __attribute__((swift_name("badmetadata")));
@property (class, readonly) NEKOtaErrorCode *missingfile __attribute__((swift_name("missingfile")));
@property (class, readonly) NEKOtaErrorCode *incompatibleversion __attribute__((swift_name("incompatibleversion")));
@property (class, readonly) NEKOtaErrorCode *incompatiblefile __attribute__((swift_name("incompatiblefile")));
@property (class, readonly) NEKOtaErrorCode *lowbattery __attribute__((swift_name("lowbattery")));
@property (class, readonly) NEKOtaErrorCode *disconnected __attribute__((swift_name("disconnected")));
@property (class, readonly) NEKOtaErrorCode *generalerror __attribute__((swift_name("generalerror")));
@property (class, readonly) NEKOtaErrorCode *reconnecttimeout __attribute__((swift_name("reconnecttimeout")));
@property (class, readonly) NEKOtaErrorCode *uploadtimeout __attribute__((swift_name("uploadtimeout")));
@property (class, readonly) NEKOtaErrorCode *installvalidationerror __attribute__((swift_name("installvalidationerror")));
+ (NEKKotlinArray<NEKOtaErrorCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKOtaErrorCode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Arc")))
@interface NEKArc : NEKUIElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (float)getAngleFromDeg __attribute__((swift_name("getAngleFromDeg()")));
- (float)getAngleToDeg __attribute__((swift_name("getAngleToDeg()")));
- (float)getCenterX __attribute__((swift_name("getCenterX()")));
- (float)getCenterY __attribute__((swift_name("getCenterY()")));
- (NEKRotationDirection *)getDirection __attribute__((swift_name("getDirection()")));
- (float)getRadius __attribute__((swift_name("getRadius()")));
- (NEKArc *)hideEndEdge __attribute__((swift_name("hideEndEdge()")));
- (NEKArc *)hideStartEdge __attribute__((swift_name("hideStartEdge()")));
- (BOOL)isBetweenAngleDeg:(float)angleDeg __attribute__((swift_name("isBetween(angleDeg:)")));
- (BOOL)isBetweenOrEqualAngleDeg:(float)angleDeg __attribute__((swift_name("isBetweenOrEqual(angleDeg:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKArc *)setArcInfoCenterX:(float)centerX centerY:(float)centerY radius:(float)radius angleFromDeg:(float)angleFromDeg angleToDeg:(float)angleToDeg __attribute__((swift_name("setArcInfo(centerX:centerY:radius:angleFromDeg:angleToDeg:)")));
- (NEKUIElement *)setBackgroundColorColor:(int32_t)color __attribute__((swift_name("setBackgroundColor(color:)")));
- (NEKArc *)setDirectionRotationDirection:(NEKRotationDirection *)rotationDirection __attribute__((swift_name("setDirection(rotationDirection:)")));
- (NEKArc *)showEndEdgeColor:(int32_t)color __attribute__((swift_name("showEndEdge(color:)")));
- (NEKArc *)showStartEdgeColor:(int32_t)color __attribute__((swift_name("showStartEdge(color:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float angleFromDegree __attribute__((swift_name("angleFromDegree")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float angleToDegree __attribute__((swift_name("angleToDegree")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float centerRelX __attribute__((swift_name("centerRelX")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float centerRelY __attribute__((swift_name("centerRelY")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float radiusPix __attribute__((swift_name("radiusPix")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NEKRotationDirection *rotationDirection __attribute__((swift_name("rotationDirection")));
@end

__attribute__((swift_name("Arc2")))
@interface NEKArc2 : NEKArc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKArc2 *)setArc2InfoAngleSeparatorDeg:(float)angleSeparatorDeg secondaryColor:(NEKInt * _Nullable)secondaryColor __attribute__((swift_name("setArc2Info(angleSeparatorDeg:secondaryColor:)")));
@end

__attribute__((swift_name("FillableElement")))
@interface NEKFillableElement : NEKUIElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKFillableElement *)clearFillColor __attribute__((swift_name("clearFillColor()")));
- (NEKInt * _Nullable)getFillColor __attribute__((swift_name("getFillColor()")));
- (NEKFillableElement *)setFillColorEvsColor:(NEKEvsColor *)evsColor __attribute__((swift_name("setFillColor(evsColor:)")));
- (NEKFillableElement *)setFillColorColor:(int32_t)color __attribute__((swift_name("setFillColor(color:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Arrow")))
@interface NEKArrow : NEKFillableElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKDirection *)getDirection __attribute__((swift_name("getDirection()")));
- (NEKUIElement *)rotateAngleDegrees:(float)angleDegrees __attribute__((swift_name("rotate(angleDegrees:)")));
- (NEKArrow *)setArrowBodyInfoLength:(float)length width:(float)width __attribute__((swift_name("setArrowBodyInfo(length:width:)")));
- (NEKArrow *)setArrowHeadInfoLength:(float)length __attribute__((swift_name("setArrowHeadInfo(length:)")));
- (NEKArrow *)setDirectionDirection:(NEKDirection *)direction __attribute__((swift_name("setDirection(direction:)")));
@end

__attribute__((swift_name("Ellipse")))
@interface NEKEllipse : NEKFillableElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (float)getCenterX __attribute__((swift_name("getCenterX()")));
- (float)getCenterY __attribute__((swift_name("getCenterY()")));
- (float)getRadiusX __attribute__((swift_name("getRadiusX()")));
- (float)getRadiusY __attribute__((swift_name("getRadiusY()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKEllipse *)setEllipseInfoCenterX:(float)centerX centerY:(float)centerY radius:(float)radius __attribute__((swift_name("setEllipseInfo(centerX:centerY:radius:)")));
- (NEKEllipse *)setEllipseInfoCenterX:(float)centerX centerY:(float)centerY radiusX:(float)radiusX radiusY:(float)radiusY __attribute__((swift_name("setEllipseInfo(centerX:centerY:radiusX:radiusY:)")));
@end

__attribute__((swift_name("Frame")))
@interface NEKFrame : NEKUIElementsGroup
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("UIResourceElement")))
@interface NEKUIResourceElement : NEKUIElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKUIResource * _Nullable)getUIResource __attribute__((swift_name("getUIResource()")));
@end

__attribute__((swift_name("Image")))
@interface NEKImage : NEKUIResourceElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithImage:(NEKImgSrc *)image __attribute__((swift_name("init(image:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id image:(NEKImgSrc *)image __attribute__((swift_name("init(id:image:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)drawBorderCanvas:(NEKCanvasBuffer *)canvas color:(int32_t)color widthPix:(int32_t)widthPix cornerRadiusPix:(float)cornerRadiusPix __attribute__((swift_name("drawBorder(canvas:color:widthPix:cornerRadiusPix:)")));
- (NEKImgSrc * _Nullable)getResource __attribute__((swift_name("getResource()")));
- (NEKImgSrc * _Nullable)getUIResource __attribute__((swift_name("getUIResource()")));
- (BOOL)isDirty __attribute__((swift_name("isDirty()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKUIElement *)rotateAngleDegrees:(float)angleDegrees __attribute__((swift_name("rotate(angleDegrees:)")));
- (NEKUIElement *)rotateAngleDegrees:(float)angleDegrees px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("rotate(angleDegrees:px:py:pivot:)")));
- (NEKUIElement *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (NEKUIElement *)scaleSx:(float)sx sy:(float)sy px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("scale(sx:sy:px:py:pivot:)")));
- (NEKImage *)setResourceImage:(NEKImgSrc *)image __attribute__((swift_name("setResource(image:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Line")))
@interface NEKLine : NEKUIElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX:(float)x y:(float)y x1:(float)x1 y1:(float)y1 __attribute__((swift_name("init(x:y:x1:y1:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id x:(float)x y:(float)y x1:(float)x1 y1:(float)y1 __attribute__((swift_name("init(id:x:y:x1:y1:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKLine *)toAngleLength:(float)length angle:(float)angle __attribute__((swift_name("toAngle(length:angle:)")));
- (NEKLine *)toCoordLengthX:(float)lengthX lengthY:(float)lengthY __attribute__((swift_name("toCoord(lengthX:lengthY:)")));
@end

__attribute__((swift_name("Path")))
@interface NEKPath : NEKUIElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKPath *)addPointX:(float)x y:(float)y __attribute__((swift_name("addPoint(x:y:)")));
- (NEKPath *)clear __attribute__((swift_name("clear()")));
- (NEKPath *)close __attribute__((swift_name("close()")));
- (int32_t)getPointsCount __attribute__((swift_name("getPointsCount()")));
- (int32_t)getSequentialPathMaxPoints __attribute__((swift_name("getSequentialPathMaxPoints()")));
- (NEKPath *)lineToX:(float)x y:(float)y __attribute__((swift_name("lineTo(x:y:)")));
- (NEKPath *)moveToX:(float)x y:(float)y __attribute__((swift_name("moveTo(x:y:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKPath *)setPathXys:(NEKKotlinFloatArray *)xys ys:(NEKKotlinFloatArray *)ys size:(int32_t)size clonePoints:(BOOL)clonePoints __attribute__((swift_name("setPath(xys:ys:size:clonePoints:)")));
@end

__attribute__((swift_name("Polygon")))
@interface NEKPolygon : NEKFillableElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKPolygon *)addManyXs:(NEKKotlinFloatArray *)xs ys:(NEKKotlinFloatArray *)ys size:(int32_t)size __attribute__((swift_name("addMany(xs:ys:size:)")));
- (NEKPolygon *)addPointX:(float)x y:(float)y __attribute__((swift_name("addPoint(x:y:)")));
- (NEKPolygon *)clear __attribute__((swift_name("clear()")));
- (int32_t)getMaxPoints __attribute__((swift_name("getMaxPoints()")));
- (int32_t)getPointsCount __attribute__((swift_name("getPointsCount()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
@end

__attribute__((swift_name("Polyline")))
@interface NEKPolyline : NEKUIElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWith_xys:(NEKKotlinFloatArray *)_xys __attribute__((swift_name("init(_xys:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith_xys:(NEKKotlinFloatArray *)_xys id:(NSString *)id __attribute__((swift_name("init(_xys:id:)"))) __attribute__((objc_designated_initializer));
- (NEKPolyline *)addX:(float)x y:(float)y __attribute__((swift_name("add(x:y:)")));
- (NEKPolyline *)addAtIndex:(int32_t)index x:(float)x y:(float)y __attribute__((swift_name("addAt(index:x:y:)")));
- (NEKPolyline *)clear __attribute__((swift_name("clear()")));
- (int32_t)getMaxPoints __attribute__((swift_name("getMaxPoints()")));
- (float)getXIndex:(int32_t)index __attribute__((swift_name("getX(index:)")));
- (float)getYIndex:(int32_t)index __attribute__((swift_name("getY(index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKPolyline *)removeAtIndex:(int32_t)index __attribute__((swift_name("removeAt(index:)")));
- (NEKPolyline *)removeFirst __attribute__((swift_name("removeFirst()")));
- (NEKPolyline *)removeLast __attribute__((swift_name("removeLast()")));
- (int32_t)size __attribute__((swift_name("size()")));
@end

__attribute__((swift_name("Rect")))
@interface NEKRect : NEKFillableElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)drawBackgroundCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("drawBackground(canvas:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKRect *)setRoundedCornersRadiusPix:(float)radiusPix __attribute__((swift_name("setRoundedCorners(radiusPix:)")));
@end

__attribute__((swift_name("Text")))
@interface NEKText : NEKUIResourceElement
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFont:(NEKFont *)font __attribute__((swift_name("init(font:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id font:(NEKFont *)font __attribute__((swift_name("init(id:font:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)drawBackgroundCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("drawBackground(canvas:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)drawBorderCanvas:(NEKCanvasBuffer *)canvas color:(int32_t)color widthPix:(int32_t)widthPix cornerRadiusPix:(float)cornerRadiusPix __attribute__((swift_name("drawBorder(canvas:color:widthPix:cornerRadiusPix:)")));
- (float)getHeight __attribute__((swift_name("getHeight()")));
- (float)getMeasuredContentHeight __attribute__((swift_name("getMeasuredContentHeight()")));
- (float)getMeasuredContentWidth __attribute__((swift_name("getMeasuredContentWidth()")));
- (NEKFont *)getResource __attribute__((swift_name("getResource()")));
- (NSString *)getText __attribute__((swift_name("getText()")));
- (NEKAlign *)getTextAlign __attribute__((swift_name("getTextAlign()")));
- (NEKFont *)getUIResource __attribute__((swift_name("getUIResource()")));
- (float)getWidth __attribute__((swift_name("getWidth()")));
- (float)getXEnd __attribute__((swift_name("getXEnd()")));
- (BOOL)isDirty __attribute__((swift_name("isDirty()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKUIElement *)rotateAngleDegrees:(float)angleDegrees __attribute__((swift_name("rotate(angleDegrees:)")));
- (NEKUIElement *)rotateAngleDegrees:(float)angleDegrees px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("rotate(angleDegrees:px:py:pivot:)")));
- (NEKUIElement *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (NEKUIElement *)scaleSx:(float)sx sy:(float)sy px:(float)px py:(float)py pivot:(NEKPivot *)pivot __attribute__((swift_name("scale(sx:sy:px:py:pivot:)")));
- (NEKText *)setCenterX:(float)x __attribute__((swift_name("setCenter(x:)")));
- (NEKUIElement *)setDimensionsX:(float)x y:(float)y width:(float)width height:(float)height __attribute__((swift_name("setDimensions(x:y:width:height:)")));
- (NEKText *)setEllipsisEllipsis:(BOOL)ellipsis __attribute__((swift_name("setEllipsis(ellipsis:)")));
- (NEKText *)setResourceFont:(NEKFont *)font __attribute__((swift_name("setResource(font:)")));
- (NEKText *)setResourceStockFont:(NEKFontStockFont *)stockFont __attribute__((swift_name("setResource(stockFont:)")));
- (NEKText *)setTextText:(NSString *)text __attribute__((swift_name("setText(text:)")));
- (NEKText *)setTextAlignAlign:(NEKAlign *)align __attribute__((swift_name("setTextAlign(align:)")));
- (NEKUIElement *)setWidthWidth:(float)width __attribute__((swift_name("setWidth(width:)")));
- (NEKUIElement *)setWidthHeightWidth:(float)width height:(float)height __attribute__((swift_name("setWidthHeight(width:height:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("TextBlock")))
@interface NEKTextBlock : NEKText
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFont:(NEKFont *)font __attribute__((swift_name("init(font:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id font:(NEKFont *)font __attribute__((swift_name("init(id:font:)"))) __attribute__((objc_designated_initializer));
- (float)getHeight __attribute__((swift_name("getHeight()")));
- (int32_t)getLinesCount __attribute__((swift_name("getLinesCount()")));
- (int32_t)getMaxLines __attribute__((swift_name("getMaxLines()")));
- (float)getMeasuredContentHeight __attribute__((swift_name("getMeasuredContentHeight()")));
- (float)getMeasuredContentWidth __attribute__((swift_name("getMeasuredContentWidth()")));
- (NSString *)getText __attribute__((swift_name("getText()")));
- (float)getWidth __attribute__((swift_name("getWidth()")));
- (BOOL)isDuringEffect __attribute__((swift_name("isDuringEffect()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onDrawCanvas:(NEKCanvasBuffer *)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (NEKTextBlock *)registerLineModifierHandlerHandler:(void (^)(NEKInt *, NEKTextBlockLineModifier *))handler __attribute__((swift_name("registerLineModifierHandler(handler:)")));
- (NEKUIElement *)setDimensionsX:(float)x y:(float)y width:(float)width height:(float)height __attribute__((swift_name("setDimensions(x:y:width:height:)")));
- (NEKTextBlock *)setDisplayEffectEffect:(NEKTextBlockDisplayEffect *)effect delayMs:(int64_t)delayMs __attribute__((swift_name("setDisplayEffect(effect:delayMs:)")));
- (NEKTextBlock *)setEllipsisEllipsis:(BOOL)ellipsis __attribute__((swift_name("setEllipsis(ellipsis:)")));
- (NEKUIElement *)setHeightHeight:(float)height __attribute__((swift_name("setHeight(height:)")));
- (NEKTextBlock *)setMaxLinesMaxLines:(int32_t)maxLines __attribute__((swift_name("setMaxLines(maxLines:)")));
- (NEKTextBlock *)setPaddingAll:(float)all __attribute__((swift_name("setPadding(all:)")));
- (NEKTextBlock *)setPaddingLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("setPadding(left:top:right:bottom:)")));
- (NEKTextBlock *)setResourceFont:(NEKFont *)font __attribute__((swift_name("setResource(font:)")));
- (NEKTextBlock *)setSpacedBySpacedBy:(float)spacedBy __attribute__((swift_name("setSpacedBy(spacedBy:)")));
- (NEKTextBlock *)setSplitRegexRegex:(NSString *)regex __attribute__((swift_name("setSplitRegex(regex:)")));
- (NEKTextBlock *)setTextText:(NSString *)text __attribute__((swift_name("setText(text:)")));
- (NEKUIElement *)setWidthWidth:(float)width __attribute__((swift_name("setWidth(width:)")));
- (NEKUIElement *)setWidthHeightWidth:(float)width height:(float)height __attribute__((swift_name("setWidthHeight(width:height:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextBlock.DisplayEffect")))
@interface NEKTextBlockDisplayEffect : NEKKotlinEnum<NEKTextBlockDisplayEffect *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKTextBlockDisplayEffect *normal __attribute__((swift_name("normal")));
@property (class, readonly) NEKTextBlockDisplayEffect *line __attribute__((swift_name("line")));
@property (class, readonly) NEKTextBlockDisplayEffect *word __attribute__((swift_name("word")));
+ (NEKKotlinArray<NEKTextBlockDisplayEffect *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKTextBlockDisplayEffect *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextBlock.LineModifier")))
@interface NEKTextBlockLineModifier : NEKBase
- (instancetype)initWithTextColor:(NEKInt * _Nullable)textColor backgroundColor:(NEKInt * _Nullable)backgroundColor textVisible:(BOOL)textVisible underline:(BOOL)underline strikethrough:(BOOL)strikethrough fillMaxWidth:(BOOL)fillMaxWidth __attribute__((swift_name("init(textColor:backgroundColor:textVisible:underline:strikethrough:fillMaxWidth:)"))) __attribute__((objc_designated_initializer));
- (NEKTextBlockLineModifier *)doCopyTextColor:(NEKInt * _Nullable)textColor backgroundColor:(NEKInt * _Nullable)backgroundColor textVisible:(BOOL)textVisible underline:(BOOL)underline strikethrough:(BOOL)strikethrough fillMaxWidth:(BOOL)fillMaxWidth __attribute__((swift_name("doCopy(textColor:backgroundColor:textVisible:underline:strikethrough:fillMaxWidth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NEKInt * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property BOOL fillMaxWidth __attribute__((swift_name("fillMaxWidth")));
@property BOOL strikethrough __attribute__((swift_name("strikethrough")));
@property NEKInt * _Nullable textColor __attribute__((swift_name("textColor")));
@property BOOL textVisible __attribute__((swift_name("textVisible")));
@property BOOL underline __attribute__((swift_name("underline")));
@end

__attribute__((swift_name("AutoLayout")))
@interface NEKAutoLayout : NEKUIElementsGroup
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NEKUIElementsGroup *)addUiElements:(NEKKotlinArray<NEKUIElement *> *)uiElements __attribute__((swift_name("add(uiElements:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onLayout __attribute__((swift_name("onLayout()")));
@end

__attribute__((swift_name("Column")))
@interface NEKColumn : NEKAutoLayout
- (instancetype)initWithVerticalArrangement:(NEKAlignV *)verticalArrangement horizontalAlignment:(NEKAlign *)horizontalAlignment spacedBy:(float)spacedBy __attribute__((swift_name("init(verticalArrangement:horizontalAlignment:spacedBy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id verticalArrangement:(NEKAlignV *)verticalArrangement horizontalAlignment:(NEKAlign *)horizontalAlignment spacedBy:(float)spacedBy __attribute__((swift_name("init(id:verticalArrangement:horizontalAlignment:spacedBy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onLayout __attribute__((swift_name("onLayout()")));
@property NEKAlign *horizontalAlignment __attribute__((swift_name("horizontalAlignment")));
@property float spacedBy __attribute__((swift_name("spacedBy")));
@property NEKAlignV *verticalArrangement __attribute__((swift_name("verticalArrangement")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Modifier")))
@interface NEKModifier : NEKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NEKModifier *)gravityHorizontalGravity:(NEKAlign *)horizontalGravity __attribute__((swift_name("gravity(horizontalGravity:)")));
- (NEKModifier *)gravityVerticalGravity:(NEKAlignV *)verticalGravity __attribute__((swift_name("gravity(verticalGravity:)")));
- (NEKModifier *)paddingAll:(float)all __attribute__((swift_name("padding(all:)")));
- (NEKModifier *)paddingLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("padding(left:top:right:bottom:)")));
- (NEKModifier *)visibilityVisibility:(NEKModifierVisibility *)visibility __attribute__((swift_name("visibility(visibility:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Modifier.Visibility")))
@interface NEKModifierVisibility : NEKKotlinEnum<NEKModifierVisibility *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NEKModifierVisibility *visible __attribute__((swift_name("visible")));
@property (class, readonly) NEKModifierVisibility *invisible __attribute__((swift_name("invisible")));
@property (class, readonly) NEKModifierVisibility *gone __attribute__((swift_name("gone")));
+ (NEKKotlinArray<NEKModifierVisibility *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<NEKModifierVisibility *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Row")))
@interface NEKRow : NEKAutoLayout
- (instancetype)initWithHorizontalArrangement:(NEKAlign *)horizontalArrangement verticalAlignment:(NEKAlignV *)verticalAlignment spacedBy:(float)spacedBy __attribute__((swift_name("init(horizontalArrangement:verticalAlignment:spacedBy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id horizontalArrangement:(NEKAlign *)horizontalArrangement verticalAlignment:(NEKAlignV *)verticalAlignment spacedBy:(float)spacedBy __attribute__((swift_name("init(id:horizontalArrangement:verticalAlignment:spacedBy:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onLayout __attribute__((swift_name("onLayout()")));
@property NEKAlign *horizontalArrangement __attribute__((swift_name("horizontalArrangement")));
@property float spacedBy __attribute__((swift_name("spacedBy")));
@property NEKAlignV *verticalAlignment __attribute__((swift_name("verticalAlignment")));
@end

@interface NEKUIElement (Extensions)
- (NEKModifier *)modifier __attribute__((swift_name("modifier()")));
- (NEKUIElement *)modifyModifier:(void (^)(NEKModifier *))modifier __attribute__((swift_name("modify(modifier:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface NEKKotlinByteArray : NEKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NEKByte *(^)(NEKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NEKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface NEKKotlinByteArray (Extensions)
- (NSString *)toHex __attribute__((swift_name("toHex()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddonNamesKt")))
@interface NEKAddonNamesKt : NEKBase
@property (class, readonly) NSString *EVS_ADDON_CONTROLLER __attribute__((swift_name("EVS_ADDON_CONTROLLER")));
@property (class, readonly) NSString *EVS_ADDON_DEVELOPER __attribute__((swift_name("EVS_ADDON_DEVELOPER")));
@property (class, readonly) NSString *EVS_ADDON_NOTIFICATION __attribute__((swift_name("EVS_ADDON_NOTIFICATION")));
@property (class, readonly) NSString *EVS_ADDON_TECH __attribute__((swift_name("EVS_ADDON_TECH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsBuildInfoKt")))
@interface NEKEvsBuildInfoKt : NEKBase
@property (class, readonly) NSString *BuildDescription __attribute__((swift_name("BuildDescription")));
@property (class, readonly) NSString *PlatformName __attribute__((swift_name("PlatformName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsColorKt")))
@interface NEKEvsColorKt : NEKBase
@property (class, readonly) id<NEKIEvsColors> EvsColors __attribute__((swift_name("EvsColors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EvsSdkCoreKt")))
@interface NEKEvsSdkCoreKt : NEKBase
+ (NEKIEvsApp *)getSdkInstance __attribute__((swift_name("getSdkInstance()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryUtilsKt")))
@interface NEKMemoryUtilsKt : NEKBase
+ (NEKKotlinByteArray *)toKotlinByteArrayNsData:(NSData *)nsData __attribute__((swift_name("toKotlinByteArray(nsData:)")));
+ (NSData * _Nullable)toNSDataBa:(NEKKotlinByteArray *)ba __attribute__((swift_name("toNSData(ba:)")));
+ (NSData * _Nullable)toNSDataBa:(NEKKotlinByteArray *)ba size:(uint64_t)size __attribute__((swift_name("toNSData(ba:size:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkVersionKt")))
@interface NEKSdkVersionKt : NEKBase
@property (class, readonly) NSString *SDK_VER __attribute__((swift_name("SDK_VER")));
@property (class, readonly) int32_t SDK_VER_BUILD __attribute__((swift_name("SDK_VER_BUILD")));
@property (class, readonly) int32_t SDK_VER_MAJOR __attribute__((swift_name("SDK_VER_MAJOR")));
@property (class, readonly) int32_t SDK_VER_MINOR __attribute__((swift_name("SDK_VER_MINOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface NEKKotlinFloatArray : NEKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NEKFloat *(^)(NEKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NEKKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface NEKKotlinEnumCompanion : NEKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NEKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface NEKKotlinArray<T> : NEKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(NEKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<NEKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface NEKKotlinPair<__covariant A, __covariant B> : NEKBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (NEKKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface NEKKotlinIntArray : NEKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NEKInt *(^)(NEKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NEKKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface NEKKotlinDoubleArray : NEKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NEKDouble *(^)(NEKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NEKKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol NEKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface NEKKotlinByteIterator : NEKBase <NEKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NEKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface NEKKotlinFloatIterator : NEKBase <NEKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NEKFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface NEKKotlinIntIterator : NEKBase <NEKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NEKInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((swift_name("KotlinDoubleIterator")))
@interface NEKKotlinDoubleIterator : NEKBase <NEKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NEKDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
