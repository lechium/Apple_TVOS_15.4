//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, PHChange, PHFetchResultChangeDetails, PXSectionedDataSourceChangeDetails;

@interface PXPhotosDataSourceChange : NSObject
{
    long long _previousCollectionsCount;	// 8 = 0x8
    NSDictionary *_assetCollectionToSectionCache;	// 16 = 0x10
    PHFetchResultChangeDetails *_collectionListChangeDetails;	// 24 = 0x18
    NSDictionary *_assetCollectionChangeDetails;	// 32 = 0x20
    _Bool _prepared;	// 40 = 0x28
    NSIndexSet *_deletedSections;	// 48 = 0x30
    NSIndexSet *_insertedSections;	// 56 = 0x38
    NSIndexSet *_changedSections;	// 64 = 0x40
    NSArray *_deletedIndexPaths;	// 72 = 0x48
    NSArray *_insertedIndexPaths;	// 80 = 0x50
    NSArray *_changedIndexPaths;	// 88 = 0x58
    NSArray *_contentChangedIndexPaths;	// 96 = 0x60
    NSArray *_favoriteChangedIndexPaths;	// 104 = 0x68
    _Bool _changesAreNoOp;	// 112 = 0x70
    PXSectionedDataSourceChangeDetails *_sectionedDataSourceChangeDetails;	// 120 = 0x78
    NSIndexSet *_sectionsWithKeyAssetChanges;	// 128 = 0x80
    PHChange *_originatingPhotoLibraryChange;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000760a02
@property(readonly) __weak PHChange *originatingPhotoLibraryChange; // @synthesize originatingPhotoLibraryChange=_originatingPhotoLibraryChange;
@property(readonly, nonatomic) NSIndexSet *sectionsWithKeyAssetChanges; // @synthesize sectionsWithKeyAssetChanges=_sectionsWithKeyAssetChanges;
@property(readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails; // @synthesize sectionedDataSourceChangeDetails=_sectionedDataSourceChangeDetails;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1;	// IMP=0x00000000007605e8
- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1;	// IMP=0x0000000000760208
- (_Bool)affectsSectionsInRange:(struct _NSRange)arg1;	// IMP=0x000000000075fa83
- (_Bool)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;	// IMP=0x000000000075f728
- (void)_prepareIncrementalDetails;	// IMP=0x000000000075f186
- (void)prepareIfNeeded;	// IMP=0x000000000075f0aa
- (id)description;	// IMP=0x000000000075ee52
@property(readonly) _Bool changesAreNoOp;
@property(readonly, copy) NSArray *favoriteChangedIndexPaths;
@property(readonly, copy) NSArray *contentChangedIndexPaths;
@property(readonly, copy) NSArray *changedIndexPaths;
@property(readonly, copy) NSArray *insertedIndexPaths;
@property(readonly, copy) NSArray *deletedIndexPaths;
@property(readonly, copy) NSIndexSet *changedSections;
@property(readonly, copy) NSIndexSet *insertedSections;
@property(readonly, copy) NSIndexSet *deletedSections;
@property(readonly) _Bool hasIncrementalChanges;
- (id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 sectionsWithKeyAssetChanges:(id)arg3 previousCollectionsCount:(long long)arg4 assetCollectionToSectionCache:(id)arg5 originatingPhotoLibraryChange:(id)arg6 fromIdentifier:(long long)arg7 toIdentifier:(long long)arg8;	// IMP=0x000000000075ea6b
- (id)initWithFromIdentifier:(long long)arg1 toIdentifier:(long long)arg2;	// IMP=0x000000000075e9a7

@end

