//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXActionRowTileDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, PHFetchResult, PXActionPerformer, PXActionRowTile, PXAssetActionManager, PXOneUpPresentation, PXPhotoKitAssetCollectionActionManager, PXPhotosDataSource, PXPhotosDetailsActionsSpecManager, PXPhotosDetailsContext, PXPhotosDetailsViewModel, PXReusableObjectPool, PXSectionedSelectionManager, PXTilingController, PXUIScrollViewController, PXWidgetSpec;
@protocol PXActionPerformerDelegate, PXAnonymousView, PXTileAnimator, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsActionsUIWidget : NSObject <PXPhotosDataSourceChangeObserver, PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, PXActionRowTileDelegate, PXActionPerformerDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate, PXUIWidget>
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    _Bool _ensureTransition;	// 10 = 0xa
    struct {
        _Bool peopleFetchResult;
        _Bool actionManager;
        _Bool allowedActionTypes;
        _Bool performableActionTypes;
        _Bool rowHeight;
        _Bool layout;
    } _needsUpdateFlags;	// 11 = 0xb
    _Bool _allowRevealInMomentAction;	// 17 = 0x11
    _Bool _allowCreateMemoryAction;	// 18 = 0x12
    _Bool _allowInteralFileRadarAction;	// 19 = 0x13
    id <PXWidgetDelegate> _widgetDelegate;	// 24 = 0x18
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;	// 32 = 0x20
    PXWidgetSpec *_spec;	// 40 = 0x28
    PXPhotosDetailsContext *_context;	// 48 = 0x30
    id <PXActionPerformerDelegate> _actionPerformerDelegate;	// 56 = 0x38
    PXTilingController *__tilingController;	// 64 = 0x40
    id <PXTileAnimator> __tileAnimator;	// 72 = 0x48
    PXUIScrollViewController *__scrollViewController;	// 80 = 0x50
    NSMutableSet *__tilesInUse;	// 88 = 0x58
    PXReusableObjectPool *__tileReusePool;	// 96 = 0x60
    PXPhotosDataSource *__photosDataSource;	// 104 = 0x68
    PHFetchResult *__peopleFetchResult;	// 112 = 0x70
    PXPhotoKitAssetCollectionActionManager *__assetCollectionActionManager;	// 120 = 0x78
    NSArray *__allowedActionTypes;	// 128 = 0x80
    NSArray *__performableActionTypes;	// 136 = 0x88
    PXPhotosDetailsViewModel *__viewModel;	// 144 = 0x90
    PXPhotosDetailsActionsSpecManager *__specManager;	// 152 = 0x98
    PXActionRowTile *__measuringActionRowTile;	// 160 = 0xa0
    double __rowHeight;	// 168 = 0xa8
    PXActionPerformer *__activePerformer;	// 176 = 0xb0
    struct CGPoint _lastNormalizedTapPosition;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000050df63
@property(nonatomic) struct CGPoint lastNormalizedTapPosition; // @synthesize lastNormalizedTapPosition=_lastNormalizedTapPosition;
@property(retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(nonatomic, setter=_setRowHeight:) double _rowHeight; // @synthesize _rowHeight=__rowHeight;
@property(readonly, nonatomic) PXActionRowTile *_measuringActionRowTile; // @synthesize _measuringActionRowTile=__measuringActionRowTile;
@property(readonly, nonatomic) PXPhotosDetailsActionsSpecManager *_specManager; // @synthesize _specManager=__specManager;
@property(retain, nonatomic, setter=_setViewModel:) PXPhotosDetailsViewModel *_viewModel; // @synthesize _viewModel=__viewModel;
@property(retain, nonatomic, setter=_setPerformableActionTypes:) NSArray *_performableActionTypes; // @synthesize _performableActionTypes=__performableActionTypes;
@property(retain, nonatomic, setter=_setAllowedActionTypes:) NSArray *_allowedActionTypes; // @synthesize _allowedActionTypes=__allowedActionTypes;
@property(retain, nonatomic, setter=_setAssetCollectionActionManager:) PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager; // @synthesize _assetCollectionActionManager=__assetCollectionActionManager;
@property(retain, nonatomic, setter=_setPeopleFetchResult:) PHFetchResult *_peopleFetchResult; // @synthesize _peopleFetchResult=__peopleFetchResult;
@property(retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // @synthesize _photosDataSource=__photosDataSource;
@property(readonly, nonatomic) PXReusableObjectPool *_tileReusePool; // @synthesize _tileReusePool=__tileReusePool;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property(readonly, nonatomic) id <PXTileAnimator> _tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(nonatomic) __weak id <PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property(nonatomic) _Bool allowInteralFileRadarAction; // @synthesize allowInteralFileRadarAction=_allowInteralFileRadarAction;
@property(nonatomic) _Bool allowCreateMemoryAction; // @synthesize allowCreateMemoryAction=_allowCreateMemoryAction;
@property(nonatomic) _Bool allowRevealInMomentAction; // @synthesize allowRevealInMomentAction=_allowRevealInMomentAction;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void)_updateLayoutIfNeeded;	// IMP=0x000000000050dc21
- (void)_invalidateLayoutEnsureTransition;	// IMP=0x000000000050dc0b
- (void)_invalidateLayout;	// IMP=0x000000000050dbf5
- (void)_updateRowHeightIfNeeded;	// IMP=0x000000000050dabd
- (void)_invalidateRowHeight;	// IMP=0x000000000050daa7
- (void)_updateActionManagerIfNeeded;	// IMP=0x000000000050d909
- (void)_invalidateActionManager;	// IMP=0x000000000050d8f3
- (void)_updatePerformableActionTypesIfNeeded;	// IMP=0x000000000050d587
- (void)_invalidatePerformableActionTypes;	// IMP=0x000000000050d571
- (void)_updateAllowedActionTypesIfNeeded;	// IMP=0x000000000050d4aa
- (void)_invalidateAllowedActionTypes;	// IMP=0x000000000050d494
- (void)_updatePeopleFetchResultIfNeeded;	// IMP=0x000000000050d403
- (void)_invalidatePeopleFetchResult;	// IMP=0x000000000050d3ed
- (void)_setNeedsUpdate;	// IMP=0x000000000050d35a
- (void)_updateIfNeeded;	// IMP=0x000000000050d255
- (_Bool)_needsUpdate;	// IMP=0x000000000050d228
- (void)_performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000050d1cf
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000050d032
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000050cf78
- (void)prepareForPopoverPresentation:(id)arg1;	// IMP=0x000000000050cb3e
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000050ca90
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x000000000050c704
- (void)actionRowTileSelected:(id)arg1 tapPositionInTile:(struct CGPoint)arg2;	// IMP=0x000000000050c422
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;	// IMP=0x000000000050c393
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x000000000050c2f3
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x000000000050c0d0
- (void)configureActionButtonTile:(id)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x000000000050bf50
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;	// IMP=0x000000000050bf10
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;	// IMP=0x000000000050be9e
@property(readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (id)_createNewLayout;	// IMP=0x000000000050b8e1
- (void)_handleContentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000050b895
- (void)_loadTilingController;	// IMP=0x000000000050b4cd
- (id)_extendedTraitCollection;	// IMP=0x000000000050b46e
- (id)init;	// IMP=0x000000000050b2a6

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, nonatomic) _Bool cursorInteractionEnabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInEditMode;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) _Bool wantsFocus;
@property(nonatomic) __weak id <PXWidgetEditingDelegate> widgetEditingDelegate;
@property(nonatomic) __weak id <PXWidgetInteractionDelegate> widgetInteractionDelegate;

@end
