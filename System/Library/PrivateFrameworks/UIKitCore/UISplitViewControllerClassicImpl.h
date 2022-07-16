//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UILayoutContainerViewDelegate-Protocol.h>
#import <UIKitCore/UISplitViewControllerImpl-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIFocusContainerGuide, UIGestureRecognizer, UIPopoverController, UIResponder, UISnapshotView, UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, UIViewController;
@protocol UISplitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerClassicImpl : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl>
{
    UISplitViewController *_svc;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    UIBarButtonItem *_barButtonItem;	// 24 = 0x18
    UISplitViewControllerDisplayModeBarButtonItem *_displayModeButtonItem;	// 32 = 0x20
    NSString *_buttonTitle;	// 40 = 0x28
    UIPopoverController *_hiddenPopoverController;	// 48 = 0x30
    UIView *_rotationSnapshotView;	// 56 = 0x38
    UIResponder *_postTransitionResponder;	// 64 = 0x40
    UISnapshotView *_collapsingMasterSnapshotView;	// 72 = 0x48
    UISnapshotView *_collapsingDetailSnapshotView;	// 80 = 0x50
    float _gutterWidth;	// 88 = 0x58
    long long _rotatingFromOrientation;	// 96 = 0x60
    long long _lastPresentedOrientation;	// 104 = 0x68
    struct CGRect _rotatingFromMasterViewFrame;	// 112 = 0x70
    struct CGRect _rotatingToMasterViewFrame;	// 144 = 0x90
    UIView *_underBarSeparatorView;	// 176 = 0xb0
    UITraitCollection *_traitCollectionWhenRemovedFromWindow;	// 184 = 0xb8
    _Bool _presentsWithGesture;	// 192 = 0xc0
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;	// 200 = 0xc8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 208 = 0xd0
    long long _preferredDisplayMode;	// 216 = 0xd8
    long long _effectiveTargetDisplayMode;	// 224 = 0xe0
    long long _pendingDisplayModeChangeCount;	// 232 = 0xe8
    long long _rotatingMasterChange;	// 240 = 0xf0
    _Bool _useChangingBoundsLayout;	// 248 = 0xf8
    long long _transitioningMasterChange;	// 256 = 0x100
    UITraitCollection *_transitioningToTraitCollection;	// 264 = 0x108
    long long _transitioningToInternalMode;	// 272 = 0x110
    long long _lastNotifiedDisplayMode;	// 280 = 0x118
    struct CGRect _viewBoundsBeforeCollapse;	// 288 = 0x120
    long long _suspendedState;	// 320 = 0x140
    long long _primaryEdge;	// 328 = 0x148
    struct {
        unsigned int invalidDelegateHiddenMasterAspectRatios:2;
        unsigned int delegateHiddenMasterAspectRatios:2;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
        unsigned int delegateWantsWillPresentCallback:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateWantsShowViewController:1;
        unsigned int delegateWantsShowDetailViewController:1;
        unsigned int delegateWantsCollapseSecondaryViewController:1;
        unsigned int delegateWantsSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrimaryViewControllerForExpanding:1;
        unsigned int collapsedState:2;
        unsigned int primaryHidingState:2;
        unsigned int primaryHidingStateForCurrentOrientation:2;
        unsigned int delegateWantsWillChangeToDisplayMode:1;
        unsigned int delegateWantsTargetDisplayModeForAction:1;
        unsigned int delegateCanModifyFirstResponderOnTraitCollectionTransition:1;
        unsigned int pendingPresentMasterViewController:1;
        unsigned int pendingUpdateTargetDisplayMode:1;
        unsigned int collapsingClockwise:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
        unsigned int firstResponderChangedFromPostTransitionResponderToNil:1;
        unsigned int inWillTransitionToSize:1;
        unsigned int hasTransitioningToInternalMode:1;
        unsigned int delegateImplementsPrivateIsPrimaryVisible:1;
        unsigned int delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended:1;
        unsigned int usesExtraWidePrimaryColumn:1;
        unsigned int usesDeviceOverlayPreferences:1;
        unsigned int prefersOverlayInRegularWidthPhone:1;
    } _splitViewControllerFlags;	// 336 = 0x150
    NSString *_displayModeButtonItemTitle;	// 344 = 0x158
    double _preferredPrimaryColumnWidthFraction;	// 352 = 0x160
    double _minimumPrimaryColumnWidth;	// 360 = 0x168
    double _maximumPrimaryColumnWidth;	// 368 = 0x170
    unsigned long long _lastFocusedChildViewControllerIndex;	// 376 = 0x178
    UIViewController *__preservedDetailController;	// 384 = 0x180
    CDUnknownBlockType __clearPreventRotationHook;	// 392 = 0x188
    UIFocusContainerGuide *_masterFocusContainerGuide;	// 400 = 0x190
    UIFocusContainerGuide *_detailFocusContainerGuide;	// 408 = 0x198
}

