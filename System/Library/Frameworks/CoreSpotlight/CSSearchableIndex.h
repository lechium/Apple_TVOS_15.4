//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSIndexConnection, CSIndexingQueue, NSMutableArray, NSNumber, NSString;
@protocol CSSearchableIndexDelegate, OS_dispatch_queue;

@interface CSSearchableIndex : NSObject
{
    CSIndexingQueue *_activityQueue;	// 8 = 0x8
    _Bool _batchOpen;	// 16 = 0x10
    _Bool _noBatching;	// 17 = 0x11
    id <CSSearchableIndexDelegate> _indexDelegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_protectionClass;	// 48 = 0x30
    NSString *_bundleIdentifier;	// 56 = 0x38
    NSMutableArray *_batchedItemsToIndex;	// 64 = 0x40
    NSMutableArray *_batchedItemIdentifiersToDelete;	// 72 = 0x48
    long long _options;	// 80 = 0x50
    NSNumber *_indexID;	// 88 = 0x58
}

+ (id)computePartialPathWithOID:(id)arg1 pathKeyIdx:(unsigned long long)arg2 pathDictionary:(id)arg3 attributeValues:(id)arg4 depth:(long long)arg5;	// IMP=0x0000000000037258
+ (id)partialPathAttributes;	// IMP=0x000000000003724b
+ (_Bool)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2;	// IMP=0x0000000000031e28
+ (id)mainBundleLocalizedString;	// IMP=0x000000000002bf0c
+ (id)mainBundleID;	// IMP=0x000000000002be46
+ (void)volumeMountedAtURL:(id)arg1 withOptions:(id)arg2;	// IMP=0x000000000002b0fc
+ (void)_setLastUpdateTime;	// IMP=0x000000000002b0af
+ (double)lastUpdateTime;	// IMP=0x000000000002b06e
+ (void)notifyIndexDelegates;	// IMP=0x000000000002b05d
+ (id)defaultSearchableIndex;	// IMP=0x000000000002a432
+ (id)codedNSUAPersistentIdentifiers:(id)arg1;	// IMP=0x000000000002a1f8
+ (id)codedIdentifiers:(id)arg1;	// IMP=0x000000000002a053
+ (id)codedUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000029e81
+ (void)initialize;	// IMP=0x0000000000029e16
+ (_Bool)isIndexingAvailable;	// IMP=0x0000000000029e0e
+ (void)setConnectionName:(id)arg1;	// IMP=0x0000000000029d5e
- (void).cxx_destruct;	// IMP=0x00000000000379ad
@property(readonly, nonatomic) NSNumber *indexID; // @synthesize indexID=_indexID;
@property(nonatomic) _Bool noBatching; // @synthesize noBatching=_noBatching;
@property(nonatomic) _Bool batchOpen; // @synthesize batchOpen=_batchOpen;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *batchedItemIdentifiersToDelete; // @synthesize batchedItemIdentifiersToDelete=_batchedItemIdentifiersToDelete;
@property(retain, nonatomic) NSMutableArray *batchedItemsToIndex; // @synthesize batchedItemsToIndex=_batchedItemsToIndex;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)_bulkFetchPartialPathsForObjects:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003757b
- (void)bulkFetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 objects:(id)arg4 attributeKeyIndex:(long long)arg5 includeParents:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000036dbb
- (void)slowFetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000036bf8
- (void)_fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 items:(id)arg4 includeParents:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000363c8
- (void)_deleleActionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035fca
- (void)_deleteActionsBeforeTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035bed
- (void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035bdb
- (void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000356be
- (void)deleteAllInteractionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000356a1
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000351ef
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000351d2
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034bf0
- (void)deleteInteractionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034bd3
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000345f1
- (void)addInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000345d4
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000033e18
- (void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000033784
- (void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033440
- (void)flushUserActivities;	// IMP=0x0000000000033381
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032dc5
- (void)deleteAllUserActivities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032959
- (void)_indexActivities:(id)arg1 flush:(_Bool)arg2;	// IMP=0x00000000000323f8
- (void)indexUserActivity:(id)arg1;	// IMP=0x0000000000031e9f
- (void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forUser:(unsigned int)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5;	// IMP=0x0000000000031ab7
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2;	// IMP=0x00000000000317c9
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000031120
- (void)fetchLastClientStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000310ee
- (void)_issueNonLaunchingCommand:(id)arg1;	// IMP=0x000000000003101b
- (void)_issueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030bb1
- (void)provideFileURLsForBundle:(id)arg1 itemIdentifiers:(id)arg2 typeIdentifier:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000030792
- (void)provideFileURLForBundle:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000305ae
- (void)provideDataForBundle:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000304a8
- (void)provideFileURLForBundle:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 inPlace:(_Bool)arg4 allowDownload:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000003047a
- (void)provideDataForBundle:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 allowDownload:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000030465
- (void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000030443
- (void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000030421
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002fe0f
- (void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fde1
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002f70c
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f6ec
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f6cb
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002f007
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002efd9
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002edf8
- (long long)_standardizeItems:(id)arg1;	// IMP=0x000000000002ecd3
- (void)_setFPAttributes:(id)arg1;	// IMP=0x000000000002eccd
- (void)_setMailMessageAttributes:(id)arg1;	// IMP=0x000000000002ecc7
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002e6be
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e690
- (id)_validateOperation;	// IMP=0x000000000002e67c
- (id)_validateOperationWithIdentifiers:(id)arg1;	// IMP=0x000000000002e665
- (id)_validateOperationWithItems:(id)arg1;	// IMP=0x000000000002e651
- (id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2;	// IMP=0x000000000002de95
- (id)_validateClientState:(id)arg1;	// IMP=0x000000000002ddd7
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000002c160
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000002c128
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002be1d
- (void)indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bc3f
- (id)_itemsBySanitizingItemsForSpotlight:(id)arg1;	// IMP=0x000000000002b9d9
- (void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b8ab
- (void)endIndexBatchWithClientState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b894
- (void)endIndexBatchWithClientState:(id)arg1 critical:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b589
- (void)beginIndexBatch;	// IMP=0x000000000002b4e0
@property __weak id <CSSearchableIndexDelegate> indexDelegate; // @synthesize indexDelegate=_indexDelegate;
- (void)_delegateCheckIn:(id)arg1;	// IMP=0x000000000002b1e0
- (id)xpc_dictionary_for_command:(const char *)arg1 requiresInitialization:(_Bool)arg2;	// IMP=0x000000000002b102
@property(readonly, nonatomic) CSIndexingQueue *activityQueue;
- (void)_makeActivityQueueIfNecessary;	// IMP=0x000000000002ad87
- (void)dealloc;	// IMP=0x000000000002acc7
- (void)_commonInit;	// IMP=0x000000000002ac1d
- (id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4;	// IMP=0x000000000002abfb
- (id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4 disableBatching:(_Bool)arg5;	// IMP=0x000000000002aac4
- (id)init;	// IMP=0x000000000002aaa3
- (id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x000000000002aa8e
- (id)initWithName:(id)arg1 protectionClass:(id)arg2;	// IMP=0x000000000002aa76
- (id)initWithName:(id)arg1 options:(long long)arg2;	// IMP=0x000000000002aa5c
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000002aa42
- (id)initWithName:(id)arg1;	// IMP=0x000000000002aa28
- (id)description;	// IMP=0x000000000002a7f6
- (void)unthrottle;	// IMP=0x000000000002a72f
- (void)throttle;	// IMP=0x000000000002a673
- (id)throttleQueue;	// IMP=0x000000000002a53f
- (id)requestQueue;	// IMP=0x000000000002a4b5
@property(readonly) CSIndexConnection *connection;

@end

