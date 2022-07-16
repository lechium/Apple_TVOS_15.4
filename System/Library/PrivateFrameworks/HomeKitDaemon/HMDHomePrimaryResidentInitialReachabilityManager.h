//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMDResidentReachabilityState, NSNotificationCenter, NSNumber, NSObject, NSString, NSUUID;
@protocol HMDHomePrimaryResidentInitialReachabilityManagerDataSource, OS_dispatch_queue;

@interface HMDHomePrimaryResidentInitialReachabilityManager : HMFObject <HMFLogging>
{
    id <HMDHomePrimaryResidentInitialReachabilityManagerDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000a78706
- (void).cxx_destruct;	// IMP=0x0000000000a784cd
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) id <HMDHomePrimaryResidentInitialReachabilityManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)clearPersistedState;	// IMP=0x0000000000a78392
- (void)persistState:(id)arg1;	// IMP=0x0000000000a781c1
@property(readonly, copy) HMDResidentReachabilityState *persistedState;
- (void)handlePrimaryResidentUpdated:(id)arg1 reason:(id)arg2;	// IMP=0x0000000000a77c06
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x0000000000a778e5
- (void)handleResidentDeviceEnabledStateChangeNotification:(id)arg1;	// IMP=0x0000000000a77702
- (void)handleResidentDeviceManagerUpdateResidentNotification:(id)arg1;	// IMP=0x0000000000a77237
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000a77020
- (id)logIdentifier;	// IMP=0x0000000000a76fd0
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000a76c88
@property(readonly, copy) NSNumber *initialReachability;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000a7686d
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000a767ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
