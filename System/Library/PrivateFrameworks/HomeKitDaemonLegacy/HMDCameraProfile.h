//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraClipManagerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraProfileSettingsManagerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSettingProactiveReaderDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSignificantEventListenerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDCameraClipManager, HMDCameraClipUserNotificationCenter, HMDCameraProfileSettingsManager, HMDCameraRecordingManager, HMDCameraRecordingReachabilityEventManager, HMDCameraSignificantEventListener, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDPredicateUtilities, HMDService, HMFNetMonitor, HMFTimer, NSDictionary, NSMutableArray, NSSet, NSString, NSUUID, _HMCameraUserSettings;

@interface HMDCameraProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraClipManagerDelegate>
{
    _Bool _microphonePresent;	// 16 = 0x10
    _Bool _speakerPresent;	// 17 = 0x11
    NSUUID *_cloudZoneUUID;	// 24 = 0x18
    HMDCameraClipManager *_clipManager;	// 32 = 0x20
    HMDService *_recordingManagementService;	// 40 = 0x28
    HMDCameraSignificantEventListener *_significantEventListener;	// 48 = 0x30
    HMDHAPAccessory *_hapAccessory;	// 56 = 0x38
    NSSet *_cameraStreamManagers;	// 64 = 0x40
    HMDCameraSnapshotManager *_snapshotManager;	// 72 = 0x48
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 80 = 0x50
    NSMutableArray *_settingProactiveReaders;	// 88 = 0x58
    HMFNetMonitor *_networkMonitor;	// 96 = 0x60
    HMDCameraProfileSettingsManager *_cameraSettingsManager;	// 104 = 0x68
    HMDCameraRecordingReachabilityEventManager *_reachabilityEventManager;	// 112 = 0x70
    HMFTimer *_recordingEventsCleanupTimer;	// 120 = 0x78
    HMDCameraClipUserNotificationCenter *_clipUserNotificationCenter;	// 128 = 0x80
    HMDPredicateUtilities *_predicateUtilities;	// 136 = 0x88
    HMDCameraRecordingManager *_cameraRecordingManager;	// 144 = 0x90
    CDUnknownBlockType _recordingEventsCleanupTimerFactory;	// 152 = 0x98
    CDUnknownBlockType _recordingManagerFactory;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000088bdde
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x000000000088bdd6
+ (id)logCategory;	// IMP=0x000000000088bda6
+ (void)setBulletinBoard:(id)arg1;	// IMP=0x000000000088bd92
+ (id)bulletinBoard;	// IMP=0x000000000088bd4f
- (void).cxx_destruct;	// IMP=0x000000000088b0ab
@property(copy) CDUnknownBlockType recordingManagerFactory; // @synthesize recordingManagerFactory=_recordingManagerFactory;
@property(copy) CDUnknownBlockType recordingEventsCleanupTimerFactory; // @synthesize recordingEventsCleanupTimerFactory=_recordingEventsCleanupTimerFactory;
@property(retain) HMDCameraRecordingManager *cameraRecordingManager; // @synthesize cameraRecordingManager=_cameraRecordingManager;
@property(retain) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(retain) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter; // @synthesize clipUserNotificationCenter=_clipUserNotificationCenter;
@property(retain) HMFTimer *recordingEventsCleanupTimer; // @synthesize recordingEventsCleanupTimer=_recordingEventsCleanupTimer;
@property(readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager; // @synthesize reachabilityEventManager=_reachabilityEventManager;
@property(readonly) HMDCameraProfileSettingsManager *cameraSettingsManager; // @synthesize cameraSettingsManager=_cameraSettingsManager;
@property(readonly) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly) NSMutableArray *settingProactiveReaders; // @synthesize settingProactiveReaders=_settingProactiveReaders;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly) HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly) NSSet *cameraStreamManagers; // @synthesize cameraStreamManagers=_cameraStreamManagers;
@property(readonly) __weak HMDHAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(retain) HMDCameraSignificantEventListener *significantEventListener; // @synthesize significantEventListener=_significantEventListener;
@property(readonly) HMDService *recordingManagementService; // @synthesize recordingManagementService=_recordingManagementService;
@property(retain) HMDCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(retain) NSUUID *cloudZoneUUID; // @synthesize cloudZoneUUID=_cloudZoneUUID;
@property(readonly, nonatomic, getter=isSpeakerPresent) _Bool speakerPresent; // @synthesize speakerPresent=_speakerPresent;
@property(readonly, nonatomic, getter=isMicrophonePresent) _Bool microphonePresent; // @synthesize microphonePresent=_microphonePresent;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000088acc8
- (void)networkMonitorIsUnreachable:(id)arg1;	// IMP=0x000000000088ac17
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x000000000088ab66
- (void)listener:(id)arg1 didReceiveSignificantEvent:(id)arg2 heroFrameData:(id)arg3;	// IMP=0x000000000088ab60
- (void)cameraProfileSettingsManager:(id)arg1 canDisableRecordingWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000088aa1e
- (void)cameraProfileSettingsManager:(id)arg1 canEnableRecordingWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000088a8dc
- (void)clipManagerDidDisableCloudStorage:(id)arg1;	// IMP=0x000000000088a868
- (void)clipManagerDidStop:(id)arg1;	// IMP=0x000000000088a75d
- (void)clipManagerDidStartUpCloudZone:(id)arg1;	// IMP=0x000000000088a6c5
- (void)clipManagerDidStart:(id)arg1;	// IMP=0x000000000088a527
- (void)clipManager:(id)arg1 didDeleteClipWithUUID:(id)arg2;	// IMP=0x000000000088a48f
- (void)clipManager:(id)arg1 didUpdateSignificantEvent:(id)arg2 withHomePresence:(id)arg3;	// IMP=0x000000000088a3a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000088a285
- (id)messageReceiverChildren;	// IMP=0x000000000088a13c
- (void)handleResidentsChanged:(id)arg1;	// IMP=0x000000000088a0cb
- (void)handleCameraProfileSettingsDidChangeNotification:(id)arg1;	// IMP=0x0000000000889fda
@property(readonly) _HMCameraUserSettings *currentSettings;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000889ab4
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;	// IMP=0x0000000000889a1c
- (void)_handleStreamControlRequest:(id)arg1;	// IMP=0x00000000008892bc
- (void)_handleNegotiateStreamRequest:(id)arg1;	// IMP=0x0000000000888a30
- (void)_postNotificationForUpdatedSignificantEvent:(id)arg1 homePresence:(id)arg2;	// IMP=0x00000000008888d0
- (_Bool)_shouldNotifyForSignificantEvent:(id)arg1 homePresence:(id)arg2;	// IMP=0x000000000088824b
- (void)registerForMessages;	// IMP=0x0000000000887877
- (void)_setControlSupport;	// IMP=0x00000000008874e0
- (id)dumpState;	// IMP=0x000000000088747d
- (void)dealloc;	// IMP=0x000000000088740f
- (void)unconfigure;	// IMP=0x0000000000887299
- (void)removeCloudData;	// IMP=0x0000000000887207
@property(readonly, copy) NSString *description;
- (void)_setUpBulletinNotificationManagerObserver;	// IMP=0x0000000000887118
- (void)_createSignificantEventListener;	// IMP=0x0000000000887112
- (void)_createCameraRecordingManager;	// IMP=0x0000000000886bcb
- (void)createCameraClipUserNotificationCenter;	// IMP=0x0000000000886ae0
- (void)tearDownWithReplacementCameraProfile:(id)arg1;	// IMP=0x000000000088692d
- (void)setUp;	// IMP=0x000000000088639d
@property(readonly, nonatomic, getter=isCameraRecordingFeatureSupported) _Bool supportsCameraRecordingFeature;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 recordingManagementService:(id)arg3 msgDispatcher:(id)arg4 settingsManager:(id)arg5 workQueue:(id)arg6 uniqueIdentifier:(id)arg7 reachabilityEventManager:(id)arg8 networkMonitor:(id)arg9 streamSnapshotHandler:(id)arg10 snapshotManager:(id)arg11 cameraStreamManagers:(id)arg12;	// IMP=0x000000000088606b
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 settingsManager:(id)arg4 workQueue:(id)arg5;	// IMP=0x000000000088560a
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
