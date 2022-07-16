//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3Predicate, NSArray, NSString;

@interface ML3Container
{
}

+ (_Bool)_reloadContainedMediaTypes:(_Bool)arg1 removedMediaTypes:(id)arg2 addedMediaTypes:(id)arg3 notify:(_Bool)arg4 incrementEntityRevision:(_Bool)arg5 usingLibrary:(id)arg6 connection:(id)arg7 forContainerPersistentID:(long long)arg8;	// IMP=0x00000000000a9557
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned int)arg3 limited:(_Bool)arg4 trackOrder:(unsigned int)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8;	// IMP=0x00000000000a91e5
+ (id)_allStaticItemContainersInLibrary:(id)arg1 usingConnection:(id)arg2;	// IMP=0x00000000000a90bc
+ (void)reloadContainedMediaTypesForContainerWithPersistID:(long long)arg1 usingConnection:(id)arg2;	// IMP=0x00000000000a901c
+ (void)removeNonLibraryItemsFromContainer:(id)arg1 usingConnection:(id)arg2;	// IMP=0x00000000000a8e66
+ (void)removeNonLibraryItemsFromContainersInLibrary:(id)arg1 usingConnection:(id)arg2;	// IMP=0x00000000000a8cfb
+ (void)removeAnyNonLibraryItemsInPersistentIDs:(id)arg1 fromContainersInLibrary:(id)arg2 usingConnection:(id)arg3;	// IMP=0x00000000000a8a48
+ (_Bool)updateLovedPlaylistByRemovingTrackWithPersistentID:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000a8938
+ (_Bool)updateLovedPlaylistByAddingTrackWithPersistentID:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000a8828
+ (void)_lovedPlaylistContainerPID:(id *)arg1 trackPositions:(id *)arg2 forTrackWithPersistentID:(id)arg3 usingConnection:(id)arg4;	// IMP=0x00000000000a85c0
+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)arg1;	// IMP=0x00000000000a8504
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;	// IMP=0x00000000000a8437
+ (void)_addMediaTypesToContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;	// IMP=0x00000000000a8341
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;	// IMP=0x00000000000a82a2
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;	// IMP=0x00000000000a814b
+ (id)_mediaTypesForTracksWithPersistentIDs:(id)arg1 usingConnection:(id)arg2;	// IMP=0x00000000000a7f0e
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 itemUpdateBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a7e76
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000000000a7d59
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000a7c8d
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;	// IMP=0x00000000000a7a4c
+ (_Bool)updateBuiltInSmartPlaylistNamesForCurrentLanguageInLibrary:(id)arg1;	// IMP=0x00000000000a78b4
+ (id)predicateForCriteriaList:(struct SearchCriteriaList *)arg1 parentMatchedAny:(_Bool)arg2;	// IMP=0x00000000000a7573
+ (_Bool)hasCriterionInCriteriaList:(struct SearchCriteriaList *)arg1 forITDBTrackField:(int)arg2;	// IMP=0x00000000000a73fc
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;	// IMP=0x00000000000a7311
+ (_Bool)smartCriteriaCanBeEvaluated:(id)arg1;	// IMP=0x00000000000a71cd
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;	// IMP=0x00000000000a70ab
+ (_Bool)assistantLibraryContentsChangeForProperty:(id)arg1;	// IMP=0x00000000000a708f
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;	// IMP=0x00000000000a7073
+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;	// IMP=0x00000000000a705a
+ (id)defaultFilterPredicates;	// IMP=0x00000000000a6fba
+ (id)persistentIDColumnForTable:(id)arg1;	// IMP=0x00000000000a6fa1
+ (id)extraTablesToDelete;	// IMP=0x00000000000a6f90
+ (id)foreignColumnForProperty:(id)arg1;	// IMP=0x00000000000a6f77
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x00000000000a6f5e
+ (id)sectionPropertyForProperty:(id)arg1;	// IMP=0x00000000000a6f45
+ (id)joinClausesForProperty:(id)arg1;	// IMP=0x00000000000a6ea2
+ (id)defaultOrderingTerms;	// IMP=0x00000000000a6e91
+ (long long)revisionTrackingCode;	// IMP=0x00000000000a6e86
+ (id)databaseTable;	// IMP=0x00000000000a6e79
+ (void)initialize;	// IMP=0x00000000000a6269
+ (int)protocolSortTypeFromTrackOrder:(unsigned int)arg1;	// IMP=0x0000000000131b2a
+ (unsigned int)trackOrderFromProtocolSortType:(int)arg1;	// IMP=0x0000000000131b0b
- (_Bool)_setItemPersistentIDs:(id)arg1 reloadContainedMediaTypes:(_Bool)arg2 removedMediaTypes:(id)arg3 addedMediaTypes:(id)arg4 notify:(_Bool)arg5 incrementEntityRevision:(_Bool)arg6 usingConnection:(id)arg7;	// IMP=0x00000000000a36be
- (_Bool)_supportsOrderedTrackOperations;	// IMP=0x00000000000a363e
- (void)_setContainerSeedItemPersistentIDValue:(id)arg1;	// IMP=0x00000000000a358c
- (_Bool)_removeTracksAtIndexes:(id)arg1 notify:(_Bool)arg2 usingConnection:(id)arg3;	// IMP=0x00000000000a334b
- (_Bool)_reloadContainedMediaTypes:(_Bool)arg1 removedMediaTypes:(id)arg2 addedMediaTypes:(id)arg3 notify:(_Bool)arg4 incrementEntityRevision:(_Bool)arg5 usingConnection:(id)arg6;	// IMP=0x00000000000a3274
- (long long)_maxPositionForTracksUsingConnection:(id)arg1;	// IMP=0x00000000000a3146
- (_Bool)isBuiltInSmartPlaylist;	// IMP=0x00000000000a30d2
- (id)childPlaylistPersistentIds;	// IMP=0x00000000000a2f7a
- (id)trackPersistentIds;	// IMP=0x00000000000a2e08
- (_Bool)removeFirstTrack;	// IMP=0x00000000000a2da7
- (_Bool)removeTracksAtIndexes:(id)arg1 notify:(_Bool)arg2;	// IMP=0x00000000000a2c06
- (_Bool)moveTrackFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000000a2aa0
- (_Bool)appendTracksWithPersistentIDs:(id)arg1 notify:(_Bool)arg2;	// IMP=0x00000000000a28a5
- (_Bool)setTracksWithPersistentIDs:(id)arg1 notify:(_Bool)arg2;	// IMP=0x00000000000a271e
- (_Bool)removeAllTracks;	// IMP=0x00000000000a2658
@property(readonly, copy, nonatomic) NSArray *displayOrderingTerms;
@property(readonly, copy, nonatomic) NSArray *cloudDisplayOrderingTerms;
@property(readonly, nonatomic) long long limitValue;
@property(readonly, copy, nonatomic) NSArray *limitOrderingTerms;
- (id)evaluationOrderingTerms;	// IMP=0x00000000000a2060
@property(readonly, copy, nonatomic) NSString *limitingProperty;
@property(readonly, nonatomic, getter=isLimitOrderingDescending) _Bool limitOrderingDescending;
@property(readonly, nonatomic, getter=isLimitedByCount) _Bool limitedByCount;
- (_Bool)isEvaluationOrderingDescending;	// IMP=0x00000000000a1e5b
@property(readonly, nonatomic) ML3Predicate *smartCriteriaPredicate;
- (struct SearchCriteriaList *)importedCriteriaList;	// IMP=0x00000000000a1cab
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a19b6
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;	// IMP=0x00000000000a1190
- (id)protocolItem;	// IMP=0x000000000012f31f
- (id)multiverseIdentifier;	// IMP=0x000000000012f1be
- (id)_stringStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;	// IMP=0x0000000000196c50
- (id)_stringForTrackFieldMediaKind:(long long)arg1;	// IMP=0x00000000001969d0
- (id)_stringForTrackFieldCloudStatus:(long long)arg1;	// IMP=0x000000000019694c
- (id)_stringForCriterionMatchType:(CDStruct_ca99c6a1)arg1;	// IMP=0x0000000000196768
- (id)_stringForCriterionMatchKey:(CDStruct_ca99c6a1)arg1;	// IMP=0x0000000000195e84
- (id)_stringForCriterionBuffer:(CDStruct_ca99c6a1)arg1;	// IMP=0x0000000000195b79
- (id)_formatTime:(long long)arg1;	// IMP=0x0000000000195abb
- (id)_convertNumericValueFromCriterionMatchKey:(unsigned int)arg1 criteriaValue:(long long)arg2;	// IMP=0x0000000000195a39
- (id)_numericStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;	// IMP=0x0000000000195801
- (id)_nonzeroStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;	// IMP=0x00000000001957ef
- (id)_dateStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;	// IMP=0x0000000000195518
- (id)_booleanStringForCriteriaInfo:(CDStruct_ca99c6a1)arg1;	// IMP=0x0000000000195449
- (id)_addUnitesForCriterionInfo:(CDStruct_ca99c6a1)arg1;	// IMP=0x000000000019540f
- (id)_criteriaListDescription:(struct SearchCriteriaList *)arg1 level:(long long)arg2;	// IMP=0x0000000000195038
- (id)criteriaListDescription;	// IMP=0x0000000000194f74

@end

