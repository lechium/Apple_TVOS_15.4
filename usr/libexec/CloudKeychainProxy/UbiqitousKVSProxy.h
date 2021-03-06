//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, NSURL;
@protocol CKDAccount, CKDLockMonitor, CKDStore, OS_dispatch_queue;

@interface UbiqitousKVSProxy : NSObject
{
    id currentiCloudToken;	// 8 = 0x8
    int callbackMethod;	// 16 = 0x10
    _Bool _seenKVSStoreChange;	// 20 = 0x14
    _Bool _ensurePeerRegistration;	// 21 = 0x15
    _Bool _ensurePeerRegistrationEnqueuedButNotStarted;	// 22 = 0x16
    _Bool _shadowEnsurePeerRegistration;	// 23 = 0x17
    _Bool _inCallout;	// 24 = 0x18
    NSObject<CKDStore> *_store;	// 32 = 0x20
    NSObject<CKDAccount> *_account;	// 40 = 0x28
    NSObject<CKDLockMonitor> *_lockMonitor;	// 48 = 0x30
    NSURL *_persistenceURL;	// 56 = 0x38
    NSMutableSet *_alwaysKeys;	// 64 = 0x40
    NSMutableSet *_firstUnlockKeys;	// 72 = 0x48
    NSMutableSet *_unlockedKeys;	// 80 = 0x50
    NSMutableSet *_pendingKeys;	// 88 = 0x58
    NSMutableSet *_shadowPendingKeys;	// 96 = 0x60
    NSString *_dsid;	// 104 = 0x68
    NSString *_accountUUID;	// 112 = 0x70
    NSMutableSet *_pendingSyncPeerIDs;	// 120 = 0x78
    NSMutableSet *_shadowPendingSyncPeerIDs;	// 128 = 0x80
    NSMutableSet *_pendingSyncBackupPeerIDs;	// 136 = 0x88
    NSMutableSet *_shadowPendingSyncBackupPeerIDs;	// 144 = 0x90
    NSMutableArray *_freshnessCompletions;	// 152 = 0x98
    unsigned long long _nextFreshnessTime;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_ckdkvsproxy_queue;	// 176 = 0xb0
    CDUnknownBlockType _shadowFlushBlock;	// 184 = 0xb8
}

