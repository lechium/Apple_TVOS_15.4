//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDatabase, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSReachabilityTracker, CKKSZoneModifier, CKOperationGroup, MISSING_TYPE, NSArray, NSHashTable, NSMutableSet, NSSet, TPSyncingPolicy;
@protocol CKKSDatabaseProviderProtocol, OctagonStateFlagHandler;

__attribute__((visibility("hidden")))
@interface CKKSOperationDependencies : NSObject
{
    _Bool _limitOperationToPriorityViewsSet;	// 8 = 0x8
    NSSet *_allPriorityViews;	// 16 = 0x10
    NSSet *_allViews;	// 24 = 0x18
    NSMutableSet *_currentFetchReasons;	// 32 = 0x20
    CKOperationGroup *_ckoperationGroup;	// 40 = 0x28
    CKDatabase *_ckdatabase;	// 48 = 0x30
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 56 = 0x38
    CKOperationGroup *_currentOutgoingQueueOperationGroup;	// 64 = 0x40
    id <OctagonStateFlagHandler> _flagHandler;	// 72 = 0x48
    CKKSAccountStateTracker *_accountStateTracker;	// 80 = 0x50
    CKKSLockStateTracker *_lockStateTracker;	// 88 = 0x58
    CKKSReachabilityTracker *_reachabilityTracker;	// 96 = 0x60
    NSArray *_peerProviders;	// 104 = 0x68
    TPSyncingPolicy *_syncingPolicy;	// 112 = 0x70
    id <CKKSDatabaseProviderProtocol> _databaseProvider;	// 120 = 0x78
    CKKSZoneModifier *_zoneModifier;	// 128 = 0x80
    CKKSNearFutureScheduler *_savedTLKNotifier;	// 136 = 0x88
    CKKSNearFutureScheduler *_requestPolicyCheck;	// 144 = 0x90
    NSHashTable *_keysetProviderOperations;	// 152 = 0x98
    NSSet *_viewsOverride;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000009b0ad
@property _Bool limitOperationToPriorityViewsSet; // @synthesize limitOperationToPriorityViewsSet=_limitOperationToPriorityViewsSet;
@property(retain) NSSet *viewsOverride; // @synthesize viewsOverride=_viewsOverride;
@property(retain) NSHashTable *keysetProviderOperations; // @synthesize keysetProviderOperations=_keysetProviderOperations;
@property(retain) CKKSNearFutureScheduler *requestPolicyCheck; // @synthesize requestPolicyCheck=_requestPolicyCheck;
@property(readonly) CKKSNearFutureScheduler *savedTLKNotifier; // @synthesize savedTLKNotifier=_savedTLKNotifier;
@property(retain) CKKSZoneModifier *zoneModifier; // @synthesize zoneModifier=_zoneModifier;
@property(readonly) id <CKKSDatabaseProviderProtocol> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain) TPSyncingPolicy *syncingPolicy; // @synthesize syncingPolicy=_syncingPolicy;
@property(retain) NSArray *peerProviders; // @synthesize peerProviders=_peerProviders;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(readonly) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) CKKSAccountStateTracker *accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(readonly) id <OctagonStateFlagHandler> flagHandler; // @synthesize flagHandler=_flagHandler;
@property(retain) CKOperationGroup *currentOutgoingQueueOperationGroup; // @synthesize currentOutgoingQueueOperationGroup=_currentOutgoingQueueOperationGroup;
@property(retain) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) CKDatabase *ckdatabase; // @synthesize ckdatabase=_ckdatabase;
@property(retain) CKOperationGroup *ckoperationGroup; // @synthesize ckoperationGroup=_ckoperationGroup;
@property(readonly) NSMutableSet *currentFetchReasons; // @synthesize currentFetchReasons=_currentFetchReasons;
@property(retain) NSSet *allViews; // @synthesize allViews=_allViews;
@property(retain) NSSet *allPriorityViews; // @synthesize allPriorityViews=_allPriorityViews;
- (id)viewNameForItem:(struct SecDbItem *)arg1;	// IMP=0x001000000009ac61
- (_Bool)intransactionCKWriteFailed:(id)arg1 attemptedRecordsChanged:(id)arg2;	// IMP=0x0010000000099c20
- (_Bool)intransactionCKRecordDeleted:(id)arg1 recordType:(id)arg2 resync:(_Bool)arg3;	// IMP=0x001000000009980b
- (_Bool)intransactionCKRecordChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x0010000000099060
- (void)provideKeySets:(id)arg1;	// IMP=0x0010000000098d3e
- (_Bool)considerSelfTrusted:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000098a8a
- (id)currentTrustStates;	// IMP=0x001000000009884c
- (void)applyNewSyncingPolicy:(id)arg1 viewStates:(id)arg2;	// IMP=0x0010000000098596
- (id)readyAndSyncingViews;	// IMP=0x001000000009827b
- (id)viewStateForName:(id)arg1;	// IMP=0x001000000009806b
- (id)viewStatesByNames:(id)arg1;	// IMP=0x0010000000097e20
- (id)viewsInState:(id)arg1;	// IMP=0x0010000000097c13
- (void)limitOperationToPriorityViews;	// IMP=0x0010000000097b46
- (void)operateOnAllViews;	// IMP=0x0010000000097a69
- (void)operateOnSelectViews:(id)arg1;	// IMP=0x0010000000097981
- (void)setStateForAllViews:(id)arg1;	// IMP=0x0010000000097830
- (MISSING_TYPE *)setStateForActiveExternallyManagedViews: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000976aa
- (void)setStateForActiveCKKSManagedViews:(id)arg1;	// IMP=0x0010000000097524
- (void)setStateForActiveZones:(id)arg1;	// IMP=0x00100000000973d3
@property(readonly) NSSet *allExternalManagedViews;
@property(readonly) NSSet *allCKKSManagedViews;
@property(readonly) NSSet *activeManagedViews;
@property(readonly) NSSet *views;
- (id)initWithViewStates:(id)arg1 zoneModifier:(id)arg2 ckdatabase:(id)arg3 cloudKitClassDependencies:(id)arg4 ckoperationGroup:(id)arg5 flagHandler:(id)arg6 accountStateTracker:(id)arg7 lockStateTracker:(id)arg8 reachabilityTracker:(id)arg9 peerProviders:(id)arg10 databaseProvider:(id)arg11 savedTLKNotifier:(id)arg12;	// IMP=0x0010000000096c0a

@end

