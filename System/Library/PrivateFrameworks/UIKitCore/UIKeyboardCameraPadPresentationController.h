//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIDimmingView, UIView;
@protocol UIDimmingViewDelegate, _UIAssertion;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraPadPresentationController <UIViewControllerAnimatedTransitioning>
{
    id <_UIAssertion> _keyboardSuppressionAssertion;	// 8 = 0x8
    UIView *_shadowView;	// 16 = 0x10
    UIDimmingView *_dimmingView;	// 24 = 0x18
    id <UIDimmingViewDelegate> _dimmingViewDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008c784
@property(nonatomic) __weak id <UIDimmingViewDelegate> dimmingViewDelegate; // @synthesize dimmingViewDelegate=_dimmingViewDelegate;
- (void)_animatePresentTransition:(id)arg1;	// IMP=0x000000000008c0d7
- (void)_animateDismissTransition:(id)arg1;	// IMP=0x000000000008bf02
- (void)animateTransition:(id)arg1;	// IMP=0x000000000008bed6
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000008bec8
- (int)overrideTextEffectsVisibilityLevelForTransitionView:(id)arg1;	// IMP=0x000000000008bebd
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000008bad0
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x000000000008b9b2
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000008b999
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000008b95a
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000008b941
- (void)presentationTransitionWillBegin;	// IMP=0x000000000008b8b4
- (_Bool)updatesGuideDuringRotation;	// IMP=0x000000000008b8ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

