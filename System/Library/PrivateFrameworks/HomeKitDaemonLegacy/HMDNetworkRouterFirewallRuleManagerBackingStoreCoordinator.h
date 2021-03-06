//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMBLocalZone, NSNotificationCenter, NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMDNetworkRouterFirewallRuleManagerInternal, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator>
{
    id <HMDNetworkRouterFirewallRuleManagerInternal> _firewallRuleManager;	// 8 = 0x8
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> _mirror;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> _cloudFetchScheduler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_ownerQueue;	// 40 = 0x28
    HMBLocalZone *_mirroredLocalZone;	// 48 = 0x30
}

+ (id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)arg1;	// IMP=0x00000000006eb416
+ (id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)arg1;	// IMP=0x00000000006eb342
+ (id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)arg1;	// IMP=0x00000000006eb256
+ (id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)arg1;	// IMP=0x00000000006eb16a
+ (id)__createProcessingOptionsWithLabel:(id)arg1;	// IMP=0x00000000006eb153
+ (id)__createProcessingOptionsWithLabel:(id)arg1 qualityOfService:(long long)arg2;	// IMP=0x00000000006eb0f2
+ (id)__jsonFromRecords:(id)arg1 validateWithPublicKeys:(id)arg2 rawOutput:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000006ea669
+ (id)__pairedMetadataFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000006ea469
+ (id)__networkDeclarationsFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000006ea269
+ (id)__jsonFromPairedMetadata:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000006ea161
+ (id)__jsonFromDeclarations:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000006ea059
+ (id)__jsonStringFromDictionary:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000006e9fe7
+ (id)__jsonValueForCKRecordValue:(id)arg1;	// IMP=0x00000000006e9b02
+ (_Bool)ckUseAnonymousAccount;	// IMP=0x00000000006e9ab7
+ (long long)ckContainerEnvironment;	// IMP=0x00000000006e992a
+ (id)ckContainerIdentifier;	// IMP=0x00000000006e9795
+ (id)logCategory;	// IMP=0x00000000006e9765
- (void).cxx_destruct;	// IMP=0x00000000006e72b9
@property(retain, nonatomic) HMBLocalZone *mirroredLocalZone; // @synthesize mirroredLocalZone=_mirroredLocalZone;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ownerQueue; // @synthesize ownerQueue=_ownerQueue;
@property(readonly, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> cloudFetchScheduler; // @synthesize cloudFetchScheduler=_cloudFetchScheduler;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager; // @synthesize firewallRuleManager=_firewallRuleManager;
- (void)cloudFetchSchedulerFired:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e7197
- (void)__cloudFetchSchedulerFired:(CDUnknownBlockType)arg1;	// IMP=0x00000000006e6f76
- (void)__stopCloudFetchScheduler;	// IMP=0x00000000006e6e4e
- (void)__maybeStartOrStopCloudFetchScheduler;	// IMP=0x00000000006e6a97
- (_Bool)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006e6906
- (_Bool)removeAllOverridesWithError:(id *)arg1;	// IMP=0x00000000006e684d
- (_Bool)addOverrides:(id)arg1 replace:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000006e6613
- (id)_fetchAllOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006e6381
- (id)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00000000006e609e
- (_Bool)removeAllLocalRulesWithError:(id *)arg1;	// IMP=0x00000000006e5fe5
- (id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00000000006e5d02
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 listOnly:(_Bool)arg4 verifySignatures:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006e5b14
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 verifySignatures:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000006e565d
- (void)_listCloudRecordsForProductGroup:(id)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006e548c
- (void)_fetchCloudChangesIfNeededForRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e51e1
- (id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2;	// IMP=0x00000000006e478b
- (void)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000006e42a5
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000006e3674
- (id)_fetchPairedMetadataForAccessories:(id)arg1 options:(id)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000006e2996
- (id)pairedMetadataVersionConfigurationForAccessory:(id)arg1 pairedMetadata:(id)arg2;	// IMP=0x00000000006e1f02
- (id)_fetchNetworkDeclarationsForRecordIDs:(id)arg1 options:(id)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000006e1620
- (id)_fetchAllDataForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006e138e
- (void)_fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 forceChangeNotifications:(_Bool)arg3 requiredRecordIDs:(id)arg4 schedulerXpcActivity:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006e0f9b
- (void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 forceChangeNotifications:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000006e0e7a
- (void)firewallRuleManagerClientsDidChange;	// IMP=0x00000000006e0e27
- (void)shutdownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006e0b54
- (void)__startupWithMirror:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e08a6
- (void)__startupWithMirroredLocalZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e0619
- (void)startupWithLocalDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e01d7
@property(retain, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> mirror; // @synthesize mirror=_mirror;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchInterval:(double)arg3 cloudFetchRetryInterval:(double)arg4 ownerQueue:(id)arg5;	// IMP=0x00000000006e002a
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchScheduler:(id)arg3 ownerQueue:(id)arg4;	// IMP=0x00000000006dffc1
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 ownerQueue:(id)arg3;	// IMP=0x00000000006dfeee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

