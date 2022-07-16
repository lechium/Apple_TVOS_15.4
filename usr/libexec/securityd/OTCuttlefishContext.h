//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAccountInfo, CKKSCondition, CKKSKeychainView, CKKSLaunchSequence, CKKSLockStateTracker, CKKSNearFutureScheduler, CuttlefishXPCWrapper, MISSING_TYPE, NSData, NSOperationQueue, NSString, OTAccountSettingsX, OTCustodianRecoveryKey, OTCuttlefishAccountStateHolder, OTFollowup, OTInheritanceKey, OctagonAPSReceiver, OctagonStateMachine, TPPolicyVersion;
@protocol CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer, CKKSPeerProvider, OS_dispatch_queue, OTAuthKitAdapter, OTDeviceInformationAdapter, OTSOSAdapter, OTTooManyPeersAdapter;

__attribute__((visibility("hidden")))
@interface OTCuttlefishContext : NSObject
{
    NSString *_bottleID;	// 8 = 0x8
    NSString *_bottleSalt;	// 16 = 0x10
    NSData *_entropy;	// 24 = 0x18
    long long _resetReason;	// 32 = 0x20
    _Bool _skipRateLimitingCheck;	// 40 = 0x28
    _Bool _initialBecomeUntrustedPosted;	// 41 = 0x29
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 48 = 0x30
    OTFollowup *_followupHandler;	// 56 = 0x38
    NSString *_containerName;	// 64 = 0x40
    NSString *_contextID;	// 72 = 0x48
    NSString *_pairingUUID;	// 80 = 0x50
    CKKSLockStateTracker *_lockStateTracker;	// 88 = 0x58
    OTCuttlefishAccountStateHolder *_accountMetadataStore;	// 96 = 0x60
    OctagonStateMachine *_stateMachine;	// 104 = 0x68
    CKKSNearFutureScheduler *_apsRateLimiter;	// 112 = 0x70
    CKKSNearFutureScheduler *_sosConsistencyRateLimiter;	// 120 = 0x78
    CKKSKeychainView *_ckks;	// 128 = 0x80
    id <CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer> _accountStateTracker;	// 136 = 0x88
    id <OTDeviceInformationAdapter> _deviceAdapter;	// 144 = 0x90
    id <OTAuthKitAdapter> _authKitAdapter;	// 152 = 0x98
    id <OTSOSAdapter> _sosAdapter;	// 160 = 0xa0
    id <OTTooManyPeersAdapter> _tooManyPeersAdapter;	// 168 = 0xa8
    CKKSCondition *_pendingEscrowCacheWarmup;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_queue;	// 184 = 0xb8
    TPPolicyVersion *_policyOverride;	// 192 = 0xc0
    CKKSLaunchSequence *_launchSequence;	// 200 = 0xc8
    NSOperationQueue *_operationQueue;	// 208 = 0xd0
    CKAccountInfo *_cloudKitAccountInfo;	// 216 = 0xd8
    CKKSCondition *_cloudKitAccountStateKnown;	// 224 = 0xe0
    CKKSNearFutureScheduler *_suggestTLKUploadNotifier;	// 232 = 0xe8
    CKKSNearFutureScheduler *_requestPolicyCheckNotifier;	// 240 = 0xf0
    CKKSNearFutureScheduler *_upgradeUserControllableViewsRateLimiter;	// 248 = 0xf8
    CKKSNearFutureScheduler *_fixupRetryScheduler;	// 256 = 0x100
    NSString *_recoveryKey;	// 264 = 0x108
    OTCustodianRecoveryKey *_custodianRecoveryKey;	// 272 = 0x110
    OTInheritanceKey *_inheritanceKey;	// 280 = 0x118
    OTAccountSettingsX *_settings;	// 288 = 0x120
    OctagonAPSReceiver *_apsReceiver;	// 296 = 0x128
    id <CKKSPeerProvider> _octagonAdapter;	// 304 = 0x130
    Class _escrowRequestClass;	// 312 = 0x138
    Class _notifierClass;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00200000000dd7a6
@property(nonatomic) _Bool initialBecomeUntrustedPosted; // @synthesize initialBecomeUntrustedPosted=_initialBecomeUntrustedPosted;
@property(readonly) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(readonly) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(retain) id <CKKSPeerProvider> octagonAdapter; // @synthesize octagonAdapter=_octagonAdapter;
@property(retain) OctagonAPSReceiver *apsReceiver; // @synthesize apsReceiver=_apsReceiver;
@property(retain, nonatomic) OTAccountSettingsX *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) OTInheritanceKey *inheritanceKey; // @synthesize inheritanceKey=_inheritanceKey;
@property(retain, nonatomic) OTCustodianRecoveryKey *custodianRecoveryKey; // @synthesize custodianRecoveryKey=_custodianRecoveryKey;
@property(retain, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(retain) CKKSNearFutureScheduler *fixupRetryScheduler; // @synthesize fixupRetryScheduler=_fixupRetryScheduler;
@property(retain) CKKSNearFutureScheduler *upgradeUserControllableViewsRateLimiter; // @synthesize upgradeUserControllableViewsRateLimiter=_upgradeUserControllableViewsRateLimiter;
- (void)setRequestPolicyCheckNotifier:(id)arg1;	// IMP=0x00100000000dd64d
- (id)requestPolicyCheckNotifier;	// IMP=0x00100000000dd639
@property(retain) CKKSNearFutureScheduler *suggestTLKUploadNotifier; // @synthesize suggestTLKUploadNotifier=_suggestTLKUploadNotifier;
@property(retain) CKKSCondition *cloudKitAccountStateKnown; // @synthesize cloudKitAccountStateKnown=_cloudKitAccountStateKnown;
@property(retain) CKAccountInfo *cloudKitAccountInfo; // @synthesize cloudKitAccountInfo=_cloudKitAccountInfo;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSLaunchSequence *launchSequence; // @synthesize launchSequence=_launchSequence;
@property(retain) TPPolicyVersion *policyOverride; // @synthesize policyOverride=_policyOverride;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) CKKSCondition *pendingEscrowCacheWarmup; // @synthesize pendingEscrowCacheWarmup=_pendingEscrowCacheWarmup;
@property(readonly) id <OTTooManyPeersAdapter> tooManyPeersAdapter; // @synthesize tooManyPeersAdapter=_tooManyPeersAdapter;
@property(readonly) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
@property(readonly) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(readonly) id <OTDeviceInformationAdapter> deviceAdapter; // @synthesize deviceAdapter=_deviceAdapter;
@property(readonly) id <CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer> accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(retain) CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property(retain, nonatomic) CKKSNearFutureScheduler *sosConsistencyRateLimiter; // @synthesize sosConsistencyRateLimiter=_sosConsistencyRateLimiter;
@property(retain, nonatomic) CKKSNearFutureScheduler *apsRateLimiter; // @synthesize apsRateLimiter=_apsRateLimiter;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) OTCuttlefishAccountStateHolder *accountMetadataStore; // @synthesize accountMetadataStore=_accountMetadataStore;
@property(readonly, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain, nonatomic) NSString *pairingUUID; // @synthesize pairingUUID=_pairingUUID;
@property(readonly) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain) OTFollowup *followupHandler; // @synthesize followupHandler=_followupHandler;
@property(readonly) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
- (_Bool)checkAllStateCleared;	// IMP=0x00100000000dd2f9
- (void)clearContextState;	// IMP=0x00100000000dd27d
- (void)rpcResetAccountCDPContents:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd0b9
- (id)egoPeerStatus:(id *)arg1;	// IMP=0x00100000000dcef0
- (_Bool)machineIDOnMemoizedList:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dccf1
- (void)waitForOctagonUpgrade:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dc4ce
- (void)checkOctagonHealth:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dbe67
- (_Bool)processMoveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000db71e
- (_Bool)postConfirmPasscodeCFU:(id *)arg1;	// IMP=0x00100000000db606
- (_Bool)leaveTrust:(id *)arg1;	// IMP=0x00100000000db5a1
- (_Bool)shouldPostConfirmPasscodeCFU:(id *)arg1;	// IMP=0x00100000000db33b
- (_Bool)postRepairCFU:(id *)arg1;	// IMP=0x00100000000db1d1
- (void)rpcTlkRecoverabilityForEscrowRecordData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000db074
- (void)tlkRecoverabilityInOctagon:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dafb6
- (void)octagonPeerIDGivenBottleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000daf28
- (void)rpcWaitForPriorityViewKeychainDataRecovery:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dad82
- (void)rpcPersistAccountSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dacd1
- (void)rpcAccountWideSettings:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dab72
- (void)rpcFetchAccountSettings:(CDUnknownBlockType)arg1;	// IMP=0x00100000000daa13
- (void)rpcFetchTrustedSecureElementIdentities:(CDUnknownBlockType)arg1;	// IMP=0x00100000000da6fa
- (void)rpcRemoveLocalSecureElementIdentityPeerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da556
- (void)rpcSetLocalSecureElementIdentity:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da349
- (void)rpcSetUserControllableViewsSyncingStatus:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da284
- (void)rpcFetchUserControllableViewsSyncingStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d9d50
- (void)rpcRefetchCKKSPolicy:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d9b12
- (void)fetchEscrowContents:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d9a16
- (void)rpcInvalidateEscrowCache:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d9852
- (void)rpcFetchAllViableEscrowRecords:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d9685
- (void)rpcFetchAllViableBottles:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d94bd
- (void)rpcTrustStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d8d92
- (void)rpcTrustStatusCachedStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d8c14
- (void)rpcRemoveInheritanceKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d8a5c
- (void)rpcStoreInheritanceKeyWithIK:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d88a4
- (void)rpcGenerateInheritanceKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d8758
- (void)rpcCreateInheritanceKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d85a0
- (void)rpcRemoveCustodianRecoveryKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d83e8
- (void)rpcCreateCustodianRecoveryKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d8230
- (void)rpcSetRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d801c
- (void)rpcFetchPeerIDByBottleID:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d7ffb
- (void)rpcFetchDeviceNamesByPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d7ef5
- (void)rpcFetchPeerAttributes:(id)arg1 includeSelf:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d7dc9
- (void)rpcFetchEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d7c77
- (void)rpcStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d708f
- (id)sosSelvesStatus;	// IMP=0x00100000000d6cb5
- (id)sosTrustedPeersStatus;	// IMP=0x00100000000d6a10
- (id)ckksPeerStatus:(id)arg1;	// IMP=0x00100000000d6886
- (void)rpcJoin:(id)arg1 vouchSig:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d6527
- (id)joinStatePathDictionary;	// IMP=0x00100000000d5ff5
- (void)preflightJoinWithInheritanceKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d5bef
- (MISSING_TYPE *)joinWithInheritanceKey:reply: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000d5911
- (void)preflightJoinWithCustodianRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d538c
- (void)joinWithCustodianRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d511e
- (void)joinWithRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d4eb0
- (void)joinWithBottle:(id)arg1 entropy:(id)arg2 bottleSalt:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d4b5f
- (void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg1 epoch:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d469c
- (id)errorIfNoCKAccount:(id)arg1;	// IMP=0x00100000000d4621
- (long long)checkForCKAccount:(id)arg1;	// IMP=0x00100000000d41ea
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x00100000000d3eae
- (void)selfPeerChanged:(id)arg1;	// IMP=0x00100000000d3ea8
- (void)deviceNameUpdated;	// IMP=0x00100000000d3d7c
- (void)requestTrustedDeviceListRefresh;	// IMP=0x00100000000d3d38
- (id)currentMemoizedLastHealthCheck;	// IMP=0x00100000000d3bb9
- (int)currentMemoizedAccountState;	// IMP=0x00100000000d3aa0
- (int)currentMemoizedTrustState;	// IMP=0x00100000000d3987
- (void)popTooManyPeersDialogWithEgoPeerStatus:(id)arg1 accountMeta:(id)arg2;	// IMP=0x00100000000d344e
- (_Bool)waitForReady:(long long)arg1;	// IMP=0x00100000000d33c6
- (void)notifyContainerChangeWithUserInfo:(id)arg1;	// IMP=0x00100000000d2f99
- (void)notifyContainerChange:(id)arg1;	// IMP=0x00100000000d2f4a
- (void)handleTTRRequest:(id)arg1;	// IMP=0x00100000000d2af0
- (void)handleHealthRequest;	// IMP=0x00100000000d2977
- (id)extractStringKey:(id)arg1 fromDictionary:(id)arg2;	// IMP=0x00100000000d2914
- (id)becomeReadyOperation;	// IMP=0x00100000000d2838
- (id)becomeInheritedOperation;	// IMP=0x00100000000d275c
- (id)becomeUntrustedOperation:(id)arg1;	// IMP=0x00100000000d2668
- (void)checkTrustStatusAndPostRepairCFUIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d2568
- (id)repairAccountIfTrustedByTPHWithIntendedState:(id)arg1;	// IMP=0x00100000000d23d7
- (id)cloudKitAccountNewlyAvailableOperation:(id)arg1;	// IMP=0x00100000000d22e3
- (id)postRepairCFUAndBecomeUntrusted;	// IMP=0x00100000000d2269
- (id)cuttlefishTrustEvaluation;	// IMP=0x00100000000d20ee
- (id)evaluateTPHOctagonTrust;	// IMP=0x00100000000d2074
- (id)evaluateSecdOctagonTrust;	// IMP=0x00100000000d1ffa
- (id)checkForAccountFixupsOperation:(id)arg1;	// IMP=0x00100000000d1ee7
- (id)initializingOperation;	// IMP=0x00100000000d1e0b
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x00100000000ce9d9
- (void)clearPairingUUID;	// IMP=0x00100000000ce9c5
- (void)handlePairingRestart:(id)arg1;	// IMP=0x00100000000ce669
- (void)startOctagonStateMachine;	// IMP=0x00100000000ce62c
- (id)operationDependencies;	// IMP=0x00100000000ce435
- (id)prepareInformation;	// IMP=0x00100000000ce17a
- (void)rpcRemoveFriendsInClique:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ce05a
- (void)rpcLeaveClique:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cddba
- (void)rpcResetAndEstablish:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cdb88
- (void)rpcEstablish:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cda94
- (id)establishStatePathDictionary;	// IMP=0x00100000000cd6d7
- (void)localReset:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cd4a9
- (void)resetOctagonStateMachine;	// IMP=0x00100000000cd2df
- (_Bool)setCDPEnabled:(id *)arg1;	// IMP=0x00100000000cd12f
- (long long)getCDPStatus:(id *)arg1;	// IMP=0x00100000000ccf68
- (_Bool)accountNoLongerAvailable:(id *)arg1;	// IMP=0x00100000000ccd65
- (_Bool)idmsTrustLevelChanged:(id *)arg1;	// IMP=0x00100000000ccd1e
- (void)moveToCheckTrustedState;	// IMP=0x00100000000ccb09
- (_Bool)accountAvailable:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000cc87c
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x00100000000cc697
- (void)incompleteNotificationOfMachineIDListChange;	// IMP=0x00100000000cc61a
- (void)machinesRemoved:(id)arg1 altDSID:(id)arg2;	// IMP=0x00100000000cc254
- (void)machinesAdded:(id)arg1 altDSID:(id)arg2;	// IMP=0x00100000000cbe8e
@property(readonly, copy) NSString *description;
- (void)accountStateUpdated:(id)arg1 from:(id)arg2;	// IMP=0x00100000000cbb05
- (void)notifyTrustChanged:(int)arg1;	// IMP=0x00100000000cb9aa
- (void)dealloc;	// IMP=0x00100000000cb97b
- (void)resetCKKS:(id)arg1;	// IMP=0x00100000000cb969
- (void)clearCKKS;	// IMP=0x00100000000cb955
- (id)initWithContainerName:(id)arg1 contextID:(id)arg2 cuttlefish:(id)arg3 ckksAccountSync:(id)arg4 sosAdapter:(id)arg5 authKitAdapter:(id)arg6 tooManyPeersAdapter:(id)arg7 lockStateTracker:(id)arg8 reachabilityTracker:(id)arg9 accountStateTracker:(id)arg10 deviceInformationAdapter:(id)arg11 apsConnectionClass:(Class)arg12 escrowRequestClass:(Class)arg13 notifierClass:(Class)arg14 cdpd:(id)arg15;	// IMP=0x00100000000cb16d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
