//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSMutableSet, NSString, NSURL, SYDApplicationScheduling, SYDJournal, SYDScheduler, SYDWriteTracker;

@interface SYDApplication : NSObject
{
    _Bool _inactive;	// 8 = 0x8
    _Bool _isAvailableOnThisPlatform;	// 9 = 0x9
    _Bool _isAdditionalStore;	// 10 = 0xa
    _Bool _daemon;	// 11 = 0xb
    _Bool _shouldResetOnFirstSync;	// 12 = 0xc
    _Bool _simulatePushNotification;	// 13 = 0xd
    NSString *_storeIdentifier;	// 16 = 0x10
    SYDScheduler *_scheduler;	// 24 = 0x18
    SYDApplicationScheduling *_scheduling;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    NSString *_schedulerIdentifier;	// 48 = 0x30
    NSString *_additionalChangeNotificationName;	// 56 = 0x38
    NSURL *_plistURL;	// 64 = 0x40
    NSMutableDictionary *_plistCache;	// 72 = 0x48
    NSMutableSet *_pendingDirtyKeys;	// 80 = 0x50
    NSMutableDictionary *_pendingLocalData;	// 88 = 0x58
    long long _changeCount;	// 96 = 0x60
    long long _initialSyncChangeCount;	// 104 = 0x68
    SYDJournal *_journal;	// 112 = 0x70
    unsigned long long _debugCount;	// 120 = 0x78
    SYDWriteTracker *_writeTracker;	// 128 = 0x80
}

