//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDimmingViewDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIPanelControllerDelegate-Protocol.h>
#import <UIKitCore/UISplitViewControllerImpl-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UIDimmingView, UIFocusContainerGuide, UIImage, UINavigationBar, UIPanGestureRecognizer, UIPanelController, UIResponder, UIScreenEdgePanGestureRecognizer, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, UITapGestureRecognizer, UITraitCollection, UIView, _UIFloatableBarButtonItem, _UIHyperConstantExtender, _UIHyperInteractor, _UIHyperrectangle, _UIHyperregionUnion;
@protocol UISplitViewControllerDelegate, UIViewControllerTransitionCoordinator;

@interface UISplitViewControllerPanelImpl : NSObject <UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl>
{
    NSMutableDictionary *_perColumnViewControllers;	// 8 = 0x8
    UISplitViewController *_svc;	// 16 = 0x10
    UISplitViewControllerDisplayModeBarButtonItem *_unspecifiedStyleDisplayModeButtonItem;	// 24 = 0x18
    NSString *_displayModeButtonItemTitle;	// 32 = 0x20
    _UIFloatableBarButtonItem *_sidebarToggleButtonItem;	// 40 = 0x28
    UIView *_floatableButtonContainer;	// 48 = 0x30
    UINavigationBar *_navBarForToggleButton;	// 56 = 0x38
    UIBarButtonItem *_secondaryOnlyShortcutButtonItem;	// 64 = 0x40
    UINavigationBar *_navBarForShortcutButton;	// 72 = 0x48
    double _presentationGestureDirection;	// 80 = 0x50
    UIPanGestureRecognizer *_sidebarPanGestureRecognizer;	// 88 = 0x58
    long long _lastNotifiedMode;	// 96 = 0x60
    NSMutableArray *_overrideReportedDisplayModeStack;	// 104 = 0x68
    long long _animatingToDisplayMode;	// 112 = 0x70
    _Bool _lastShouldAllowChange;	// 120 = 0x78
    _Bool _lastNotifiedIsCollapsed;	// 121 = 0x79
    long long _lastNotifiedTopColumnForCollapse;	// 128 = 0x80
    UITraitCollection *_transitioningToTraitCollection;	// 136 = 0x88
    struct {
        unsigned int determinedPrimaryWasVisibleBeforeExpansion:1;
        unsigned int primaryWasVisibleBeforeExpansion:1;
    } _transitioningFlags;	// 144 = 0x90
    struct CGSize _transitioningToSize;	// 152 = 0x98
    long long _transitioningToOrientation;	// 168 = 0xa8
    UITraitCollection *_suspendedTraitCollection;	// 176 = 0xb0
    struct CGSize _suspendedSize;	// 184 = 0xb8
    UISlidingBarStateRequest *_suspendedStateRequest;	// 200 = 0xc8
    long long _suspendedState;	// 208 = 0xd0
    UIResponder *_suspendedFirstResponder;	// 216 = 0xd8
    UIResponder *_postTransitionResponder;	// 224 = 0xe0
    long long _primaryEdge;	// 232 = 0xe8
    NSMutableArray *_hyperpoints;	// 240 = 0xf0
    _UIHyperregionUnion *_regionUnion;	// 248 = 0xf8
    _UIHyperrectangle *_hyperrectangle;	// 256 = 0x100
    _UIHyperInteractor *_interactor;	// 264 = 0x108
    _UIHyperConstantExtender *_extender;	// 272 = 0x110
    struct {
        unsigned int usedNewSPI:1;
        unsigned int primaryHidingState:2;
        unsigned int userGeneratedDisplayMode:3;
        unsigned int isStrictUserGeneratedDisplayMode:1;
        unsigned int didSetLastShouldAllowChangeDuringUpdate:1;
        unsigned int hasTransitioningSizeAndOrientation:1;
        unsigned int hasPendingPreferredDisplayModeChange:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
        unsigned int firstResponderChangedFromPostTransitionResponderToNil:1;
        unsigned int usesExtraWidePrimaryColumn:1;
        unsigned int usesDeviceOverlayPreferences:1;
        unsigned int prefersOverlayInRegularWidthPhone:1;
        unsigned int isGestureShowingSupplementaryColumn:1;
        unsigned int isGestureHidingPrimaryWithSupplementaryVisible:1;
        unsigned int isForcingOverlayForGesture:1;
        unsigned int allowToggleSidebarButtonWithoutGesture:1;
        unsigned int alwaysHideToggleSidebarButton:1;
        unsigned int allowsTriggeringSidebarKeyCommandAction:1;
        unsigned int wantsHideSidebarDisplayNameForKeyCommand:1;
        unsigned int allowsDimmedSecondaryAsDeepestUnambiguousResponder:1;
        unsigned int allowSecondaryOnlyButton:1;
        unsigned int lockedForDelegateCallback:1;
        unsigned int inCollapsingToProposedTopColumnCallback;
        unsigned int sendDelegateWillShowColumn:1;
        unsigned int sendDelegateWillHideColumn:1;
        unsigned int skipDelegateWillShowHideColumn:1;
        unsigned int useUnderscoredWillShowHideColumn:1;
        unsigned int sendDelegateInteractiveGestureWillBegin:1;
        unsigned int sendDelegateInteractiveGestureWillBeginSPI:1;
        unsigned int sendDelegateInteractiveGestureDidEnd:1;
        unsigned int sendDelegateInteractiveGestureDidEndSPI:1;
        unsigned int sendDelegateAllowGestureForColumnSPI:1;
    } _flags;	// 280 = 0x118
    double _lastUserInitiatedPrimaryWidth;	// 296 = 0x128
    long long _primaryBackgroundStyle;	// 304 = 0x130
    _Bool _presentsWithGesture;	// 312 = 0x138
    id <UISplitViewControllerDelegate> _delegate;	// 320 = 0x140
    long long _preferredDisplayMode;	// 328 = 0x148
    double _preferredPrimaryColumnWidthFraction;	// 336 = 0x150
    double _preferredPrimaryColumnWidth;	// 344 = 0x158
    double _minimumPrimaryColumnWidth;	// 352 = 0x160
    double _maximumPrimaryColumnWidth;	// 360 = 0x168
    double _preferredSupplementaryColumnWidth;	// 368 = 0x170
    unsigned long long _lastFocusedChildViewControllerIndex;	// 376 = 0x178
    long long _preferredSplitBehavior;	// 384 = 0x180
    double _preferredSupplementaryColumnWidthFraction;	// 392 = 0x188
    double _minimumSupplementaryColumnWidth;	// 400 = 0x190
    double _maximumSupplementaryColumnWidth;	// 408 = 0x198
    UIScreenEdgePanGestureRecognizer *__fluidOpenSidebarPresentationGestureRecognizer;	// 416 = 0x1a0
    UIPanelController *_panelController;	// 424 = 0x1a8
    UIDimmingView *__dimmingView;	// 432 = 0x1b0
    UIImage *__fullScreenButtonImage;	// 440 = 0x1b8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 448 = 0x1c0
    UIFocusContainerGuide *_masterFocusContainerGuide;	// 456 = 0x1c8
    UIFocusContainerGuide *_detailFocusContainerGuide;	// 464 = 0x1d0
}

