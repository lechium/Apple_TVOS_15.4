//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject
{
    AVCaptureSessionInternal *_internal;	// 8 = 0x8
}

+ (void)_finishConfiguringProperty:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000008786e
+ (void)_startConfiguringProperty:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000087788
+ (_Bool)_isConfiguringProperty:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000087711
+ (_Bool)automaticallyNotifiesObserversOfRunning;	// IMP=0x0000000000081864
+ (_Bool)automaticallyNotifiesObserversOfMasterClock;	// IMP=0x000000000008185c
+ (_Bool)automaticallyNotifiesObserversOfSynchronizationClock;	// IMP=0x0000000000081854
+ (id)allSessionPresets;	// IMP=0x000000000007d38a
+ (id)dotString;	// IMP=0x000000000007d063
+ (void)initialize;	// IMP=0x000000000007c790
- (void)cancelForegroundAutoResumeAfterDate:(id)arg1;	// IMP=0x0000000000088414
- (void)_updateVideoHDREnabledForDevice:(id)arg1 forceResetVideoHDRSuspended:(_Bool)arg2;	// IMP=0x000000000008836a
- (void)_updateCameraCalibrationDataDeliveryEnabledForSourceDevice:(id)arg1;	// IMP=0x0000000000087e97
- (void)_updateCameraCalibrationDataDeliveryEnabledForAllConnectedSourceDevices;	// IMP=0x0000000000087e83
- (void)_updateDepthDataDeliveryEnabledForSourceDevice:(id)arg1;	// IMP=0x000000000008797b
- (void)_updateDepthDataDeliveryEnabledForAllConnectedSourceDevices;	// IMP=0x0000000000087967
- (void)_handleNotification:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000087646
- (void)_notifyMediaServicesError;	// IMP=0x000000000008760c
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;	// IMP=0x00000000000871d9
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;	// IMP=0x0000000000086ebd
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;	// IMP=0x0000000000086c9a
- (void)_notifySessionStopped;	// IMP=0x0000000000086c11
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;	// IMP=0x0000000000086b11
- (void)_notifySessionStarted;	// IMP=0x0000000000086a88
- (void)_updateDeviceActiveFormatsAndActiveConnections;	// IMP=0x00000000000852f1
- (id)_outputWithClass:(Class)arg1 forSourceDevice:(id)arg2;	// IMP=0x000000000008506c
- (void)_stopAndTearDownGraph;	// IMP=0x0000000000084fc7
- (_Bool)_buildAndRunGraph:(_Bool)arg1;	// IMP=0x0000000000084ac1
- (void)_handleBackgroundBlurActiveChangedForDevice:(id)arg1;	// IMP=0x00000000000849a8
- (void)_handleCenterStageActiveChangedForDevice:(id)arg1;	// IMP=0x000000000008488f
- (void)_addFakeOutputsIfNeededForCenterStageToSessionConfiguration:(id)arg1;	// IMP=0x00000000000841c7
- (id)_figCaptureSessionConfiguration;	// IMP=0x0000000000083f4f
- (void)_makeConfigurationLive:(id)arg1;	// IMP=0x0000000000083bc9
- (void)_postRuntimeError:(id)arg1;	// IMP=0x0000000000083b23
- (id)_stopError;	// IMP=0x0000000000083b15
- (id)sessionVideoCaptureDevices;	// IMP=0x000000000008391b
- (void)_removeConnectionsForInputPort:(id)arg1;	// IMP=0x000000000008365c
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;	// IMP=0x0000000000083377
- (id)_connectionsForNewOutput:(id)arg1;	// IMP=0x000000000008306f
- (id)_connectionsForNewInputPort:(id)arg1;	// IMP=0x0000000000082d02
- (_Bool)_shouldAutomaticallyAddConnection:(id)arg1;	// IMP=0x0000000000082c89
- (void)_teardownFigCaptureSession;	// IMP=0x0000000000082adf
- (int)_createFigCaptureSession;	// IMP=0x00000000000827fa
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000082318
- (void)informSessionMembersOfChangedActiveFormat:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000081bbc
- (void)handleVideoInputDevice:(id)arg1 activeDepthDataFormatChanged:(id)arg2;	// IMP=0x0000000000081acb
- (void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2;	// IMP=0x0000000000081907
- (_Bool)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;	// IMP=0x000000000008186c
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000817bd
@property(readonly, nonatomic) struct OpaqueCMClock *masterClock;
- (void)_setSynchronizationClock:(struct OpaqueCMClock *)arg1;	// IMP=0x00000000000816d2
@property(readonly, nonatomic) struct OpaqueCMClock *synchronizationClock;
- (void)_rebuildGraph;	// IMP=0x0000000000081647
- (void)_setRunning:(_Bool)arg1;	// IMP=0x0000000000081530
- (_Bool)_stopFigCaptureSession;	// IMP=0x0000000000081316
- (_Bool)_startFigCaptureSession;	// IMP=0x00000000000811fc
- (void)stopRunning;	// IMP=0x0000000000081104
- (void)startRunning;	// IMP=0x0000000000081006
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(nonatomic) _Bool automaticallyConfiguresCaptureDeviceForWideColor;
@property(nonatomic) _Bool automaticallyConfiguresApplicationAudioSession;
@property(nonatomic) _Bool usesApplicationAudioSession;
- (void)_setInterrupted:(_Bool)arg1 withReason:(int)arg2;	// IMP=0x0000000000080bf8
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000080b0c
- (void)removeConnection:(id)arg1;	// IMP=0x0000000000080ac2
- (_Bool)_addConnection:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000080908
- (void)addConnection:(id)arg1;	// IMP=0x0000000000080841
- (_Bool)canAddConnection:(id)arg1;	// IMP=0x000000000008082d
- (_Bool)_canAddConnection:(id)arg1 failureReason:(id *)arg2;	// IMP=0x000000000008030d
@property(readonly, nonatomic) NSArray *connections;
- (void)_removeVideoPreviewLayer:(id)arg1;	// IMP=0x00000000000801dd
- (void)_removeAllPreviewLayers;	// IMP=0x0000000000080092
- (_Bool)_addVideoPreviewLayerWithNoConnection:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000007ff8b
- (_Bool)_addVideoPreviewLayer:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000007fc51
- (_Bool)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id *)arg2;	// IMP=0x000000000007fc2d
- (void)removeOutput:(id)arg1;	// IMP=0x000000000007f993
- (_Bool)_addOutputWithNoConnections:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000007f890
- (void)addOutputWithNoConnections:(id)arg1;	// IMP=0x000000000007f7c9
- (void)addOutput:(id)arg1;	// IMP=0x000000000007f558
- (_Bool)canAddOutput:(id)arg1;	// IMP=0x000000000007f544
- (_Bool)_canAddOutput:(id)arg1 failureReason:(id *)arg2;	// IMP=0x000000000007f266
@property(readonly, nonatomic) NSArray *outputs;
- (void)_removeInput:(id)arg1;	// IMP=0x000000000007eeae
- (void)removeInput:(id)arg1;	// IMP=0x000000000007edbe
- (_Bool)_addInputWithNoConnections:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000007e986
- (void)addInputWithNoConnections:(id)arg1;	// IMP=0x000000000007e8bf
- (void)addInput:(id)arg1;	// IMP=0x000000000007e40a
- (_Bool)canAddInput:(id)arg1;	// IMP=0x000000000007e3f6
- (_Bool)_canAddInput:(id)arg1 failureReason:(id *)arg2;	// IMP=0x000000000007e0dc
@property(readonly, nonatomic) NSArray *inputs;
- (void)_determineSynchronizationClock;	// IMP=0x000000000007dabd
- (_Bool)isOverCost:(id *)arg1;	// IMP=0x000000000007dab5
- (_Bool)isBeingConfigured;	// IMP=0x000000000007daa4
- (void)_commitConfiguration;	// IMP=0x000000000007d849
- (void)_beginConfiguration;	// IMP=0x000000000007d68e
- (void)commitConfiguration;	// IMP=0x000000000007d67c
- (void)beginConfiguration;	// IMP=0x000000000007d66a
@property(copy, nonatomic) NSString *sessionPreset;
- (_Bool)canSetSessionPreset:(id)arg1;	// IMP=0x000000000007d06b
- (_Bool)notifiesOnMainThread;	// IMP=0x000000000007d053
- (id)description;	// IMP=0x000000000007cccc
- (void)dealloc;	// IMP=0x000000000007ca8d
- (id)initWithAssumedIdentity:(id)arg1;	// IMP=0x000000000007ca55
- (id)init;	// IMP=0x000000000007c844

@end

