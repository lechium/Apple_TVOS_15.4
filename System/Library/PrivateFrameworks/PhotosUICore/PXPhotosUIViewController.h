//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXActionManagerProvider-Protocol.h>
#import <PhotosUICore/PXAssetsActionReceiver-Protocol.h>
#import <PhotosUICore/PXAssetsSharingHelperDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosBarsControllerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosContentControllerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGridStackTransitionEndpoint-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSplitViewControllerChangeObserver-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>
#import <PhotosUICore/_PXPhotosGridContainerDelegate-Protocol.h>

@class NSSet, NSString, PXActionManager, PXAssetReference, PXAssetSelectionUserActivityController, PXPhotosBarsController, PXPhotosContentController, PXPhotosDragController, PXPhotosViewConfiguration, PXPhotosViewModel, PXPhotosViewUIInteraction, PXProgrammaticNavigationRequest, UIView;
@protocol PXGridPresentationBarsUpdateDelegate, PXPhotosViewEventTracker, UIViewControllerInteractiveTransitioning;

@interface PXPhotosUIViewController : UIViewController <PXActionManagerProvider, PXAssetsActionReceiver, PXChangeObserver, PXPhotosContentControllerDelegate, PXScrollViewControllerObserver, PXSplitViewControllerChangeObserver, PXUserInterfaceFeatureViewController, PXPhotosBarsControllerDelegate, PXAssetsSharingHelperDelegate, _PXPhotosGridContainerDelegate, PXPhotosGridStackTransitionEndpoint>
{
    _Bool _hasScrolledToInitialPosition;	// 8 = 0x8
    _Bool _showingInitialLoadPlaceholder;	// 9 = 0x9
    PXPhotosContentController *_contentController;	// 16 = 0x10
    UIView *_emptyPlaceholderView;	// 24 = 0x18
    id <PXGridPresentationBarsUpdateDelegate> _gridPresentationBarsUpdateDelegate;	// 32 = 0x20
    UIViewController *_containerViewController;	// 40 = 0x28
    PXPhotosBarsController *_barsController;	// 48 = 0x30
    PXPhotosDragController *_emptyPlaceholderDragController;	// 56 = 0x38
    PXAssetSelectionUserActivityController *_userActivityController;	// 64 = 0x40
    PXProgrammaticNavigationRequest *_pendingInitialNavigationRequest;	// 72 = 0x48
    PXPhotosViewConfiguration *_configuration;	// 80 = 0x50
    UIView *_alternateContentView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000005f09e7
@property(retain, nonatomic) UIView *alternateContentView; // @synthesize alternateContentView=_alternateContentView;
@property(readonly, copy, nonatomic) PXPhotosViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic, getter=isShowingInitialLoadingPlaceholder) _Bool showingInitialLoadPlaceholder; // @synthesize showingInitialLoadPlaceholder=_showingInitialLoadPlaceholder;
@property(nonatomic) _Bool hasScrolledToInitialPosition; // @synthesize hasScrolledToInitialPosition=_hasScrolledToInitialPosition;
@property(retain, nonatomic) PXProgrammaticNavigationRequest *pendingInitialNavigationRequest; // @synthesize pendingInitialNavigationRequest=_pendingInitialNavigationRequest;
@property(readonly, nonatomic) PXAssetSelectionUserActivityController *userActivityController; // @synthesize userActivityController=_userActivityController;
@property(readonly, nonatomic) PXPhotosDragController *emptyPlaceholderDragController; // @synthesize emptyPlaceholderDragController=_emptyPlaceholderDragController;
@property(readonly, nonatomic) PXPhotosBarsController *barsController; // @synthesize barsController=_barsController;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <PXGridPresentationBarsUpdateDelegate> gridPresentationBarsUpdateDelegate; // @synthesize gridPresentationBarsUpdateDelegate=_gridPresentationBarsUpdateDelegate;
@property(retain, nonatomic) UIView *emptyPlaceholderView; // @synthesize emptyPlaceholderView=_emptyPlaceholderView;
- (id)windowForProgressPresentationInAssetsSharingHelper:(id)arg1;	// IMP=0x00000000005f0882
- (_Bool)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005f07e7
- (_Bool)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000005f07b9
- (void)setTitle:(id)arg1;	// IMP=0x00000000005f0724
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000005f0585
- (id)regionOfInterestForTransitioningAssetReference:(id)arg1;	// IMP=0x00000000005f056e
- (void)splitViewController:(id)arg1 didChangeSidebarVisibility:(_Bool)arg2;	// IMP=0x00000000005f055c
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000005f0392
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x00000000005f024b
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000005f0092
- (id)presentingViewControllerForContentController:(id)arg1;	// IMP=0x00000000005f0089
- (void)needsUpdateForContentController:(id)arg1;	// IMP=0x00000000005f004c
- (_Bool)photosContentController:(id)arg1 pushViewController:(id)arg2;	// IMP=0x00000000005effaa
- (void)dismissPresentedViewControllerForContentController:(id)arg1;	// IMP=0x00000000005eff91
- (_Bool)photosContentController:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000005eff71
- (void)photosBarsController:(id)arg1 didRequestDismissWithSender:(id)arg2;	// IMP=0x00000000005eff5c
- (void)photosBarsControllerDidUpdateNavigationItemAppearance:(id)arg1;	// IMP=0x00000000005efebf
- (void)photosBarsControllerDidUpdateBars:(id)arg1;	// IMP=0x00000000005efdeb
- (void)_waitUntilOneUpPresentationCanStartAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005efd73
- (void)ppt_navigateToAsset:(id)arg1 inAssetContainer:(id)arg2 revealInOneUp:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005efd4e
- (void)navigateToAsset:(id)arg1 inAssetContainer:(id)arg2 revealInOneUp:(_Bool)arg3 animated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005efc7c
- (void)_waitForAvailabilityOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005efbac
- (id)px_navigationDestination;	// IMP=0x00000000005efb1c
- (void)_completeNavigationToDestination:(id)arg1 result:(long long)arg2 error:(id)arg3;	// IMP=0x00000000005ef7b0
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005ef234
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00000000005ef160
@property(readonly, nonatomic) PXActionManager *assetActionManager;
- (_Bool)_scrollToBottomAnimated:(_Bool)arg1;	// IMP=0x00000000005eef8f
- (_Bool)pu_scrollToInitialPositionAnimated:(_Bool)arg1;	// IMP=0x00000000005eef23
- (_Bool)pu_handleSecondTabTap;	// IMP=0x00000000005eef0c
- (id)pu_debugCurrentlySelectedAssets;	// IMP=0x00000000005eee74
- (_Bool)pu_shouldOptOutFromChromelessBars;	// IMP=0x00000000005eedf1
- (id)preferredFocusEnvironments;	// IMP=0x00000000005eec7f
- (void)modalDismiss:(id)arg1;	// IMP=0x00000000005eebd9
- (void)cancelSelectMode:(id)arg1;	// IMP=0x00000000005eeb95
- (void)deselectAll:(id)arg1;	// IMP=0x00000000005eeb51
- (void)selectAll:(id)arg1;	// IMP=0x00000000005eeaf9
- (void)addAssetsToAlbum:(id)arg1;	// IMP=0x00000000005eea60
- (void)toggleFilter:(id)arg1;	// IMP=0x00000000005ee977
- (void)toggleViewMode:(id)arg1;	// IMP=0x00000000005ee933
- (void)toggleEditMode:(id)arg1;	// IMP=0x00000000005ee8f6
- (void)zoomOut:(id)arg1;	// IMP=0x00000000005ee8b2
- (void)zoomIn:(id)arg1;	// IMP=0x00000000005ee86e
- (void)toggleViewer:(id)arg1;	// IMP=0x00000000005ee85a
- (void)openSelectionWithCommandDownArrow:(id)arg1;	// IMP=0x00000000005ee846
- (void)paste:(id)arg1;	// IMP=0x00000000005ee6dc
- (void)validateCommand:(id)arg1;	// IMP=0x00000000005ee46c
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000005ee2f8
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000005edde7
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000005edddf
@property(readonly, nonatomic) long long userInterfaceFeature;
- (struct UIEdgeInsets)px_layoutMargins;	// IMP=0x00000000005edd7d
- (_Bool)px_determinesPreferredStatusBarStyle;	// IMP=0x00000000005edd75
- (void)px_didTransitionBars;	// IMP=0x00000000005edd36
- (void)px_willTransitionBars;	// IMP=0x00000000005edcf4
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000005edc4c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000005edba6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000005edb77
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000005eda2f
- (void)viewWillLayoutSubviews;	// IMP=0x00000000005ed9c5
- (void)containerView:(id)arg1 willMoveToWindow:(id)arg2;	// IMP=0x00000000005ed8ca
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000005ed7e0
- (void)_scrollToInitialPositionIfNecessary;	// IMP=0x00000000005ed60b
- (void)viewDidLoad;	// IMP=0x00000000005eccbe
- (void)loadView;	// IMP=0x00000000005ecc41
@property(readonly, nonatomic) id <UIViewControllerInteractiveTransitioning> edgeSwipeDismissalInteraction;
- (void)ensureSwipeDismissalInteraction;	// IMP=0x00000000005ecbb4
@property(readonly, nonatomic) PXAssetReference *assetReferenceForCurrentScrollPosition;
@property(readonly, nonatomic) _Bool isScrolledToTop;
@property(nonatomic) _Bool shouldAlwaysRespectToolbarActionPlacementPreference;
@property(nonatomic) _Bool hidesToolbar;
@property(nonatomic) _Bool hidesNavbar;
@property(copy, nonatomic) NSSet *hiddenAssetReferences;
- (void)setHiddenAssetReferences:(id)arg1 animationType:(long long)arg2;	// IMP=0x00000000005ec780
- (void)scrollToCenterAssetReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005ec6d0
- (void)scrollToRevealAssetReference:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005ec64a
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2 shouldSnapshotPlaceholder:(_Bool)arg3;	// IMP=0x00000000005ec5b9
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2;	// IMP=0x00000000005ec5a1
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x00000000005ec587
- (void)_dismissOnInternalRequest;	// IMP=0x00000000005ec401
- (void)_presentOneUpForSingleSelectedAssetWithActivity:(unsigned long long)arg1;	// IMP=0x00000000005ec316
- (void)invalidateHeaderView;	// IMP=0x00000000005ec248
- (void)_updateBackButtonBehavior;	// IMP=0x00000000005ebf83
- (void)_updateSubviewsOrdering;	// IMP=0x00000000005ebeaf
- (void)_updateEmptyPlaceholderLayout;	// IMP=0x00000000005ebad5
- (void)_updateEmptyPlaceholder;	// IMP=0x00000000005eb911
- (void)_updateEmptyBehaviorIfNeeded;	// IMP=0x00000000005eb763
- (void)_requestFocusUpdate;	// IMP=0x00000000005eb691
@property(readonly, nonatomic) PXPhotosViewUIInteraction *interaction;
- (id)scrollView;	// IMP=0x00000000005eb42b
@property(readonly, nonatomic) id <PXPhotosViewEventTracker> eventTracker;
- (id)currentDataSource;	// IMP=0x00000000005eb30a
- (id)gridView;	// IMP=0x00000000005eb2ba
@property(readonly, nonatomic) PXPhotosViewModel *viewModel;
- (id)contentControllerIfLoaded;	// IMP=0x00000000005eb255
@property(readonly, nonatomic) PXPhotosContentController *contentController; // @synthesize contentController=_contentController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000005eb12f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005eb0ac
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000005eb012

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