- (void).cxx_destruct;	// IMP=0x00000000004adaf4
@property(readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // @synthesize detailFocusContainerGuide=_detailFocusContainerGuide;
@property(readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // @synthesize masterFocusContainerGuide=_masterFocusContainerGuide;
@property(readonly, nonatomic, getter=_menuGestureRecognizer) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic, setter=_setFullScreenButtonImage:) UIImage *_fullScreenButtonImage; // @synthesize _fullScreenButtonImage=__fullScreenButtonImage;
@property(retain, nonatomic, setter=_setDimmingView:) UIDimmingView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(retain, nonatomic) UIPanelController *panelController; // @synthesize panelController=_panelController;
@property(retain, nonatomic, setter=_setFluidOpenSidebarPresentationGestureRecognizer:) UIScreenEdgePanGestureRecognizer *_fluidOpenSidebarPresentationGestureRecognizer; // @synthesize _fluidOpenSidebarPresentationGestureRecognizer=__fluidOpenSidebarPresentationGestureRecognizer;
@property(nonatomic) double maximumSupplementaryColumnWidth; // @synthesize maximumSupplementaryColumnWidth=_maximumSupplementaryColumnWidth;
@property(nonatomic) double minimumSupplementaryColumnWidth; // @synthesize minimumSupplementaryColumnWidth=_minimumSupplementaryColumnWidth;
@property(nonatomic) double preferredSupplementaryColumnWidthFraction; // @synthesize preferredSupplementaryColumnWidthFraction=_preferredSupplementaryColumnWidthFraction;
@property(nonatomic) long long preferredSplitBehavior; // @synthesize preferredSplitBehavior=_preferredSplitBehavior;
@property(nonatomic) double preferredSupplementaryColumnWidth; // @synthesize preferredSupplementaryColumnWidth=_preferredSupplementaryColumnWidth;
@property(nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidth; // @synthesize preferredPrimaryColumnWidth=_preferredPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(nonatomic) long long preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
@property(nonatomic) _Bool presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) __weak id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long primaryBackgroundStyle;
- (void)_updateConfigurationBackgroundStyle;	// IMP=0x00000000004ad847
- (void)_addFocusPromiseRegionInContext:(id)arg1;	// IMP=0x00000000004ad30a
@property(readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) unsigned long long lastFocusedChildViewControllerIndex; // @synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex;
- (void)_updateFocusContainerGuideFrames;	// IMP=0x00000000004aceff
- (void)_setUpFocusContainerGuides;	// IMP=0x00000000004acd7d
- (void)_allowingMutationsInDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000004acd30
- (id)_navigationController:(id)arg1 navigationBarAdditionalActionsForBackButtonMenu:(id)arg2;	// IMP=0x00000000004ac6ac
- (void)_navigationController:(id)arg1 navigationBar:(id)arg2 itemBackButtonUpdated:(id)arg3;	// IMP=0x00000000004ac673
- (void)_navigationController:(id)arg1 navigationBar:(id)arg2 topItemUpdatedContentLayout:(id)arg3;	// IMP=0x00000000004ac538
- (void)_updateDisplayModeButtonItemAndResetForCanceledAnimationWithTransitionCoordinator:(id)arg1;	// IMP=0x00000000004ac413
- (_Bool)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg1;	// IMP=0x00000000004ac3f9
- (void)_navigationControllerDidChangeNavigationBarHidden:(id)arg1;	// IMP=0x00000000004ac307
- (void)_navigationControllerDidUpdateStack:(id)arg1;	// IMP=0x00000000004ac09f
- (void)_updateDisplayModeButtonItemIfNecessaryForChangingNavigationController:(id)arg1;	// IMP=0x00000000004abda2
- (long long)_columnForMonitoredNavigationController:(id)arg1;	// IMP=0x00000000004abcbe
- (void)_tabBarControllerDidChangeSelection:(id)arg1;	// IMP=0x00000000004abc6a
- (_Bool)_isViewControllerForObservableScrollViewAmbiguous;	// IMP=0x00000000004abc24
- (id)_viewControllerForObservableScrollView;	// IMP=0x00000000004ab931
- (void)_viewControllerChildViewControllersDidChange:(id)arg1;	// IMP=0x00000000004ab569
- (void)_stopTransitionsInViewController:(id)arg1;	// IMP=0x00000000004ab403
- (_Bool)_setPanelConfigurationWithIsPrimaryShown:(_Bool)arg1 shouldUseOverlay:(_Bool)arg2;	// IMP=0x00000000004ab031
- (_Bool)_setPanelConfigurationWithIsPrimaryShown:(_Bool)arg1 isSupplementaryShown:(_Bool)arg2 shouldUseOverlay:(_Bool)arg3 dimMainIfNecessary:(_Bool)arg4;	// IMP=0x00000000004aa9c4
- (long long)_fullScreenStateForOrientation:(long long)arg1 viewWidth:(double)arg2;	// IMP=0x00000000004aa825
- (long long)_currentInterfaceIdiom;	// IMP=0x00000000004aa777
- (_Bool)_iPhoneShouldUseOverlayInCurrentEnvironment;	// IMP=0x00000000004aa6e0
- (_Bool)_iPadShouldUseOverlayInCurrentEnvironment;	// IMP=0x00000000004aa5d8
- (void)_setPrimaryHidingState:(long long)arg1;	// IMP=0x00000000004aa5bd
- (long long)_primaryHidingState;	// IMP=0x00000000004aa5ac
- (void)_popOverrideOfReportedDisplayMode;	// IMP=0x00000000004aa48f
- (void)_pushOverrideOfReportedDisplayMode:(long long)arg1;	// IMP=0x00000000004aa410
- (long long)_displayModeForState:(id)arg1;	// IMP=0x00000000004aa111
- (long long)_unspecifiedStyleDisplayModeForState:(id)arg1;	// IMP=0x00000000004aa052
- (id)_childContainingSender:(id)arg1;	// IMP=0x00000000004a9e6a
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;	// IMP=0x00000000004a9e2d
- (void)_triggerDisplayModeAction:(id)arg1;	// IMP=0x00000000004a9d3a
- (void)_triggerSecondaryOnlyShortcutAction:(id)arg1;	// IMP=0x00000000004a9ce1
- (void)_triggerSidebarKeyCommandAction:(id)arg1;	// IMP=0x00000000004a9b49
- (void)_updateAllowsTriggeringSidebarKeyCommandAction;	// IMP=0x00000000004a9aad
- (_Bool)_allowsTriggeringSidebarKeyCommandAction;	// IMP=0x00000000004a9a9c
- (void)_validateTriggerSidebarKeyCommand:(id)arg1;	// IMP=0x00000000004a99fe
- (void)_updateTriggerSidebarKeyCommandTitleForNewDisplayMode:(long long)arg1;	// IMP=0x00000000004a9913
- (void)_unspecifiedStyleTriggerDisplayModeAction:(id)arg1;	// IMP=0x00000000004a96ca
- (void)_updateDisplayModeButtonItem;	// IMP=0x00000000004a967f
- (void)_updateDisplayModeButtonItemForDisplayMode:(long long)arg1;	// IMP=0x00000000004a7aab
- (_Bool)_alwaysHideSidebarToggleButton;	// IMP=0x00000000004a7a45
@property(nonatomic, setter=_setForceDisplayModeBarButtonHidden:) _Bool _forceDisplayModeBarButtonHidden;
- (_Bool)_isDisplayModeBarButtonVisible;	// IMP=0x00000000004a78f6
@property(nonatomic, setter=_setVisibleToggleButtonRequiresPresentsWithGesture:) _Bool _visibleToggleButtonRequiresPresentsWithGesture;
- (_Bool)allowsSecondaryOnlyShortcutButton;	// IMP=0x00000000004a784b
- (id)_sidebarChevronSymbolImage;	// IMP=0x00000000004a7805
- (id)_sidebarToggleSymbolImage;	// IMP=0x00000000004a77bf
- (id)_fullScreenSymbolImageForDisplayMode:(long long)arg1;	// IMP=0x00000000004a7766
- (id)_leaveFullScreenSymbolImage;	// IMP=0x00000000004a7708
- (id)_enterFullScreenSymbolImage;	// IMP=0x00000000004a76aa
- (void)_unspecifiedStyleUpdateDisplayModeButtonItem;	// IMP=0x00000000004a71a4
- (long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1;	// IMP=0x00000000004a6ec0
- (long long)_nextTargetDisplayModeForDisplayMode:(long long)arg1 showMoreIfPossible:(_Bool)arg2;	// IMP=0x00000000004a6b9a
- (long long)_effectiveTargetDisplayMode;	// IMP=0x00000000004a6a66
- (_Bool)_allowsFocusBehindDimmingView;	// IMP=0x00000000004a6a5e
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x00000000004a67f6
- (void)_updateDimmingView;	// IMP=0x00000000004a673e
- (void)_setPrimaryShownFromGesture:(_Bool)arg1 hideAll:(_Bool)arg2;	// IMP=0x00000000004a625b
- (_Bool)_gestureIsForcingOverlay;	// IMP=0x00000000004a622a
- (_Bool)_gestureIsForcingOverlayForDisplayMode:(long long)arg1;	// IMP=0x00000000004a6209
- (void)_setNumberOfSidebarColumnsVisibleFromGesture:(unsigned long long)arg1 withVelocity:(double)arg2;	// IMP=0x00000000004a5ea9
- (void)_unspecifiedStyleSetPrimaryShownFromGesture:(_Bool)arg1;	// IMP=0x00000000004a5c76
- (void)_setInteractiveSidebarWidth:(double)arg1;	// IMP=0x00000000004a588a
- (_Bool)_isPrimaryShown;	// IMP=0x00000000004a57f5
- (void)_presentationGestureRecognizerChanged:(id)arg1;	// IMP=0x00000000004a5539
- (void)_fluidPresentationGestureRecognizerChanged:(id)arg1;	// IMP=0x00000000004a4529
- (void)_notifyFluidPresentationGestureDidEnd;	// IMP=0x00000000004a4461
- (void)_notifyFluidPresentationGestureWillBegin;	// IMP=0x00000000004a4396
- (void)_unspecifiedStylePresentationGestureRecognizerChanged:(id)arg1;	// IMP=0x00000000004a415a
- (void)_updatePresentationGestureRecognizer;	// IMP=0x00000000004a4154
- (void)_fluidUpdatePresentationGestureRecognizers;	// IMP=0x00000000004a3e6b
- (unsigned long long)_effectivePrimaryRectEdge;	// IMP=0x00000000004a3e48
@property(retain, nonatomic, setter=_setFluidSidebarPresentationGestureRecognizer:) UIPanGestureRecognizer *_fluidSidebarPresentationGestureRecognizer;
@property(retain, nonatomic, setter=_setPresentationGestureRecognizer:) UIPanGestureRecognizer *_presentationGestureRecognizer;
- (_Bool)_shouldUseFluidSidebarGestures;	// IMP=0x00000000004a3a33
- (id)_currentSupplementaryChildViewController;	// IMP=0x00000000004a398b
- (id)_currentPrimaryChildViewController;	// IMP=0x00000000004a3912
- (void)sendWillHideColumn:(long long)arg1;	// IMP=0x00000000004a384f
- (void)sendWillShowColumn:(long long)arg1;	// IMP=0x00000000004a378c
- (void)sendColumnShowHideNotificationsForNewState:(id)arg1 newDisplayMode:(long long)arg2 oldDisplayMode:(long long)arg3;	// IMP=0x00000000004a31ec
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000004a2eb8
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000004a2af1
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000004a2ae9
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000004a270c
- (_Bool)_scrollViewPreventsGestureForHitView:(id)arg1;	// IMP=0x00000000004a25ec
- (_Bool)_allowMoveToSecondaryOnlyGetIsInForcedOverlayFromGesture:(_Bool *)arg1;	// IMP=0x00000000004a256c
- (_Bool)_fluidGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000004a2018
- (long long)_columnForView:(id)arg1 getIsContent:(_Bool *)arg2;	// IMP=0x00000000004a1e85
- (_Bool)_configurationPermitsFluidCloseGestureWithPrimaryShown:(_Bool)arg1 supplementaryShown:(_Bool)arg2;	// IMP=0x00000000004a1d26
- (_Bool)_configurationPermitsFluidOpenGestureWithPrimaryShown:(_Bool)arg1 supplementaryShown:(_Bool)arg2;	// IMP=0x00000000004a1bd0
- (_Bool)_unspecifiedStyleGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000004a181a
- (id)panelController:(id)arg1 navigationBarForViewController:(id)arg2;	// IMP=0x00000000004a17a0
- (id)_navigationBarForSidebarButtonForDisplayMode:(long long)arg1;	// IMP=0x00000000004a14d2
- (_Bool)_wantsSideBarImageForOneOverSecondary;	// IMP=0x00000000004a134b
- (id)_navigationBarForSidebarButtonForColumn:(long long)arg1;	// IMP=0x00000000004a124c
- (void)panelController:(id)arg1 adjustTrailingViewController:(id)arg2 forKeyboardInfo:(id)arg3;	// IMP=0x00000000004a11e2
- (void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3;	// IMP=0x00000000004a1178
- (void)panelController:(id)arg1 willBeginAnimationToPrimarySize:(struct CGSize)arg2 supplementarySize:(struct CGSize)arg3 secondarySize:(struct CGSize)arg4;	// IMP=0x00000000004a0ba6
- (void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;	// IMP=0x00000000004a09f5
- (void)panelController:(id)arg1 animateTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;	// IMP=0x00000000004a07f5
- (void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4;	// IMP=0x00000000004a04b7
- (struct CGSize)_predictedDetailSizeForPredictedEndState:(id)arg1;	// IMP=0x00000000004a026e
- (void)panelControllerDidExpand:(id)arg1;	// IMP=0x00000000004a01e3
- (void)panelControllerDidCollapse:(id)arg1;	// IMP=0x00000000004a0158
- (id)panelController:(id)arg1 unspecifiedStyleSeparateSecondaryViewControllerFromPrimaryViewController:(id)arg2;	// IMP=0x000000000049fd73
- (id)panelController:(id)arg1 separateSupplementaryViewControllerFromPrimaryViewController:(id)arg2;	// IMP=0x000000000049f425
- (id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;	// IMP=0x000000000049ecdd
- (_Bool)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 onTopOfSupplementaryViewController:(id)arg4 transitionCoordinator:(id)arg5;	// IMP=0x000000000049eb17
- (void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4;	// IMP=0x000000000049e903
- (_Bool)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;	// IMP=0x000000000049e2ec
- (id)primaryViewControllerForExpandingPanelController:(id)arg1;	// IMP=0x000000000049e14d
- (id)primaryViewControllerForCollapsingPanelController:(id)arg1;	// IMP=0x000000000049dfae
- (long long)topColumnForCollapsingPanelController:(id)arg1;	// IMP=0x000000000049dcf2
- (void)panelController:(id)arg1 didChangeToState:(id)arg2 withSize:(struct CGSize)arg3;	// IMP=0x000000000049d92c
- (void)_unspecifiedStylePanelController:(id)arg1 didChangeToState:(id)arg2 withSize:(struct CGSize)arg3;	// IMP=0x000000000049d4f3
- (void)panelController:(id)arg1 willChangeToState:(id)arg2;	// IMP=0x000000000049d14b
- (void)callDeprecatedWillShowDelegateCallbackIfNecessary;	// IMP=0x000000000049cf6c
- (void)callDeprecatedWillHideDelegateCallbackIfNecessary;	// IMP=0x000000000049cca7
- (CDUnknownBlockType)panelControllerWillUpdate:(id)arg1;	// IMP=0x000000000049c311
- (id)_newBarContentAnimationClippingView;	// IMP=0x000000000049c2dd
- (double)panelController:(id)arg1 expectedWidthForColumnForViewController:(id)arg2;	// IMP=0x000000000049c11a
- (long long)validDisplayModeWithAllColumns;	// IMP=0x000000000049c004
- (void)_getPrimaryShown:(_Bool *)arg1 supplementaryShown:(_Bool *)arg2 shouldUseOverlay:(_Bool *)arg3 dimMainIfNecessary:(_Bool *)arg4;	// IMP=0x000000000049bef9
- (void)_getPrimaryShown:(_Bool *)arg1 supplementaryShown:(_Bool *)arg2 shouldUseOverlay:(_Bool *)arg3 dimMainIfNecessary:(_Bool *)arg4 forDisplayMode:(long long)arg5;	// IMP=0x000000000049bbfb
- (void)_getPrimaryShown:(_Bool *)arg1 shouldUseOverlay:(_Bool *)arg2;	// IMP=0x000000000049ba09
- (Class)viewClassForPanelController:(id)arg1;	// IMP=0x000000000049b9f8
- (id)_hiddenColumnsInCurrentEnvironmentWithConcreteDisplayMode:(long long)arg1;	// IMP=0x000000000049b778
- (long long)_concreteDisplayModeForCurrentEnvironment;	// IMP=0x000000000049b5bf
- (struct CGSize)_defaultViewSizeForResolvingDisplayModeOrSplitBehavior;	// IMP=0x000000000049b4d2
- (void)_supplementaryOrPrimaryColumnWidthAffectingPropertyDidChange;	// IMP=0x000000000049b464
- (void)_primaryColumnWidthAffectingPropertyDidChange;	// IMP=0x000000000049b3a7
- (void)getPrimaryColumnWidth:(double *)arg1 supplementaryColumnWidth:(double *)arg2 forSize:(struct CGSize)arg3 displayMode:(long long)arg4 isCompact:(_Bool)arg5 shouldUseOverlay:(_Bool)arg6;	// IMP=0x000000000049ac55
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1 isCompact:(_Bool)arg2 shouldUseOverlay:(_Bool)arg3;	// IMP=0x000000000049a887
- (void)getPrimaryColumnWidth:(double *)arg1 supplementaryColumnWidth:(double *)arg2 forSize:(struct CGSize)arg3 displayMode:(long long)arg4 shouldUseOverlay:(_Bool)arg5;	// IMP=0x000000000049a7f3
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1 shouldUseOverlay:(_Bool)arg2;	// IMP=0x000000000049a771
- (double)_defaultMaximumTVWidthForColumn:(long long)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000049a76b
- (double)_defaultMaximumIPadWidthForColumn:(long long)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000049a4ee
- (double)_defaultMaximumSupplementaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x000000000049a409
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize)arg1;	// IMP=0x000000000049a197
- (struct CGSize)_screenSize;	// IMP=0x000000000049a09e
- (void)_transitionFromDisplayMode:(long long)arg1 toDisplayMode:(long long)arg2;	// IMP=0x0000000000499b69
- (void)_changeToDisplayMode:(long long)arg1 fromPreferredDisplayMode:(long long)arg2;	// IMP=0x0000000000499a31
- (void)_unspecifiedStyleChangeToDisplayMode:(long long)arg1 fromPreferredDisplayMode:(long long)arg2;	// IMP=0x0000000000499893
- (void)updateDisplayModeButtonItem;	// IMP=0x0000000000499881
- (void)animateToRequest:(id)arg1;	// IMP=0x000000000049980f
@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property(readonly, nonatomic) NSArray *possibleStates;
@property(readonly, nonatomic) UISlidingBarState *currentState;
@property(copy, nonatomic) UISlidingBarConfiguration *configuration;
- (id)_additionalViewControllersToCheckForUserActivity;	// IMP=0x000000000049945a
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000000049902a
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000000498dbb
- (id)_allContainedViewControllers;	// IMP=0x0000000000498d78
@property(readonly, copy) NSString *description;
- (_Bool)_disableAutomaticKeyboardBehavior;	// IMP=0x0000000000498976
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;	// IMP=0x00000000004987c7
- (id)_deepestActionResponder;	// IMP=0x0000000000498442
@property(nonatomic, getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder, setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:) _Bool _allowsDimmedSecondaryAsDeepestUnambiguousResponder;
- (id)_primaryContentResponder;	// IMP=0x0000000000498226
- (void)_didChangeToFirstResponder:(id)arg1;	// IMP=0x00000000004981e9
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x0000000000497f3f
- (_Bool)_handlesCounterRotationForPresentation;	// IMP=0x0000000000497f37
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// IMP=0x0000000000497f31
- (id)_childViewControllersToSendViewWillTransitionToSize;	// IMP=0x0000000000497cb4
- (id)_unspecifiedStyleChildViewControllersToSendViewWillTransitionToSize;	// IMP=0x0000000000497b46
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;	// IMP=0x0000000000497b40
- (double)_contentMarginForChildViewController:(id)arg1;	// IMP=0x00000000004979f8
- (void)_updateChildContentMargins;	// IMP=0x0000000000497864
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x000000000049784e
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x000000000049732b
- (struct UIEdgeInsets)_tvOSColumnStyleExtraInsetsForChildViewController:(id)arg1;	// IMP=0x00000000004972b7
- (_Bool)_usePaddingForEdgeInsetsForChildViewController:(id)arg1;	// IMP=0x00000000004971fc
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;	// IMP=0x00000000004971f4
- (_Bool)_shouldPersistViewWhenCoding;	// IMP=0x00000000004971ec
- (struct CGRect)_frameForChildContentContainer:(id)arg1;	// IMP=0x0000000000496fef
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;	// IMP=0x0000000000496f6e
- (id)_multitaskingDragExclusionRects;	// IMP=0x0000000000496f1e
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000496c4f
- (void)unloadViewForced:(_Bool)arg1;	// IMP=0x0000000000496afa
- (void)removeChildViewController:(id)arg1;	// IMP=0x0000000000496a63
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000000496a2c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000496969
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000496963
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000049695d
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000496957
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000004967ec
- (id)childViewControllerForStatusBarStyle;	// IMP=0x0000000000496717
- (long long)preferredCenterStatusBarStyle;	// IMP=0x0000000000496418
- (long long)preferredTrailingStatusBarStyle;	// IMP=0x000000000049601c
- (long long)preferredLeadingStatusBarStyle;	// IMP=0x0000000000495c12
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000495bb4
- (id)preferredFocusEnvironments;	// IMP=0x000000000049585a
- (id)preferredFocusedView;	// IMP=0x0000000000495553
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000004954e1
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000494c9a
- (long long)_svcViewWindowOrientation;	// IMP=0x0000000000494bee
- (long long)_svcOrientation;	// IMP=0x0000000000494b62
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000494a1d
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000493d0e
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x00000000004935ee
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000492c70
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000492c6a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000492c64
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000492c5e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000492c58
- (void)loadView;	// IMP=0x0000000000492b3f
- (void)toggleMasterVisible:(id)arg1;	// IMP=0x0000000000492af6
- (long long)_columnForViewController:(id)arg1;	// IMP=0x000000000049256c
- (void)updatePanelControllerForViewControllerChangeInColumn:(long long)arg1 alwaysAnimate:(_Bool)arg2;	// IMP=0x0000000000491577
- (void)updatePanelControllerForViewControllerChangeInColumn:(long long)arg1;	// IMP=0x0000000000491563
- (void)preparePanelControllerForCollapse;	// IMP=0x00000000004913b6
@property(readonly, nonatomic) _Bool inCollapsingToProposedTopColumnCallback;
@property(readonly, nonatomic) _Bool lockedForDelegateCallback;
- (long long)defaultDisplayModeForSize:(struct CGSize)arg1;	// IMP=0x000000000049128b
- (long long)defaultDisplayModeForSplitBehavior:(long long)arg1;	// IMP=0x0000000000491275
- (long long)userGeneratedDisplayMode;	// IMP=0x00000000004911ae
- (void)setUserGeneratedDisplayMode:(long long)arg1;	// IMP=0x00000000004910ba
- (double)_supplementaryDividerPosition;	// IMP=0x0000000000490f5c
- (double)_primaryDividerPosition;	// IMP=0x0000000000490e10
- (_Bool)_isAnimating;	// IMP=0x0000000000490df7
- (void)_didEndSnapshotSession;	// IMP=0x0000000000490cb5
- (void)_willBeginSnapshotSession;	// IMP=0x0000000000490ad1
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;	// IMP=0x0000000000490a00
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000004909fa
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;	// IMP=0x0000000000490980
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;	// IMP=0x0000000000490906
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;	// IMP=0x000000000049087b
- (_Bool)_isRotating;	// IMP=0x00000000004907fe
@property(nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
@property(nonatomic) _Bool usesDeviceOverlayPreferences;
@property(nonatomic) _Bool prefersOverlayInRegularWidthPhone;
- (id)detailViewController;	// IMP=0x000000000049075e
- (id)masterViewController;	// IMP=0x0000000000490638
- (_Bool)_isCollapsedOrCollapsing;	// IMP=0x00000000004905ab
- (_Bool)_isCollapsed;	// IMP=0x0000000000490567
- (id)_primaryDimmingView;	// IMP=0x0000000000490539
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property(nonatomic) _Bool hidesMasterViewInPortrait;
@property(nonatomic) float gutterWidth;
- (_Bool)_isPrimaryLeading;	// IMP=0x0000000000490173
- (_Bool)_layoutPrimaryOnRight;	// IMP=0x000000000049006c
@property(nonatomic) long long primaryEdge;
@property(nonatomic) long long displayModeButtonVisibility;
@property(readonly, nonatomic) id <UIViewControllerTransitionCoordinator> transitionCoordinator;
- (void)showColumn:(long long)arg1;	// IMP=0x000000000048eda3
- (void)hideColumn:(long long)arg1;	// IMP=0x000000000048e906
- (_Bool)_allowClientAnimationCoordination;	// IMP=0x000000000048e8fe
- (id)viewControllerForColumn:(long long)arg1;	// IMP=0x000000000048e7f7
- (void)setViewController:(id)arg1 forColumn:(long long)arg2;	// IMP=0x000000000048cd75
- (long long)allowedDisplayModeForCurrentSplitBehaviorGivenDisplayMode:(long long)arg1;	// IMP=0x000000000048cce9
@property(readonly, nonatomic) long long splitBehavior;
- (long long)splitBehaviorInCurrentEnvironment;	// IMP=0x000000000048cc55
- (long long)splitBehaviorForSize:(struct CGSize)arg1;	// IMP=0x000000000048caf9
@property(nonatomic) _Bool showsSecondaryOnlyButton;
@property(nonatomic) long long style;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000048bd08
- (void)_revealSecondaryColumnIfNecessary;	// IMP=0x000000000048bb86
- (void)_unspecifiedShowDetailViewController:(id)arg1 onTargetVC:(id)arg2 sender:(id)arg3;	// IMP=0x000000000048b8cf
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000048b034
@property(readonly, nonatomic) double supplementaryColumnWidth;
- (double)primaryColumnWidth;	// IMP=0x000000000048a849
- (_Bool)_shouldReturnBoundsWidthForColumnWidth;	// IMP=0x000000000048a741
- (id)displayModeButtonItem;	// IMP=0x000000000048a3f6
- (id)_unspecifiedCompositionDisplayModeButtonItem;	// IMP=0x000000000048a3e8
- (id)_displayModeButtonItem;	// IMP=0x000000000048a3da
- (long long)displayMode;	// IMP=0x000000000048a31e
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (id)_columnStyleDelegate;	// IMP=0x000000000048a1b3
@property(copy, nonatomic) NSArray *viewControllers;
- (void)_unspecifiedStyleSetViewControllers:(id)arg1;	// IMP=0x000000000048999f
- (id)_unspecifiedStyleViewControllers;	// IMP=0x0000000000489649
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000048933a
- (void)_initWithCoder:(id)arg1;	// IMP=0x0000000000488dc3
- (void)_commonInit;	// IMP=0x0000000000488b0b
- (id)initWithSplitViewController:(id)arg1;	// IMP=0x0000000000488a9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

