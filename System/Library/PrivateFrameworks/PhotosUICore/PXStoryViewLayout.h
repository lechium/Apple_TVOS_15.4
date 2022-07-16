//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosContentControllerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosViewDelegate-Protocol.h>
#import <PhotosUICore/PXStoryViewModeTransitionsHelperDelegate-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSString, PXGDecoratingLayout, PXGLayout, PXPhotosContentController, PXStoryLayout, PXStoryModel, PXStoryRelatedOverlayItemDecorationSource, PXStoryViewModeTransition, PXStoryViewModeTransitionsHelper, PXStoryViewModel;

@interface PXStoryViewLayout <PXChangeObserver, PXPhotosViewDelegate, PXPhotosContentControllerDelegate, PXStoryViewModeTransitionsHelperDelegate, PXTapToRadarDiagnosticProvider>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    CDStruct_af00bf4e _postUpdateFlags;	// 32 = 0x20
    unsigned short _contentVersion;	// 56 = 0x38
    _Bool _isUpdatingSublayouts;	// 58 = 0x3a
    _Bool _isUpdatingGridLayout;	// 59 = 0x3b
    PXStoryRelatedOverlayItemDecorationSource *_relatedDecorationSource;	// 64 = 0x40
    PXGDecoratingLayout *_relatedDecoratingLayout;	// 72 = 0x48
    _Bool _shouldScrollGridToPlaybackPosition;	// 80 = 0x50
    PXStoryViewModel *_viewModel;	// 88 = 0x58
    PXStoryModel *_mainModel;	// 96 = 0x60
    PXStoryLayout *_mainStoryLayout;	// 104 = 0x68
    PXGLayout *_mainStoryPlaceholderLayout;	// 112 = 0x70
    long long _mainStoryLayoutIndex;	// 120 = 0x78
    long long _legibilityOverlayLayoutIndex;	// 128 = 0x80
    long long _chromeLayoutIndex;	// 136 = 0x88
    long long _scrubberLayoutIndex;	// 144 = 0x90
    long long _relatedOverlayLayoutIndex;	// 152 = 0x98
    long long _gridLayoutIndex;	// 160 = 0xa0
    long long _diagnosticHUDLayoutIndex;	// 168 = 0xa8
    PXPhotosContentController *_gridContentController;	// 176 = 0xb0
    PXGLayout *_gridPlaceholderLayout;	// 184 = 0xb8
    PXStoryViewModeTransitionsHelper *_viewModeTransitionsHelper;	// 192 = 0xc0
    PXStoryViewModeTransition *_gridViewModeTransition;	// 200 = 0xc8
    CDStruct_c1f6e9bb _presentedGridTransform;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000067c940
