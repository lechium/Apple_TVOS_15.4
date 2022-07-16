//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLFileSystemAlbumMetadataPersistence-Protocol.h>

@class NSArray, NSData, NSFetchRequest, NSOrderedSet, NSPredicate, NSString;

@interface PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence>
{
    unsigned long long _countForDisplay;	// 8 = 0x8
    unsigned long long _photosCount;	// 16 = 0x10
    unsigned long long _videosCount;	// 24 = 0x18
    int _emptyState;	// 32 = 0x20
    NSArray *_cachedKeyAssets;	// 40 = 0x28
    _Bool _needsPersistenceUpdate;	// 48 = 0x30
    NSPredicate *_ALAssetsGroupFilterPredicate;	// 56 = 0x38
    unsigned long long _batchSize;	// 64 = 0x40
}

+ (long long)cloudDeletionTypeForTombstone:(id)arg1;	// IMP=0x00000000001823a1
+ (id)cloudUUIDKeyForDeletion;	// IMP=0x0000000000182394
+ (id)validKindsForPersistence;	// IMP=0x0000000000182370
+ (id)sortDescriptorsForAlbumKind:(int)arg1;	// IMP=0x0000000000182044
+ (id)predicateForAlbumKind:(int)arg1 includeGuest:(_Bool)arg2;	// IMP=0x0000000000180fa6
+ (id)predicateForAlbumKind:(int)arg1;	// IMP=0x0000000000180f92
+ (id)_predicateForVisibleAsset;	// IMP=0x0000000000180f66
+ (id)_predicateForAssetSubtype:(short)arg1;	// IMP=0x0000000000180d91
+ (_Bool)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;	// IMP=0x0000000000180d89
+ (_Bool)contextShouldIgnoreChangesForFetchRequest;	// IMP=0x0000000000180d81
+ (_Bool)contextShouldIgnoreChangesForFetchedAssets;	// IMP=0x0000000000180d79
- (void).cxx_destruct;	// IMP=0x0000000000180d48
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate; // @synthesize ALAssetsGroupFilterPredicate=_ALAssetsGroupFilterPredicate;
- (void)prepareForDeletion;	// IMP=0x0000000000180b94
@property(readonly) long long cloudDeletionType;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
- (_Bool)isValidForPersistence;	// IMP=0x0000000000180afb
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;	// IMP=0x0000000000180a05
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;	// IMP=0x000000000018090f
- (void)didSave;	// IMP=0x00000000001807f6
- (void)willSave;	// IMP=0x0000000000180652
- (_Bool)mayHaveAssetsInCommon:(id)arg1;	// IMP=0x000000000018022e
- (id)fastPointerAccessSetForAssets:(id)arg1;	// IMP=0x000000000017ff45
@property(readonly, nonatomic) _Bool hasAssetsCache;
- (void)updateSnapshotAndClearCaches:(id)arg1;	// IMP=0x000000000017fe09
- (void)setTertiaryKeyAsset:(id)arg1;	// IMP=0x000000000017fe03
- (void)setSecondaryKeyAsset:(id)arg1;	// IMP=0x000000000017fdfd
- (void)setKeyAsset:(id)arg1;	// IMP=0x000000000017fdf7
- (id)tertiaryKeyAsset;	// IMP=0x000000000017fd1b
- (id)secondaryKeyAsset;	// IMP=0x000000000017fc3f
- (id)keyAsset;	// IMP=0x000000000017fb68
- (id)_cachedKeyAssets;	// IMP=0x000000000017f6c4
- (id)filteredIndexesForPredicate:(id)arg1;	// IMP=0x000000000017f4ea
- (void)batchFetchAssets:(id)arg1;	// IMP=0x000000000017f45a
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;	// IMP=0x000000000017f3fe
- (_Bool)canPerformDeleteOperation;	// IMP=0x000000000017f3e7
- (unsigned long long)countForAssetsOfKind:(short)arg1;	// IMP=0x000000000017f330
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1;	// IMP=0x000000000017f0a4
- (_Bool)isEmpty;	// IMP=0x000000000017edb6
- (unsigned long long)approximateCount;	// IMP=0x000000000017eb4d
- (unsigned long long)count;	// IMP=0x000000000017eb09
- (id)mutableAssets;	// IMP=0x000000000017eb01
- (void)setAssets:(id)arg1;	// IMP=0x000000000017eaf2
- (id)assets;	// IMP=0x000000000017e9d4
- (id)_performFetchWithRequest:(id)arg1;	// IMP=0x000000000017e869
- (id)primitiveAssets;	// IMP=0x000000000017e857
@property(readonly, nonatomic) NSPredicate *extraFilterPredicate;
@property(retain, nonatomic) NSFetchRequest *fetchRequest;
- (void)setupFetchRequest;	// IMP=0x000000000017e1d1
- (void)didTurnIntoFault;	// IMP=0x000000000017e158
- (void)awakeFromInsert;	// IMP=0x000000000017e0df
- (void)awakeFromFetch;	// IMP=0x000000000017e066
- (id)payloadForChangedKeys:(id)arg1;	// IMP=0x00000000003167a6

// Remaining properties
@property(nonatomic) short cloudDeleteState;
@property(retain, nonatomic) NSData *customQueryParameters; // @dynamic customQueryParameters;
@property(retain, nonatomic) NSString *customQueryType; // @dynamic customQueryType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSOrderedSet *fetchedAssets; // @dynamic fetchedAssets;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
