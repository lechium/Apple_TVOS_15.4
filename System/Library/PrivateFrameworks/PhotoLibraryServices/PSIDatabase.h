//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PSIGroupCacheDelegate-Protocol.h>
#import <PhotoLibraryServices/PSIQueryDelegate-Protocol.h>
#import <PhotoLibraryServices/PSITableDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableString, NSString, PSIIntArray, PSIStatement, PSITokenizer, PSIWordEmbeddingTable;
@protocol OS_dispatch_queue;

@interface PSIDatabase : NSObject <PSITableDelegate, PSIQueryDelegate, PSIGroupCacheDelegate>
{
    struct sqlite3 *_inqDatabase;	// 8 = 0x8
    _Bool _databaseIsValid;	// 16 = 0x10
    struct __CFDictionary *_inqPreparedStatements;	// 24 = 0x18
    PSIIntArray *_matchingIds;	// 32 = 0x20
    PSIWordEmbeddingTable *_inqWordEmbeddingTable;	// 40 = 0x28
    PSIStatement *_assetUUIDByAssetIdWithAssetIdsStatement;	// 48 = 0x30
    PSIStatement *_collectionResultByCollectionIdWithCollectionIdsStatement;	// 56 = 0x38
    PSIStatement *_inqAssetIdsByGroupIdForAssetIdsStatement;	// 64 = 0x40
    PSIStatement *_inqCollectionIdsByGroupIdForCollectionIdsStatement;	// 72 = 0x48
    PSIStatement *_inqNumberOfAssetsMatchingGroupWithIdStatement;	// 80 = 0x50
    PSIStatement *_inqNumberOfAssetsByGroupIdMatchingGroupsWithIdsStatement;	// 88 = 0x58
    PSIStatement *_inqNumberOfCollectionsMatchingGroupWithIdStatement;	// 96 = 0x60
    PSIStatement *_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIdsStatement;	// 104 = 0x68
    PSIStatement *_inqIdsOfAllGroupsStatement;	// 112 = 0x70
    PSIStatement *_inqIdsOfAllGroupsInPrefixStatement;	// 120 = 0x78
    PSIStatement *_inqIdsOfAllGroupsInLookupStatement;	// 128 = 0x80
    PSIStatement *_inqRemoveGroupsFromLookupStatement;	// 136 = 0x88
    struct __CFDictionary *_inqGroupObjectsById;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_serialQueue;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_searchQueue;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_groupResultsQueue;	// 168 = 0xa8
    NSDictionary *_inqSearchMetadata;	// 176 = 0xb0
    long long _options;	// 184 = 0xb8
    PSITokenizer *_tokenizer;	// 192 = 0xc0
    NSMutableString *_tokenizerOutputString;	// 200 = 0xc8
    NSMutableArray *_tokenizerOutputTokens;	// 208 = 0xd0
    NSMutableArray *_tokenizerOutputNormalizedTokens;	// 216 = 0xd8
    CDStruct_627e0f85 _tokenizerOutputRanges[8];	// 224 = 0xe0
    NSString *_path;	// 352 = 0x160
}

