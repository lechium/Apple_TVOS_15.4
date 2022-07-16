//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSURL;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWorkoutRecording : NSObject
{
    NSURL *_workingDirectory;	// 8 = 0x8
    id <CLWorkoutRecordingDelegate> _delegate;	// 16 = 0x10
    id <CLIntersiloUniverse> _universe;	// 24 = 0x18
    struct unique_ptr<CMMsl::WriterManager, std::default_delete<CMMsl::WriterManager>> _writer;	// 32 = 0x20
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _accelerometerDispatcher;	// 40 = 0x28
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _accel800Dispatcher;	// 48 = 0x30
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _deviceMotionDispatcher;	// 56 = 0x38
    struct unique_ptr<CLCatherineNotifier_Type::Client, std::default_delete<CLCatherineNotifier_Type::Client>> _heartRateObserverClient;	// 64 = 0x40
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::default_delete<CLOdometerNotifier_Type::Client>> _odometerObserverClient;	// 72 = 0x48
    struct unique_ptr<CLWatchOrientationSettingsNotifier_Type::Client, std::default_delete<CLWatchOrientationSettingsNotifier_Type::Client>> _watchOrientationObserverClient;	// 80 = 0x50
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> _natalimetryClient;	// 88 = 0x58
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> _motionStateMediatorClient;	// 96 = 0x60
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiClient;	// 104 = 0x68
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _pressureDispatcher;	// 112 = 0x70
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _magnetometerDispatcher;	// 120 = 0x78
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _compassCalibrationDispatcher;	// 128 = 0x80
    NSMutableDictionary *_metadata;	// 136 = 0x88
    struct CLGizmoOrientation _watchOrientation;	// 144 = 0x90
    struct WristState {
        int onWrist;
        int onWristSensor;
        int onWristConfidence;
        unsigned long long timestamp;
        _Bool isOnCharger;
        _Bool isForcedOnWristEnabled;
        _Bool isWristDetectionEnabled;
    } _watchOnWristStatus;	// 152 = 0x98
    struct CLBodyMetrics _bodyMetrics;	// 184 = 0xb8
    struct WorkoutRecorderHealthKitInfo _healthKitInfo;	// 248 = 0xf8
    struct CLDaemonLocation _startLocation;	// 280 = 0x118
    NSMutableArray *_wifiLookupTable;	// 456 = 0x1c8
    double _privacyTimeOffset;	// 464 = 0x1d0
    double _privacyElevationOffset;	// 472 = 0x1d8
    float _privacyPressureOffset;	// 480 = 0x1e0
    _Bool _disablePrivacyElevationOffset;	// 484 = 0x1e4
    _Bool _disableBodyMetrics;	// 485 = 0x1e5
    _Bool _disableWatchOrientation;	// 486 = 0x1e6
    _Bool _disableWatchOnWristStatus;	// 487 = 0x1e7
    _Bool _disableHealthKitInfo;	// 488 = 0x1e8
    _Bool _disableWifiScans;	// 489 = 0x1e9
    _Bool _disablePressure;	// 490 = 0x1ea
    _Bool _disableStrideCalBins;	// 491 = 0x1eb
    _Bool _disableALS;	// 492 = 0x1ec
    _Bool _disableLatLong;	// 493 = 0x1ed
    _Bool _disableHeartRate;	// 494 = 0x1ee
    _Bool _disableMeanMaxMets;	// 495 = 0x1ef
    _Bool _disableForceActiveListeners;	// 496 = 0x1f0
    unsigned int fWorkoutRecorderAccelSampleCount;	// 500 = 0x1f4
    struct unordered_set<CMWorkoutType, std::hash<CMWorkoutType>, std::equal_to<CMWorkoutType>, std::allocator<CMWorkoutType>> _activitySet;	// 504 = 0x1f8
    double _startTime;	// 544 = 0x220
    double _stopTime;	// 552 = 0x228
}

- (id).cxx_construct;	// IMP=0x0020000000a7a69f
- (void).cxx_destruct;	// IMP=0x0010000000a7a525
- (void)deleteWorkingDirectory;	// IMP=0x0010000000a7a3ef
- (void)writeStrideCalBins;	// IMP=0x0010000000a79cda
- (void)teardownHealthKitQueries;	// IMP=0x0010000000a79cd4
- (void)setupHealthKitQueries;	// IMP=0x0010000000a79cce
- (void)writeHealthKitInfo;	// IMP=0x0010000000a79bfd
- (void)writeBodyMetrics;	// IMP=0x0010000000a79a8a
- (void)resetBodyMetrics;	// IMP=0x0010000000a79a42
- (void)onPressureData:(const Sample_b71dd899 *)arg1;	// IMP=0x0010000000a79938
- (void)onWifiScanNotification:(const int *)arg1 data:(const void *)arg2;	// IMP=0x0010000000a79470
- (void)onNatalimetryNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0010000000a793ac
- (void)onCompassCalibrationData:(const struct CompassCalibration *)arg1;	// IMP=0x0010000000a79203
- (void)retrieveCachedCompassCalibration;	// IMP=0x0010000000a78e7b
- (void)onMagnetometerData:(const struct Sample *)arg1;	// IMP=0x0010000000a78d65
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0010000000a787d7
- (void)writeWatchOnWristStatus;	// IMP=0x0010000000a78653
- (void)writeWatchOrientation;	// IMP=0x0010000000a7856e
- (void)onWatchOrientationNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0010000000a78524
- (void)onOdometerNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0010000000a781af
- (void)onCatherineNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0010000000a78036
- (void)onDeviceMotionData:(const struct Sample *)arg1;	// IMP=0x0010000000a77f2e
- (void)onAccelerometer800Data:(const void *)arg1 count:(unsigned int)arg2;	// IMP=0x0010000000a77d8e
- (void)onAccelerometerData:(const struct Sample *)arg1;	// IMP=0x0010000000a77b81
- (double)makeSafeAbsoluteElevation:(double)arg1;	// IMP=0x0010000000a77a2e
- (double)makeSafeCFAbsoluteTime:(double)arg1;	// IMP=0x0010000000a77a0c
- (void)teardownListeners;	// IMP=0x0010000000a7731d
- (void)setupListeners;	// IMP=0x0010000000a75e97
@property(readonly, nonatomic) NSArray *recordingURLs;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (_Bool)setWorkingDirectory:(id)arg1;	// IMP=0x0010000000a7576e
- (void)cleanup;	// IMP=0x0010000000a7575c
- (void)stop;	// IMP=0x0010000000a75662
- (_Bool)start:(id)arg1 recentLocation:(struct CLDaemonLocation *)arg2 triggerDelay:(double)arg3;	// IMP=0x0010000000a7524c
- (void)dealloc;	// IMP=0x0010000000a751bb
- (id)initWithDelegate:(id)arg1 universe:(id)arg2 settings:(void *)arg3;	// IMP=0x0010000000a74c54

@end

