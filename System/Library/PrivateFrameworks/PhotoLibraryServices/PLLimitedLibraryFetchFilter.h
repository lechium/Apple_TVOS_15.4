//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableOrderedSet, NSString;

@interface PLLimitedLibraryFetchFilter
{
    NSMutableOrderedSet *_assetUUIDs;	// 8 = 0x8
}

+ (id)debugDescriptionOfCurrentLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1;	// IMP=0x00000000003753ab
+ (id)fetchFilterIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000375285
+ (id)disallowedAlbumKinds;	// IMP=0x0000000000375278
+ (void)deleteAllLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1;	// IMP=0x0000000000374f7d
+ (void)deleteLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000000374e13
+ (id)_decodeFetchFilterData:(id)arg1 withUUIDHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000374a8d
+ (id)entityNameToPredicateMapFromFetchFilterData:(id)arg1 withApplicationIdentifier:(id)arg2;	// IMP=0x0000000000374815
+ (id)entityNameToPredicateMapWithApplicationIdentifier:(id)arg1;	// IMP=0x00000000003745da
+ (id)_assetUUIDStringsFromFetchFilterData:(id)arg1;	// IMP=0x00000000003745ba
+ (id)_fetchFiltersMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;	// IMP=0x00000000003743be
+ (id)fetchLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000000003742fe
+ (id)fetchOrCreateLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x00000000003741e6
+ (id)insertIntoManagedObjectContext:(id)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x00000000003740fc
+ (id)entityName;	// IMP=0x00000000003740ef
- (void).cxx_destruct;	// IMP=0x0000000000373e3f
- (id)debugDescription;	// IMP=0x0000000000373cfd
- (void)_loadAssetUUIDs;	// IMP=0x0000000000373c3b
- (id)predicateForEntityName:(id)arg1;	// IMP=0x0000000000373889
- (id)assetUUIDStrings;	// IMP=0x00000000003734dd
- (_Bool)containsAssetWithUUID:(id)arg1;	// IMP=0x000000000037337e
- (void)addAssetsWithUUIDs:(id)arg1;	// IMP=0x000000000037317d
- (void)removeAllAssets;	// IMP=0x00000000003730f1

// Remaining properties
@property(copy, nonatomic) NSString *applicationIdentifier; // @dynamic applicationIdentifier;
@property(copy, nonatomic) NSString *designatedRequirement; // @dynamic designatedRequirement;
@property(retain, nonatomic) NSData *fetchFilterData; // @dynamic fetchFilterData;

@end

