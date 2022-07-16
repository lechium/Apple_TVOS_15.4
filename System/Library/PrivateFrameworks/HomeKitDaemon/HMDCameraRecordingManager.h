//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraClipManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionNotificationTriggerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraRecordingSettingsControlDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraProfile, HMDCameraRecordingBulkSendSessionInitiator, HMDCameraRecordingLoadBalancer, HMDCameraRecordingManagerDependencyFactory, HMDCameraRecordingSession, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSessionRetryContext, HMDCameraRecordingSettingsControl, HMDCameraSignificantEventServer, HMDHAPAccessory, HMDStreamDataChunkAssembler, HMFMessageDispatcher, HMFTimer, NSDictionary, NSMutableArray, NSMutableSet, NSNotificationCenter, NSObject, NSSet, NSString, NSUUID;
@protocol HMDDataStreamBulkSendSession, HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate>
{
    _Bool _didShutDown;	// 8 = 0x8
    _Bool _motionActive;	// 9 = 0x9
    NSUUID *_messageTargetUUID;	// 16 = 0x10
    HMDStreamDataChunkAssembler *_dataChunkAssembler;	// 24 = 0x18
    HMDCameraRecordingLoadBalancer *_cameraLoadBalancer;	// 32 = 0x20
    id <HMDFeaturesDataSource> _featuresDataSource;	// 40 = 0x28
    HMDCameraSignificantEventServer *_significantEventServer;	// 48 = 0x30
    NSUUID *_cameraUUID;	// 56 = 0x38
    long long _bulkSendSessionReadTimeoutFactor;	// 64 = 0x40
    NSMutableArray *_sessionStartRequests;	// 72 = 0x48
    NSNotificationCenter *_notificationCenter;	// 80 = 0x50
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_workQueue;	// 96 = 0x60
    HMDCameraRecordingSessionNotificationTrigger *_notificationTrigger;	// 104 = 0x68
    HMDCameraRecordingSettingsControl *_recordingSettingsControl;	// 112 = 0x70
    HMDCameraRecordingManagerDependencyFactory *_dependencyFactory;	// 120 = 0x78
    HMFMessageDispatcher *_msgDispatcher;	// 128 = 0x80
    HMDHAPAccessory *_accessory;	// 136 = 0x88
    HMDCameraProfile *_camera;	// 144 = 0x90
    id <HMDDataStreamBulkSendSession> _currentBulkSendSession;	// 152 = 0x98
    HMDCameraRecordingBulkSendSessionInitiator *_bulkSendSessionInitiator;	// 160 = 0xa0
    HMFTimer *_readCallbackTimer;	// 168 = 0xa8
    HMFTimer *_sessionRetryTimer;	// 176 = 0xb0
    HMDCameraRecordingSessionRetryContext *_sessionRetryContext;	// 184 = 0xb8
    HMDCameraRecordingSession *_currentRecordingSession;	// 192 = 0xc0
    NSMutableSet *_activeRecordingSessions;	// 200 = 0xc8
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0000000000031e20
+ (id)logCategory;	// IMP=0x0000000000031df0
- (void).cxx_destruct;	// IMP=0x000000000002fa05
@property(readonly) NSMutableSet *activeRecordingSessions; // @synthesize activeRecordingSessions=_activeRecordingSessions;
@property(retain) HMDCameraRecordingSession *currentRecordingSession; // @synthesize currentRecordingSession=_currentRecordingSession;
@property(getter=isMotionActive) _Bool motionActive; // @synthesize motionActive=_motionActive;
@property(retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext; // @synthesize sessionRetryContext=_sessionRetryContext;
@property(retain) HMFTimer *sessionRetryTimer; // @synthesize sessionRetryTimer=_sessionRetryTimer;
@property(retain) HMFTimer *readCallbackTimer; // @synthesize readCallbackTimer=_readCallbackTimer;
@property(readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator; // @synthesize bulkSendSessionInitiator=_bulkSendSessionInitiator;
@property(retain) id <HMDDataStreamBulkSendSession> currentBulkSendSession; // @synthesize currentBulkSendSession=_currentBulkSendSession;
@property(readonly) __weak HMDCameraProfile *camera; // @synthesize camera=_camera;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) HMDCameraRecordingManagerDependencyFactory *dependencyFactory; // @synthesize dependencyFactory=_dependencyFactory;
@property(readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl; // @synthesize recordingSettingsControl=_recordingSettingsControl;
@property(readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger; // @synthesize notificationTrigger=_notificationTrigger;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSMutableArray *sessionStartRequests; // @synthesize sessionStartRequests=_sessionStartRequests;
@property(readonly) long long bulkSendSessionReadTimeoutFactor; // @synthesize bulkSendSessionReadTimeoutFactor=_bulkSendSessionReadTimeoutFactor;
@property(readonly, copy) NSUUID *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
@property(readonly) HMDCameraSignificantEventServer *significantEventServer; // @synthesize significantEventServer=_significantEventServer;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property _Bool didShutDown; // @synthesize didShutDown=_didShutDown;
@property(readonly) HMDCameraRecordingLoadBalancer *cameraLoadBalancer; // @synthesize cameraLoadBalancer=_cameraLoadBalancer;
@property(retain) HMDStreamDataChunkAssembler *dataChunkAssembler; // @synthesize dataChunkAssembler=_dataChunkAssembler;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x000000000002f6eb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)handleResidentDeviceUpdated:(id)arg1;	// IMP=0x000000000002f668
- (void)session:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x000000000002f3ad
@property(readonly) NSString *logIdentifier;
- (void)_updateSessionRestoreRegistration;	// IMP=0x000000000002f1ae
- (void)_resetCurrentRecordingSession:(id)arg1;	// IMP=0x000000000002ec66
- (void)_startSessionRetryTimer;	// IMP=0x000000000002e9ce
- (void)_resetRetryContextWithReason:(id)arg1;	// IMP=0x000000000002e860
- (void)_closeCurrentSessionsWithReason:(unsigned short)arg1;	// IMP=0x000000000002e65a
- (unsigned short)_closeEventReasonForRecordingSessionError:(id)arg1;	// IMP=0x000000000002e5df
- (void)_handleDataReceived:(id)arg1;	// IMP=0x000000000002de9d
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000002dc00
- (void)_readDataForCurrentSession;	// IMP=0x000000000002dad4
- (void)_handleBulkSendSessionCreated:(id)arg1;	// IMP=0x000000000002d836
- (void)_startRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;	// IMP=0x000000000002d143
- (id)bulkSendSessionOpenReasonWithError:(id *)arg1;	// IMP=0x000000000002ccc6
- (void)_processQueuedCameraRecordingSessionStartRequests;	// IMP=0x000000000002cad0
- (void)handleStartRecordingSessionRequest:(id)arg1;	// IMP=0x000000000002c489
- (void)_startRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3;	// IMP=0x000000000002c32b
- (void)_createRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2;	// IMP=0x000000000002bc6c
- (void)_submitLoadBalancingEventWithDecision:(id)arg1 numberOfRetries:(unsigned long long)arg2;	// IMP=0x000000000002b8e9
- (void)_forwardRecordingSessionForTrigger:(unsigned long long)arg1 withLoadBalancerDecision:(id)arg2 deviceFilter:(CDUnknownBlockType)arg3 sessionCoordinationLogEvent:(id)arg4 retryAttemptNumber:(long long)arg5;	// IMP=0x000000000002b2ec
@property(readonly) NSDictionary *homePresenceByPairingIdentity;
- (void)_coordinateRecordingSessionForTrigger:(unsigned long long)arg1;	// IMP=0x000000000002ac18
- (void)_clipManagerDidStartUpCloudZone;	// IMP=0x000000000002a9e1
- (void)_shutDown;	// IMP=0x000000000002a846
- (void)_start;	// IMP=0x000000000002a1c1
- (void)recordingSettingsControlDidFailToConfigure:(id)arg1;	// IMP=0x0000000000029ff1
- (void)recordingSettingsControlDidConfigure:(id)arg1;	// IMP=0x0000000000029c59
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;	// IMP=0x0000000000029be8
- (void)clipManagerDidStop:(id)arg1;	// IMP=0x0000000000029b77
- (void)clipManagerDidStartUpCloudZone:(id)arg1;	// IMP=0x0000000000029b06
- (void)notificationTrigger:(id)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(_Bool)arg3;	// IMP=0x0000000000029807
- (void)shutDown;	// IMP=0x0000000000029796
- (void)start;	// IMP=0x0000000000029725
- (void)dealloc;	// IMP=0x0000000000029612
- (id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2 dependencyFactory:(id)arg3 notificationCenter:(id)arg4;	// IMP=0x000000000002905d
- (id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2;	// IMP=0x0000000000028faa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
