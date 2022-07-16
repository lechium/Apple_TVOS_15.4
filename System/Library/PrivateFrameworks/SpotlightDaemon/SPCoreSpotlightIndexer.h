//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/MDIndexer-Protocol.h>
#import <SpotlightDaemon/UMUserPersonaUpdateObserver-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSSet, NSString, NSURL, SPCoreSpotlightTask;
@protocol CSIndexExtensionDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source, SPCoreSpotlightIndexerDelegate;

@interface SPCoreSpotlightIndexer : NSObject <UMUserPersonaUpdateObserver, MDIndexer>
{
    int cancelFlags[4];	// 8 = 0x8
    double _lastUpdateTime;	// 24 = 0x18
    NSMutableSet *_bundlesWithIndexedCoreSpotlightItems;	// 32 = 0x20
    NSSet *_bundlesWithRemoteSearchSupport;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_appScopingQueue;	// 48 = 0x30
    NSString *_serviceName;	// 56 = 0x38
    NSArray *_reindexIndexers;	// 64 = 0x40
    _Bool _updatePersonas;	// 72 = 0x48
    id <CSIndexExtensionDelegate> extensionDelegate;	// 80 = 0x50
    NSDictionary *_fileProviderAppToExtensionBundleMap;	// 88 = 0x58
    NSDictionary *_fileProviderExtensionToAppBundleMap;	// 96 = 0x60
    id <SPCoreSpotlightIndexerDelegate> _indexerDelegate;	// 104 = 0x68
    NSDictionary *_concreteIndexers;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_prefsChangeSource;	// 120 = 0x78
    id <NSObject> _dataMigrationStartObserver;	// 128 = 0x80
    id <NSObject> _dataMigrationFinishObserver;	// 136 = 0x88
    NSSet *_dataMigrationBundleIDs;	// 144 = 0x90
    NSSet *_prefsDisabledBundleIDs;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_reindexAllItemsSource;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_reindexAllItemsWithIdentifiersSource;	// 168 = 0xa8
    SPCoreSpotlightTask *_reindexAllItemsTask;	// 176 = 0xb0
    NSMutableSet *_knownPersonas;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_personaQueue;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_indexQueue;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_reindexAllQueue;	// 216 = 0xd8
    unsigned long long _dataMigrationStage;	// 224 = 0xe0
    long long _transactionCount;	// 232 = 0xe8
}

