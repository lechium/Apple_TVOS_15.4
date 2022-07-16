//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDCameraSnapshotLocalDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotRemoteRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotRemoteRelaySenderDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotRemoteRelayStreamDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotRemoteStreamReceiverDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotRemoteStreamSenderDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraStreamSnapshotHandlerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDCameraResidentMessageHandler, HMDCameraSnapshotMonitorEvents, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDSnapshotCacheRequestHandler, HMDSnapshotLocalSession, HMDSnapshotRequestHandler, HMDSnapshotSlotManager, HMFMessageDispatcher, HMFNetMonitor, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotManager : HMFObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    HMDSnapshotLocalSession *_currentLocalSession;	// 32 = 0x20
    NSMutableDictionary *_currentRemoteSessions;	// 40 = 0x28
    HMDHAPAccessory *_accessory;	// 48 = 0x30
    NSString *_imageCacheDirectory;	// 56 = 0x38
    HMDCameraSnapshotMonitorEvents *_monitorServicesManager;	// 64 = 0x40
    HMDSnapshotRequestHandler *_snapshotRequestHandler;	// 72 = 0x48
    HMDSnapshotCacheRequestHandler *_snapshotCacheRequestHandler;	// 80 = 0x50
    HMDSnapshotSlotManager *_snapshotSlotManager;	// 88 = 0x58
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 96 = 0x60
    NSMutableArray *_pendingSnapshotRequestDuringStreamSetup;	// 104 = 0x68
    NSMutableArray *_pendingRemoteSnapshotRequestDuringStreamSetup;	// 112 = 0x70
    HMFNetMonitor *_networkMonitor;	// 120 = 0x78
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 128 = 0x80
    NSString *_logIdentifier;	// 136 = 0x88
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0000000000651f5a
+ (void)auditSnapshotDirectories:(id)arg1;	// IMP=0x0000000000651baa
+ (id)logCategory;	// IMP=0x0000000000651b7a
- (void).cxx_destruct;	// IMP=0x000000000064f4fb
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;	// IMP=0x000000000064f457
- (void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(_Bool)arg2;	// IMP=0x000000000064f0e8
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;	// IMP=0x000000000064ef68
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;	// IMP=0x000000000064ecfe
- (void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064ebe4
- (void)snapshotRelayStream:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064eaca
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064e9b0
- (void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064e896
- (void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x000000000064e759
- (void)snapshotStreamReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064e647
- (void)snapshotRelaySender:(id)arg1 didSaveSnapshotFile:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064e45c
- (void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064e342
- (void)snapshotRelaySender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064e228
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x000000000064e0eb
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x000000000064dfd9
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x000000000064de9c
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleSnapshotSendFailure:(id)arg1;	// IMP=0x000000000064da9d
- (void)_handleSnapshotReceived:(id)arg1;	// IMP=0x000000000064d743
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000064d53b
- (void)_handleSnapshotRemoteRequest:(id)arg1;	// IMP=0x000000000064c78d
- (void)_handleSnapshotRequest:(id)arg1;	// IMP=0x000000000064bf08
@property(readonly, copy) NSDictionary *encodedMostRecentSnapshot;
- (void)_handleCreateSnapshotFromBulletinContext:(id)arg1;	// IMP=0x000000000064b8e3
- (void)_handleReleaseSnapshot:(id)arg1;	// IMP=0x000000000064b8bd
- (void)_handleFillSnapshotSlot:(id)arg1;	// IMP=0x000000000064b897
- (void)handleAccessoryDisconnected:(id)arg1;	// IMP=0x000000000064b826
- (void)releaseSnapshotWithSlotIdentifier:(id)arg1;	// IMP=0x000000000064b775
- (void)takeSnapshot:(id)arg1;	// IMP=0x000000000064b6c4
- (void)registerForMessages;	// IMP=0x000000000064afa5
- (void)dealloc;	// IMP=0x000000000064af14
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6 logIdentifier:(id)arg7 imageCacheDirectory:(id)arg8 residentMessageHandler:(id)arg9 snapshotSlotManager:(id)arg10;	// IMP=0x000000000064ab0d
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6;	// IMP=0x000000000064a891

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