+ (double)_defaultGutterWidthInView:(id)arg1;	// IMP=0x000000000047dd39
- (void).cxx_destruct;	// IMP=0x00000000004883eb
@property(readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // @synthesize detailFocusContainerGuide=_detailFocusContainerGuide;
@property(readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // @synthesize masterFocusContainerGuide=_masterFocusContainerGuide;
@property(copy, nonatomic, setter=_setClearPreventRotationHook:) CDUnknownBlockType _clearPreventRotationHook; // @synthesize _clearPreventRotationHook=__clearPreventRotationHook;
@property(retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property(nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // @synthesize _displayModeButtonItemTitle;
@property(nonatomic) _Bool presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) __weak id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;	// IMP=0x00000000004882ab
- (id)_deepestActionResponder;	// IMP=0x000000000048825b
- (double)_supplementaryDividerPosition;	// IMP=0x0000000000488252
- (double)_primaryDividerPosition;	// IMP=0x0000000000488249
- (_Bool)_isAnimating;	// IMP=0x0000000000488241
@property(readonly, nonatomic) _Bool lockedForDelegateCallback;
@property(readonly, nonatomic) long long style;
@property(nonatomic) long long primaryBackgroundStyle;
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x00000000004881b9
- (id)_additionalViewControllersToCheckForUserActivity;	// IMP=0x0000000000488048
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000487b78
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x00000000004878b4
- (id)_allContainedViewControllers;	// IMP=0x0000000000487871
- (long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2;	// IMP=0x0000000000487497
- (long long)_medusaState;	// IMP=0x00000000004873c5
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;	// IMP=0x0000000000487366
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000487240
- (void)__viewWillLayoutSubviews;	// IMP=0x0000000000486746
- (void)_setDetailViewFrame:(struct CGRect)arg1;	// IMP=0x00000000004866af
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// IMP=0x000000000048669d
- (void)_updateMasterViewControllerFrame;	// IMP=0x0000000000485833
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000485605
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000048548c
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000004851e7
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3;	// IMP=0x0000000000484d3f
- (void)snapshotAllViews;	// IMP=0x0000000000484ae0
- (void)snapshotMasterView;	// IMP=0x000000000048453e
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000483f59
- (id)_childViewControllersToSendViewWillTransitionToSize;	// IMP=0x0000000000483df7
- (_Bool)_isTransitioningFromCollapsedToSeparated;	// IMP=0x0000000000483da9
- (void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2;	// IMP=0x000000000048309f
- (void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3;	// IMP=0x0000000000482dd8
- (long long)_prepareToTransitionToViewSize:(struct CGSize)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4;	// IMP=0x000000000048231c
- (long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(struct CGSize)arg3 medusaState:(long long)arg4;	// IMP=0x00000000004821c5
- (_Bool)_isRotating;	// IMP=0x00000000004821b7
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x000000000048212c
- (_Bool)_handlesCounterRotationForPresentation;	// IMP=0x0000000000482118
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;	// IMP=0x00000000004820e6
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000482048
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000481edd
- (long long)preferredCenterStatusBarStyle;	// IMP=0x0000000000481dd3
- (long long)preferredTrailingStatusBarStyle;	// IMP=0x0000000000481cc9
- (long long)preferredLeadingStatusBarStyle;	// IMP=0x0000000000481b83
- (id)childViewControllerForStatusBarStyle;	// IMP=0x0000000000481aae
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000481a69
- (id)_multitaskingDragExclusionRects;	// IMP=0x0000000000481a26
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000481695
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000481534
- (id)preferredFocusEnvironments;	// IMP=0x00000000004811da
- (id)preferredFocusedView;	// IMP=0x0000000000480ed3
@property(readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) unsigned long long lastFocusedChildViewControllerIndex; // @synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex;
- (void)_setUpFocusContainerGuides;	// IMP=0x0000000000480c6e
- (double)_contentMarginForChildViewController:(id)arg1;	// IMP=0x0000000000480c10
- (void)_updateChildContentMargins;	// IMP=0x0000000000480a7c
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x0000000000480a10
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x00000000004805a4
- (_Bool)_shouldUseRelativeInsets;	// IMP=0x00000000004804b1
- (void)popoverWillAppear:(id)arg1;	// IMP=0x000000000048026e
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;	// IMP=0x00000000004801a1
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000047ff77
- (void)toggleMasterVisible:(id)arg1;	// IMP=0x000000000047ff1b
- (void)_dismissMasterViewController:(_Bool)arg1;	// IMP=0x000000000047fe8f
- (unsigned long long)_targetEdgeForPopover;	// IMP=0x000000000047fe6c
- (void)_presentMasterViewController:(_Bool)arg1;	// IMP=0x000000000047fcd6
- (_Bool)_isMasterPopoverVisible;	// IMP=0x000000000047fcb3
- (void)_didEndSnapshotSession;	// IMP=0x000000000047fca2
- (void)_willBeginSnapshotSession;	// IMP=0x000000000047fc62
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;	// IMP=0x000000000047f881
- (_Bool)_shouldPreventAutorotation;	// IMP=0x000000000047f879
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;	// IMP=0x000000000047f6e4
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;	// IMP=0x000000000047f6dc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000047f616
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000047f550
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000047f43f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000047f2c2
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;	// IMP=0x000000000047f175
- (id)displayModeButtonItem;	// IMP=0x000000000047f0ec
- (void)_updateDisplayModeButtonItem;	// IMP=0x000000000047eebc
- (void)_triggerDisplayModeAction:(id)arg1;	// IMP=0x000000000047ee09
- (long long)_effectiveTargetDisplayMode;	// IMP=0x000000000047edfc
- (void)_cacheEffectiveTargetDisplayMode;	// IMP=0x000000000047ed16
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;	// IMP=0x000000000047ecc6
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;	// IMP=0x000000000047ec6c
- (void)_updateTargetDisplayMode;	// IMP=0x000000000047ec31
- (void)_displayModeDidChange;	// IMP=0x000000000047ebfe
- (void)_displayModeWillChangeTo:(long long)arg1;	// IMP=0x000000000047eb5c
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(_Bool)arg2;	// IMP=0x000000000047e6c4
- (long long)_defaultTargetDisplayMode;	// IMP=0x000000000047e4bb
- (id)_defaultDisplayModes;	// IMP=0x000000000047e432
- (long long)displayMode;	// IMP=0x000000000047e3d5
@property(nonatomic) long long preferredDisplayMode;
- (_Bool)_layoutPrimaryOnRight;	// IMP=0x000000000047e298
@property(nonatomic) long long primaryEdge;
- (_Bool)_effectivePresentsWithGesture;	// IMP=0x000000000047e046
@property(nonatomic) float gutterWidth;
- (double)_masterPresentationAnimationDuration;	// IMP=0x000000000047da61
- (void)_showMasterViewAnimated:(_Bool)arg1;	// IMP=0x000000000047d80c
@property(nonatomic) _Bool hidesMasterViewInPortrait;
- (_Bool)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2;	// IMP=0x000000000047d58d
- (_Bool)_hidesMasterViewInCurrentOrientation;	// IMP=0x000000000047d526
- (_Bool)hidesMasterViewInLandscape;	// IMP=0x000000000047d4ea
- (id)detailViewController;	// IMP=0x000000000047d403
- (id)masterViewController;	// IMP=0x000000000047d265
- (_Bool)_hasMasterViewController;	// IMP=0x000000000047d1dc
- (void)_setupUnderBarSeparatorView;	// IMP=0x000000000047cc11
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000047cb50
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000047bb46
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x000000000047b779
- (void)_removeCollapsingSnapshotViews;	// IMP=0x000000000047b716
- (id)_deepestUnambiguousResponder;	// IMP=0x000000000047b6d3
- (_Bool)_disableAutomaticKeyboardBehavior;	// IMP=0x000000000047b691
- (void)_didChangeToFirstResponder:(id)arg1;	// IMP=0x000000000047b65d
- (void)_didTransitionTraitCollection;	// IMP=0x000000000047b433
- (void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x000000000047aa86
- (void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg1;	// IMP=0x000000000047a9b2
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1;	// IMP=0x000000000047a1a9
- (void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000047a0a4
- (void)_prepareForCompactLayout;	// IMP=0x0000000000479c3a
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;	// IMP=0x0000000000479b7f
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000047978c
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000047949f
- (id)_primaryContentResponder;	// IMP=0x0000000000479458
- (id)_childContainingSender:(id)arg1;	// IMP=0x000000000047924e
- (void)_setMasterOverrideTraitCollectionActive:(_Bool)arg1;	// IMP=0x000000000047917d
@property(copy, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) _Bool inCollapsingToProposedTopColumnCallback;
- (_Bool)_isBasicallyHorizontallyCompact;	// IMP=0x0000000000478172
- (_Bool)_canDisplayHostedMaster;	// IMP=0x000000000047812a
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;	// IMP=0x00000000004776ce
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;	// IMP=0x000000000047743e
- (id)_secondaryViewControllerForCollapsing;	// IMP=0x00000000004773fb
- (id)_primaryViewControllerForExpanding;	// IMP=0x000000000047734a
- (id)_primaryViewControllerForCollapsing;	// IMP=0x0000000000477299
- (void)_setCollapsedState:(long long)arg1;	// IMP=0x000000000047718f
- (_Bool)_isCollapsed;	// IMP=0x0000000000477173
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1 isCompact:(_Bool)arg2;	// IMP=0x0000000000476e92
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x0000000000476e45
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x0000000000476bd2
@property(nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
- (struct CGSize)_screenSizeInMainScene:(_Bool)arg1;	// IMP=0x0000000000476a8c
- (double)primaryColumnWidth;	// IMP=0x00000000004769f4
- (void)_viewControllerHiding:(id)arg1;	// IMP=0x0000000000476877
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;	// IMP=0x000000000047670d
- (struct CGRect)_detailViewFrame;	// IMP=0x0000000000476666
- (struct CGRect)_detailViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000476505
- (struct CGRect)_masterViewFrame;	// IMP=0x000000000047645e
- (struct CGRect)_masterViewFrame:(struct CGRect)arg1;	// IMP=0x0000000000476371
- (void)_addOrRemovePopoverPresentationGestureRecognizer;	// IMP=0x0000000000475c08
- (void)_updateDelegateHiddenMasterAspectRatios;	// IMP=0x000000000047594d
- (_Bool)_defersUpdateDelegateHiddenMasterAspectRatios;	// IMP=0x000000000047592c
- (void)_setDelegateHidesMaster:(_Bool)arg1 inAspectRatio:(long long)arg2;	// IMP=0x00000000004758cc
- (_Bool)_isHidesMasterInLandscapeInvalid;	// IMP=0x00000000004758be
- (_Bool)_isHidesMasterInPortraitInvalid;	// IMP=0x00000000004758ae
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1;	// IMP=0x000000000047588b
- (id)_primaryDimmingView;	// IMP=0x0000000000475875
- (_Bool)_isMasterViewShown;	// IMP=0x00000000004757bb
- (long long)_currentInterfaceIdiom;	// IMP=0x000000000047570d
- (_Bool)_iPhoneShouldUseOverlayIfRegularWidth;	// IMP=0x00000000004756d4
- (_Bool)_iPhoneShouldUseOverlayInCurrentEnvironment;	// IMP=0x000000000047563d
@property(nonatomic) _Bool usesDeviceOverlayPreferences;
@property(nonatomic) _Bool prefersOverlayInRegularWidthPhone;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;	// IMP=0x00000000004755b1
- (long long)_primaryHidingStateForCurrentOrientation;	// IMP=0x00000000004755a1
- (void)_setPrimaryHidingState:(long long)arg1;	// IMP=0x000000000047557c
- (long long)_primaryHidingState;	// IMP=0x000000000047556a
- (long long)_effectivePrimaryHidingState;	// IMP=0x0000000000475532
- (void)unloadViewForced:(_Bool)arg1;	// IMP=0x00000000004753e6
- (void)loadView;	// IMP=0x0000000000475226
- (_Bool)_shouldPersistViewWhenCoding;	// IMP=0x000000000047521e
- (void)_loadNewSubviews:(id)arg1;	// IMP=0x0000000000474d07
- (void)dealloc;	// IMP=0x0000000000474bcf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000474aa7
- (void)_initWithCoder:(id)arg1;	// IMP=0x00000000004748c5
- (void)_commonInit;	// IMP=0x000000000047475c
- (struct CGRect)_frameForChildContentContainer:(id)arg1;	// IMP=0x00000000004745d4
- (id)initWithSplitViewController:(id)arg1;	// IMP=0x0000000000474570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
