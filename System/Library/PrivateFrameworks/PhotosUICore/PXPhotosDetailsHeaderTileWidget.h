//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDetailsHeaderTileLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSlideshowSessionDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXUISlideshowViewTileDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>
#import <PhotosUICore/PXZoomAnimationObserverCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, OKPresentationViewController, PHAssetCollection, PHFetchResult, PXAssetActionManager, PXBasicUIViewTileAnimator, PXImageRequester, PXMoviePresenter, PXOneUpPresentation, PXPhotoKitUIMediaProvider, PXPhotosDataSource, PXPhotosDetailsContext, PXPhotosDetailsHeaderSpec, PXPhotosDetailsHeaderSpecManager, PXPhotosDetailsLoadCoordinationToken, PXReusableObjectPool, PXSectionedSelectionManager, PXSlideshowSession, PXTilingController, PXTitleSubtitleUILabelTile, PXUIPlayButtonTile, PXUISlideshowViewTile, PXUITapGestureRecognizer, PXWidgetSpec;
@protocol OS_dispatch_queue, PXAnonymousView, PXDisplayAsset, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsHeaderTileWidget : NSObject <PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXChangeObserver, PXPhotosDataSourceChangeObserver, PXPhotosDetailsHeaderTileLayoutDelegate, PXSlideshowSessionDelegate, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUISlideshowViewTileDelegate, PXZoomAnimationObserverCoordinatorDelegate, PXScrollViewControllerObserver, PXUIWidget, PXDiagnosticsEnvironment>
{
    NSObject<OS_dispatch_queue> *_internalWorkQueue;	// 8 = 0x8
    PXPhotosDetailsHeaderSpecManager *_specManager;	// 16 = 0x10
    PXTilingController *_tilingController;	// 24 = 0x18
    PXPhotoKitUIMediaProvider *_mediaProvider;	// 32 = 0x20
    PXReusableObjectPool *_tilePool;	// 40 = 0x28
    NSMutableSet *_tilesInUse;	// 48 = 0x30
    PXBasicUIViewTileAnimator *_tileAnimator;	// 56 = 0x38
    PXUITapGestureRecognizer *_tapGestureRecognizer;	// 64 = 0x40
    PXUITapGestureRecognizer *_pressGestureRecognizer;	// 72 = 0x48
    PXImageRequester *_primaryAssetImageRequester;	// 80 = 0x50
    struct CGRect _keyAssetCropRect;	// 88 = 0x58
    PXSlideshowSession *_slideshowSession;	// 120 = 0x78
    struct {
        _Bool keyAssets;
        _Bool assetCollection;
        _Bool curatedAssetCollection;
    } _needsUpdateFlags;	// 128 = 0x80
    _Bool _userInteractionEnabled;	// 131 = 0x83
    _Bool __basicContentLoaded;	// 132 = 0x84
    _Bool __canLoadContentData;	// 133 = 0x85
    _Bool __slideshowDidPrepare;	// 134 = 0x86
    _Bool __slideshowDidStart;	// 135 = 0x87
    _Bool __isSlideshowTileCheckedOut;	// 136 = 0x88
    _Bool __isPreventingSlideshowNextStep;	// 137 = 0x89
    _Bool __slideshowStartingDelayFinished;	// 138 = 0x8a
    _Bool _hasLoadedContentData;	// 139 = 0x8b
    PXPhotosDetailsContext *_context;	// 144 = 0x90
    id <PXWidgetDelegate> _widgetDelegate;	// 152 = 0x98
    PXWidgetSpec *_spec;	// 160 = 0xa0
    PXPhotosDataSource *__photosDataSource;	// 168 = 0xa8
    PXPhotosDetailsHeaderSpec *__headerSpec;	// 176 = 0xb0
    OKPresentationViewController *__slideshowViewController;	// 184 = 0xb8
    PXUISlideshowViewTile *__slideshowTile;	// 192 = 0xc0
    PXUIPlayButtonTile *__playButtonTile;	// 200 = 0xc8
    PXTitleSubtitleUILabelTile *__titleTile;	// 208 = 0xd0
    PXPhotosDetailsLoadCoordinationToken *__loadCoordinationToken;	// 216 = 0xd8
    PHFetchResult *__keyAssetsFetchResult;	// 224 = 0xe0
    PHAssetCollection *__assetCollection;	// 232 = 0xe8
    PHAssetCollection *__curatedAssetCollection;	// 240 = 0xf0
    PHAssetCollection *__slideshowReferenceAssetCollection;	// 248 = 0xf8
    long long __transitionAnimationsCount;	// 256 = 0x100
    PXMoviePresenter *_moviePresenter;	// 264 = 0x108
    struct CGSize __contentSize;	// 272 = 0x110
}

