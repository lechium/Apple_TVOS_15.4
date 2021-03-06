//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKFrozenMeltedPair-Protocol.h>
#import <EventKit/EKProtocolMutableObject-Protocol.h>

@class CADGenerationStampedObjectID, EKChangeSet, EKEventStore, EKObjectValidationContext, EKPersistentObject, NSDictionary, NSMutableDictionary, NSString;

@interface EKObject : NSObject <EKFrozenMeltedPair, EKProtocolMutableObject>
{
    EKPersistentObject *_persistentObject;	// 8 = 0x8
    EKChangeSet *_changeSet;	// 16 = 0x10
    NSMutableDictionary *__cachedMeltedObjects;	// 24 = 0x18
    NSDictionary *_additionalFrozenProperties;	// 32 = 0x20
    NSMutableDictionary *__cachedValues;	// 40 = 0x28
    EKObjectValidationContext *__validationContext;	// 48 = 0x30
}

+ (id)_arrayIntersectingArray:(id)arg1 withSet:(id)arg2;	// IMP=0x0000000000010013
+ (id)propertiesUnavailableForPartialObjects;	// IMP=0x000000000000f212
+ (Class)frozenClass;	// IMP=0x000000000000f1a3
+ (Class)meltedClass;	// IMP=0x000000000000f199
+ (_Bool)_objects:(id)arg1 haveSameMeltedClass:(Class)arg2 frozenClass:(Class)arg3;	// IMP=0x000000000000ee43
+ (_Bool)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3;	// IMP=0x000000000000ed42
+ (_Bool)_compareMutliValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x000000000000e811
+ (_Bool)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x000000000000e651
+ (_Bool)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x000000000000e491
+ (_Bool)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3;	// IMP=0x000000000000e3ed
+ (_Bool)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(_Bool)arg4 propertiesToIgnore:(id)arg5;	// IMP=0x000000000000e01c
+ (_Bool)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(_Bool)arg4 compareImmutableKeys:(_Bool)arg5 propertiesToIgnore:(id)arg6;	// IMP=0x000000000000df3a
+ (_Bool)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(_Bool)arg4 propertiesToIgnore:(id)arg5;	// IMP=0x000000000000df16
+ (_Bool)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(_Bool)arg4 ignoringProperties:(id)arg5;	// IMP=0x000000000000dd72
+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;	// IMP=0x0000000000069243
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;	// IMP=0x000000000006923b
+ (_Bool)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5;	// IMP=0x00000000000aaaa3
+ (_Bool)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3 relationshipObjectKey:(id)arg4;	// IMP=0x00000000000aa92d
+ (_Bool)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3;	// IMP=0x00000000000aa889
+ (_Bool)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x00000000000aa6c9
+ (_Bool)_compareSingleValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x00000000000aa5a1
+ (_Bool)_compareNonRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x00000000000aa375
+ (_Bool)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(_Bool)arg4 propertiesToIgnore:(id)arg5;	// IMP=0x00000000000a9fa4
+ (_Bool)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x00000000000a9f82
+ (_Bool)_compareMultiValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x00000000000a9aa8
+ (_Bool)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4;	// IMP=0x00000000000a98e8
+ (_Bool)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(_Bool)arg4 propertiesToIgnore:(id)arg5;	// IMP=0x00000000000a98c4
+ (_Bool)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(_Bool)arg4 compareImmutableKeys:(_Bool)arg5 propertiesToIgnore:(id)arg6;	// IMP=0x00000000000a97e2
+ (_Bool)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3;	// IMP=0x00000000000a97bc
+ (_Bool)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(_Bool)arg4;	// IMP=0x00000000000a9626
+ (_Bool)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3;	// IMP=0x00000000000a960e
+ (id)_changeSetForDiff:(id)arg1;	// IMP=0x00000000000a8dee
+ (void)_addChangesFromObject:(id)arg1 toObjects:(id)arg2 except:(id)arg3 keep:(id)arg4 copyingBackingObjects:(_Bool)arg5;	// IMP=0x00000000000a21f8
+ (void)addChangesFromObject:(id)arg1 toObjects:(id)arg2 keep:(id)arg3;	// IMP=0x00000000000a21d0
+ (void)addChangesFromObject:(id)arg1 toObjects:(id)arg2 except:(id)arg3;	// IMP=0x00000000000a21ab
+ (_Bool)isWeakRelationObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009f372
+ (_Bool)isMeltedAndNotWeakRelationshipObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009f2c6
+ (id)knownSingleValueKeysForComparison;	// IMP=0x000000000009f2b9
+ (id)knownSummaryKeys;	// IMP=0x000000000009f2a7
+ (id)knownIdentityKeysForComparison;	// IMP=0x000000000009f28f
+ (id)knownImmutableKeys;	// IMP=0x000000000009f282
+ (id)knownDerivedRelationshipKeys;	// IMP=0x000000000009f275
+ (id)knownRelationshipWeakKeys;	// IMP=0x000000000009f268
+ (id)knownRelationshipMultiValueKeysForValidation;	// IMP=0x000000000009f256
+ (id)knownRelationshipMultiValueKeys;	// IMP=0x000000000009f249
+ (id)knownDerivedAndSingleValueRelationshipKeys;	// IMP=0x000000000009f1b9
+ (id)knownRelationshipSingleValueKeysForValidation;	// IMP=0x000000000009f1a7
+ (id)knownRelationshipSingleValueKeys;	// IMP=0x000000000009f19a
+ (_Bool)isDerivedRelationship;	// IMP=0x000000000009f192
+ (_Bool)isWeakRelationship;	// IMP=0x000000000009f18a
+ (unsigned long long)_numberOfSharedLocksForUnitTesting;	// IMP=0x000000000009e3aa
- (void).cxx_destruct;	// IMP=0x000000000001286d
@property(retain, nonatomic) EKObjectValidationContext *_validationContext; // @synthesize _validationContext=__validationContext;
@property(retain, nonatomic) NSMutableDictionary *_cachedValues; // @synthesize _cachedValues=__cachedValues;
@property(retain, nonatomic) NSDictionary *additionalFrozenProperties; // @synthesize additionalFrozenProperties=_additionalFrozenProperties;
@property(retain, nonatomic) NSMutableDictionary *_cachedMeltedObjects; // @synthesize _cachedMeltedObjects=__cachedMeltedObjects;
@property(retain, nonatomic) EKChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(retain, nonatomic) EKPersistentObject *persistentObject; // @synthesize persistentObject=_persistentObject;
- (void)addCoCommitObject:(id)arg1;	// IMP=0x000000000001273f
- (void)deletePersistentObject;	// IMP=0x00000000000126d2
- (void)updatePersistentObjectSkippingProperties:(id)arg1;	// IMP=0x00000000000120e6
- (void)updatePersistentObject;	// IMP=0x00000000000120d2
- (void)insertPersistentObjectIfNeeded;	// IMP=0x0000000000011c6b
- (id)_propertyValueForKey:(id)arg1;	// IMP=0x0000000000011b3d
- (void)_updatePersistentValueForKey:(id)arg1;	// IMP=0x00000000000117ed
- (void)updatePersistentValueForKeyIfNeeded:(id)arg1;	// IMP=0x00000000000117a0
- (void)_performBlockOnOwnedCachedRelatedObjects:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011368
- (void)markAsCommitted;	// IMP=0x000000000001131e
- (void)markAsSaved;	// IMP=0x000000000001130c
- (void)markAsUndeleted;	// IMP=0x00000000000112de
- (void)markAsDeleted;	// IMP=0x00000000000112cc
- (void)markAsNotNew;	// IMP=0x00000000000112ba
- (void)markAsNew;	// IMP=0x00000000000112a8
- (id)committedValueForKey:(id)arg1;	// IMP=0x0000000000010f16
- (_Bool)refreshAndNotify:(_Bool)arg1;	// IMP=0x0000000000010e94
- (_Bool)refresh;	// IMP=0x0000000000010e7d
- (_Bool)_reset;	// IMP=0x0000000000010e25
- (void)reset;	// IMP=0x0000000000010e13
- (void)rollback;	// IMP=0x0000000000010e01
- (id)_recursiveSnapshotCopyWithPropertyAccessor:(CDUnknownBlockType)arg1 propertyKeysToCopy:(id)arg2 recurseOnWeakRelations:(_Bool)arg3;	// IMP=0x00000000000100ad
- (id)previouslySavedCopy;	// IMP=0x000000000000ff8c
- (id)snapshotCopyWithPropertyKeysToCopy:(id)arg1;	// IMP=0x000000000000ff04
- (id)snapshotCopy;	// IMP=0x000000000000fef0
- (id)committedCopy;	// IMP=0x000000000000fe1f
- (id)duplicateToEventStore:(id)arg1;	// IMP=0x000000000000fdac
- (id)duplicate;	// IMP=0x000000000000fd4d
- (id)_copyWithoutChangesInZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fccf
- (id)shallowCopyWithoutChanges;	// IMP=0x000000000000fcb3
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fc5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fc4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fb67
@property(readonly) unsigned long long hash;
- (_Bool)existsInStore;	// IMP=0x000000000000fac6
- (int)rowID;	// IMP=0x000000000000fa82
@property(readonly, nonatomic) CADGenerationStampedObjectID *CADObjectID;
- (id)objectID;	// IMP=0x000000000000f9e2
@property(retain, nonatomic) EKEventStore *eventStore;
- (void)rebaseSkippingRelationProperties:(id)arg1 toEventStore:(id)arg2;	// IMP=0x000000000000f2f2
- (void)rebaseSkippingRelationProperties:(id)arg1;	// IMP=0x000000000000f27d
- (void)rebaseToEventStore:(id)arg1;	// IMP=0x000000000000f266
- (void)rebase;	// IMP=0x000000000000f21a
@property(readonly, nonatomic) _Bool isPartialObject;
- (Class)frozenClass;	// IMP=0x000000000000f1f0
- (_Bool)isPropertyUnavailable:(id)arg1;	// IMP=0x000000000000f1dc
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, nonatomic) _Bool canBeConvertedToFullObject;
@property(readonly, nonatomic) _Bool isFrozen;
- (id)existingMeltedObject;	// IMP=0x000000000000f1bb
- (id)meltedObjectInStore:(id)arg1;	// IMP=0x000000000000eff5
- (_Bool)isEqual:(id)arg1 comparingKeys:(id)arg2 compareImmutableKeys:(_Bool)arg3 ignoringProperties:(id)arg4;	// IMP=0x000000000000dcdc
- (_Bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;	// IMP=0x000000000000dcc2
- (_Bool)isCompletelyEqual:(id)arg1;	// IMP=0x000000000000dcaa
- (id)frozenObject;	// IMP=0x000000000000dc98
- (id)initWithObject:(id)arg1;	// IMP=0x000000000000dc6d
- (_Bool)isDifferentFromCommitted;	// IMP=0x000000000000dbf6
@property(readonly, nonatomic) _Bool hasChanges;
@property(readonly, nonatomic, getter=isNew) _Bool new;
@property(readonly, nonatomic) NSString *semanticIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (_Bool)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(_Bool)arg2;	// IMP=0x000000000000da38
@property(retain, nonatomic) EKPersistentObject *backingObject;
- (id)initWithObjectForCopy:(id)arg1;	// IMP=0x000000000000d9c3
- (id)initWithPersistentObject:(id)arg1;	// IMP=0x000000000000d919
- (id)init;	// IMP=0x000000000000d8be
- (void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 indentFirstLine:(_Bool)arg3;	// IMP=0x0000000000025559
- (id)_summaryWithDepth:(long long)arg1;	// IMP=0x00000000000254c3
- (id)_basicSummaryWithDepth:(long long)arg1;	// IMP=0x00000000000251bf
- (void)_cachedMeltedChildIdentifierToParentMap:(id)arg1;	// IMP=0x00000000000aab8d
- (id)cachedMeltedChildIdentifierToParentMap;	// IMP=0x00000000000aab55
- (id)privacyDescription;	// IMP=0x00000000000aaad9
@property(readonly, nonatomic) NSString *specificIdentifier;
- (void)applyChangeSetFromOtherObject:(id)arg1;	// IMP=0x00000000000a8d47
- (id)inverseObjectWithObject:(id)arg1 diff:(id *)arg2;	// IMP=0x00000000000a8c6d
- (id)diffWithObject:(id)arg1;	// IMP=0x00000000000a8c4e
- (void)emptyMeltedCacheForKeys:(id)arg1;	// IMP=0x00000000000a8b6b
- (void)emptyMeltedCacheForKey:(id)arg1;	// IMP=0x00000000000a8a88
- (void)emptyMeltedCache;	// IMP=0x00000000000a89fb
- (void)_resetMeltedCache;	// IMP=0x00000000000a7eff
- (void)_resetInternalState;	// IMP=0x00000000000a7ef9
- (void)_resetAfterUpdatingChangeSetOrBackingObject;	// IMP=0x00000000000a7ecb
- (void)updateMultiValueCacheForChangeSet:(id)arg1 preservingExistingAdds:(_Bool)arg2;	// IMP=0x00000000000a751f
- (void)updateMeltedCacheForChangeSet:(id)arg1;	// IMP=0x00000000000a72c6
- (void)updateAfterApplyingChanges:(id)arg1;	// IMP=0x00000000000a7298
- (unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1;	// IMP=0x00000000000a7094
- (void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a6e6b
- (id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1;	// IMP=0x00000000000a6abf
- (void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3;	// IMP=0x00000000000a68f2
- (id)meltedAndCachedSingleRelationObjectForKey:(id)arg1;	// IMP=0x00000000000a673a
- (id)frozenOrMeltedCachedMultiRelationObjectsForKey:(id)arg1;	// IMP=0x00000000000a66c5
- (id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1;	// IMP=0x00000000000a6653
- (id)cachedMeltedObjectForSingleValueKey:(id)arg1;	// IMP=0x00000000000a64cd
- (void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2;	// IMP=0x00000000000a6383
- (id)cachedMeltedObjectsForMultiValueKey:(id)arg1;	// IMP=0x00000000000a61ba
- (void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2;	// IMP=0x00000000000a6063
- (void)_removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;	// IMP=0x00000000000a5f64
- (void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;	// IMP=0x00000000000a5ec5
- (void)_addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;	// IMP=0x00000000000a5e0d
- (void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2;	// IMP=0x00000000000a5d6e
- (void)_updateCachedMeltedObjectSetForMultiValueKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a5b53
- (unsigned long long)_cachedMeltedObjectsCount;	// IMP=0x00000000000a5a57
- (void)_applyKnownImmutableValuesFrom:(id)arg1;	// IMP=0x00000000000a57d6
- (void)_applyDefinedAfterFirstSaveFrom:(id)arg1;	// IMP=0x00000000000a57c4
- (void)_resetWithFrozenObject:(id)arg1;	// IMP=0x00000000000a5751
- (_Bool)revert;	// IMP=0x00000000000a573f
- (void)refetch;	// IMP=0x00000000000a572d
- (_Bool)_refreshCommon;	// IMP=0x00000000000a471c
- (_Bool)_refreshable;	// IMP=0x00000000000a44a9
- (_Bool)_resetCommon;	// IMP=0x00000000000a401a
- (_Bool)_resetIfBackingObjectIsOfClass:(Class)arg1 fetchResetFrozenObjectBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a3f67
- (void)_rollbackCommon;	// IMP=0x00000000000a3a0a
- (id)changedKeys;	// IMP=0x00000000000a36a5
- (void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a3606
- (void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a340a
- (void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a3389
- (void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a318d
- (void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a310c
- (id)multiChangedObjectValuesForKey:(id)arg1;	// IMP=0x00000000000a2ec8
- (void)setSingleChangedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000a2ccc
- (id)singleChangedValueForKey:(id)arg1;	// IMP=0x00000000000a2a88
- (void)applyChanges:(id)arg1;	// IMP=0x00000000000a2a0e
- (void)_addChanges:(id)arg1 copyingBackingObjects:(_Bool)arg2;	// IMP=0x00000000000a288b
- (void)addChanges:(id)arg1;	// IMP=0x00000000000a2874
- (void)_addChangesFromObject:(id)arg1 except:(id)arg2 keep:(id)arg3 ignoreRelations:(id)arg4 copyingBackingObjects:(_Bool)arg5;	// IMP=0x00000000000a188a
- (void)addChangesFromObject:(id)arg1 copyingBackingObjects:(_Bool)arg2;	// IMP=0x00000000000a1864
- (void)addChangesFromObject:(id)arg1;	// IMP=0x00000000000a184d
- (id)_previousValueForKey:(id)arg1;	// IMP=0x00000000000a1756
- (_Bool)_areOnlyChangedKeys:(id)arg1;	// IMP=0x00000000000a139f
- (_Bool)_isOnlyChangedKey:(id)arg1;	// IMP=0x00000000000a1345
- (_Bool)_hasChangesForKey:(id)arg1 checkUnsaved:(_Bool)arg2;	// IMP=0x00000000000a1009
- (_Bool)_hasChangesForKey:(id)arg1;	// IMP=0x00000000000a0ff2
- (id)_multiRelationshipKeysToCheckForChanges;	// IMP=0x00000000000a0f87
- (id)_singleRelationshipKeysToCheckForChanges;	// IMP=0x00000000000a0eae
- (_Bool)_hasChangeHelperInKeys:(id)arg1 ignoreKeys:(id)arg2 checkUnsaved:(_Bool)arg3;	// IMP=0x00000000000a0bc2
- (_Bool)_hasUnsavedChangesInKeys:(id)arg1 ignoreKeys:(id)arg2;	// IMP=0x00000000000a0993
- (_Bool)hasUnsavedChangesIgnoreKeys:(id)arg1;	// IMP=0x00000000000a097c
- (_Bool)hasUnsavedChangesInKeys:(id)arg1;	// IMP=0x00000000000a0968
- (_Bool)hasUnsavedChanges;	// IMP=0x00000000000a0954
- (_Bool)_hasChanges;	// IMP=0x00000000000a08a4
- (_Bool)isSaved;	// IMP=0x00000000000a082d
- (_Bool)isUndeleted;	// IMP=0x00000000000a07e9
- (_Bool)isDeleted;	// IMP=0x00000000000a07a5
- (_Bool)_isNew;	// IMP=0x00000000000a0761
- (void)_markAsCommittedCommon;	// IMP=0x00000000000a06dc
- (void)_markAsSavedCommon;	// IMP=0x00000000000a012c
- (void)_markAsUndeletedCommon;	// IMP=0x00000000000a0097
- (void)_markAsDeletedCommon;	// IMP=0x00000000000a0045
- (void)_markAsNotNewCommon;	// IMP=0x00000000000a0006
- (void)_markAsNewCommon;	// IMP=0x000000000009ff71
- (void)_initChangeSetIfNone;	// IMP=0x000000000009ff0d
- (_Bool)validateWithOwner:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009feaa
- (_Bool)validate:(id *)arg1;	// IMP=0x000000000009f405
- (id)cachedValueForKey:(id)arg1 expectingCachedValue:(id)arg2 forMasterKey:(id)arg3 relatedKeys:(id)arg4 populateBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000009eb22
- (void)clearCachedValuesForKeys:(id)arg1;	// IMP=0x000000000009e903
- (void)clearCachedValueForKey:(id)arg1;	// IMP=0x000000000009e820
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009e70b
- (id)cachedValueForKey:(id)arg1 populateBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009e3c9
- (id)cachedValueForKey:(id)arg1;	// IMP=0x000000000009e3b5
- (void)_performWithWriteLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e338
- (void)_performWithReadLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e2c6
- (id)_readWriteLock;	// IMP=0x000000000009e26d
- (void)_sharedInit;	// IMP=0x000000000009e1fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

