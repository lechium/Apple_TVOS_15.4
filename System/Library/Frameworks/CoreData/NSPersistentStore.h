//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface NSPersistentStore : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;	// 8 = 0x8
    NSString *_configurationName;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    id *_oidFactories;	// 40 = 0x28
    id _defaultFaultHandler;	// 48 = 0x30
    struct _objectStoreFlags {
        unsigned int isReadOnly:1;
        unsigned int cleanOnRemove:1;
        unsigned int isMDDirty:1;
        unsigned int _RESERVED:29;
    } _flags;	// 56 = 0x38
    void *_temporaryIDClass;	// 64 = 0x40
    id _coreSpotlightDelegate;	// 72 = 0x48
    id _managedObjectModel;	// 80 = 0x50
    struct __CFSet *_entitiesInConfiguration;	// 88 = 0x58
}

+ (Class)migrationManagerClass;	// IMP=0x0000000000106d42
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000106611
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001065e3
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00000000001065db
+ (void)initialize;	// IMP=0x00000000001065ca
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000108335
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;	// IMP=0x0000000000107a60
+ (_Bool)doURLStuff:(id)arg1 createdStubFile:(_Bool *)arg2 readOnly:(_Bool *)arg3 error:(id *)arg4 options:(id)arg5;	// IMP=0x00000000001075fc
+ (_Bool)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001071af
+ (_Bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001070aa
+ (_Bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000106dcf
+ (Class)rowCacheClass;	// IMP=0x0000000000106d81
- (_Bool)loadMetadata:(id *)arg1;	// IMP=0x0000000000106d3a
- (void)didAddToPersistentStoreCoordinator:(id)arg1;	// IMP=0x0000000000106d34
@property(readonly) NSDictionary *options;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;	// IMP=0x0000000000106cd6
@property(readonly, copy) NSString *type;
@property(retain, nonatomic) NSDictionary *metadata;
@property(copy) NSString *identifier;
@property(retain) NSURL *URL;
@property(readonly, nonatomic) __weak NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property(readonly, copy) NSString *configurationName;
@property(getter=isReadOnly) _Bool readOnly;
- (id)description;	// IMP=0x00000000001069c5
- (void)dealloc;	// IMP=0x0000000000106878
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010686d
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;	// IMP=0x0000000000106729
- (id)init;	// IMP=0x000000000010659b
- (id)ancillaryModels;	// IMP=0x00000000001087bb
- (struct __CFSet *)_entitiesForConfiguration;	// IMP=0x0000000000108479
- (_Bool)finishDeferredLightweightMigration:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x0000000000108471
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010842d
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000108425
- (void)_rebuildIndiciesSynchronously:(_Bool)arg1;	// IMP=0x000000000010841f
- (id)currentChangeToken;	// IMP=0x0000000000108417
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001083df
- (void)freeQueryGenerationWithIdentifier:(id)arg1;	// IMP=0x00000000001083d9
- (id)currentQueryGeneration;	// IMP=0x000000000010837e
- (_Bool)_hasActiveGenerations;	// IMP=0x0000000000108376
- (_Bool)supportsGenerationalQuerying;	// IMP=0x000000000010836e
- (_Bool)supportsConcurrentRequestHandling;	// IMP=0x0000000000108366
- (id)propertyNamesInHistoryChangeDataForEntityDescription:(id)arg1;	// IMP=0x0000000000108356
- (unsigned long long)entityIDForEntityDescription:(id)arg1;	// IMP=0x000000000010834e
- (void)_setupObserver;	// IMP=0x000000000010832f
- (id)_storeInfoForEntityDescription:(id)arg1;	// IMP=0x0000000000108327
- (void)_didLoadMetadata;	// IMP=0x0000000000108321
- (void)_setMetadataDirty:(_Bool)arg1;	// IMP=0x000000000010830f
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(_Bool)arg2;	// IMP=0x0000000000107eb3
- (_Bool)_isCloudKitOptioned;	// IMP=0x0000000000107eab
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000107e7d
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;	// IMP=0x0000000000107e52
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;	// IMP=0x0000000000107e27
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;	// IMP=0x0000000000107dfc
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;	// IMP=0x0000000000107dd1
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000107da3
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000107d75
- (_Bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000107d6d
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000107d3f
- (void)doFilesystemCleanupOnRemove:(_Bool)arg1;	// IMP=0x0000000000107d2d
- (void)_preflightCrossCheck;	// IMP=0x0000000000107a68
- (id)_persistentStoreCoordinator;	// IMP=0x00000000001075b6
- (_Bool)_unload:(id *)arg1;	// IMP=0x000000000010744c
- (_Bool)load:(id *)arg1;	// IMP=0x00000000001073c0
- (id)objectIDFactoryForEntity:(id)arg1;	// IMP=0x000000000010728d
- (Class)_objectIDClass;	// IMP=0x0000000000107227
- (_Bool)_isPersistentStoreAlive;	// IMP=0x0000000000106d92
- (id)_rawMetadata__;	// IMP=0x0000000000106d53
- (_Bool)isCloudKitEnabled;	// IMP=0x0000000000242d28
- (id)mirroringDelegate;	// IMP=0x0000000000242ce5

@end

