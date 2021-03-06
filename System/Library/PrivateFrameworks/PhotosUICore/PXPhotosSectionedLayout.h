//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetSectionLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGSublayoutFaultingDelegate-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>
#import <PhotosUICore/PXPhotosSectionBodyLayoutProviderInvalidationDelegate-Protocol.h>

@class NSIndexSet, NSString, PXAssetsDataSource, PXPhotosLayoutSpec, PXPhotosViewModel;
@protocol PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosSectionedLayout <PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    _Bool _isUpdatingSublayouts;	// 32 = 0x20
    struct {
        _Bool floatingHeaderSnapshot;
    } _headerProviderRespondsTo;	// 33 = 0x21
    long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;	// 40 = 0x28
    NSIndexSet *_cachedSectionsWithSelectedItems;	// 48 = 0x30
    long long _numberOfForcedSections;	// 56 = 0x38
    PXAssetsDataSource *_assetsDataSource;	// 64 = 0x40
    PXPhotosViewModel *_viewModel;	// 72 = 0x48
    PXPhotosLayoutSpec *_spec;	// 80 = 0x50
    id <PXPhotosSectionHeaderLayoutProvider> _headerLayoutProvider;	// 88 = 0x58
    id <PXPhotosSectionBodyLayoutProvider> _bodyLayoutProvider;	// 96 = 0x60
    double _interSectionSpacing;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000722e47
@property(nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property(readonly, nonatomic) id <PXPhotosSectionBodyLayoutProvider> bodyLayoutProvider; // @synthesize bodyLayoutProvider=_bodyLayoutProvider;
@property(readonly, nonatomic) id <PXPhotosSectionHeaderLayoutProvider> headerLayoutProvider; // @synthesize headerLayoutProvider=_headerLayoutProvider;
@property(retain, nonatomic) PXPhotosLayoutSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)axSpriteIndexes;	// IMP=0x0000000000722dd8
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000722bb4
- (void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)arg1;	// IMP=0x0000000000722ba2
- (_Bool)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2;	// IMP=0x00000000007228d6
- (void)assetSectionLayoutDidConfigureLayouts:(id)arg1;	// IMP=0x0000000000722817
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000722370
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x00000000007221c8
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;	// IMP=0x0000000000721f45
- (void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(struct CGSize)arg3;	// IMP=0x0000000000721ca4
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x0000000000721917
- (_Bool)allowsSublayoutUpdateCycleAssertions;	// IMP=0x000000000072190f
- (_Bool)allowsDanglingUpdatesAssertions;	// IMP=0x0000000000721907
- (void)_updateSublayoutsConfiguration;	// IMP=0x0000000000721848
- (void)_invalidateSublayoutsConfiguration;	// IMP=0x0000000000721754
- (void)_updateSublayoutGridConfiguratorForLayout:(id)arg1;	// IMP=0x0000000000721633
- (void)_updateSublayoutsSpec;	// IMP=0x00000000007215e7
- (void)_invalidateSublayoutsSpec;	// IMP=0x00000000007214f3
- (void)_updateSublayoutsDataSource;	// IMP=0x0000000000720bc7
- (void)_invalidateSublayoutsDataSource;	// IMP=0x0000000000720ad3
- (void)update;	// IMP=0x0000000000720771
- (_Bool)_configureSectionLayout:(id)arg1;	// IMP=0x0000000000720003
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000071ff3b
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000071fe7f
- (_Bool)_shouldFaultInSection:(long long)arg1 inDataSource:(id)arg2;	// IMP=0x000000000071fe1f
- (void)_performAddActionForSectionLayout:(id)arg1;	// IMP=0x000000000071fbf0
- (id)_createAnimationForChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3;	// IMP=0x000000000071fb15
- (void)enumerateItemsGeometriesInRect:(struct CGRect)arg1 dataSource:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000071fa0e
- (id)presentedItemsGeometryForSection:(unsigned long long)arg1 inDataSource:(id)arg2;	// IMP=0x000000000071f8c7
- (id)topmostHeaderSnapshotInRect:(struct CGRect)arg1;	// IMP=0x000000000071f6fc
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000071f5ba
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
- (id)init;	// IMP=0x000000000071f476
- (id)initWithViewModel:(id)arg1 headerProvider:(id)arg2 bodyProvider:(id)arg3;	// IMP=0x000000000071f314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