+ (id)searchDatabaseLog;	// IMP=0x0000000000525f07
+ (struct sqlite3 *)_openDatabaseAtPath:(id)arg1 options:(long long)arg2;	// IMP=0x0000000000525c64
+ (_Bool)_integrityCheckDatabase:(struct sqlite3 *)arg1;	// IMP=0x0000000000525bcf
+ (void)_dropDatabase:(struct sqlite3 *)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000525984
+ (void)dropDatabaseAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000525913
- (void).cxx_destruct;	// IMP=0x000000000051d6aa
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (struct sqlite3 *)databaseConnection;	// IMP=0x000000000051d686
- (void)_inqPerformBatch:(CDUnknownBlockType)arg1;	// IMP=0x000000000051d625
- (void)_inqPrepareAndExecuteStatement:(const char *)arg1;	// IMP=0x000000000051d43f
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg1 withStatementBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000051d428
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg1 allowError:(int)arg2 withStatementBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000051d213
- (struct sqlite3_stmt *)_inqPrepareStatement:(const char *)arg1;	// IMP=0x000000000051d130
- (id)wordEmbeddingVersion;	// IMP=0x000000000051d059
- (id)_inqCollectionIdsByGroupIdForCollectionIds:(id)arg1;	// IMP=0x000000000051cf71
- (struct __CFSet *)_inqNewGroupIdsForCollectionIds:(struct __CFSet *)arg1;	// IMP=0x000000000051cebf
- (struct __CFSet *)_inqNewGroupIdsForCollectionId:(unsigned long long)arg1;	// IMP=0x000000000051cda1
- (id)_inqAssetIdsByGroupIdForAssetIds:(id)arg1;	// IMP=0x000000000051ccb9
- (struct __CFSet *)_inqNewGroupIdsForAssetIds:(struct __CFSet *)arg1;	// IMP=0x000000000051cc07
- (struct __CFSet *)_inqNewGroupIdsForAssetId:(unsigned long long)arg1;	// IMP=0x000000000051cae9
- (struct __CFArray *)_inqNewCollectionIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x000000000051bf62
- (struct __CFArray *)_inqNewCollectionIdsWithDateFilter:(id)arg1;	// IMP=0x000000000051b5e8
- (struct __CFArray *)_inqNewAssetIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x000000000051aba8
- (struct __CFArray *)_inqNewAssetIdsWithDateFilter:(id)arg1;	// IMP=0x000000000051a351
- (id)_inqNewSynonymTextsByOwningGroupIdWithGroupIds:(struct __CFSet *)arg1;	// IMP=0x000000000051a268
- (id)_inqGroupsWithMatchingGroupIds:(struct __CFSet *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3 matchingPredicateBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000519f96
- (id)_inqNonFilenameGroupsWithMatchingGroupIds:(struct __CFSet *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3 matchingPredicateBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000519e20
- (id)_inqFilenameGroupsWithMatchingGroupIds:(struct __CFSet *)arg1 dateFilter:(id)arg2 matchingPredicateBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000051933d
- (id)_inqGroupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x0000000000519171
- (void)_inqUpdateGCTableWithGroupId:(unsigned long long)arg1 collectionId:(unsigned long long)arg2;	// IMP=0x0000000000518fb8
- (void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2;	// IMP=0x0000000000518dff
- (void)_inqDeleteFromLookupTableWithGroupId:(unsigned long long)arg1;	// IMP=0x0000000000518d30
- (void)_inqAddToLookupTableWithGroupId:(unsigned long long)arg1 text:(id)arg2 category:(short)arg3;	// IMP=0x0000000000518b2d
- (unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 normalizedString:(id)arg4 identifier:(id)arg5 insertIfNeeded:(_Bool)arg6 tokenOutput:(const struct tokenOutput_t *)arg7 shouldUpdateOwningGroupId:(_Bool)arg8 didUpdateGroup:(out _Bool *)arg9;	// IMP=0x00000000005182e6
- (unsigned long long)_inqCollectionIdWithCollection:(id)arg1;	// IMP=0x0000000000517a4a
- (unsigned long long)_inqCollectionIdForUUID:(id)arg1;	// IMP=0x0000000000517a33
- (unsigned long long)_inqCollectionIdForUUID:(id)arg1 uuid_0:(unsigned long long *)arg2 uuid_1:(unsigned long long *)arg3;	// IMP=0x00000000005177b4
- (unsigned long long)_inqAssetIdWithAsset:(id)arg1;	// IMP=0x00000000005174e3
- (unsigned long long)_inqAssetIdForUUID:(id)arg1;	// IMP=0x00000000005174cc
- (unsigned long long)_inqAssetIdForUUID:(id)arg1 uuid_0:(unsigned long long *)arg2 uuid_1:(unsigned long long *)arg3;	// IMP=0x000000000051724d
- (void)_inqUpdateSearchTermsWithSearchableTermsByGroupIds:(id)arg1;	// IMP=0x0000000000516f14
- (void)_inqDeleteGroupsWithGraphCollectionsForPersonUUID:(id)arg1;	// IMP=0x0000000000516af1
- (void)_inqRemoveUnusedGroups;	// IMP=0x0000000000516937
- (void)_inqRemoveUUID:(id)arg1 objectType:(unsigned long long)arg2 isInBatch:(_Bool)arg3;	// IMP=0x00000000005167d8
- (unsigned long long)_inqUpdateGroupForText:(id)arg1 normalizedText:(id)arg2 identifier:(id)arg3 category:(short)arg4 owningGroupId:(unsigned long long)arg5 shouldUpdateOwningGroupId:(_Bool)arg6 didUpdateGroup:(out _Bool *)arg7;	// IMP=0x000000000051668c
- (unsigned long long)_inqUpdateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out _Bool *)arg5;	// IMP=0x00000000005165a7
- (void)_inqGetTokensFromString:(id)arg1 category:(short)arg2 tokenOutput:(struct tokenOutput_t *)arg3;	// IMP=0x0000000000516529
- (void)_prepareTokenOutput:(struct tokenOutput_t *)arg1 forIndexing:(_Bool)arg2;	// IMP=0x00000000005163c4
- (void)_inqRecycleGroups;	// IMP=0x00000000005163b3
- (id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(_Bool *)arg2;	// IMP=0x0000000000516324
- (_Bool)assetExistsWithUUID:(id)arg1;	// IMP=0x000000000051623b
- (id)dumpLookupStringsWithIndexCategories:(id)arg1;	// IMP=0x000000000051614b
- (id)dumpPrefixStringsForAssetUUID:(id)arg1;	// IMP=0x0000000000515f9f
- (id)dumpPrefixStrings;	// IMP=0x0000000000515ee3
- (double)_scoreForUserCategory:(unsigned long long)arg1;	// IMP=0x0000000000515ebc
- (id)_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIds:(id)arg1;	// IMP=0x0000000000515dd4
- (unsigned long long)_inqNumberOfCollectionsMatchingGroupWithId:(unsigned long long)arg1;	// IMP=0x0000000000515d11
- (id)_inqNumberOfAssetsByGroupIdMatchingGroupsWithIds:(id)arg1;	// IMP=0x0000000000515c29
- (unsigned long long)_inqNumberOfAssetsMatchingGroupWithId:(unsigned long long)arg1;	// IMP=0x0000000000515b66
- (void)_processNextKeywordSuggestionsForQuery:(id)arg1 groupResults:(id)arg2 allowIdentifiers:(_Bool)arg3;	// IMP=0x00000000005117aa
- (id)collectionResultByCollectionIdWithCollectionIds:(id)arg1;	// IMP=0x0000000000511695
- (id)_inqCollectionResultByCollectionIdWithCollectionIds:(id)arg1;	// IMP=0x00000000005115ad
- (id)assetUUIDByAssetIdWithAssetIds:(id)arg1;	// IMP=0x0000000000511498
- (id)_inqAssetUUIDByAssetIdWithAssetIds:(id)arg1;	// IMP=0x00000000005113b0
- (id)_inqGroupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000511043
- (id)_inqGroupWithStatement:(struct sqlite3_stmt *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3 isFilenameStatement:(_Bool)arg4 excludingGroupId:(unsigned long long)arg5;	// IMP=0x0000000000510ed0
- (id)_inqGroupWithStatement:(struct sqlite3_stmt *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3;	// IMP=0x0000000000510eaa
- (id)_inqGroupWithFilenameStatement:(struct sqlite3_stmt *)arg1 dateFilter:(id)arg2 excludingGroupId:(unsigned long long)arg3;	// IMP=0x0000000000510e82
- (struct __CFSet *)_inqNewGroupIdsWithCategories:(id)arg1;	// IMP=0x0000000000510d43
- (struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3;	// IMP=0x00000000005109c8
- (struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg1 textIsSearchable:(_Bool)arg2;	// IMP=0x00000000005109b1
- (id)_inqGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;	// IMP=0x0000000000510801
- (id)_inqContentStringForGroupId:(unsigned long long)arg1;	// IMP=0x000000000051066c
- (id)_inqCollectionResultsForCollectionIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000005104c2
- (id)_inqAssetUUIDsForAssetIds:(struct __CFSet *)arg1;	// IMP=0x00000000005103c1
- (id)_inqAssetUUIDsForAssetIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2 creationDateSorted:(_Bool)arg3;	// IMP=0x00000000005102a6
- (id)_inqOwningContentStringForGroupResult:(id)arg1;	// IMP=0x00000000005101a0
- (id)newQueryWithSearchText:(id)arg1 queryTokens:(id)arg2 useWildcardSearchText:(_Bool)arg3;	// IMP=0x0000000000510092
- (id)newQueryWithSearchText:(id)arg1 identifiers:(id)arg2 useWildcardSearchText:(_Bool)arg3;	// IMP=0x000000000050fdde
- (id)newQueryWithSearchText:(id)arg1 representedObjects:(id)arg2 useWildcardSearchText:(_Bool)arg3;	// IMP=0x000000000050fdcc
- (id)newQueryWithSearchText:(id)arg1;	// IMP=0x000000000050fdb5
- (_Bool)isLookupTableOutOfSync;	// IMP=0x000000000050fc6d
- (id)allAssetUUIDsForGroupsWithCategories:(id)arg1;	// IMP=0x000000000050faa2
- (id)allCollectionUUIDsWithCollectionType:(unsigned long long)arg1;	// IMP=0x000000000050f94a
- (void)deleteGroupsWithGraphCollectionsForPersonUUIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050f734
- (void)_removeUUIDs:(id)arg1 objectType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000050f59a
- (void)removeCollectionsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050f580
- (void)removeCollectionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050f4ba
- (void)removeAssetsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050f4a3
- (void)removeAssetWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050f3dd
- (void)addCollections:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050f209
- (void)addCollection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050f143
- (void)addAssets:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050ef6f
- (void)addAsset:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050eea9
- (void)_ingRebuildPrefixTableIfNeeded;	// IMP=0x000000000050ecce
- (_Bool)isDatabaseCorrupted;	// IMP=0x000000000050eb93
- (void)dropDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000050ea4b
- (void)updateSearchMetadata:(id)arg1;	// IMP=0x000000000050e9b9
- (void)_inSearchQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000050e9a5
- (void)_inqSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000050e991
- (void)_inqAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000050e97d
- (void)dealloc;	// IMP=0x000000000050e840
- (void)_finalizeEverything;	// IMP=0x000000000050e753
- (id)initWithPath:(id)arg1 options:(long long)arg2 searchMetadata:(id)arg3;	// IMP=0x000000000050e2d6
- (long long)lastInsertedRowID;	// IMP=0x000000000052720f
- (void)unbindMatchingIds;	// IMP=0x00000000005271f9
- (void)bindMatchingIds:(const long long *)arg1 numberOfMatchingIds:(unsigned long long)arg2;	// IMP=0x00000000005271e3
- (void)bindMatchingIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000005271cd
- (void)bindMatchingIds:(struct __CFSet *)arg1;	// IMP=0x00000000005271b7
- (void)unprepareMatchingIds;	// IMP=0x00000000005271a1
- (void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;	// IMP=0x000000000052718b
- (void)executeStatement:(id)arg1 withResultEnumerationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000526f35
- (void)executeStatement:(id)arg1;	// IMP=0x0000000000526f21
- (void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000526e99
- (void)executeStatementFromString:(id)arg1;	// IMP=0x0000000000526e40
- (id)statementFromString:(id)arg1;	// IMP=0x0000000000526ddf
- (void)fetchAssetUUIDsForAssetIDs:(struct __CFArray *)arg1 creationDateSorted:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000528fbc
- (void)group:(id)arg1 fetchOwningContentString:(_Bool)arg2 assetIdRange:(struct _NSRange)arg3 collectionIdRange:(struct _NSRange)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000528e33
- (id)suggestionWhitelistedScenes;	// IMP=0x0000000000528d5c
- (id)meNodeIdentifier;	// IMP=0x0000000000528c85
- (id)wordEmbeddingMatchesForToken:(id)arg1;	// IMP=0x0000000000528b70
- (id)groupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;	// IMP=0x0000000000528a32
- (id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x0000000000528916
- (const struct __CFSet *)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3;	// IMP=0x00000000005287f2
- (id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000528682
- (void)_executeQuery:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000527435
- (void)executeQuery:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000052723f
@property(readonly) NSObject<OS_dispatch_queue> *groupResultsQueue;
@property(readonly) PSITokenizer *tokenizer;
- (unsigned long long)updateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out _Bool *)arg5;	// IMP=0x0000000000529a30
- (void)deleteFromLookupTableWithGroupId:(unsigned long long)arg1;	// IMP=0x000000000052655c
- (id)groupIdsInLookupTable;	// IMP=0x000000000052646a
- (id)groupIdsInPrefixTable;	// IMP=0x00000000005263c3
- (id)allGroupIds;	// IMP=0x000000000052631c
- (void)linkCollectionWithId:(long long)arg1 toGroupWithId:(long long)arg2;	// IMP=0x00000000005262c5
- (void)linkAssetWithId:(long long)arg1 toGroupWithId:(long long)arg2;	// IMP=0x000000000052626e
- (void)removeUnusedGroups;	// IMP=0x0000000000526222
- (long long)insertGroup:(id)arg1;	// IMP=0x0000000000526135
- (long long)insertCollection:(id)arg1;	// IMP=0x000000000052604c
- (long long)insertAsset:(id)arg1;	// IMP=0x0000000000525f63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
