//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDNetworkRouterFirewallRuleManager-Protocol.h>
#import <HomeKitDaemonLegacy/HMDNetworkRouterFirewallRuleManagerDebug-Protocol.h>
#import <HomeKitDaemonLegacy/HMDNetworkRouterFirewallRuleManagerInternal-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMBLocalDatabase, HMFUnfairLock, NSArray, NSMutableArray, NSNotificationCenter, NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMDNetworkRouterFirewallRuleManagerInternal, HMFLogging, HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug>
{
    long long _state;	// 8 = 0x8
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> _coordinator;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    unsigned long long _operationsInProgressCount;	// 32 = 0x20
    HMBLocalDatabase *_localDatabase;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> _coordinatorFactory;	// 72 = 0x48
    HMFUnfairLock *_propertyLock;	// 80 = 0x50
}

+ (double)defaultCloudFetchRetryInterval;	// IMP=0x00000000002e84ac
+ (double)defaultCloudFetchInterval;	// IMP=0x00000000002e8493
+ (id)sharedInstance;	// IMP=0x00000000002e8463
+ (id)logCategory;	// IMP=0x00000000002e8433
- (void).cxx_destruct;	// IMP=0x00000000002e3fe1
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> coordinatorFactory; // @synthesize coordinatorFactory=_coordinatorFactory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
- (void)forceFetchCloudChangesAndForceChangeNotifications:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e3ede
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e3ecb
- (void)removeAllOverridesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e3eba
- (void)addOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e3eab
- (void)setOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e3e99
- (void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000002e3d80
- (void)removeAllLocalRulesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e3d01
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000002e3ccf
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(_Bool)arg2 rawOutput:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e3ca8
- (void)dumpAllLocalRulesIgnoringOverrides:(_Bool)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e3c83
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 verifySignatures:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e3c6d
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e3c48
- (void)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e3b96
- (void)fetchRulesForAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e3ae4
- (void)_fetchCloudChangesIgnoringLastFetchedAccessories:(_Bool)arg1 forceChangeNotifications:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e3a4f
- (void)fetchCloudChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e3a36
- (void)didCompleteScheduledCloudFetch;	// IMP=0x00000000002e398c
@property(readonly, copy, nonatomic) NSArray *activeClients;
- (void)shutdownForClient:(id)arg1;	// IMP=0x00000000002e37c9
- (void)startupForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e36ed
@property(nonatomic) unsigned long long operationsInProgressCount; // @synthesize operationsInProgressCount=_operationsInProgressCount;
@property(readonly, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> coordinator; // @synthesize coordinator=_coordinator;
- (void)dealloc;	// IMP=0x00000000002e3320
- (id)initWithLocalDatabase:(id)arg1 coordinatorFactory:(id)arg2;	// IMP=0x00000000002e3252
- (id)initWithLocalDatabase:(id)arg1;	// IMP=0x00000000002e323e
- (id)init;	// IMP=0x00000000002e31c3
- (id)initWithLocalDatabase:(id)arg1 notificationCenter:(id)arg2 workQueue:(id)arg3 coordinatorFactory:(id)arg4;	// IMP=0x00000000002e3004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

