//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryBodyLayout-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryViewModelPresenter-Protocol.h>
#import <PhotosUICore/PXGSublayoutFaultingDelegate-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>
#import <PhotosUICore/PXMonthsSublayoutProvider-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, PXAssetsDataSource, PXAssetsSectionLayout, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXGSpriteReference;

@interface PXCuratedLibrarySectionedLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    PXAssetsDataSource *_currentDataSource;	// 32 = 0x20
    long long _currentZoomLevel;	// 40 = 0x28
    NSMutableIndexSet *_zoomLevelsPreferringDominantHeros;	// 48 = 0x30
    long long *_accumulatedSectionItems;	// 56 = 0x38
    long long _accumulatedSectionItemsCount;	// 64 = 0x40
    _Bool _isUpdatingSublayouts;	// 72 = 0x48
    long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;	// 80 = 0x50
    NSIndexSet *_cachedSectionsWithSelectedItems;	// 88 = 0x58
    _Bool _isInitialLoad;	// 96 = 0x60
    _Bool _performedInitialLoad;	// 97 = 0x61
    PXCuratedLibraryLayoutSpec *_spec;	// 104 = 0x68
    PXCuratedLibraryViewModel *_viewModel;	// 112 = 0x70
    double _lateralMargin;	// 120 = 0x78
    id _lastVisibleDominantObjectReference;	// 128 = 0x80
    PXGSpriteReference *_lastHitSpriteReference;	// 136 = 0x88
    double _defaultInterlayoutSpacing;	// 144 = 0x90
    long long _presentedZoomLevel;	// 152 = 0x98
    PXAssetsDataSource *_presentedDataSource;	// 160 = 0xa0
    struct UIEdgeInsets _padding;	// 168 = 0xa8
}

+ (void)setShouldDisableLaunchOptimizations:(_Bool)arg1;	// IMP=0x000000000071b57b
+ (_Bool)shouldDisableLaunchOptimizations;	// IMP=0x000000000071b56f
- (void).cxx_destruct;	// IMP=0x0000000000719d77
@property(readonly, nonatomic) PXAssetsDataSource *presentedDataSource; // @synthesize presentedDataSource=_presentedDataSource;
@property(readonly, nonatomic) long long presentedZoomLevel; // @synthesize presentedZoomLevel=_presentedZoomLevel;
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) double defaultInterlayoutSpacing; // @synthesize defaultInterlayoutSpacing=_defaultInterlayoutSpacing;
@property(nonatomic) _Bool performedInitialLoad; // @synthesize performedInitialLoad=_performedInitialLoad;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(retain, nonatomic) PXGSpriteReference *lastHitSpriteReference; // @synthesize lastHitSpriteReference=_lastHitSpriteReference;
@property(retain, nonatomic) id lastVisibleDominantObjectReference; // @synthesize lastVisibleDominantObjectReference=_lastVisibleDominantObjectReference;
@property(nonatomic) double lateralMargin; // @synthesize lateralMargin=_lateralMargin;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PXCuratedLibraryLayoutSpec *spec; // @synthesize spec=_spec;
- (id)_targetAssetCollectionReferenceInZoomLevel:(long long)arg1 forTransitionFromAssetCollectionReference:(id)arg2;	// IMP=0x0000000000719a49
- (id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;	// IMP=0x0000000000719639
- (id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)arg1 zoomLevel:(long long)arg2;	// IMP=0x0000000000719190
- (id)_heroSectionLayoutClosestToSectionLayout:(id)arg1 zoomLevel:(long long)arg2;	// IMP=0x0000000000718f35
@property(readonly, nonatomic) PXAssetsSectionLayout *dominantSectionLayout;
- (struct CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1;	// IMP=0x0000000000718909
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000718856
- (void)enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000071827c
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000007181ab
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000007180e3
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000718027
- (void)layout:(id)arg1 collectIndexesOfChapterHeaderSublayouts:(id)arg2 heroSublayouts:(id)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x0000000000717dcd
- (_Bool)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2;	// IMP=0x0000000000717b81
- (void)_configureSectionLayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000717959
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000717795
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x0000000000717645
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000071709b
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;	// IMP=0x0000000000717093
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000716f61
@property(retain, nonatomic) id dominantHeroPreferences;
- (void)setPrefersDominantHero:(_Bool)arg1 forZoomLevel:(long long)arg2;	// IMP=0x0000000000716e9c
- (_Bool)prefersDominantHeroForZoomLevel:(long long)arg1;	// IMP=0x0000000000716e7f
- (void)setSafeAreaInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000716d5b
- (_Bool)allowsSublayoutUpdateCycleAssertions;	// IMP=0x0000000000716b0e
- (_Bool)allowsDanglingUpdatesAssertions;	// IMP=0x0000000000716b06
- (long long)scrollableAxis;	// IMP=0x0000000000716afb
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x0000000000716534
- (void)clearLastVisibleAreaAnchoringInformation;	// IMP=0x00000000007164f1
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000716404
- (void)_anchorVisibleArea;	// IMP=0x0000000000716392
- (void)_updatePreheating;	// IMP=0x0000000000715ed3
- (void)_updateSublayoutsForSkimming;	// IMP=0x0000000000715ce9
- (void)_prepareAccumulatedSectionItemsBufferForSections:(long long)arg1;	// IMP=0x0000000000715ca2
- (void)_updateSublayoutsDataSource;	// IMP=0x0000000000715385
- (void)willFaultOutSublayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000007150f8
- (void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(struct CGSize)arg3;	// IMP=0x0000000000714e44
- (void)_updatePrefetchedSectionsForFaultedInSublayout:(id)arg1;	// IMP=0x0000000000714cae
- (void)_updateFaultOutsets;	// IMP=0x0000000000714a13
- (void)update;	// IMP=0x0000000000713beb
- (void)dealloc;	// IMP=0x0000000000713baa
- (id)init;	// IMP=0x0000000000713b30
- (id)initWithViewModel:(id)arg1 spec:(id)arg2;	// IMP=0x0000000000713965

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