+ (_Bool)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000000033462
+ (id)sharedInstance;	// IMP=0x00000000000294f5
+ (id)sharedInstanceWithDelegate:(id)arg1;	// IMP=0x00000000000294c1
+ (void)setPrivate:(_Bool)arg1;	// IMP=0x00000000000294b5
+ (void)setIndexerDelegate:(id)arg1;	// IMP=0x00000000000294a1
+ (id)allProtectionClasses;	// IMP=0x0000000000029451
+ (void)shutdown;	// IMP=0x00000000000293b5
+ (void)deactivate;	// IMP=0x00000000000293af
+ (void)setMemoryPressureStatus:(unsigned long long)arg1;	// IMP=0x00000000000293a2
+ (void)shrink:(unsigned long long)arg1;	// IMP=0x0000000000029389
+ (void)unlock;	// IMP=0x000000000002937f
+ (void)sync;	// IMP=0x0000000000029359
+ (void)cooldown;	// IMP=0x0000000000029340
+ (void)preheat;	// IMP=0x0000000000029322
+ (void)initialize;	// IMP=0x00000000000292fa
- (void).cxx_destruct;	// IMP=0x000000000003a701
@property(readonly, nonatomic) long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(nonatomic) unsigned long long dataMigrationStage; // @synthesize dataMigrationStage=_dataMigrationStage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reindexAllQueue; // @synthesize reindexAllQueue=_reindexAllQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *personaQueue; // @synthesize personaQueue=_personaQueue;
@property(nonatomic) _Bool updatePersonas; // @synthesize updatePersonas=_updatePersonas;
@property(retain, nonatomic) NSMutableSet *knownPersonas; // @synthesize knownPersonas=_knownPersonas;
@property(retain) SPCoreSpotlightTask *reindexAllItemsTask; // @synthesize reindexAllItemsTask=_reindexAllItemsTask;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reindexAllItemsWithIdentifiersSource; // @synthesize reindexAllItemsWithIdentifiersSource=_reindexAllItemsWithIdentifiersSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reindexAllItemsSource; // @synthesize reindexAllItemsSource=_reindexAllItemsSource;
@property(retain, nonatomic) NSSet *prefsDisabledBundleIDs; // @synthesize prefsDisabledBundleIDs=_prefsDisabledBundleIDs;
@property(retain, nonatomic) NSSet *dataMigrationBundleIDs; // @synthesize dataMigrationBundleIDs=_dataMigrationBundleIDs;
@property(retain, nonatomic) id <NSObject> dataMigrationFinishObserver; // @synthesize dataMigrationFinishObserver=_dataMigrationFinishObserver;
@property(retain, nonatomic) id <NSObject> dataMigrationStartObserver; // @synthesize dataMigrationStartObserver=_dataMigrationStartObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *prefsChangeSource; // @synthesize prefsChangeSource=_prefsChangeSource;
@property(retain) NSDictionary *concreteIndexers; // @synthesize concreteIndexers=_concreteIndexers;
@property __weak id <SPCoreSpotlightIndexerDelegate> indexerDelegate; // @synthesize indexerDelegate=_indexerDelegate;
@property __weak id <CSIndexExtensionDelegate> extensionDelegate; // @synthesize extensionDelegate;
- (void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a4ab
- (void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a4a5
- (void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039e96
- (void)handleRankingCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039798
- (void)personaListDidUpdate;	// IMP=0x00000000000391f9
@property(readonly) NSURL *personaListURL;
- (id)queryForWord:(id)arg1 matchingAttributes:(id)arg2 prefixMatch:(_Bool)arg3;	// IMP=0x0000000000039009
- (void)powerStateChanged;	// IMP=0x0000000000038f2c
- (void)revokeExpiredItems:(id)arg1 protected:(_Bool)arg2;	// IMP=0x0000000000038e0f
- (void)fetchAttributesForProtectionClass:(id)arg1 attributes:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000038bf5
- (void)fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 includeParents:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000389ce
- (double)lastUpdateTime;	// IMP=0x00000000000389c3
- (void)performIndexerTask:(id)arg1 withIndexExtensionsAndCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000379e3
- (void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2;	// IMP=0x0000000000037866
- (void)performIndexerTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000371ce
- (void)_issueCommand:(id)arg1 searchContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033cec
- (void)getDBLogsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033acf
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;	// IMP=0x000000000003345c
- (void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033060
- (void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032c64
- (void)deleteActionsBeforeTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003288f
- (void)deleteAllUserActivities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032498
- (void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000032287
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000320b2
- (void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 personaID:(id)arg5;	// IMP=0x0000000000031acf
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6;	// IMP=0x0000000000031a01
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000318d8
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000031792
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031771
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000312f8
- (void)deleteSearchableItemsWithPersonaIds:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030f37
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000030df1
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000000309d0
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000308fb
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 personaID:(id)arg3 options:(long long)arg4 items:(id)arg5 itemsText:(id)arg6 itemsHTML:(id)arg7 clientState:(id)arg8 clientStateName:(id)arg9 deletes:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;	// IMP=0x000000000003050d
- (_Bool)writeData:(id)arg1 toFile:(id)arg2;	// IMP=0x00000000000303ca
- (int)openIndex:(_Bool)arg1;	// IMP=0x0000000000030303
@property(readonly, nonatomic) NSDictionary *fileProviderExtensionToAppBundleMap; // @synthesize fileProviderExtensionToAppBundleMap=_fileProviderExtensionToAppBundleMap;
@property(readonly, nonatomic) NSDictionary *fileProviderAppToExtensionBundleMap; // @synthesize fileProviderAppToExtensionBundleMap=_fileProviderAppToExtensionBundleMap;
- (void)fileProviderInfoSetup;	// IMP=0x000000000003002d
- (void)writeFileProviderBundleMap:(id)arg1;	// IMP=0x0000000000030027
- (int)_openIndex:(_Bool)arg1;	// IMP=0x000000000002fc09
- (void)reindexAllItemsWithIndexers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002eee7
- (void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;	// IMP=0x000000000002ee04
- (void)cancelQuery:(id)arg1;	// IMP=0x000000000002edef
- (id)startQuery:(id)arg1 withContext:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ed22
- (id)startQuery:(id)arg1 withContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002ec2c
- (id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002eb1f
- (id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002ea00
- (id)_startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002e8e1
- (void)startQueryTask:(id)arg1;	// IMP=0x000000000002e75d
- (id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002e5ae
- (id)_taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002d37a
- (void)queryPreheat:(id)arg1;	// IMP=0x000000000002d2b3
- (void)shutdown;	// IMP=0x000000000002d235
- (void)closeIndex;	// IMP=0x000000000002d1c6
- (void)_closeIndexWithIndexers:(id)arg1;	// IMP=0x000000000002cfc5
- (void)shrink:(unsigned long long)arg1;	// IMP=0x000000000002cefe
- (void)coolDown;	// IMP=0x000000000002cd83
- (void)issueMessagesFixup:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cc18
- (void)issueDuplicateOidCheck:(id)arg1;	// IMP=0x000000000002cacd
- (void)issueDuplicateOidCheckWithGroup:(id)arg1 protected:(_Bool)arg2;	// IMP=0x000000000002c9b0
- (void)issueConsistencyCheck:(id)arg1;	// IMP=0x000000000002c865
- (void)issueDumpForward:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c72c
- (void)issueDumpReverse:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c5f3
- (void)issueDefrag:(id)arg1 group:(id)arg2;	// IMP=0x000000000002c3ff
- (void)issueCleanup:(id)arg1 flags:(int)arg2;	// IMP=0x000000000002c256
- (void)issueRepair:(id)arg1;	// IMP=0x000000000002c10b
- (void)cleanupStringsWithProtectionClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bc3a
- (void)mergeWithProtectionClasses:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bc20
- (void)mergeWithProtectionClasses:(id)arg1 power:(_Bool)arg2;	// IMP=0x000000000002bb50
- (void)mergeWithProtectionClasses:(id)arg1 power:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b291
- (void)issueSplit:(id)arg1;	// IMP=0x000000000002b146
- (void)commitUpdates;	// IMP=0x000000000002afc6
- (void)commitUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ae9a
- (void)flush;	// IMP=0x000000000002ad41
- (void)preheat;	// IMP=0x000000000002acc1
- (void)_reindexAllItemsForBundleIDs:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ab02
- (void)_reindexAllItemsOnPrefsChanges;	// IMP=0x000000000002a975
- (void)_registerForPrefsChanges;	// IMP=0x000000000002a6c8
- (void)_enumerateIndexersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a6b1
- (void)_enumerateIndexersWithProtectionClasses:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a4a8
- (void)dealloc;	// IMP=0x000000000002a40f
- (void)start;	// IMP=0x000000000002a31b
- (void)setServiceName:(id)arg1;	// IMP=0x000000000002a2ee
- (id)delegateServiceName;	// IMP=0x000000000002a2d1
- (id)indexServiceName;	// IMP=0x000000000002a2b4
- (id)searchServiceName;	// IMP=0x000000000002a297
- (void)locked;	// IMP=0x000000000002a23b
- (void)locking;	// IMP=0x000000000002a235
- (void)unlock;	// IMP=0x000000000002a1b8
- (void)resume;	// IMP=0x000000000002a142
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000029574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