+ (id)additionalStoreIdentifiersForBundleIdentifier:(id)arg1 installInfo:(id)arg2;	// IMP=0x004000000000ec14
+ (_Bool)installInfoAllowsKeyValueStore:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000000ebd7
+ (id)knownDaemons;	// IMP=0x001000000000d577
+ (id)defaultSchedulerIdentifierForStoreIdentifier:(id)arg1;	// IMP=0x001000000000d4ab
+ (_Bool)storeIdentifierShouldResetOnDisable:(id)arg1;	// IMP=0x001000000000d42d
+ (_Bool)storeIdentifierIsRegisteredWithMultipleInternalApps:(id)arg1;	// IMP=0x001000000000d3af
+ (Class)classForSchedulerWithIdentifier:(id)arg1;	// IMP=0x001000000000d311
+ (id)schedulerIdentifiers;	// IMP=0x001000000000d2c1
+ (id)defaultSchedulerIdentifier;	// IMP=0x001000000000d2b4
+ (id)_schedulerIdentifierMapping;	// IMP=0x001000000000d1ba
- (void).cxx_destruct;	// IMP=0x0020000000019720
@property(readonly, nonatomic) SYDWriteTracker *writeTracker; // @synthesize writeTracker=_writeTracker;
@property(nonatomic) _Bool simulatePushNotification; // @synthesize simulatePushNotification=_simulatePushNotification;
@property(nonatomic) unsigned long long debugCount; // @synthesize debugCount=_debugCount;
@property(retain, nonatomic) SYDJournal *journal; // @synthesize journal=_journal;
@property(nonatomic) long long initialSyncChangeCount; // @synthesize initialSyncChangeCount=_initialSyncChangeCount;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(retain, nonatomic) NSMutableDictionary *pendingLocalData; // @synthesize pendingLocalData=_pendingLocalData;
@property(retain, nonatomic) NSMutableSet *pendingDirtyKeys; // @synthesize pendingDirtyKeys=_pendingDirtyKeys;
@property(retain, nonatomic) NSMutableDictionary *plistCache; // @synthesize plistCache=_plistCache;
@property(retain, nonatomic) NSURL *plistURL; // @synthesize plistURL=_plistURL;
@property(nonatomic) _Bool shouldResetOnFirstSync; // @synthesize shouldResetOnFirstSync=_shouldResetOnFirstSync;
@property(retain, nonatomic) NSString *additionalChangeNotificationName; // @synthesize additionalChangeNotificationName=_additionalChangeNotificationName;
@property(nonatomic) _Bool daemon; // @synthesize daemon=_daemon;
@property(nonatomic) _Bool isAdditionalStore; // @synthesize isAdditionalStore=_isAdditionalStore;
@property(retain, nonatomic) NSString *schedulerIdentifier; // @synthesize schedulerIdentifier=_schedulerIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) SYDApplicationScheduling *scheduling; // @synthesize scheduling=_scheduling;
@property(nonatomic) _Bool isAvailableOnThisPlatform; // @synthesize isAvailableOnThisPlatform=_isAvailableOnThisPlatform;
@property(nonatomic) _Bool inactive; // @synthesize inactive=_inactive;
@property(retain, nonatomic) SYDScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (int)filteredSyncReasonForReason:(int)arg1;	// IMP=0x001000000001954d
- (id)diagnosticDescription;	// IMP=0x001000000001946f
- (void)accountDidChange:(int)arg1;	// IMP=0x00100000000193bb
- (void)deactivateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000192e5
- (id)persistentState;	// IMP=0x001000000001921d
- (void)performWithoutTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019209
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x00100000000191f2
- (void)_perform:(CDUnknownBlockType)arg1 takeTransaction:(_Bool)arg2;	// IMP=0x00100000000190a4
- (void)didReceiveMemoryWarning;	// IMP=0x0010000000019092
- (void)resetSyncState;	// IMP=0x0010000000018ece
- (void)resetAllValuesForce:(_Bool)arg1;	// IMP=0x00100000000189b8
- (_Bool)wasSyncSuccessfulWithServerChanges:(id)arg1;	// IMP=0x0010000000018966
- (void)stopSynchronizingWithServerChanges:(id)arg1 reason:(int)arg2;	// IMP=0x00100000000188ca
- (void)_stopSynchronizingWithServerChanges:(id)arg1;	// IMP=0x001000000001454e
- (void)setDefaultsConfig:(id)arg1;	// IMP=0x0010000000014131
- (void *)applyMergePolicy:(int)arg1 conflictPolicy:(int)arg2 forKey:(struct __CFString *)arg3 localValue:(void *)arg4 remoteValue:(void *)arg5 baseValue:(void *)arg6;	// IMP=0x001000000001405a
- (id)mergeLocalDictionary:(id)arg1 remoteDictionary:(id)arg2 baseDictionary:(id)arg3 conflictPolicy:(int)arg4;	// IMP=0x001000000001399a
- (id)mergeLocalArray:(id)arg1 remoteArray:(id)arg2 baseArray:(id)arg3 conflictPolicy:(int)arg4;	// IMP=0x0010000000013992
- (void)_logStoreAfterMerge;	// IMP=0x0010000000013892
- (void)_logStoreBeforeMergeWithRemoteChanges:(id)arg1;	// IMP=0x00100000000134ec
- (id)_logLock;	// IMP=0x0010000000013497
- (void)_logTo:(id)arg1 store:(id)arg2 tag:(id)arg3;	// IMP=0x0010000000012db2
- (id)startSynchronizingWithReason:(int)arg1;	// IMP=0x0010000000012294
- (id)storeLocalChanges:(id)arg1 withKnownChangeCount:(long long)arg2;	// IMP=0x0010000000010fae
- (void)discardJournalEntriesWithChangeCount:(long long)arg1;	// IMP=0x0010000000010ef4
- (_Bool)_writePlistIfNecessary;	// IMP=0x0010000000010ec1
- (_Bool)_writePlistIfNecessaryHelper;	// IMP=0x0010000000010b39
- (void)_loadPlistIfNecessary;	// IMP=0x0010000000010b0b
- (void)_loadPlistIfNecessaryHelper;	// IMP=0x0010000000010350
- (void)_discardPlistIfPossible;	// IMP=0x001000000001033c
- (MISSING_TYPE *)_discardPlistForced: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000010282
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (id)description;	// IMP=0x0010000000010130
- (int)_refreshStoreIdentifierWithInstallInfo:(id)arg1;	// IMP=0x001000000000f65f
- (int)refreshStoreIdentifierWithServer:(id)arg1;	// IMP=0x001000000000f5e4
- (id)initAdditionalStoreWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 persistentState:(id)arg3 writeTracker:(id)arg4;	// IMP=0x001000000000f544
- (id)initAdditionalStoreWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 writeTracker:(id)arg3;	// IMP=0x001000000000f522
- (id)initWithBundleIdentifier:(id)arg1 persistentState:(id)arg2 writeTracker:(id)arg3;	// IMP=0x001000000000f45a
- (id)initWithBundleIdentifier:(id)arg1 writeTracker:(id)arg2;	// IMP=0x001000000000f436
- (id)_initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 persistentState:(id)arg3 writeTracker:(id)arg4;	// IMP=0x001000000000f251
@property(readonly, nonatomic) NSString *displayIdentifier;
- (void)endDebuggingStore;	// IMP=0x001000000000f026
- (void)beginDebuggingStore;	// IMP=0x001000000000ef02
- (_Bool)isCloudSyncAllowed;	// IMP=0x001000000000ee8e
@property(readonly, nonatomic, getter=isDevelopmentApp) _Bool developmentApp;

@end