+ (_Bool)canShowMovieHeaderForDataSource:(id)arg1;	// IMP=0x000000000021fc8c
+ (double)preferredHeaderContentHeightForWidth:(double)arg1 screen:(id)arg2;	// IMP=0x000000000021fb3d
- (void).cxx_destruct;	// IMP=0x000000000021f701
@property(retain, nonatomic) PXMoviePresenter *moviePresenter; // @synthesize moviePresenter=_moviePresenter;
@property(nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property(nonatomic, setter=_setTransitionAnimationsCount:) long long _transitionAnimationsCount; // @synthesize _transitionAnimationsCount=__transitionAnimationsCount;
@property(retain, nonatomic, setter=_setSlideshowReferenceAssetCollection:) PHAssetCollection *_slideshowReferenceAssetCollection; // @synthesize _slideshowReferenceAssetCollection=__slideshowReferenceAssetCollection;
@property(retain, nonatomic, setter=_setCuratedAssetCollection:) PHAssetCollection *_curatedAssetCollection; // @synthesize _curatedAssetCollection=__curatedAssetCollection;
@property(retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection; // @synthesize _assetCollection=__assetCollection;
@property(retain, nonatomic, setter=_setKeyAssetsFetchResult:) PHFetchResult *_keyAssetsFetchResult; // @synthesize _keyAssetsFetchResult=__keyAssetsFetchResult;
@property(retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken; // @synthesize _loadCoordinationToken=__loadCoordinationToken;
@property(nonatomic, setter=_setSlideshowStartingDelayFinished:) _Bool _slideshowStartingDelayFinished; // @synthesize _slideshowStartingDelayFinished=__slideshowStartingDelayFinished;
@property(nonatomic, setter=_setPreventSlideshowNextStep:) _Bool _isPreventingSlideshowNextStep; // @synthesize _isPreventingSlideshowNextStep=__isPreventingSlideshowNextStep;
@property(nonatomic, setter=_setSlideshowTileCheckedOut:) _Bool _isSlideshowTileCheckedOut; // @synthesize _isSlideshowTileCheckedOut=__isSlideshowTileCheckedOut;
@property(nonatomic, setter=_setSlideshowDidStart:) _Bool _slideshowDidStart; // @synthesize _slideshowDidStart=__slideshowDidStart;
@property(nonatomic, setter=_setSlideshowDidPrepare:) _Bool _slideshowDidPrepare; // @synthesize _slideshowDidPrepare=__slideshowDidPrepare;
@property(nonatomic, setter=_setCanLoadContentData:) _Bool _canLoadContentData; // @synthesize _canLoadContentData=__canLoadContentData;
@property(nonatomic, getter=_isBasicContentLoaded, setter=_setBasicContentLoaded:) _Bool _basicContentLoaded; // @synthesize _basicContentLoaded=__basicContentLoaded;
@property(retain, nonatomic, setter=_setTitleTile:) PXTitleSubtitleUILabelTile *_titleTile; // @synthesize _titleTile=__titleTile;
@property(retain, nonatomic, setter=_setPlayButtonTile:) PXUIPlayButtonTile *_playButtonTile; // @synthesize _playButtonTile=__playButtonTile;
@property(retain, nonatomic, setter=_setSlideshowTile:) PXUISlideshowViewTile *_slideshowTile; // @synthesize _slideshowTile=__slideshowTile;
@property(retain, nonatomic, setter=_setSlideshowViewController:) OKPresentationViewController *_slideshowViewController; // @synthesize _slideshowViewController=__slideshowViewController;
@property(retain, nonatomic, setter=_setHeaderSpec:) PXPhotosDetailsHeaderSpec *_headerSpec; // @synthesize _headerSpec=__headerSpec;
@property(retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // @synthesize _photosDataSource=__photosDataSource;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationDidEndWithContext:(id)arg2;	// IMP=0x000000000021f497
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationWillBeginWithContext:(id)arg2;	// IMP=0x000000000021f465
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000021f458
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000021f02f
- (id)slideshowViewTileHostViewController:(id)arg1;	// IMP=0x000000000021efce
- (void)playMovieWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000021ef76
- (_Bool)containsPoint:(struct CGPoint)arg1 forCoordinateSpace:(id)arg2;	// IMP=0x000000000021ee56
- (id)zoomAnimationCoordinatorForContext:(id)arg1;	// IMP=0x000000000021eca9
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000021eab9
- (id)regionOfInterestForContext:(id)arg1;	// IMP=0x000000000021e9aa
- (void)slideshowSession:(id)arg1 didPrepareSlideshow:(id)arg2;	// IMP=0x000000000021e8c8
- (id)photosDetailsHeaderTileLayoutFontName:(id)arg1;	// IMP=0x000000000021e8b6
- (struct CGRect)photosDetailsHeaderTileLayout:(id)arg1 contentsRectForAspectRatio:(double)arg2;	// IMP=0x000000000021e89e
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000021e5a9
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000021e2d6
- (void)_updatePreventSlideshowNextStep;	// IMP=0x000000000021e2c2
- (void)scrollViewControllerDidEndScrolling:(id)arg1;	// IMP=0x000000000021e2b0
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;	// IMP=0x000000000021e29e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000021e1bd
- (_Bool)_isPointWithinCurrentLayoutBounds:(struct CGPoint)arg1;	// IMP=0x000000000021e02a
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;	// IMP=0x000000000021e011
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;	// IMP=0x000000000021dff8
- (id)_titleFontName;	// IMP=0x000000000021dfa8
- (id)_subtitle;	// IMP=0x000000000021df58
- (id)_title;	// IMP=0x000000000021df08
- (void *)_tileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x000000000021dbb2
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x000000000021db28
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x000000000021da69
- (id)createHeaderSnapshotViewForMemoryCreationAnimation;	// IMP=0x000000000021d48d
- (id)_contentRegionOfInterestForTileWithIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x000000000021cf0a
- (struct CGRect)_contentRectInCoordinateSpace:(id)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x000000000021ce48
- (_Bool)_startMovie;	// IMP=0x000000000021cb00
- (void)_handleTapGesture:(id)arg1;	// IMP=0x000000000021c995
- (id)_scrollViewController;	// IMP=0x000000000021c93c
- (id)extendedTraitCollection;	// IMP=0x000000000021c8bc
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x000000000021c4bc
- (void)_headerSpecDidChange;	// IMP=0x000000000021c44b
- (_Bool)_isSlideShowReadyToStart;	// IMP=0x000000000021c34b
- (void)_slideshowStartingDelayDidFinish;	// IMP=0x000000000021c334
- (void)_updateSlideshowPlayState;	// IMP=0x000000000021c162
- (void)_updateSlideshowTile;	// IMP=0x000000000021c067
- (id)viewToBeFocused;	// IMP=0x000000000021c04e
- (void)_updateTitleTile;	// IMP=0x000000000021bedf
- (void)_didFinishPreparingSlideshowSession:(id)arg1;	// IMP=0x000000000021bcad
- (void)_prepareSlideshowSessionWithAssetCollection:(id)arg1 keyAsset:(id)arg2;	// IMP=0x000000000021baa3
- (void)_updateSlideshow;	// IMP=0x000000000021b831
- (void)_filterOutVideosFromAssetCollection:(id)arg1 filteredAssetCollection:(id *)arg2 assets:(id *)arg3;	// IMP=0x000000000021b6dd
- (id)keyAsset;	// IMP=0x000000000021b68d
@property(readonly, nonatomic) id <PXDisplayAsset> presentedKeyAsset;
- (void)unloadContentData;	// IMP=0x000000000021b63c
- (void)loadContentData;	// IMP=0x000000000021b5d2
- (void)_updateBasicContent;	// IMP=0x000000000021b4ef
- (_Bool)_needsUpdate;	// IMP=0x000000000021b4cb
- (_Bool)_showPlaceholder;	// IMP=0x000000000021b498
- (void)_updateCuratedAssetCollectionIfNeeded;	// IMP=0x000000000021b356
- (void)_invalidateCuratedAssetCollection;	// IMP=0x000000000021b349
- (void)_updateAssetCollectionIfNeeded;	// IMP=0x000000000021b109
- (void)_invalidateAssetCollection;	// IMP=0x000000000021b0fc
- (void)_updateKeyAssetCropRect;	// IMP=0x000000000021afe0
- (void)_updateKeyAssetsIfNeeded;	// IMP=0x000000000021ad67
- (void)_invalidateKeyAssets;	// IMP=0x000000000021ad5a
- (void)_updateLayoutStyle;	// IMP=0x000000000021acfb
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x000000000021a931
- (void)_loadBasicContent;	// IMP=0x000000000021a4a4
- (void)dealloc;	// IMP=0x000000000021a475
- (id)init;	// IMP=0x000000000021a3cf

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, nonatomic) _Bool cursorInteractionEnabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInEditMode;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(readonly, nonatomic) _Bool wantsFocus;
@property(nonatomic) __weak id <PXWidgetEditingDelegate> widgetEditingDelegate;
@property(nonatomic) __weak id <PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end

