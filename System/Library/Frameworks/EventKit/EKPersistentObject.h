//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKFrozenMeltedPair-Protocol.h>
#import <EventKit/EKProtocolObject-Protocol.h>

@class CADGenerationStampedObjectID, EKEventStore, EKObjectID, NSDictionary, NSHashTable, NSMutableDictionary, NSString;

@interface EKPersistentObject : NSObject <EKProtocolObject, EKFrozenMeltedPair>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;	// 8 = 0x8
    EKEventStore *_eventStore;	// 72 = 0x48
    EKObjectID *_objectID;	// 80 = 0x50
    int _databaseRestoreGeneration;	// 88 = 0x58
    unsigned int _flags;	// 92 = 0x5c
    NSHashTable *_coCommitObjects;	// 96 = 0x60
    NSMutableDictionary *_loadedProperties;	// 104 = 0x68
    NSMutableDictionary *_updatedProperties;	// 112 = 0x70
}

+ (id)allObjectsWithChangesRelatedToObjects:(id)arg1;	// IMP=0x00000000000722cc
+ (_Bool)_shouldRetainPropertyForKey:(id)arg1;	// IMP=0x000000000006d0aa
+ (id)_relationForKey:(id)arg1;	// IMP=0x000000000006d027
+ (Class)meltedClass;	// IMP=0x0000000000108f74
+ (Class)frozenClass;	// IMP=0x000000000006bf16
+ (id)propertiesUnavailableForPartialObjects;	// IMP=0x000000000006be00
+ (Class)alternateUniverseClass;	// IMP=0x000000000006bccd
+ (id)relations;	// IMP=0x000000000006ba8e
+ (id)defaultPropertiesToLoad;	// IMP=0x000000000006ba75
- (void).cxx_destruct;	// IMP=0x0000000000072c69
- (id)dump;	// IMP=0x00000000000729a2
- (void)_loadDefaultPropertiesIfNeeded;	// IMP=0x0000000000071de4
- (void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;	// IMP=0x0000000000071da1
- (void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;	// IMP=0x0000000000071d2b
- (void)_takeValues:(id)arg1 forKeys:(id)arg2;	// IMP=0x000000000007159a
- (void)takeValues:(id)arg1 forKeys:(id)arg2;	// IMP=0x0000000000071524
- (_Bool)_loadChildIdentifiersForKey:(id)arg1 values:(id *)arg2;	// IMP=0x000000000007109e
- (_Bool)_loadRelationForKey:(id)arg1 value:(id *)arg2;	// IMP=0x0000000000070db0
- (void)primitiveSetSecurityScopedURLWrapperValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000070d3a
- (id)primitiveSecurityScopedURLWrapperValueForKey:(id)arg1;	// IMP=0x00000000000709f4
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007097e
- (id)primitiveDataValueForKey:(id)arg1;	// IMP=0x000000000007061c
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000705a6
- (id)primitiveStringValueForKey:(id)arg1;	// IMP=0x00000000000704cd
- (id)_loadStringValueForKey:(id)arg1;	// IMP=0x0000000000070276
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000070200
- (id)primitiveDateValueForKey:(id)arg1;	// IMP=0x000000000006fec2
- (void)primitiveSetBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000006fe32
- (_Bool)primitiveBoolValueForKey:(id)arg1;	// IMP=0x000000000006fdee
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000006fd5c
- (double)primitiveDoubleValueForKey:(id)arg1;	// IMP=0x000000000006fd0c
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000006fc7c
- (int)primitiveIntValueForKey:(id)arg1;	// IMP=0x000000000006fc38
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000006fbc2
- (id)primitiveNumberValueForKey:(id)arg1;	// IMP=0x000000000006f860
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000006f7d9
- (id)_primitiveValueForKey:(id)arg1 loader:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f6ec
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000006e930
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000006e797
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000006e581
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;	// IMP=0x000000000006e337
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;	// IMP=0x000000000006e0e8
- (id)primitiveRelationValueForKey:(id)arg1;	// IMP=0x000000000006dc3e
- (void)unloadPropertyForKey:(id)arg1;	// IMP=0x000000000006db55
- (void)_releaseLoadedProperties;	// IMP=0x000000000006dab8
- (void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3 isUpdatedProperty:(_Bool)arg4;	// IMP=0x000000000006d97a
- (void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(_Bool)arg3 isUpdatedProperty:(_Bool)arg4;	// IMP=0x000000000006d8d0
- (void)_setProperty:(id)arg1 forKey:(id)arg2 isUpdatedProperty:(_Bool)arg3;	// IMP=0x000000000006d832
- (void)_createUpdatedPropertiesIfNeeded;	// IMP=0x000000000006d7fb
- (void)_createLoadedPropertiesIfNeeded;	// IMP=0x000000000006d7c4
- (id)_propertyForKey:(id)arg1;	// IMP=0x000000000006d6df
- (id)_loadedPropertyForKey:(id)arg1;	// IMP=0x000000000006d632
- (id)loadedPropertyForKey:(id)arg1;	// IMP=0x000000000006d22d
- (void)internalAddCoCommitObject:(id)arg1;	// IMP=0x000000000006d19c
- (void)addCoCommitObject:(id)arg1;	// IMP=0x000000000006d13d
- (id)coCommitObjects;	// IMP=0x000000000006d0f7
- (_Bool)_areDefaultPropertiesLoaded;	// IMP=0x000000000006cff9
- (void)_setDefaultPropertiesLoaded:(_Bool)arg1;	// IMP=0x000000000006cfbe
- (_Bool)_isPendingDelete;	// IMP=0x000000000006cf90
- (void)_setPendingDelete:(_Bool)arg1;	// IMP=0x000000000006cf55
- (_Bool)_isPendingUpdate;	// IMP=0x000000000006cf28
- (void)_setPendingUpdate:(_Bool)arg1;	// IMP=0x000000000006ceed
- (_Bool)_isPendingInsert;	// IMP=0x000000000006cec2
- (void)_setPendingInsert:(_Bool)arg1;	// IMP=0x000000000006ce88
- (void)rollback;	// IMP=0x000000000006ce2d
- (void)reset;	// IMP=0x000000000006ccd0
- (void)saved;	// IMP=0x000000000006cc71
- (id)dirtyPropertiesAndValues;	// IMP=0x000000000006c882
- (_Bool)isPropertyLoaded:(id)arg1;	// IMP=0x000000000006c810
- (_Bool)isPropertyDirty:(id)arg1;	// IMP=0x000000000006c79d
- (_Bool)refresh;	// IMP=0x000000000006c547
- (id)_loadedPropertyKeys;	// IMP=0x000000000006c531
- (void)changed;	// IMP=0x000000000006c488
- (_Bool)isDirty;	// IMP=0x000000000006c44c
- (_Bool)_isNew;	// IMP=0x000000000006c3ff
- (_Bool)existsInStore;	// IMP=0x000000000006c1fd
@property(readonly, nonatomic) CADGenerationStampedObjectID *CADObjectID;
- (id)_CADObjectID;	// IMP=0x000000000006c19c
@property(readonly, nonatomic) int databaseRestoreGeneration;
- (void)_setObjectID:(id)arg1 inDatabaseRestoreGeneration:(int)arg2;	// IMP=0x000000000006c07f
- (id)objectID;	// IMP=0x000000000006c048
- (void)_setEventStore:(id)arg1;	// IMP=0x000000000006bfc6
@property(readonly, nonatomic) EKEventStore *eventStore;
@property(readonly, nonatomic) int entityType;
- (_Bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;	// IMP=0x000000000006bf75
- (_Bool)isCompletelyEqual:(id)arg1;	// IMP=0x000000000006bf5d
- (id)meltedObjectInStore:(id)arg1;	// IMP=0x000000000006bf42
- (id)frozenObject;	// IMP=0x000000000006bf39
- (Class)frozenClass;	// IMP=0x000000000006bf1f
- (id)existingMeltedObject;	// IMP=0x000000000006bf0e
- (id)changeSet;	// IMP=0x000000000006bf06
@property(readonly, nonatomic) NSString *semanticIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)propertyKeyForUniqueIdentifier;	// IMP=0x000000000006be33
- (id)initWithObject:(id)arg1;	// IMP=0x000000000006be08
- (_Bool)isPropertyUnavailable:(id)arg1;	// IMP=0x000000000006bd8e
- (_Bool)isNew;	// IMP=0x000000000006bd7c
@property(readonly, nonatomic) _Bool isFrozen;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, nonatomic) _Bool isPartialObject;
@property(readonly, nonatomic) _Bool canBeConvertedToFullObject;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006bbee
- (void)dealloc;	// IMP=0x000000000006bbb4
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;	// IMP=0x000000000006bba2
- (id)init;	// IMP=0x000000000006bacc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

