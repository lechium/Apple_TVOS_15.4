//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXActionManagerProvider-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryFooterControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCuratedLibrarySkimmingControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryZoomLevelControlDelegate-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosDragControllerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosPointerControllerDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSplitViewControllerChangeObserver-Protocol.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTouchingUIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PHPhotoLibrary, PXActionManager, PXAssetReference, PXAssetSelectionUserActivityController, PXCPLUIStatusProvider, PXChangeDirectionNumberFilter, PXCuratedLibraryBarsController, PXCuratedLibrarySecondaryToolbarController, PXCuratedLibrarySkimmingController, PXCuratedLibraryViewProvider, PXCuratedLibraryZoomLevelControl, PXCuratedLibraryZoomLevelPinchFilter, PXGTransition, PXGView, PXMoviePresenter, PXPhotosDragController, PXPhotosPointerController, PXProgrammaticNavigationRequest, PXRelaxedScreenEdgePanGestureRecognizer, PXSwipeSelectionManager, PXTouchingUIGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol PXGAXResponder, PXPhotosViewDelegate;

@interface PXCuratedLibraryUIViewController : UIViewController <PXActionManagerProvider, PXChangeObserver, PXCuratedLibraryActionPerformerDelegate, PXCuratedLibraryFooterControllerDelegate, PXCuratedLibrarySkimmingControllerDelegate, PXCuratedLibraryZoomLevelControlDelegate, PXGAXResponder, PXOneUpPresentationDelegate, PXPhotosPointerControllerDelegate, PXPhotosDragControllerDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXSwipeSelectionManagerDelegate, PXTouchingUIGestureRecognizerDelegate, PXUserInterfaceFeatureViewController, UIGestureRecognizerDelegate, PXSplitViewControllerChangeObserver>
{
    _Bool _isGridViewReady;	// 8 = 0x8
    _Bool _isInUnselectedTab;	// 9 = 0x9
    PXCuratedLibraryViewProvider *_viewProvider;	// 16 = 0x10
    PXCuratedLibrarySkimmingController *_skimmingController;	// 24 = 0x18
    id <PXGAXResponder> axNextResponder;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
    PXCuratedLibraryBarsController *_barsController;	// 48 = 0x30
    PXAssetSelectionUserActivityController *_userActivityController;	// 56 = 0x38
    PXPhotosDragController *_dragController;	// 64 = 0x40
    PXPhotosDragController *_emptyPlaceholderDragController;	// 72 = 0x48
    PXCuratedLibrarySecondaryToolbarController *_secondaryToolbarController;	// 80 = 0x50
    PXCuratedLibraryZoomLevelControl *_zoomLevelControl;	// 88 = 0x58
    UITapGestureRecognizer *_tapGesture;	// 96 = 0x60
    UITapGestureRecognizer *_pressGesture;	// 104 = 0x68
    PXTouchingUIGestureRecognizer *_skimmingTouchGesture;	// 112 = 0x70
    UIPinchGestureRecognizer *_pinchGesture;	// 120 = 0x78
    UIPanGestureRecognizer *_panGesture;	// 128 = 0x80
    PXChangeDirectionNumberFilter *_backNavigationGestureDirectionFilter;	// 136 = 0x88
    long long _zoomLevelBeforeBackNavigationTransition;	// 144 = 0x90
    PXGTransition *_backNavigationTransition;	// 152 = 0x98
    PXRelaxedScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;	// 160 = 0xa0
    PXSwipeSelectionManager *_swipeSelectionManager;	// 168 = 0xa8
    PXAssetReference *_navigatedAssetReference;	// 176 = 0xb0
    PXPhotosPointerController *_pointerController;	// 184 = 0xb8
    PXCuratedLibraryZoomLevelPinchFilter *_zoomLevelPinchFilter;	// 192 = 0xc0
    PXProgrammaticNavigationRequest *_initialNavigationRequest;	// 200 = 0xc8
    PXCPLUIStatusProvider *_cplUIStatusProvider;	// 208 = 0xd0
    UIView *_emptyPlaceholderView;	// 216 = 0xd8
    PXMoviePresenter *_moviePresenter;	// 224 = 0xe0
    id <PXPhotosViewDelegate> _photosViewDelegate;	// 232 = 0xe8
    struct {
        long long zoomLevel;
        long long scrollRegime;
    } _trackedScrollContext;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x000000000027c35f
@property(nonatomic) __weak id <PXPhotosViewDelegate> photosViewDelegate; // @synthesize photosViewDelegate=_photosViewDelegate;
@property(retain, nonatomic) PXMoviePresenter *moviePresenter; // @synthesize moviePresenter=_moviePresenter;
@property(retain, nonatomic) UIView *emptyPlaceholderView; // @synthesize emptyPlaceholderView=_emptyPlaceholderView;
@property(retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider; // @synthesize cplUIStatusProvider=_cplUIStatusProvider;
@property(nonatomic) _Bool isInUnselectedTab; // @synthesize isInUnselectedTab=_isInUnselectedTab;
@property(retain, nonatomic) PXProgrammaticNavigationRequest *initialNavigationRequest; // @synthesize initialNavigationRequest=_initialNavigationRequest;
@property(nonatomic) _Bool isGridViewReady; // @synthesize isGridViewReady=_isGridViewReady;
@property(readonly, nonatomic) PXCuratedLibraryZoomLevelPinchFilter *zoomLevelPinchFilter; // @synthesize zoomLevelPinchFilter=_zoomLevelPinchFilter;
@property(readonly, nonatomic) PXPhotosPointerController *pointerController; // @synthesize pointerController=_pointerController;
@property(retain, nonatomic) PXAssetReference *navigatedAssetReference; // @synthesize navigatedAssetReference=_navigatedAssetReference;
@property(readonly, nonatomic) PXSwipeSelectionManager *swipeSelectionManager; // @synthesize swipeSelectionManager=_swipeSelectionManager;
@property(nonatomic) CDStruct_912cb5d2 trackedScrollContext; // @synthesize trackedScrollContext=_trackedScrollContext;
@property(readonly, nonatomic) PXRelaxedScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer; // @synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer;
@property(retain, nonatomic) PXGTransition *backNavigationTransition; // @synthesize backNavigationTransition=_backNavigationTransition;
@property(nonatomic) long long zoomLevelBeforeBackNavigationTransition; // @synthesize zoomLevelBeforeBackNavigationTransition=_zoomLevelBeforeBackNavigationTransition;
@property(retain, nonatomic) PXChangeDirectionNumberFilter *backNavigationGestureDirectionFilter; // @synthesize backNavigationGestureDirectionFilter=_backNavigationGestureDirectionFilter;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(readonly, nonatomic) PXTouchingUIGestureRecognizer *skimmingTouchGesture; // @synthesize skimmingTouchGesture=_skimmingTouchGesture;
@property(readonly, nonatomic) UITapGestureRecognizer *pressGesture; // @synthesize pressGesture=_pressGesture;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(readonly, nonatomic) PXCuratedLibraryZoomLevelControl *zoomLevelControl; // @synthesize zoomLevelControl=_zoomLevelControl;
@property(readonly, nonatomic) PXCuratedLibrarySecondaryToolbarController *secondaryToolbarController; // @synthesize secondaryToolbarController=_secondaryToolbarController;
@property(retain, nonatomic) PXPhotosDragController *emptyPlaceholderDragController; // @synthesize emptyPlaceholderDragController=_emptyPlaceholderDragController;
@property(readonly, nonatomic) PXPhotosDragController *dragController; // @synthesize dragController=_dragController;
@property(readonly, nonatomic) PXAssetSelectionUserActivityController *userActivityController; // @synthesize userActivityController=_userActivityController;
@property(readonly, nonatomic) PXCuratedLibraryBarsController *barsController; // @synthesize barsController=_barsController;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder;
- (void)splitViewController:(id)arg1 willChangeSidebarVisibility:(_Bool)arg2;	// IMP=0x000000000027bf98
- (id)_assetCollectionReferenceForGroup:(id)arg1;	// IMP=0x000000000027bb2b
- (void)_handleShowDefaultUIForGroup:(id)arg1;	// IMP=0x000000000027bab9
- (void)_handleShowAlternateUIForGroup:(id)arg1;	// IMP=0x000000000027ba44
- (void)_handleScrollToRevealInfo:(id)arg1 inGroup:(id)arg2;	// IMP=0x000000000027b94e
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000027b620
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000027b592
- (id)axContainingScrollViewForAXGroup:(id)arg1;	// IMP=0x000000000027b516
- (id)presentingViewControllerForFooterController:(id)arg1;	// IMP=0x000000000027b50d
- (void)footerControllerRevealFooter:(id)arg1;	// IMP=0x000000000027b4f6
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000027b49a
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000027b3f7
- (void)_rescheduleNavigationRequest:(id)arg1;	// IMP=0x000000000027b2eb
- (void)_handleNavigationRequestConditionCompletionForNavigationRequest:(id)arg1 withAssetReference:(id)arg2;	// IMP=0x000000000027b19d
- (void)_navigateToRevealAssetForNavigationRequest:(id)arg1;	// IMP=0x000000000027acf6
- (void)_navigateToInitialScrollPositionForNavigationRequest:(id)arg1;	// IMP=0x000000000027aa1e
- (id)px_navigationDestination;	// IMP=0x000000000027a9ee
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000027a866
- (id)_initialAllPhotosContentFilterState;	// IMP=0x000000000027a7c2
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x000000000027a71e
- (void)zoomLevelControl:(id)arg1 didTapOnAlreadySelectedZoomLevel:(long long)arg2;	// IMP=0x000000000027a707
- (void)_createAnimationForSkimmingWithDuration:(double)arg1 indicatorsDidChangeVisibility:(_Bool)arg2;	// IMP=0x000000000027a63f
- (void)skimmingControllerDidStopSkimming:(id)arg1 animationDuration:(double)arg2;	// IMP=0x000000000027a62b
- (void)skimmingController:(id)arg1 willStartSkimmingAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;	// IMP=0x000000000027a59d
- (void)skimmingController:(id)arg1 willHideSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;	// IMP=0x000000000027a586
- (void)skimmingController:(id)arg1 willShowSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;	// IMP=0x000000000027a56f
- (id)assetCollectionReferenceForSkimmingSlideshow:(id)arg1;	// IMP=0x000000000027a55d
- (id)assetCollectionReferenceToShowSkimmingHints:(id)arg1;	// IMP=0x000000000027a54b
- (id)_dominantAssetCollectionReferenceForSkimming;	// IMP=0x000000000027a408
- (void)_updateSkimmingSlideshowEnabled;	// IMP=0x000000000027a16c
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000000279ac6
- (id)_createPreviewViewForAssetReference:(id)arg1;	// IMP=0x0000000000279835
- (id)_createPreviewViewForHitTestResult:(id)arg1;	// IMP=0x0000000000279713
- (id)_bestHitTestResultForCursorAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000279603
- (void)pointerController:(id)arg1 didExitRegionWithRect:(struct CGRect)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x000000000027956c
- (void)pointerController:(id)arg1 willEnterRegionWithRect:(struct CGRect)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x000000000027932f
- (long long)pointerController:(id)arg1 interactionOptionsForRegionAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x0000000000279255
- (id)pointerController:(id)arg1 viewForCursorInteractionAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x00000000002790d2
- (id)pointerController:(id)arg1 identifierForRegionAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x0000000000278edb
- (_Bool)_shouldExposeCursorAnimations;	// IMP=0x0000000000278d8f
- (id)pointerController:(id)arg1 regionOfInterestForCursorAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x0000000000278b9f
- (_Bool)dragController:(id)arg1 shouldResizeCancelledPreviewForAssetReference:(id)arg2;	// IMP=0x0000000000278b06
- (_Bool)dragController:(id)arg1 shouldSelectRearrangedAssetReferences:(id)arg2;	// IMP=0x0000000000278a98
- (id)dragControllerViewControllerForPresentation:(id)arg1;	// IMP=0x0000000000278a8f
- (void)dragController:(id)arg1 dropTargetAssetReferenceDidChange:(id)arg2;	// IMP=0x0000000000278a89
- (void)dragController:(id)arg1 draggedAssetReferencesDidChange:(id)arg2;	// IMP=0x00000000002788fe
- (id)dragController:(id)arg1 scrollViewForAssetReference:(id)arg2;	// IMP=0x00000000002788ec
- (id)dragController:(id)arg1 dropTargetAssetReferenceForLocation:(struct CGPoint)arg2;	// IMP=0x00000000002788e4
- (id)dragController:(id)arg1 regionOfInterestForAssetReference:(id)arg2 image:(id *)arg3;	// IMP=0x00000000002788cc
- (void)dragController:(id)arg1 isDragSessionActiveDidChange:(_Bool)arg2;	// IMP=0x000000000027885d
- (id)dragControllerAssetReferenceForBeginningSession:(id)arg1;	// IMP=0x00000000002787e5
- (id)dragController:(id)arg1 draggableAssetReferenceAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000002786b6
- (id)oneUpPresentationHelperScrollView:(id)arg1;	// IMP=0x00000000002786a4
- (_Bool)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)arg1;	// IMP=0x000000000027869c
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;	// IMP=0x00000000002785b0
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;	// IMP=0x0000000000278520
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x0000000000278496
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;	// IMP=0x000000000027833b
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;	// IMP=0x0000000000278279
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x0000000000278267
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x0000000000278217
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x000000000027812a
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x0000000000278009
- (void)curatedLibraryActionPerformer:(id)arg1 contentFilterStateChanged:(id)arg2;	// IMP=0x0000000000277ff4
- (void)_setAllPhotosContentFilterState:(id)arg1;	// IMP=0x0000000000277f0e
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;	// IMP=0x0000000000277a44
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000277986
- (_Bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;	// IMP=0x0000000000277850
- (_Bool)_actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000002769eb
- (void)curatedLibraryActionPerformer:(id)arg1 presentShareSheetWithSharingContext:(id)arg2;	// IMP=0x00000000002766af
- (void)curatedLibraryActionPerformer:(id)arg1 presentContextMenuActionsWithPerformers:(id)arg2;	// IMP=0x00000000002766a9
- (id)preferredFocusEnvironments;	// IMP=0x000000000027652e
@property(readonly, nonatomic) PXActionManager *assetActionManager;
- (void)toggleFilter:(id)arg1;	// IMP=0x00000000002763c6
- (void)toggleViewMode:(id)arg1;	// IMP=0x0000000000276382
- (void)toggleEditMode:(id)arg1;	// IMP=0x0000000000276345
- (void)zoomOut:(id)arg1;	// IMP=0x0000000000276308
- (void)zoomIn:(id)arg1;	// IMP=0x00000000002762cb
- (void)navigateToSegment:(id)arg1;	// IMP=0x00000000002761cc
- (void)toggleViewer:(id)arg1;	// IMP=0x00000000002761b8
- (void)cancelSelectMode:(id)arg1;	// IMP=0x0000000000276136
- (void)openSelectionWithCommandDownArrow:(id)arg1;	// IMP=0x0000000000276017
- (void)openParentWithCommandUpArrow:(id)arg1;	// IMP=0x0000000000275f10
- (void)validateCommand:(id)arg1;	// IMP=0x0000000000275c61
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000275b8c
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000002757e9
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000275799
- (void)swipeSelectionManagerDidAutoScroll:(id)arg1;	// IMP=0x000000000027572f
- (void)swipeSelectionManager:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;	// IMP=0x00000000002756cf
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath)arg2 toIndexPath:(struct PXSimpleIndexPath)arg3;	// IMP=0x000000000027545a
- (id)_hitTestResultAtLocation:(struct CGPoint)arg1 withPadding:(struct UIEdgeInsets)arg2 swipeSelectionManager:(id)arg3;	// IMP=0x00000000002752a7
- (struct PXSimpleIndexPath)_indexPathForAssetAtLocation:(struct CGPoint)arg1 withPadding:(struct UIEdgeInsets)arg2 forSwipeSelectionManager:(id)arg3;	// IMP=0x0000000000274f93
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;	// IMP=0x0000000000274e74
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;	// IMP=0x0000000000274d7a
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000274d41
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;	// IMP=0x0000000000274c75
- (_Bool)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000274b7d
- (_Bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;	// IMP=0x0000000000274ad8
- (void)_scrollLibraryViewToInitialPositionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000027484f
- (void)_presentOneUpForSingleSelectedAssetWithActivity:(unsigned long long)arg1;	// IMP=0x0000000000274765
- (_Bool)_presentOneUpForAssetReference:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002745cc
- (_Bool)scrollViewControllerShouldScrollToTop:(id)arg1;	// IMP=0x00000000002744a6
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000027436e
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x00000000002740f3
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;	// IMP=0x00000000002740b6
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000273f83
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000273e55
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000273a8e
- (id)_buttonHitTestResultAtPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000027394b
- (id)_hitTestAssetReferenceAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000027386d
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;	// IMP=0x0000000000273721
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;	// IMP=0x0000000000273544
- (_Bool)_handleGestureForFilterTipController;	// IMP=0x000000000027353c
- (void)_handleScreenEdgePan:(id)arg1;	// IMP=0x0000000000272f22
- (void)_handlePan:(id)arg1;	// IMP=0x0000000000272dab
- (void)_handlePinch:(id)arg1;	// IMP=0x0000000000272959
- (_Bool)_scrollToNextSectionInDirection:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000272615
- (_Bool)_handleTapOnTitleWithHitTestResult:(id)arg1;	// IMP=0x000000000027239d
- (_Bool)_handleTapWithHitTestResult:(id)arg1 rangeSelectionEnabled:(_Bool)arg2;	// IMP=0x0000000000271efe
- (void)_setWantsOptionalChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;	// IMP=0x0000000000271e6d
- (_Bool)_handleTapToToggleChromeWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000271c35
- (void)_handlePress:(id)arg1;	// IMP=0x0000000000271bf9
- (void)_handleTapWithHitTestResults:(id)arg1 tapGesture:(id)arg2;	// IMP=0x0000000000271a44
- (void)_handleTap:(id)arg1;	// IMP=0x000000000027193c
- (void)_scrollToBottomAnimated:(_Bool)arg1;	// IMP=0x0000000000271874
- (_Bool)pu_scrollToInitialPositionAnimated:(_Bool)arg1;	// IMP=0x000000000027185d
- (_Bool)pu_handleSecondTabTap;	// IMP=0x0000000000271843
- (id)pu_debugCurrentlySelectedAssets;	// IMP=0x0000000000271782
- (id)_viewForEllipsisButtonAction;	// IMP=0x0000000000271592
- (struct CGRect)_rectForEllipsisActionPerformerButton;	// IMP=0x0000000000271423
- (void)_saveCurrentAllPhotosScrollPosition;	// IMP=0x0000000000271263
- (id)_regionOfInterestForAssetReference:(id)arg1 image:(id *)arg2;	// IMP=0x0000000000270e65
- (id)_scrollView;	// IMP=0x0000000000270de7
- (void)_prepareGestureRecognizers;	// IMP=0x00000000002709ed
- (void)_requestFocusUpdate;	// IMP=0x000000000027091b
- (void)_updateTrackedScrollLevelIfNeeded;	// IMP=0x000000000027082d
- (void)_updateStatusBarStyle;	// IMP=0x0000000000270790
- (void)_updateSecondaryToolbar;	// IMP=0x0000000000270473
- (void)_invalidateSecondaryToolbar;	// IMP=0x0000000000270461
- (void)px_didTransitionBars;	// IMP=0x0000000000270422
- (void)px_willTransitionBars;	// IMP=0x00000000002703e0
- (void)viewLayoutMarginsDidChange;	// IMP=0x0000000000270376
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000270347
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000270306
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000270170
- (long long)preferredStatusBarStyle;	// IMP=0x0000000000270085
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000027003d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000026fe8b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000026fd86
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000026fbdf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000026faae
- (void)viewDidLoad;	// IMP=0x000000000026eebd
- (void)_updateEmptyPlaceholder;	// IMP=0x000000000026eeb7
- (void)_conditionallyUpdateEmptyPlaceholder;	// IMP=0x000000000026ee6e
- (void)_addContentView:(id)arg1;	// IMP=0x000000000026ed70
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000026e8b6
@property(readonly, nonatomic) long long userInterfaceFeature;
@property(readonly, nonatomic) PXGView *gridView;
@property(readonly, nonatomic) PXCuratedLibrarySkimmingController *skimmingController; // @synthesize skimmingController=_skimmingController;
@property(readonly, nonatomic) PXCuratedLibraryViewProvider *viewProviderIfLoaded;
@property(readonly, nonatomic) PXCuratedLibraryViewProvider *viewProvider; // @synthesize viewProvider=_viewProvider;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026e315
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000026e285
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000026e203

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

