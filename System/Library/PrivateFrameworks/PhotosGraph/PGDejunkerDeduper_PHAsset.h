//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PHPhotoLibrary;

@interface PGDejunkerDeduper_PHAsset
{
    NSDictionary *_personLocalIdentifiersByAssetUUID;	// 8 = 0x8
    NSDictionary *_peopleScenesByAssetUUID;	// 16 = 0x10
    NSDictionary *_averageFaceQualityByAssetUUID;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003f2205
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;	// IMP=0x00000000003f2123
- (id)featureWithItem:(id)arg1;	// IMP=0x00000000003f2014
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;	// IMP=0x00000000003f1eab
- (id)debugPersonStringForItem:(id)arg1;	// IMP=0x00000000003f1906
- (_Bool)isJunkForItem:(id)arg1;	// IMP=0x00000000003f18dc
- (id)bestItemInItems:(id)arg1 options:(id)arg2;	// IMP=0x00000000003f1590
- (void)_buildCachesWithAssets:(id)arg1 options:(id)arg2;	// IMP=0x00000000003f0e8e
- (id)dejunkedDedupedAssetsInAssets:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000003f0dbd
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000003f0d4f

@end
