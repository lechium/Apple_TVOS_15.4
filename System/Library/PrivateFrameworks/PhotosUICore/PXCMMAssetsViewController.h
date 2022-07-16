//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActionManagerProvider-Protocol.h>
#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXAssetsSceneDelegate-Protocol.h>
#import <PhotosUICore/PXCMMBannerTileControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCMMEngineDrivenLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXCMMProgressBannerViewDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXContextualNotificationDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>

@class NSArray, NSMutableSet, NSSet, NSString, PXActionManager, PXAssetReference, PXBasicTileAnimator, PXCMMBannerTileController, PXCMMFooterViewModel, PXCMMProgressBannerView, PXCMMSendBackBannerView, PXCMMSendBackSuggestionSource, PXCMMSpec, PXCMMSpecManager, PXContextualNotification, PXLayoutGenerator, PXMomentShareStatusPresentation, PXOneUpPresentation, PXPhotosGlobalFooterView, PXSectionedLayoutEngine, PXSwipeSelectionManager, PXTilingController, PXUIAssetsScene, PXUIScrollViewController, PXUITapGestureRecognizer, PXUpdater, UILongPressGestureRecognizer;
@protocol PXCMMAssetsViewControllerDelegate;

@interface PXCMMAssetsViewController <PXActionManagerProvider, PXActionPerformerDelegate, PXAssetsSceneDelegate, PXCMMBannerTileControllerDelegate, PXCMMEngineDrivenLayoutDelegate, PXCMMProgressBannerViewDelegate, PXChangeObserver, PXContextualNotificationDelegate, PXOneUpPresentationDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXSwipeSelectionManagerDelegate, PXTileSource>
{
    PXUpdater *_updater;	// 8 = 0x8
    PXLayoutGenerator *_layoutGenerator;	// 16 = 0x10
    PXSectionedLayoutEngine *_layoutEngine;	// 24 = 0x18
    _Bool _layoutAnimationsGloballyDisabled;	// 32 = 0x20
    PXUIScrollViewController *_scrollViewController;	// 40 = 0x28
    PXBasicTileAnimator *_tileAnimator;	// 48 = 0x30
    PXTilingController *_tilingController;	// 56 = 0x38
    PXUIAssetsScene *_sceneController;	// 64 = 0x40
    PXCMMProgressBannerView *_progressBannerView;	// 72 = 0x48
    NSArray *_progressBannerViewConstraints;	// 80 = 0x50
    PXUITapGestureRecognizer *_tapSelectionGesture;	// 88 = 0x58
    PXSwipeSelectionManager *_swipeSelectionManager;	// 96 = 0x60
    PXUITapGestureRecognizer *_layoutTransitionGesture;	// 104 = 0x68
    UILongPressGestureRecognizer *_longPressGesture;	// 112 = 0x70
    PXAssetReference *_navigatedAssetReference;	// 120 = 0x78
    PXCMMSpecManager *_specManager;	// 128 = 0x80
    PXCMMSpec *_spec;	// 136 = 0x88
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForFooter;	// 144 = 0x90
    PXCMMFooterViewModel *_statusFooterViewModel;	// 152 = 0x98
    PXPhotosGlobalFooterView *_measuringStatusFooterView;	// 160 = 0xa0
    PXCMMBannerTileController *_measuringBannerTile;	// 168 = 0xa8
    PXCMMSendBackBannerView *_measuringSendBackBannerView;	// 176 = 0xb0
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForPoster;	// 184 = 0xb8
    NSMutableSet *_inUseTiles;	// 192 = 0xc0
    struct CGSize _knownReferenceSize;	// 200 = 0xc8
    _Bool _needsToPerformInitialSelection;	// 216 = 0xd8
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;	// 224 = 0xe0
    PXContextualNotification *_sendBackNotification;	// 232 = 0xe8
    _Bool _sendBackNotificationWasDiscarded;	// 240 = 0xf0
    _Bool _sendBackNotificationWasTapped;	// 241 = 0xf1
    _Bool _receivingActionButtonWasTapped;	// 242 = 0xf2
    _Bool _didReportSendBackNotificationMissingAssetFault;	// 243 = 0xf3
    _Bool _didIncrementNumberOfPresentableSendBacks;	// 244 = 0xf4
    _Bool _didIncrementNumberOfPresentedSendBacks;	// 245 = 0xf5
    _Bool _isWaitingForSendBackPresentationConfirmationTimeout;	// 246 = 0xf6
    unsigned long long _sendBackPresentationConfirmationGeneration;	// 248 = 0xf8
    struct {
        _Bool shouldShowAddMoreButton;
        _Bool didTapAddMoreButton;
        _Bool oneUpPresentation;
    } _delegateRespondsTo;	// 256 = 0x100
    _Bool _actionInProgress;	// 259 = 0x103
    _Bool _userSelectionEnabled;	// 260 = 0x104
    id <PXCMMAssetsViewControllerDelegate> _delegate;	// 264 = 0x108
    long long __layoutType;	// 272 = 0x110
    NSSet *__hiddenAssetReferences;	// 280 = 0x118
    struct UIEdgeInsets _contentInset;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000074daa7
@property(nonatomic) _Bool userSelectionEnabled; // @synthesize userSelectionEnabled=_userSelectionEnabled;
@property(retain, nonatomic) NSSet *_hiddenAssetReferences; // @synthesize _hiddenAssetReferences=__hiddenAssetReferences;
@property(nonatomic) long long _layoutType; // @synthesize _layoutType=__layoutType;
@property(nonatomic, getter=isActionInProgress) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic) __weak id <PXCMMAssetsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000074d9ea
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000074d9ca
@property(readonly, nonatomic) PXActionManager *assetActionManager;
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x000000000074d90a
- (void)contextualNotificationDidDisappear:(id)arg1;	// IMP=0x000000000074d8d2
- (void)contextualNotificationDidAppear:(id)arg1;	// IMP=0x000000000074d8c0
- (void)contextualNotificationWasDiscarded:(id)arg1;	// IMP=0x000000000074d8af
- (void)contextualNotificationWasTapped:(id)arg1;	// IMP=0x000000000074d892
- (id)preferredContainerViewForContextualNotification:(id)arg1;	// IMP=0x000000000074d880
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;	// IMP=0x000000000074d70c
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000074d6b0
- (void)didTapActionButtonInBannerTileController:(id)arg1;	// IMP=0x000000000074d610
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000074d433
- (_Bool)_shouldShowStatusPlaceholder;	// IMP=0x000000000074d3b3
- (void)progressBannerView:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x000000000074d360
- (void)progressBannerView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000074d343
- (void)progressBannerViewLayoutHeightDidChange:(id)arg1;	// IMP=0x000000000074d315
- (void)_updateProgressBannerViewConstraints;	// IMP=0x000000000074cfde
- (void)_updateProgressBannerViewVisibility;	// IMP=0x000000000074cf5e
- (double)_progressBannerViewLayoutHeight;	// IMP=0x000000000074cf1c
- (_Bool)_shouldShowProgressBanner;	// IMP=0x000000000074ce69
- (long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000074cde8
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000074ccaa
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000074cb95
- (struct CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;	// IMP=0x000000000074cab2
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x000000000074ca0a
- (void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;	// IMP=0x000000000074c95c
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x000000000074c834
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x000000000074c3e9
- (void)_configureBannerTile:(id)arg1;	// IMP=0x000000000074c312
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;	// IMP=0x000000000074be70
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;	// IMP=0x000000000074bc60
- (void)_preferredContentSizeChanged:(id)arg1;	// IMP=0x000000000074bc4e
- (void)_updateLayoutEngine;	// IMP=0x000000000074b5e5
- (void)_updateSendBackNotification;	// IMP=0x000000000074b55c
- (void)_presentSendBackNotification;	// IMP=0x000000000074b0c5
- (_Bool)_isSendBackBannerViewContentsFullyVisible;	// IMP=0x000000000074b01b
- (_Bool)_isSendBackBannerViewContentsAtAllVisible;	// IMP=0x000000000074af39
- (_Bool)_canShowSendBackSuggestion;	// IMP=0x000000000074ae75
- (double)_sendBackFooterHeightFromReferenceSize:(struct CGSize)arg1;	// IMP=0x000000000074adec
- (double)_statusFooterHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000074acdc
- (double)_bannerHeightFromReferenceSize:(struct CGSize)arg1;	// IMP=0x000000000074aab4
- (double)_headerHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000074a959
- (id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize)arg1;	// IMP=0x000000000074a7a4
- (void)_configureLayout:(id)arg1;	// IMP=0x000000000074a342
- (id)_createNewLayout;	// IMP=0x000000000074a093
- (void)_invalidateLayoutGenerator;	// IMP=0x000000000074a02f
- (unsigned long long)_additionalTileCount;	// IMP=0x0000000000749f72
- (void)_performTilingChangeWithoutAnimationTransition:(CDUnknownBlockType)arg1;	// IMP=0x0000000000749f28
- (void)_setLayoutType:(long long)arg1;	// IMP=0x0000000000749f03
- (id)oneUpPresentationHelperScrollView:(id)arg1;	// IMP=0x0000000000749ee6
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;	// IMP=0x0000000000749c36
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;	// IMP=0x0000000000749a28
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x000000000074967f
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;	// IMP=0x0000000000749225
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x0000000000749210
- (id)oneUpPresentationImportStatusManager:(id)arg1;	// IMP=0x00000000007491c0
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;	// IMP=0x000000000074912e
- (id)oneUpPresentationActionManager:(id)arg1;	// IMP=0x0000000000748fd7
- (id)_assetActionManagerWithSelectionManager:(id)arg1;	// IMP=0x0000000000748ade
- (id)_createSelectionManagerWithAssetReference:(id)arg1;	// IMP=0x000000000074899c
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x000000000074894c
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x00000000007488fc
- (long long)oneUpPresentationActionContext:(id)arg1;	// IMP=0x0000000000748825
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x000000000074881a
- (_Bool)_shouldShowDefaultOneUpActions;	// IMP=0x0000000000748743
@property(readonly, nonatomic) PXOneUpPresentation *_oneUpPresentation;
- (void)_updateSelectionIfNeeded;	// IMP=0x0000000000748623
- (void)_updatePlaceholder;	// IMP=0x00000000007485de
- (void)_selectionModeDidChange;	// IMP=0x00000000007484ea
- (void)addButtonTapped:(id)arg1;	// IMP=0x0000000000748485
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;	// IMP=0x0000000000748414
- (_Bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;	// IMP=0x00000000007483a6
- (_Bool)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x0000000000748378
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;	// IMP=0x00000000007481f9
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;	// IMP=0x0000000000748091
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000747fad
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1 withEngineDrivenLayout:(id)arg2;	// IMP=0x0000000000747f3e
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000747ecc
- (long long)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath)arg1 withDataSource:(id)arg2;	// IMP=0x0000000000747deb
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 kind:(unsigned long long)arg3;	// IMP=0x0000000000747c15
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000747bdd
- (id)_assetReferenceAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000747aed
- (void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000007479dd
- (void)_handleSpaceBar:(id)arg1;	// IMP=0x0000000000747962
- (void)_handleLongPress:(id)arg1;	// IMP=0x0000000000747844
- (void)_handleTap:(id)arg1;	// IMP=0x0000000000747470
@property(readonly, nonatomic) PXAssetReference *_focusedAssetReference;
- (void)_transitionLayoutGesture:(id)arg1;	// IMP=0x000000000074714b
- (void)_updateGestures;	// IMP=0x0000000000746dda
- (void)_updateStyle;	// IMP=0x0000000000746d57
- (id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2;	// IMP=0x0000000000746b59
- (void)_setHiddenAssetReferences:(id)arg1;	// IMP=0x0000000000746a98
- (id)_createOverlayTileView;	// IMP=0x00000000007468ca
- (id)_createStatusBadgeTileView;	// IMP=0x00000000007468b1
- (id)_createStatusPlaceholderTileView;	// IMP=0x00000000007468a9
- (id)_createSectionHeaderController;	// IMP=0x00000000007467d0
- (id)_createAddButton;	// IMP=0x000000000074669a
- (id)_createBannerTileController;	// IMP=0x0000000000746593
- (id)_createSendBackFooter;	// IMP=0x000000000074653c
- (id)_createSendBackBannerView;	// IMP=0x0000000000746284
- (id)_createStatusFooter;	// IMP=0x00000000007461d8
- (id)_createPosterTileController;	// IMP=0x000000000074612a
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x0000000000746118
- (void)_invokeSendBackAction;	// IMP=0x00000000007460bd
- (void)_checkSendBackPresentationStatus;	// IMP=0x0000000000745f7f
- (void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1;	// IMP=0x0000000000745f4d
- (void)_didPresentSendBack;	// IMP=0x0000000000745e68
- (void)_didFindPresentableSendBack;	// IMP=0x0000000000745d83
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000745d37
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000745ceb
- (void)viewDidLoad;	// IMP=0x00000000007453c1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000745378
- (void)viewDidLayoutSubviews;	// IMP=0x000000000074532f
- (void)_scheduleLayout;	// IMP=0x00000000007452f2
- (void)_deselectAllAssets;	// IMP=0x000000000074525b
- (void)_selectAllAssets;	// IMP=0x00000000007451c4
- (_Bool)_areAllNotCopiedAssetsSelected;	// IMP=0x00000000007450c3
- (void)_selectNonCopiedAssets;	// IMP=0x0000000000744fe9
- (void)_selectCuratedAssets;	// IMP=0x0000000000744c4b
- (void)_performInitialSelectionIfNeeded;	// IMP=0x0000000000744b59
- (void)_updateSelectionEnabled;	// IMP=0x0000000000744ab8
- (void)_updateAssetsScene;	// IMP=0x0000000000744687
- (struct CGSize)_maximumThumbnailSize;	// IMP=0x00000000007445ec
- (id)initWithSession:(id)arg1;	// IMP=0x000000000074415d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
