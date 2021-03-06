//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSRateLimiter, CKKSReachabilityTracker, CKKSZoneChangeFetcher, CKKSZoneModifier, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSXPCListener, TPSyncingPolicy;
@protocol OTPersonaAdapter, OTSOSAdapter;

__attribute__((visibility("hidden")))
@interface CKKSViewManager : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    CKKSAccountStateTracker *_accountTracker;	// 16 = 0x10
    CKKSLockStateTracker *_lockStateTracker;	// 24 = 0x18
    CKKSReachabilityTracker *_reachabilityTracker;	// 32 = 0x20
    id <OTPersonaAdapter> _personaAdapter;	// 40 = 0x28
    CKKSZoneChangeFetcher *_zoneChangeFetcher;	// 48 = 0x30
    CKKSZoneModifier *_zoneModifier;	// 56 = 0x38
    CKKSCondition *_completedSecCKKSInitialize;	// 64 = 0x40
    CKKSRateLimiter *_globalRateLimiter;	// 72 = 0x48
    id <OTSOSAdapter> _sosPeerAdapter;	// 80 = 0x50
    NSXPCListener *_listener;	// 88 = 0x58
    NSSet *_viewAllowList;	// 96 = 0x60
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 104 = 0x68
    NSMutableDictionary *_pendingSyncCallbacks;	// 112 = 0x70
    CKKSNearFutureScheduler *_savedTLKNotifier;	// 120 = 0x78
    NSOperationQueue *_operationQueue;	// 128 = 0x80
    NSMutableDictionary *_ckksActors;	// 136 = 0x88
    TPSyncingPolicy *_policy;	// 144 = 0x90
    CKKSCondition *_policyLoaded;	// 152 = 0x98
}

+ (id)manager;	// IMP=0x0020000000103432
+ (void)callSyncCallbackWithErrorNoAccount:(CDUnknownBlockType)arg1;	// IMP=0x00100000001033ab
- (void).cxx_destruct;	// IMP=0x00200000001015b6
@property(retain) CKKSCondition *policyLoaded; // @synthesize policyLoaded=_policyLoaded;
@property(retain) TPSyncingPolicy *policy; // @synthesize policy=_policy;
@property(readonly) NSMutableDictionary *ckksActors; // @synthesize ckksActors=_ckksActors;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSNearFutureScheduler *savedTLKNotifier; // @synthesize savedTLKNotifier=_savedTLKNotifier;
@property(retain) NSMutableDictionary *pendingSyncCallbacks; // @synthesize pendingSyncCallbacks=_pendingSyncCallbacks;
@property(retain) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) id <OTSOSAdapter> sosPeerAdapter; // @synthesize sosPeerAdapter=_sosPeerAdapter;
@property(retain) CKKSRateLimiter *globalRateLimiter; // @synthesize globalRateLimiter=_globalRateLimiter;
@property(retain) CKKSCondition *completedSecCKKSInitialize; // @synthesize completedSecCKKSInitialize=_completedSecCKKSInitialize;
@property(retain) CKKSZoneModifier *zoneModifier; // @synthesize zoneModifier=_zoneModifier;
@property(retain) CKKSZoneChangeFetcher *zoneChangeFetcher; // @synthesize zoneChangeFetcher=_zoneChangeFetcher;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(retain) CKContainer *container; // @synthesize container=_container;
- (void)dropAllActors;	// IMP=0x001000000010129b
- (void)haltAll;	// IMP=0x0010000000101086
- (void)xpc24HrNotification;	// IMP=0x0010000000100ed6
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000100cda
- (void)toggleHavoc:(CDUnknownBlockType)arg1;	// IMP=0x0010000000100a4c
- (void)deleteSEView:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000010073c
- (void)modifyTLKSharesForSEView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000100404
- (void)fetchSEViewKeyHierarchy:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001000f7
- (void)proposeTLKForSEView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ffda2
- (id)sanitizeErrorDomain:(id)arg1;	// IMP=0x00100000000ffc79
- (void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ffa20
- (void)rpcGetCKDeviceIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ff8c7
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ff395
- (void)rpcFetchAndProcessChanges:(id)arg1 classA:(_Bool)arg2 onlyIfNoRecentFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fed46
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fea71
- (void)rpcResyncLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fe616
- (void)rpcResync:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fe176
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fde8c
- (void)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fdba2
- (void)performanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fdb8d
- (id)currentTLKsFilteredByPolicy:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000fd4ac
- (void)syncBackupAndNotifyAboutSync;	// IMP=0x00100000000fd409
- (void)notifyNewTLKsInKeychain;	// IMP=0x00100000000fd38a
- (void)cancelPendingOperations;	// IMP=0x00100000000fd34d
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00100000000fd114
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x00100000000fce61
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4;	// IMP=0x00100000000fcdbb
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x00100000000fca0b
- (id)pendingCallbackUUIDs;	// IMP=0x00100000000fc947
- (CDUnknownBlockType)claimCallbackForUUID:(id)arg1;	// IMP=0x00100000000fc7a2
- (void)registerSyncStatusCallback:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fc63f
- (id)restartCKKSAccountSyncWithoutSettingPolicy:(id)arg1;	// IMP=0x00100000000fc337
- (id)restartCKKSAccountSync:(id)arg1;	// IMP=0x00100000000fc2a2
- (id)ckksAccountSyncForContainer:(id)arg1 contextID:(id)arg2;	// IMP=0x00100000000fbfd1
- (void)lockStateChangeNotification:(_Bool)arg1;	// IMP=0x00100000000fbf4d
- (id)getGlobalRateLimiter;	// IMP=0x00100000000fbe49
- (void)setupAnalytics;	// IMP=0x00100000000fba82
- (_Bool)waitForTrustReady;	// IMP=0x00100000000fb9f0
- (_Bool)allowClientRPC:(id *)arg1;	// IMP=0x00100000000fb902
- (id)initWithContainer:(id)arg1 sosAdapter:(id)arg2 accountStateTracker:(id)arg3 lockStateTracker:(id)arg4 reachabilityTracker:(id)arg5 personaAdapter:(id)arg6 cloudKitClassDependencies:(id)arg7;	// IMP=0x00100000000fb4c2

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

