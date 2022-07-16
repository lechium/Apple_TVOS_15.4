//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIAppearanceContainer-Protocol.h>
#import <UIKitCore/UIDimmingViewDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIPopoverPresentationController, UIView, UIViewController, _UIPopoverLayoutInfo, _UIPopoverView;
@protocol UIPopoverControllerDelegate;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer>
{
    id _delegate;	// 8 = 0x8
    UIViewController *_contentViewController;	// 16 = 0x10
    UIViewController *_splitParentController;	// 24 = 0x18
    _UIPopoverView *_popoverView;	// 32 = 0x20
    UIDimmingView *_dimmingView;	// 40 = 0x28
    UIView *_layoutConstraintView;	// 48 = 0x30
    struct CGRect _targetRectInEmbeddingView;	// 56 = 0x38
    UIBarButtonItem *_targetBarButtonItem;	// 88 = 0x58
    unsigned long long _requestedArrowDirections;	// 96 = 0x60
    unsigned long long _currentArrowDirection;	// 104 = 0x68
    long long _popoverBackgroundStyle;	// 112 = 0x70
    UIColor *_backgroundColor;	// 120 = 0x78
    _UIPopoverLayoutInfo *_preferredLayoutInfo;	// 128 = 0x80
    Class _popoverBackgroundViewClass;	// 136 = 0x88
    struct CGSize _popoverContentSize;	// 144 = 0x90
    struct CGRect _targetRectInDimmingView;	// 160 = 0xa0
    struct CGRect _embeddedTargetRect;	// 192 = 0xc0
    long long _popoverControllerStyle;	// 224 = 0xe0
    _Bool _ignoresKeyboardNotifications;	// 232 = 0xe8
    UIView *_currentPresentationView;	// 240 = 0xf0
    struct CGRect _currentPresentationRectInView;	// 248 = 0xf8
    unsigned long long _originalArrowDirections;	// 280 = 0x118
    unsigned int draggingChildScrollViewCount;	// 288 = 0x120
    id _target;	// 296 = 0x128
    SEL _didEndSelector;	// 304 = 0x130
    UIViewController *_modalPresentationFromViewController;	// 312 = 0x138
    UIViewController *_modalPresentationToViewController;	// 320 = 0x140
    unsigned long long _toViewAutoResizingMask;	// 328 = 0x148
    UIViewController *_slidingViewController;	// 336 = 0x150
    UIView *_presentingView;	// 344 = 0x158
    unsigned long long _presentationEdge;	// 352 = 0x160
    long long _presentationDirection;	// 360 = 0x168
    int _presentationState;	// 368 = 0x170
    _Bool _didPresentInActiveSequence;	// 372 = 0x174
    unsigned long long _slideTransitionCount;	// 376 = 0x178
    UIPanGestureRecognizer *_vendedGestureRecognizer;	// 384 = 0x180
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;	// 392 = 0x188
    UIPopoverController *_retainedSelf;	// 400 = 0x190
    NSArray *_passthroughViews;	// 408 = 0x198
    struct {
        unsigned int isPresentingModalViewController:1;
        unsigned int isPresentingActionSheet:1;
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling:1;
        unsigned int isInTextEffectsWindow:1;
        unsigned int isEmbeddingInView:1;
        unsigned int embeddedPresentationBounces:1;
        unsigned int isWaitingToPresentShimmedPopover:1;
    } _popoverControllerFlags;	// 416 = 0x1a0
    _Bool _dismissesOnRotation;	// 420 = 0x1a4
    _Bool _showsTargetRect;	// 421 = 0x1a5
    _Bool _showsOrientationMarker;	// 422 = 0x1a6
    _Bool _showsPresentationArea;	// 423 = 0x1a7
    _Bool _retainsSelfWhilePresented;	// 424 = 0x1a8
    _Bool _allowsPopoverPresentationToAdapt;	// 425 = 0x1a9
    unsigned long long _popoverArrowDirection;	// 432 = 0x1b0
    UIPopoverPresentationController *_presentationController;	// 440 = 0x1b8
    struct UIEdgeInsets _popoverLayoutMargins;	// 448 = 0x1c0
}

