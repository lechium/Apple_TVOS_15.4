//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerClient-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessory, HMDHome, HMDNetworkRouterController, HMFUnfairLock, NSMutableSet, NSNotificationCenter, NSString;
@protocol HMDNetworkRouterFirewallRuleManager, OS_dispatch_queue;

@interface HMDNetworkRouterClientManager : NSObject <HMFLogging, HMDDevicePreferenceDataSource, HMDNetworkRouterFirewallRuleManagerClient>
{
    _Bool _started;	// 8 = 0x8
    _Bool _managedNetworkEnabled;	// 9 = 0x9
    _Bool _staleClientIdentifiersResetNeeded;	// 10 = 0xa
    _Bool _staleClientIdentifiersResetInProgress;	// 11 = 0xb
    _Bool _startPending;	// 12 = 0xc
    HMDHAPAccessory *_networkRouterAccessory;	// 16 = 0x10
    HMFUnfairLock *_lock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    id <HMDNetworkRouterFirewallRuleManager> _firewallRuleManager;	// 48 = 0x30
    NSMutableSet *_accessoriesInReconfiguration;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000085c485
- (void).cxx_destruct;	// IMP=0x0000000000856a75
@property(readonly) NSMutableSet *accessoriesInReconfiguration; // @synthesize accessoriesInReconfiguration=_accessoriesInReconfiguration;
@property(nonatomic) _Bool startPending; // @synthesize startPending=_startPending;
@property(nonatomic) _Bool staleClientIdentifiersResetInProgress; // @synthesize staleClientIdentifiersResetInProgress=_staleClientIdentifiersResetInProgress;
@property(nonatomic) _Bool staleClientIdentifiersResetNeeded; // @synthesize staleClientIdentifiersResetNeeded=_staleClientIdentifiersResetNeeded;
@property(nonatomic) _Bool managedNetworkEnabled; // @synthesize managedNetworkEnabled=_managedNetworkEnabled;
@property(readonly) id <HMDNetworkRouterFirewallRuleManager> firewallRuleManager; // @synthesize firewallRuleManager=_firewallRuleManager;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, copy) NSString *description;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000856912
- (id)_transactionBlockForAccessoriesWithStaleClientIdentifier;	// IMP=0x0000000000856527
- (void)_unregisterForNetworkProtectionChangesToGroup:(id)arg1;	// IMP=0x00000000008563c9
- (void)_registerForNetworkProtectionChangesToGroup:(id)arg1;	// IMP=0x0000000000856264
- (void)_deregisterForChangesToManagedAccessory:(id)arg1;	// IMP=0x000000000085618a
- (void)_registerForChangesToManagedAccessory:(id)arg1;	// IMP=0x00000000008560a2
- (void)_fetchFirewallRulesForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000855d7e
- (void)_getNetworkConfigurationForAccessory:(id)arg1 targetProtectionMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000855c15
- (void)_migrateAccessory:(id)arg1 withConfiguration:(id)arg2 clientStatus:(id)arg3 fromCredentialType:(long long)arg4 toCredentialType:(long long)arg5 rotate:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000008551dc
- (void)_updateClientConfiguration:(id)arg1 forAccessory:(id)arg2 protectionMode:(long long)arg3 clientStatus:(id)arg4 skipIfFingerprintMatches:(_Bool)arg5 clientReconfigurationAllowed:(_Bool)arg6;	// IMP=0x0000000000855093
- (void)_updateExistingClientConfiguration:(id)arg1 forAccessory:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x0000000000854d6c
- (void)_updateOrCreateClientConfigurationForAccessory:(id)arg1 preferReconcile:(_Bool)arg2 clientReconfigurationAllowed:(_Bool)arg3;	// IMP=0x0000000000854aa0
- (void)_updateClientConfigurationForAllAccessoriesWithClientReconfigurationAllowed:(_Bool)arg1;	// IMP=0x00000000008548e7
- (void)_createClientConfigurationForAccessory:(id)arg1 credential:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x000000000085467b
- (void)_replaceClientConfigurationForAccessory:(id)arg1 credential:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x00000000008543d0
- (void)_replaceNetworkClientIdentifierForAccessory:(id)arg1 networkClientIdentifier:(id)arg2 networkRouterUUID:(id)arg3 clientStatus:(id)arg4 clientReconfigurationAllowed:(_Bool)arg5;	// IMP=0x00000000008540e7
- (void)_reconcileClientConfigurationForAccessory:(id)arg1 clientStatus:(id)arg2 networkRouterUUID:(id)arg3 clientReconfigurationAllowed:(_Bool)arg4;	// IMP=0x0000000000853a70
- (void)_reconcileClientConfigurationForReachableAccessory:(id)arg1 clientReconfigurationAllowed:(_Bool)arg2;	// IMP=0x000000000085346c
- (void)_startManagingAccessory:(id)arg1 initialHomeSetup:(_Bool)arg2;	// IMP=0x00000000008532b3
- (void)handleFirewallRulesUpdated:(id)arg1;	// IMP=0x0000000000853202
- (void)handleHomeNetworkProtectionChanged:(id)arg1;	// IMP=0x0000000000853151
- (void)handleNetworkProtectionGroupProtectionChanged:(id)arg1;	// IMP=0x00000000008530a0
- (void)handleNetworkProtectionGroupDeactivated:(id)arg1;	// IMP=0x0000000000852fef
- (void)handleNetworkProtectionGroupActivated:(id)arg1;	// IMP=0x0000000000852f3e
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x0000000000852e8d
- (void)handleAccessoryFirmwareVersionUpdated:(id)arg1;	// IMP=0x0000000000852ddc
- (void)handleAccessoryRemoved:(id)arg1;	// IMP=0x0000000000852d2b
- (void)handleAccessoryAdded:(id)arg1;	// IMP=0x0000000000852c7a
- (void)_handleRouterAccessoryReachable:(id)arg1;	// IMP=0x00000000008529a7
- (void)handleRouterAccessoryReachable:(id)arg1;	// IMP=0x00000000008528f6
- (void)_stop;	// IMP=0x00000000008526c6
- (void)_start;	// IMP=0x000000000085201d
- (void)_resetStaleClientIdentifiersBeforeStart;	// IMP=0x0000000000851cb8
- (void)_evaluateManagement;	// IMP=0x0000000000851a64
- (void)__deregisterForNetworkRouterAccessoryReachable:(id)arg1;	// IMP=0x00000000008519e8
- (void)__registerForNetworkRouterAccessoryReachable:(id)arg1;	// IMP=0x0000000000851965
@property(readonly) __weak HMDHome *home;
@property __weak HMDHAPAccessory *networkRouterAccessory; // @synthesize networkRouterAccessory=_networkRouterAccessory;
@property(nonatomic) _Bool started; // @synthesize started=_started;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;	// IMP=0x00000000008514e4
@property(readonly) HMDNetworkRouterController *routerController;
- (void)migrateAccessory:(id)arg1 toCredentialType:(long long)arg2 rotate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008513a2
- (void)replaceActiveNetworkRouterAccessory:(id)arg1;	// IMP=0x00000000008512f1
- (void)stop;	// IMP=0x0000000000851280
- (void)evaluateManagement;	// IMP=0x000000000085120f
- (id)initWithNetworkRouterAccessory:(id)arg1 workQueue:(id)arg2 firewallRuleManager:(id)arg3 notificationCenter:(id)arg4;	// IMP=0x0000000000850d40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