+ (id)withAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4;	// IMP=0x00200000000079ed
- (void).cxx_destruct;	// IMP=0x002000000000544a
@property(copy) CDUnknownBlockType shadowFlushBlock; // @synthesize shadowFlushBlock=_shadowFlushBlock;
@property(retain) NSObject<OS_dispatch_queue> *ckdkvsproxy_queue; // @synthesize ckdkvsproxy_queue=_ckdkvsproxy_queue;
@property(retain) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property unsigned long long nextFreshnessTime; // @synthesize nextFreshnessTime=_nextFreshnessTime;
@property(retain, nonatomic) NSMutableArray *freshnessCompletions; // @synthesize freshnessCompletions=_freshnessCompletions;
@property _Bool inCallout; // @synthesize inCallout=_inCallout;
@property _Bool shadowEnsurePeerRegistration; // @synthesize shadowEnsurePeerRegistration=_shadowEnsurePeerRegistration;
@property _Bool ensurePeerRegistrationEnqueuedButNotStarted; // @synthesize ensurePeerRegistrationEnqueuedButNotStarted=_ensurePeerRegistrationEnqueuedButNotStarted;
@property _Bool ensurePeerRegistration; // @synthesize ensurePeerRegistration=_ensurePeerRegistration;
@property(retain, nonatomic) NSMutableSet *shadowPendingSyncBackupPeerIDs; // @synthesize shadowPendingSyncBackupPeerIDs=_shadowPendingSyncBackupPeerIDs;
@property(retain, nonatomic) NSMutableSet *pendingSyncBackupPeerIDs; // @synthesize pendingSyncBackupPeerIDs=_pendingSyncBackupPeerIDs;
@property(retain, nonatomic) NSMutableSet *shadowPendingSyncPeerIDs; // @synthesize shadowPendingSyncPeerIDs=_shadowPendingSyncPeerIDs;
@property(retain, nonatomic) NSMutableSet *pendingSyncPeerIDs; // @synthesize pendingSyncPeerIDs=_pendingSyncPeerIDs;
@property(retain, nonatomic) NSString *accountUUID; // @synthesize accountUUID=_accountUUID;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSMutableSet *shadowPendingKeys; // @synthesize shadowPendingKeys=_shadowPendingKeys;
@property(retain, nonatomic) NSMutableSet *pendingKeys; // @synthesize pendingKeys=_pendingKeys;
@property _Bool seenKVSStoreChange; // @synthesize seenKVSStoreChange=_seenKVSStoreChange;
@property(retain, nonatomic) NSMutableSet *unlockedKeys; // @synthesize unlockedKeys=_unlockedKeys;
@property(retain, nonatomic) NSMutableSet *firstUnlockKeys; // @synthesize firstUnlockKeys=_firstUnlockKeys;
@property(retain, nonatomic) NSMutableSet *alwaysKeys; // @synthesize alwaysKeys=_alwaysKeys;
@property(readonly) NSURL *persistenceURL; // @synthesize persistenceURL=_persistenceURL;
@property(readonly) NSObject<CKDLockMonitor> *lockMonitor; // @synthesize lockMonitor=_lockMonitor;
@property(readonly) NSObject<CKDAccount> *account; // @synthesize account=_account;
@property(readonly) NSObject<CKDStore> *store; // @synthesize store=_store;
- (void)processPendingKeysForCurrentLockState;	// IMP=0x0010000000005151
- (void)processKeyChangedEvent:(id)arg1;	// IMP=0x0010000000004e0a
- (id)copyValues:(id)arg1;	// IMP=0x0010000000004d01
- (id)pendKeysAndGetPendingForCurrentLockState:(id)arg1;	// IMP=0x0000000000004ccb
- (id)pendingKeysForCurrentLockState;	// IMP=0x0010000000004c84
- (void)intersectWithCurrentLockState:(id)arg1;	// IMP=0x0010000000004c12
- (id)pendKeysAndGetNewlyPended:(id)arg1;	// IMP=0x0010000000004b4d
- (id)keysForCurrentLockState;	// IMP=0x0010000000004a68
- (void)unlocked;	// IMP=0x0010000000004a1a
- (void)locked;	// IMP=0x00100000000049cc
- (void)storeAccountChanged;	// IMP=0x001000000000497e
- (void)storeKeysChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x00100000000048e2
- (void)handleNotification:(const char *)arg1;	// IMP=0x0010000000004890
- (void)_queue_kvsStoreChange;	// IMP=0x001000000000482b
- (void)_queue_unlocked;	// IMP=0x0010000000004749
- (void)_queue_locked;	// IMP=0x00100000000046a8
- (void)requestEnsurePeerRegistration;	// IMP=0x001000000000465f
- (_Bool)hasPendingKey:(id)arg1;	// IMP=0x00100000000045aa
- (_Bool)hasSyncPendingFor:(id)arg1;	// IMP=0x001000000000453f
- (void)requestSyncWithPeerIDs:(id)arg1 backupPeerIDs:(id)arg2;	// IMP=0x001000000000438f
- (_Bool)hasPendingSyncIDs;	// IMP=0x0010000000004354
- (_Bool)hasPendingShadowSyncIDs;	// IMP=0x0010000000004304
- (_Bool)hasPendingNonShadowSyncIDs;	// IMP=0x00100000000042c7
- (void)doSyncWithAllPeers;	// IMP=0x0010000000004229
- (void)doSyncWithPendingPeers;	// IMP=0x0010000000004187
- (void)doEnsurePeerRegistration;	// IMP=0x00100000000040d0
- (void)handlePendingEnsurePeerRegistrationRequests:(_Bool)arg1;	// IMP=0x001000000000407f
- (void)sendKeysCallout:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003fed
- (void)calloutWith:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003f53
- (void)doAfterFlush:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003f0d
- (void)_queue_storeAccountChanged;	// IMP=0x0010000000003dec
- (void)_queue_storeKeysChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x0010000000003b8b
- (void)_queue_handleNotification:(const char *)arg1;	// IMP=0x0010000000003b27
- (void)registerKeys:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000000037a8
- (void)removeKeys:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000003646
- (void)registerAtTimeKeys:(id)arg1;	// IMP=0x0010000000003494
- (id)copyAllKeyInterests;	// IMP=0x0010000000003432
- (void)waitForSyncDone:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000000032dc
- (void)waitForSynchronization:(CDUnknownBlockType)arg1;	// IMP=0x001000000000310e
- (void)setObjectsFromDictionary:(id)arg1;	// IMP=0x00100000000030fc
- (void)setStoreObjectsFromDictionary:(id)arg1;	// IMP=0x0010000000002c8d
- (void)perfCounters:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002c1b
- (void)persistState;	// IMP=0x0010000000002af9
@property(retain, nonatomic) NSDictionary *persistentData;
- (void)dealloc;	// IMP=0x001000000000252d
- (void)_queue_processAllItems;	// IMP=0x00100000000023c8
- (id)copyAsDictionary;	// IMP=0x0010000000002384
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000002301
- (void)synchronizeStore;	// IMP=0x001000000000228b
- (void)clearStore;	// IMP=0x001000000000224e
@property(readonly, copy) NSString *description;
- (id)initWithAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4;	// IMP=0x0010000000001c70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