+ (_Bool)_forceAttemptsToAvoidKeyboard;	// IMP=0x0000000000429618
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;	// IMP=0x0000000000420073
+ (Class)_popoverViewClass;	// IMP=0x0000000000420062
+ (_Bool)_showTargetRectPref;	// IMP=0x000000000041ffc5
+ (_Bool)_useLegacyPopoverControllers;	// IMP=0x000000000041ffb5
+ (void)_setForceModernPopoverUse:(_Bool)arg1;	// IMP=0x000000000041ffa9
+ (_Bool)_popoversDisabled;	// IMP=0x000000000041fefb
- (void).cxx_destruct;	// IMP=0x000000000042baac
@property(nonatomic, getter=_allowsPopoverPresentationToAdapt, setter=_setAllowsPopoverPresentationToAdapt:) _Bool allowsPopoverPresentationToAdapt; // @synthesize allowsPopoverPresentationToAdapt=_allowsPopoverPresentationToAdapt;
@property(retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPopoverPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(nonatomic) unsigned long long popoverArrowDirection; // @synthesize popoverArrowDirection=_popoverArrowDirection;
@property(nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) unsigned long long presentationEdge; // @synthesize presentationEdge=_presentationEdge;
@property(nonatomic, getter=_presentingView, setter=_setPresentingView:) __weak UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo; // @synthesize preferredLayoutInfo=_preferredLayoutInfo;
@property(nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) _Bool retainsSelfWhilePresented; // @synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented;
@property(nonatomic) _Bool showsPresentationArea; // @synthesize showsPresentationArea=_showsPresentationArea;
@property(nonatomic) _Bool showsOrientationMarker; // @synthesize showsOrientationMarker=_showsOrientationMarker;
@property(nonatomic) _Bool showsTargetRect; // @synthesize showsTargetRect=_showsTargetRect;
@property(retain, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
@property(nonatomic) _Bool dismissesOnRotation; // @synthesize dismissesOnRotation=_dismissesOnRotation;
@property(retain, nonatomic) UIDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) __weak id <UIPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000042b919
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x000000000042b90c
- (void)_modalAnimationFinishedEndIgnoringInteractiveEvents:(_Bool)arg1;	// IMP=0x000000000042b6de
- (void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;	// IMP=0x000000000042ac92
- (id)_dimmingView;	// IMP=0x000000000042ac84
- (_Bool)_embedsInView;	// IMP=0x000000000042ac73
- (id)_managingSplitViewController;	// IMP=0x000000000042ac13
- (void)_setManagingSplitViewController:(id)arg1;	// IMP=0x000000000042ac01
- (_Bool)isPresentingOrDismissing;	// IMP=0x000000000042abc8
- (_Bool)_isDismissing;	// IMP=0x000000000042abb8
- (_Bool)_isPresenting;	// IMP=0x000000000042aba8
- (void)_containedViewControllerModalStateChanged;	// IMP=0x000000000042ab49
- (void)_stopWatchingForNotifications;	// IMP=0x000000000042ab0e
@property(nonatomic, setter=_setIgnoresKeyboardNotifications:) _Bool _ignoresKeyboardNotifications; // @dynamic _ignoresKeyboardNotifications;
- (void)_stopWatchingForScrollViewNotifications;	// IMP=0x000000000042a992
- (void)_startWatchingForScrollViewNotifications;	// IMP=0x000000000042a909
- (void)_scrollViewDidEndDragging:(id)arg1;	// IMP=0x000000000042a893
- (void)_scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000042a7c5
- (void)_stopWatchingForWindowRotations;	// IMP=0x000000000042a74a
- (void)_startWatchingForWindowRotations;	// IMP=0x000000000042a66a
- (void)_hostingWindowDidRotate:(id)arg1;	// IMP=0x000000000042a247
- (void)_hostingWindowWillRotate:(id)arg1;	// IMP=0x000000000042a1c7
- (_Bool)_canRepresentAutomatically;	// IMP=0x000000000042a122
- (void)_stopWatchingForKeyboardNotifications;	// IMP=0x000000000042a0a7
- (void)_startWatchingForKeyboardNotificationsIfNecessary;	// IMP=0x0000000000429ff2
- (void)_keyboardStateChanged:(id)arg1;	// IMP=0x0000000000429f97
- (void)_moveAwayFromTheKeyboard:(id)arg1;	// IMP=0x0000000000429ce4
- (id)_layoutInfoForCurrentKeyboardState;	// IMP=0x0000000000429c81
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;	// IMP=0x0000000000429c65
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;	// IMP=0x00000000004296f1
- (_Bool)_attemptsToAvoidKeyboard;	// IMP=0x00000000004296b5
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;	// IMP=0x0000000000429595
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;	// IMP=0x000000000042950b
- (void)_newViewControllerWasPushed:(id)arg1;	// IMP=0x000000000042945d
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(_Bool)arg2;	// IMP=0x00000000004293f2
- (void)_setGesturesEnabled:(_Bool)arg1;	// IMP=0x00000000004293ac
- (void)_swipe:(id)arg1;	// IMP=0x0000000000429020
- (_Bool)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000428e1b
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000428c83
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000004289dc
- (id)_gestureRecognizerForPresentationFromEdge:(unsigned long long)arg1;	// IMP=0x0000000000428826
- (_Bool)_allowsFocusBehindDimmingView;	// IMP=0x000000000042881e
- (void)dimmingViewWasTapped:(id)arg1;	// IMP=0x00000000004287ac
- (void)_dismissPopoverAnimated:(_Bool)arg1 stateOnly:(_Bool)arg2 notifyDelegate:(_Bool)arg3;	// IMP=0x0000000000427fad
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000000427f48
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000000427ef7
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;	// IMP=0x0000000000427e9d
- (void)_postludeForDismissal;	// IMP=0x0000000000427d78
- (CDUnknownBlockType)_completionBlockForDismissalWhenNotifyingDelegate:(_Bool)arg1;	// IMP=0x00000000004279e5
- (void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned long long)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4;	// IMP=0x000000000042793c
- (void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(struct CGRect)arg2 inView:(id)arg3 arrowDirections:(unsigned long long)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6;	// IMP=0x0000000000426ea7
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000426d21
- (long long)_popoverBackgroundStyle;	// IMP=0x0000000000426d17
- (void)_setPopoverBackgroundStyle:(long long)arg1;	// IMP=0x0000000000426cf6
- (_Bool)_manuallyHandlesContentViewControllerAppearanceCalls;	// IMP=0x0000000000426ce5
- (long long)_popoverControllerStyle;	// IMP=0x0000000000426cd8
- (void)_performHierarchyCheckOnViewController:(id)arg1;	// IMP=0x0000000000426bdd
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000426471
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1;	// IMP=0x0000000000426389
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1;	// IMP=0x00000000004261dc
- (double)_dismissalAnimationDuration;	// IMP=0x00000000004261ca
- (double)_presentationAnimationDuration;	// IMP=0x00000000004261ab
- (struct CGSize)_currentPopoverContentSize;	// IMP=0x0000000000426125
- (id)_splitParentController;	// IMP=0x000000000042610f
- (void)_setSplitParentController:(id)arg1;	// IMP=0x00000000004260fe
- (void)_setPopoverView:(id)arg1;	// IMP=0x000000000042608b
- (id)popoverView;	// IMP=0x000000000042607d
- (void)dismissPopoverAnimated:(_Bool)arg1;	// IMP=0x0000000000425eb2
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000425794
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;	// IMP=0x00000000004254b7
- (void)_presentShimmedPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000425258
- (void)_setupPresentationController;	// IMP=0x0000000000425176
- (_Bool)_shimPopoverPresentationController;	// IMP=0x000000000042512c
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000423e9b
- (_Bool)_shimPresentSlidingPopoverAnimated:(_Bool)arg1;	// IMP=0x0000000000423de8
- (struct CGPoint)_centerPointForScale:(double)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;	// IMP=0x0000000000423d56
- (void)_presentPopoverFromRect:(struct CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4;	// IMP=0x0000000000423d3e
- (void)_presentPopoverFromRect:(struct CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animate:(_Bool)arg5;	// IMP=0x0000000000422f94
- (void)_presentPopoverFromEdge:(unsigned long long)arg1 ofView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000422e28
- (void)_presentPopoverBySlidingIn:(_Bool)arg1 fromEdge:(unsigned long long)arg2 ofView:(id)arg3 animated:(_Bool)arg4 stateOnly:(_Bool)arg5 notifyDelegate:(_Bool)arg6;	// IMP=0x000000000042179b
- (void)_invalidateLayoutInfo;	// IMP=0x000000000042177b
- (void)_resetSlideTransitionCount;	// IMP=0x000000000042176a
- (void)_incrementSlideTransitionCount:(_Bool)arg1;	// IMP=0x00000000004216c9
- (unsigned long long)_slideTransitionCount;	// IMP=0x00000000004216bc
- (void)_setPresentationState:(int)arg1;	// IMP=0x00000000004215bf
- (int)_presentationState;	// IMP=0x00000000004215b3
- (Class)_defaultChromeViewClass;	// IMP=0x00000000004214f2
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;	// IMP=0x00000000004214aa
@property(copy, nonatomic) NSArray *passthroughViews;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(nonatomic) struct UIEdgeInsets popoverLayoutMargins; // @synthesize popoverLayoutMargins=_popoverLayoutMargins;
@property(readonly, nonatomic, getter=isPopoverVisible) _Bool popoverVisible;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000420c61
@property(nonatomic) struct CGSize popoverContentSize;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000042092a
- (void)setContentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000042082e
@property(retain, nonatomic) UIViewController *contentViewController;
- (void)dealloc;	// IMP=0x00000000004205d6
- (id)initWithContentViewController:(id)arg1;	// IMP=0x00000000004205c2
- (id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(long long)arg2;	// IMP=0x00000000004201f6
- (id)init;	// IMP=0x00000000004201b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

