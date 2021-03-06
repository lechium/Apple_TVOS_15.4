//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraClipManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraProfileSettingsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSettingProactiveReaderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSignificantEventListenerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSignificantEventNotificationObserver-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraClipManager, HMDCameraClipUserNotificationCenter, HMDCameraProfileSettingsManager, HMDCameraRecordingManager, HMDCameraRecordingReachabilityEventManager, HMDCameraSignificantEventListener, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDPredicateUtilities, HMDService, HMFNetMonitor, HMFTimer, NSDictionary, NSMutableArray, NSSet, NSString, NSUUID, _HMCameraUserSettings;

@interface HMDCameraProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraSignificantEventNotificationObserver, HMDCameraClipManagerDelegate>
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

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009439aa
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000009439a2
+ (id)logCategory;	// IMP=0x0000000000943972
+ (void)setBulletinBoard:(id)arg1;	// IMP=0x000000000094395e
+ (id)bulletinBoard;	// IMP=0x000000000094391b
- (void).cxx_destruct;	// IMP=0x0000000000942c77
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
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000942894
- (void)networkMonitorIsUnreachable:(id)arg1;	// IMP=0x00000000009427e3
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x0000000000942732
- (void)notificationManager:(id)arg1 didReceiveNotificationForCameraSignificantEventIdentifier:(id)arg2;	// IMP=0x00000000009425e8
- (void)listener:(id)arg1 didReceiveSignificantEvent:(id)arg2 heroFrameData:(id)arg3;	// IMP=0x000000000094252e
- (void)cameraProfileSettingsManager:(id)arg1 canDisableRecordingWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009423ec
- (void)cameraProfileSettingsManager:(id)arg1 canEnableRecordingWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009422aa
- (void)clipManagerDidDisableCloudStorage:(id)arg1;	// IMP=0x0000000000942236
- (void)clipManagerDidStop:(id)arg1;	// IMP=0x000000000094212b
- (void)clipManagerDidStartUpCloudZone:(id)arg1;	// IMP=0x0000000000942093
- (void)clipManagerDidStart:(id)arg1;	// IMP=0x0000000000941ef5
- (void)clipManager:(id)arg1 didDeleteClipWithUUID:(id)arg2;	// IMP=0x0000000000941e5d
- (void)clipManager:(id)arg1 didUpdateSignificantEvent:(id)arg2 withHomePresence:(id)arg3;	// IMP=0x0000000000941d74
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000941c53
- (id)messageReceiverChildren;	// IMP=0x0000000000941b0a
- (void)handleResidentsChanged:(id)arg1;	// IMP=0x0000000000941a99
- (void)handleCameraProfileSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000009419a8
@property(readonly) _HMCameraUserSettings *currentSettings;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000941482
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;	// IMP=0x00000000009413ea
- (void)_handleStreamControlRequest:(id)arg1;	// IMP=0x0000000000940c8a
- (void)_handleNegotiateStreamRequest:(id)arg1;	// IMP=0x00000000009403fe
- (void)_postNotificationForUpdatedSignificantEvent:(id)arg1 homePresence:(id)arg2;	// IMP=0x000000000094029e
- (_Bool)_shouldNotifyForSignificantEvent:(id)arg1 homePresence:(id)arg2;	// IMP=0x000000000093fc19
- (void)registerForMessages;	// IMP=0x000000000093f245
- (void)_setControlSupport;	// IMP=0x000000000093eeae
- (id)dumpState;	// IMP=0x000000000093ee4b
- (void)dealloc;	// IMP=0x000000000093eddd
- (void)unconfigure;	// IMP=0x000000000093ec67
- (void)removeCloudData;	// IMP=0x000000000093ebd5
@property(readonly, copy) NSString *description;
- (void)_setUpBulletinNotificationManagerObserver;	// IMP=0x000000000093ea33
- (void)_createSignificantEventListener;	// IMP=0x000000000093e925
- (void)_createCameraRecordingManager;	// IMP=0x000000000093e3de
- (void)createCameraClipUserNotificationCenter;	// IMP=0x000000000093e2f3
- (void)tearDownWithReplacementCameraProfile:(id)arg1;	// IMP=0x000000000093e140
- (void)setUp;	// IMP=0x000000000093dbb0
@property(readonly, nonatomic, getter=isCameraRecordingFeatureSupported) _Bool supportsCameraRecordingFeature;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 recordingManagementService:(id)arg3 msgDispatcher:(id)arg4 settingsManager:(id)arg5 workQueue:(id)arg6 uniqueIdentifier:(id)arg7 reachabilityEventManager:(id)arg8 networkMonitor:(id)arg9 streamSnapshotHandler:(id)arg10 snapshotManager:(id)arg11 cameraStreamManagers:(id)arg12;	// IMP=0x000000000093d87e
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 settingsManager:(id)arg4 workQueue:(id)arg5;	// IMP=0x000000000093ce1d
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

