//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDAccessory, HMDNotificationRegistration, HMDSnapshotFile, HMFMessageDispatcher, NSDictionary, NSMapTable, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSnapshotSlotManager : HMFObject <HMFLogging>
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    NSMapTable *_filledSnapshotSlotIdentifiersByProcess;	// 16 = 0x10
    NSMapTable *_snapshotSlots;	// 24 = 0x18
    HMDAccessory *_accessory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_propertyQueue;	// 48 = 0x30
    HMFMessageDispatcher *_msgDispatcher;	// 56 = 0x38
    NSString *_imageCacheDirectory;	// 64 = 0x40
    HMDNotificationRegistration *_notificationRegistration;	// 72 = 0x48
    HMDSnapshotFile *_mostRecentSnapshot;	// 80 = 0x50
    NSString *_logIdentifier;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x000000000090438b
- (void).cxx_destruct;	// IMP=0x0000000000902a4a
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy) NSDictionary *encodedMostRecentSnapshot;
- (id)encodedMostRecentSnapshotForMessage:(id)arg1;	// IMP=0x00000000009025c3
- (id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2 shouldNotifyClients:(_Bool)arg3;	// IMP=0x00000000009024ae
- (void)handleReleaseSnapshot:(id)arg1;	// IMP=0x000000000090202d
- (void)handleFillSnapshotSlot:(id)arg1;	// IMP=0x0000000000901cdb
- (void)backboardServicesRelaunched:(id)arg1;	// IMP=0x0000000000901c80
- (void)handleProcessStateChange:(id)arg1;	// IMP=0x0000000000901be9
- (void)registerForMessages;	// IMP=0x000000000090111e
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 uniqueIdentifier:(id)arg5 msgDispatcher:(id)arg6;	// IMP=0x0000000000900f3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

