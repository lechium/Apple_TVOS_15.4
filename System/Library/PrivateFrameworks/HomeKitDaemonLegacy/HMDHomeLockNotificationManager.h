//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDHomeLockNotificationManagerDataSource, OS_dispatch_queue;

@interface HMDHomeLockNotificationManager : HMFObject <HMFMessageReceiver, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    HMFMessageDispatcher *_msgDispatcher;	// 32 = 0x20
    id <HMDHomeLockNotificationManagerDataSource> _dataSource;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000004fe485
- (void).cxx_destruct;	// IMP=0x00000000004fd47f
@property(readonly) id <HMDHomeLockNotificationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000004fd399
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)contextResolutionResultFromNFCContextId:(id)arg1;	// IMP=0x00000000004fd0c6
- (id)contextResolutionResultFromHAPContextId:(id)arg1;	// IMP=0x00000000004fce17
- (id)contextResolutionResultFromAccessCode:(id)arg1;	// IMP=0x00000000004fcac1
- (void)_resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004fc855
- (void)_sendResolveLockNotificationContextIdentifierMessage:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004fc373
- (void)resolveKeypadContextIdentifier:(id)arg1 accessoryUUID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004fc14c
- (id)displayNameForNotificationContextResolutionResult:(id)arg1;	// IMP=0x00000000004fbdd7
- (void)resolveEncodedCharacteristicNotificationContext:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004fb8f5
- (void)handleResolveNotificationContextIdentifierMessage:(id)arg1;	// IMP=0x00000000004fb5f0
- (_Bool)shouldResolveNotificationContextForCharacteristic:(id)arg1;	// IMP=0x00000000004fb508
@property(readonly) _Bool hasReachablePrimaryResidentSupportingLockNotificationContext;
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000004fb059
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000004faf85
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000004faf01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

