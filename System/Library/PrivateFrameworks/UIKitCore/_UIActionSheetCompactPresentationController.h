//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _UIAnimationCoordinator, _UIDimmingKnockoutBackdropView;
@protocol UIActionSheetPresentationControllerDismissActionView, UIActionSheetPresentationControllerVisualStyle, _UIActionSheetCompactPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIActionSheetCompactPresentationController
{
    _Bool _avoidsKeyboardDisabled;	// 8 = 0x8
    _Bool _shouldAdoptPresentedAppearance;	// 9 = 0x9
    _Bool _hasPendingAnimatedLayout;	// 10 = 0xa
    id <_UIActionSheetCompactPresentationControllerDelegate> _actionSheetDelegate;	// 16 = 0x10
    UIView<UIActionSheetPresentationControllerDismissActionView> *_dismissActionView;	// 24 = 0x18
    UILongPressGestureRecognizer *_dismissActionViewGestureRecognizer;	// 32 = 0x20
    UITapGestureRecognizer *_dimmingViewDismissTapGestureRecognizer;	// 40 = 0x28
    UIView *_dimmingView;	// 48 = 0x30
    _UIDimmingKnockoutBackdropView *_backdropView;	// 56 = 0x38
    _UIAnimationCoordinator *_animationCoordinator;	// 64 = 0x40
    id <UIActionSheetPresentationControllerVisualStyle> _visualStyle;	// 72 = 0x48
    double _pseudoAlertPreferredTop;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000379c7a
@property(nonatomic) _Bool hasPendingAnimatedLayout; // @synthesize hasPendingAnimatedLayout=_hasPendingAnimatedLayout;
@property(nonatomic) double pseudoAlertPreferredTop; // @synthesize pseudoAlertPreferredTop=_pseudoAlertPreferredTop;
@property(retain, nonatomic) id <UIActionSheetPresentationControllerVisualStyle> visualStyle; // @synthesize visualStyle=_visualStyle;
@property(retain, nonatomic) _UIAnimationCoordinator *animationCoordinator; // @synthesize animationCoordinator=_animationCoordinator;
@property(retain, nonatomic) _UIDimmingKnockoutBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer; // @synthesize dimmingViewDismissTapGestureRecognizer=_dimmingViewDismissTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer; // @synthesize dismissActionViewGestureRecognizer=_dismissActionViewGestureRecognizer;
@property(retain, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
@property(nonatomic) _Bool shouldAdoptPresentedAppearance; // @synthesize shouldAdoptPresentedAppearance=_shouldAdoptPresentedAppearance;
@property(nonatomic) __weak id <_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property(nonatomic) _Bool avoidsKeyboardDisabled; // @synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled;
- (double)_resizeAnimationDuration;	// IMP=0x0000000000379ab8
- (struct CGSize)_minimumSizeForDismissButton;	// IMP=0x0000000000379a28
- (_Bool)_shouldDisableAvoidsKeyboard;	// IMP=0x000000000037992e
- (CDStruct_758ece87)_currentLayoutGeometry;	// IMP=0x0000000000379748
- (void)_handleDismiss:(id)arg1;	// IMP=0x0000000000379626
- (void)_dismiss;	// IMP=0x000000000037953f
@property(nonatomic) _Bool dismissActionUsesShorterHeightWhenCompactVertically;
- (void)endPseudoAlertPresentationMode;	// IMP=0x00000000003793a6
- (void)beginPseudoAlertPresentationMode;	// IMP=0x0000000000379281
@property(copy, nonatomic) NSString *dismissActionTitle;
- (void)_updateForKeyboardStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(long long)arg4;	// IMP=0x0000000000378f62
- (void)_keyboardChanged:(id)arg1;	// IMP=0x0000000000378d48
- (void)_unsubscribeFromKeyboardNotifications;	// IMP=0x0000000000378c7a
- (void)_subscribeToKeyboardNotifications;	// IMP=0x0000000000378ba5
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000378759
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000378666
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;	// IMP=0x0000000000378611
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000378305
- (struct CGSize)preferredContentSize;	// IMP=0x00000000003782cc
- (void)_applyVisualAffordancesToViews;	// IMP=0x0000000000378224
- (void)_layoutViews;	// IMP=0x0000000000378019
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;	// IMP=0x0000000000377ffa
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x0000000000377e81
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000377e3d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000377d1f
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;	// IMP=0x0000000000377b3b
- (_Bool)_shouldOccludeDuringPresentation;	// IMP=0x0000000000377b33
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;	// IMP=0x0000000000377b2b
- (_Bool)shouldPresentInFullscreen;	// IMP=0x0000000000377ad9
- (void)dealloc;	// IMP=0x0000000000377a64
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3;	// IMP=0x00000000003777e0

@end
