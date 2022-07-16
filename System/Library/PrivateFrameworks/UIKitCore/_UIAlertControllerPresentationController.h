//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <UIKitCore/UIForcePresentationController-Protocol.h>

@class NSLayoutConstraint, NSString, UIAlertVisualStyleUpdatableConstraints, UIGestureRecognizer, UIView, _UIKeyboardLayoutAlignmentView;
@protocol _UIForcePresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerPresentationController <UIAdaptivePresentationControllerDelegate, UIForcePresentationController>
{
    UIView *_dimmingView;	// 8 = 0x8
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;	// 16 = 0x10
    UIView *keyboardLayoutAlignmentAvailableSpaceView;	// 24 = 0x18
    UIAlertVisualStyleUpdatableConstraints *_visualStyleUpdatableConstraints;	// 32 = 0x20
    NSLayoutConstraint *_topAvailableSpaceConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bottomAvailableSpaceConstraint;	// 48 = 0x30
    _Bool constraintsPrepared;	// 56 = 0x38
    _Bool _sourceViewSnapshotAndScaleTransformSuppressed;	// 57 = 0x39
    _Bool _chromeHidden;	// 58 = 0x3a
    _Bool __isCurrentContext;	// 59 = 0x3b
    _Bool __shouldRespectNearestCurrentContextPresenter;	// 60 = 0x3c
    UIGestureRecognizer *_panningGestureRecognizer;	// 64 = 0x40
    CDUnknownBlockType _presentationPhaseCompletionBlock;	// 72 = 0x48
    id <_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;	// 80 = 0x50
    UIView *_revealContainerView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000053fa4
@property(setter=_setShouldRespectNearestCurrentContextPresenter:) _Bool _shouldRespectNearestCurrentContextPresenter; // @synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter;
@property(setter=_setIsCurrentContext:) _Bool _isCurrentContext; // @synthesize _isCurrentContext=__isCurrentContext;
@property(nonatomic, getter=_isChromeHidden, setter=_setChromeHidden:) _Bool _chromeHidden; // @synthesize _chromeHidden;
@property(nonatomic) _Bool _sourceViewSnapshotAndScaleTransformSuppressed; // @synthesize _sourceViewSnapshotAndScaleTransformSuppressed;
@property(readonly, nonatomic) UIView *_revealContainerView; // @synthesize _revealContainerView;
@property(nonatomic) __weak id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; // @synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate;
@property(copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock; // @synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock;
@property(retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // @synthesize panningGestureRecognizer=_panningGestureRecognizer;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
- (id)_presentedAlertController;	// IMP=0x0000000000053d31
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;	// IMP=0x0000000000053d29
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x0000000000053d1c
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000053c5d
- (id)_createVisualStyleForProvider:(id)arg1;	// IMP=0x0000000000053bd7
- (void)_presentedAlertControllerDidAdapt;	// IMP=0x0000000000053b73
- (void)_updateConstraintsIfNecessary;	// IMP=0x0000000000053952
- (void)_prepareConstraintsIfNecessary;	// IMP=0x00000000000532a5
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000531dd
- (_Bool)_shouldOccludeDuringPresentation;	// IMP=0x000000000005316f
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;	// IMP=0x000000000005315a
- (_Bool)_preserveResponderAcrossWindows;	// IMP=0x00000000000530ec
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000052eb8
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;	// IMP=0x0000000000052e56
- (void)_prepareDimmingViewIfNecessary;	// IMP=0x0000000000052c3b
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;	// IMP=0x0000000000052c05
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000052a9d
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x0000000000052a8b
- (_Bool)shouldPresentInFullscreen;	// IMP=0x0000000000052a76
- (void)containerViewDidLayoutSubviews;	// IMP=0x00000000000529c3
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000052988
- (long long)adaptivePresentationStyle;	// IMP=0x000000000005297d
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000005286b
- (_Bool)_canCommitPresentation;	// IMP=0x0000000000052863
- (_Bool)_canDismissPresentation;	// IMP=0x00000000000527c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
