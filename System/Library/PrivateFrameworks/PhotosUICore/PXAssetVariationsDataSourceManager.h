//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetEditOperationManagerObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHAsset, PXAssetEditOperationManager, PXAssetVariationsDataSource;

@interface PXAssetVariationsDataSourceManager <PXPhotoLibraryUIChangeObserver, PXAssetEditOperationManagerObserver>
{
    struct {
        _Bool pendingVariationType;
        _Bool currentVariationType;
        _Bool dataSource;
    } _needsUpdateFlags;	// 8 = 0x8
    _Bool _didCreateInitialDataSource;	// 11 = 0xb
    PHAsset *_asset;	// 16 = 0x10
    PXAssetEditOperationManager *_editOperationManager;	// 24 = 0x18
    PHAsset *_currentAsset;	// 32 = 0x20
    long long _pendingVariationType;	// 40 = 0x28
    long long _currentVariationType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000310e90
@property(nonatomic) long long currentVariationType; // @synthesize currentVariationType=_currentVariationType;
@property(nonatomic) long long pendingVariationType; // @synthesize pendingVariationType=_pendingVariationType;
@property(retain, nonatomic) PHAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(readonly, nonatomic) PXAssetEditOperationManager *editOperationManager; // @synthesize editOperationManager=_editOperationManager;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void *)arg3;	// IMP=0x0000000000310cac
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x0000000000310bca
- (void)_assetEditOperationsDidChange;	// IMP=0x0000000000310b7e
- (void)_updateDataSourceIfNeeded;	// IMP=0x000000000031063c
- (void)_invalidateDataSource;	// IMP=0x000000000031061e
- (void)_updateCurrentVariationTypeIfNeeded;	// IMP=0x0000000000310590
- (void)_invalidateCurrentVariationType;	// IMP=0x0000000000310572
- (void)_updatePendingVariationTypeIfNeeded;	// IMP=0x000000000031044c
- (void)_invalidatePendingVariationType;	// IMP=0x000000000031042f
- (void)_updateIfNeeded;	// IMP=0x0000000000310360
- (_Bool)_needsUpdate;	// IMP=0x000000000031033c
- (void)_setNeedsUpdate;	// IMP=0x0000000000310328
- (id)_variationOptionWithType:(long long)arg1 asset:(id)arg2;	// IMP=0x00000000003102c7
- (id)initWithAsset:(id)arg1 editOperationManager:(id)arg2;	// IMP=0x00000000003100ea
- (id)init;	// IMP=0x0000000000310070
@property(readonly, nonatomic) PXAssetVariationsDataSource *dataSource;
- (void)didPerformChanges;	// IMP=0x000000000030ffd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