@property(retain, nonatomic) PXStoryViewModeTransition *gridViewModeTransition; // @synthesize gridViewModeTransition=_gridViewModeTransition;
@property(retain, nonatomic) PXStoryViewModeTransitionsHelper *viewModeTransitionsHelper; // @synthesize viewModeTransitionsHelper=_viewModeTransitionsHelper;
@property(nonatomic) _Bool shouldScrollGridToPlaybackPosition; // @synthesize shouldScrollGridToPlaybackPosition=_shouldScrollGridToPlaybackPosition;
@property(readonly, nonatomic) PXGLayout *gridPlaceholderLayout; // @synthesize gridPlaceholderLayout=_gridPlaceholderLayout;
@property(nonatomic) CDStruct_c1f6e9bb presentedGridTransform; // @synthesize presentedGridTransform=_presentedGridTransform;
@property(readonly, nonatomic) PXPhotosContentController *gridContentController; // @synthesize gridContentController=_gridContentController;
@property(readonly, nonatomic) long long diagnosticHUDLayoutIndex; // @synthesize diagnosticHUDLayoutIndex=_diagnosticHUDLayoutIndex;
@property(readonly, nonatomic) long long gridLayoutIndex; // @synthesize gridLayoutIndex=_gridLayoutIndex;
@property(readonly, nonatomic) long long relatedOverlayLayoutIndex; // @synthesize relatedOverlayLayoutIndex=_relatedOverlayLayoutIndex;
@property(readonly, nonatomic) long long scrubberLayoutIndex; // @synthesize scrubberLayoutIndex=_scrubberLayoutIndex;
@property(readonly, nonatomic) long long chromeLayoutIndex; // @synthesize chromeLayoutIndex=_chromeLayoutIndex;
@property(readonly, nonatomic) long long legibilityOverlayLayoutIndex; // @synthesize legibilityOverlayLayoutIndex=_legibilityOverlayLayoutIndex;
@property(readonly, nonatomic) long long mainStoryLayoutIndex; // @synthesize mainStoryLayoutIndex=_mainStoryLayoutIndex;
@property(readonly, nonatomic) PXGLayout *mainStoryPlaceholderLayout; // @synthesize mainStoryPlaceholderLayout=_mainStoryPlaceholderLayout;
@property(retain, nonatomic) PXStoryLayout *mainStoryLayout; // @synthesize mainStoryLayout=_mainStoryLayout;
@property(retain, nonatomic) PXStoryModel *mainModel; // @synthesize mainModel=_mainModel;
@property(readonly, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_axMoveCursorToPlayer;	// IMP=0x000000000067c7a5
- (id)axLocalizedLabel;	// IMP=0x000000000067c78d
- (id)preferredFocusLayouts;	// IMP=0x000000000067c63e
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000067c3c3
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x000000000067c351
- (id)presentingViewControllerForContentController:(id)arg1;	// IMP=0x000000000067c301
- (_Bool)photosContentController:(id)arg1 pushViewController:(id)arg2;	// IMP=0x000000000067c2f9
- (void)dismissPresentedViewControllerForContentController:(id)arg1;	// IMP=0x000000000067c2f3
- (_Bool)photosContentController:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000067c2eb
- (_Bool)photosViewController:(id)arg1 didPickAssetReference:(id)arg2;	// IMP=0x000000000067bb10
- (id)transitionsHelper:(id)arg1 regionOfInterestForTransition:(id)arg2;	// IMP=0x000000000067b740
- (id)transitionsHelper:(id)arg1 timelineLayoutSnapshotForViewMode:(long long)arg2;	// IMP=0x000000000067b54b
- (void)transitionsHelperNeedsUpdate:(id)arg1;	// IMP=0x000000000067b539
@property(readonly, nonatomic) _Bool inGridViewMode;
- (void)_setFrame:(struct CGRect)arg1 relativeZPosition:(double)arg2 depth:(double)arg3 forSublayoutAtIndex:(long long)arg4;	// IMP=0x000000000067b43c
- (struct CGRect)_scrubberBounds;	// IMP=0x000000000067b259
- (void)_updateContentSize;	// IMP=0x000000000067b19d
- (void)_invalidateContentSize;	// IMP=0x000000000067b0a6
- (void)_updateSublayoutOrigins;	// IMP=0x000000000067aff7
- (void)_invalidateSublayoutOrigins;	// IMP=0x000000000067af00
- (void)_updateHiddenGridAssets;	// IMP=0x000000000067aefa
- (void)_invalidateHiddenGridAssets;	// IMP=0x000000000067ae03
- (void)_updateTransitionsHelperAfterSublayouts;	// IMP=0x000000000067adc6
- (void)_invalidateTransitionsHelperAfterSublayouts;	// IMP=0x000000000067accf
- (void)_updateTransitionsHelper;	// IMP=0x000000000067ac92
- (void)_invalidateTransitionsHelper;	// IMP=0x000000000067ab9e
- (void)_updateGridTransform;	// IMP=0x000000000067a6bf
- (void)_invalidateGridTransform;	// IMP=0x000000000067a5cb
- (void)_updateSublayoutFrames;	// IMP=0x000000000067a349
- (void)_updateHeaderSpacing;	// IMP=0x000000000067a221
- (void)_invalidateSublayoutFrames;	// IMP=0x000000000067a12d
- (void)_updateGridLayout;	// IMP=0x000000000067985f
- (void)_invalidateGridLayout;	// IMP=0x000000000067976b
- (void)_updateMainStoryLayout;	// IMP=0x000000000067966b
- (void)_invalidateMainStoryLayout;	// IMP=0x0000000000679577
- (void)_updateMainModel;	// IMP=0x0000000000679508
- (void)_invalidateMainModel;	// IMP=0x0000000000679414
- (void)didUpdate;	// IMP=0x0000000000679299
- (void)update;	// IMP=0x0000000000678889
- (void)willUpdate;	// IMP=0x0000000000678704
- (id)itemPlacementControllerForItemReference:(id)arg1;	// IMP=0x0000000000678681
@property(readonly, nonatomic) id mainItemReference;
- (id)createDefaultAnimationForCurrentContext;	// IMP=0x0000000000678583
- (void)didUpdateSublayout:(id)arg1;	// IMP=0x0000000000678451
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x00000000006783e3
- (_Bool)allowsRepeatedSublayoutsUpdates;	// IMP=0x00000000006783db
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000678359
- (long long)scrollableAxis;	// IMP=0x000000000067801d
- (unsigned long long)contentChangeTrend;	// IMP=0x0000000000677fd9
- (void)referenceDepthDidChange;	// IMP=0x0000000000677f98
- (void)referenceSizeDidChange;	// IMP=0x0000000000677f57
- (void)visibleRectDidChange;	// IMP=0x0000000000677e10
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000006778f3
- (id)init;	// IMP=0x0000000000677879

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

