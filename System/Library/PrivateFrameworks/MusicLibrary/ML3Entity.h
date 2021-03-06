//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;

@interface ML3Entity : NSObject
{
    ML3MusicLibrary *_library;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027bc2
+ (long long)revisionTrackingCode;	// IMP=0x0000000000027bb2
+ (id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2;	// IMP=0x0000000000027849
+ (id)indexableSQLForProperties:(id)arg1;	// IMP=0x0000000000027644
+ (id)disambiguatedSelectSQLForProperty:(id)arg1;	// IMP=0x00000000000275d7
+ (id)_createDisambiguatedSQLForProperty:(id)arg1;	// IMP=0x00000000000274fd
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x000000000002745c
+ (void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2;	// IMP=0x00000000000272a1
+ (id)allProperties;	// IMP=0x0000000000027299
+ (id)predisambiguatedProperties;	// IMP=0x000000000002721b
+ (id)collectionClassesToUpdateBeforeDelete;	// IMP=0x0000000000027213
+ (id)persistentIDColumnForTable:(id)arg1;	// IMP=0x000000000002720b
+ (id)extraTablesToInsert;	// IMP=0x0000000000027203
+ (id)extraTablesToDelete;	// IMP=0x00000000000271fb
+ (_Bool)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000000000271f3
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;	// IMP=0x000000000002706f
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000026f64
+ (_Bool)_deleteRowForPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5 usingConnection:(id)arg6;	// IMP=0x0000000000026ce2
+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;	// IMP=0x0000000000026cda
+ (_Bool)assistantLibraryContentsChangeForProperty:(id)arg1;	// IMP=0x0000000000026cd2
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;	// IMP=0x0000000000026cca
+ (void)_didChangeValueForProperties:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000269aa
+ (_Bool)setValues:(id)arg1 forProperties:(id)arg2 forEntityPersistentIDs:(id)arg3 inLibrary:(id)arg4 usingConnection:(id)arg5;	// IMP=0x0000000000026493
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;	// IMP=0x0000000000026394
+ (_Bool)propertyIsCountProperty:(id)arg1;	// IMP=0x000000000002638c
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;	// IMP=0x0000000000026384
+ (id)foreignColumnForProperty:(id)arg1;	// IMP=0x000000000002637c
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x0000000000026374
+ (id)sectionPropertyForProperty:(id)arg1;	// IMP=0x000000000002636c
+ (id)defaultOrderingTerms;	// IMP=0x0000000000026364
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;	// IMP=0x00000000000262be
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;	// IMP=0x0000000000026234
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000261c4
+ (id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000026170
+ (id)joinClausesForProperty:(id)arg1;	// IMP=0x000000000002604f
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;	// IMP=0x0000000000026042
+ (id)predicateByOptimizingPredicate:(id)arg1;	// IMP=0x0000000000025fdb
+ (id)defaultFilterPredicates;	// IMP=0x0000000000025fc2
+ (id)URLForEntityWithPersistentID:(long long)arg1 libraryUID:(id)arg2;	// IMP=0x0000000000025df7
+ (id)entityFromURL:(id)arg1 inLibrary:(id)arg2 verifyExistence:(_Bool)arg3;	// IMP=0x0000000000025b55
+ (id)entityFromURL:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000025b3d
+ (id)entityURLScheme;	// IMP=0x0000000000025b30
+ (id)newSelectSQLForProperties:(const id *)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;	// IMP=0x0000000000025400
+ (id)newSelectAllEntitiesSQLForProperties:(const id *)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;	// IMP=0x0000000000024f11
+ (id)subselectPropertyForProperty:(id)arg1;	// IMP=0x0000000000024f09
+ (id)subselectStatementForProperty:(id)arg1;	// IMP=0x0000000000024f01
+ (void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long *)arg4 count:(unsigned long long)arg5 options:(long long)arg6 usingBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000024790
+ (_Bool)insertionChangesLibraryContents;	// IMP=0x0000000000024788
+ (_Bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 usingConnection:(id)arg5;	// IMP=0x00000000000243cf
+ (_Bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4;	// IMP=0x00000000000242c4
+ (_Bool)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000024153
+ (_Bool)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;	// IMP=0x0000000000023568
+ (_Bool)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;	// IMP=0x000000000002345f
+ (_Bool)_shouldIncrementRevisionForType:(int)arg1 persistentID:(long long)arg2 usingConnection:(id)arg3;	// IMP=0x00000000000233b9
+ (id)unsettableProperties;	// IMP=0x00000000000233b1
+ (_Bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 connection:(id)arg4;	// IMP=0x0000000000022e97
+ (_Bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4;	// IMP=0x0000000000022d49
+ (id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg1 library:(id)arg2 options:(long long)arg3;	// IMP=0x00000000000756e8
+ (id)unrestrictedAllItemsQueryWithlibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;	// IMP=0x000000000007561a
+ (id)allItemsQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(_Bool)arg4;	// IMP=0x0000000000075548
+ (id)unrestrictedQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;	// IMP=0x000000000007547a
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(_Bool)arg4 options:(long long)arg5;	// IMP=0x00000000000753a4
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(_Bool)arg4;	// IMP=0x00000000000752d2
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 options:(long long)arg5;	// IMP=0x00000000000751dc
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4;	// IMP=0x00000000000750f4
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;	// IMP=0x0000000000075026
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(_Bool)arg3;	// IMP=0x0000000000074f34
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;	// IMP=0x0000000000074e5a
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000000074d95
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4 usingSections:(_Bool)arg5;	// IMP=0x0000000000074d6e
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(_Bool)arg4;	// IMP=0x0000000000074d49
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x0000000000074d27
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;	// IMP=0x0000000000074c19
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000000074b82
+ (id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2;	// IMP=0x000000000009d8a0
- (void).cxx_destruct;	// IMP=0x0000000000022021
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(nonatomic) __weak ML3MusicLibrary *library; // @synthesize library=_library;
- (void)incrementRevision;	// IMP=0x0000000000021f9f
- (_Bool)deleteFromLibrary;	// IMP=0x0000000000021f44
- (void)didChangeValueForProperties:(id)arg1;	// IMP=0x0000000000021edc
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000021de1
- (_Bool)setValuesForPropertiesWithDictionary:(id)arg1;	// IMP=0x0000000000021d49
- (_Bool)setValues:(id)arg1 forProperties:(id)arg2 usingConnection:(id)arg3;	// IMP=0x0000000000021bfe
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000219e5
- (_Bool)setValues:(id)arg1 forProperties:(id)arg2;	// IMP=0x00000000000218f6
- (_Bool)setValues:(const id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000021762
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000216ef
- (id)getValuesForProperties:(id)arg1;	// IMP=0x0000000000021093
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000020cae
- (id)URL;	// IMP=0x0000000000020c07
- (_Bool)matchesPredicate:(id)arg1;	// IMP=0x0000000000020aaa
@property(readonly, nonatomic) _Bool existsInLibrary;
- (id)description;	// IMP=0x00000000000208d2
- (unsigned long long)hash;	// IMP=0x00000000000208c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002080c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000207ac
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;	// IMP=0x0000000000020432
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;	// IMP=0x000000000002041d
- (id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000020340

@end

