//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioningEx-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class NSString, NSUUID, UIColor, UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;
@protocol UIViewControllerContextTransitioning;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx>
{
    NSUUID *_currentRunningAnimationsUUID;	// 8 = 0x8
    NSUUID *_currentTrackingAnimatorsAnimationsUUID;	// 16 = 0x10
    _Bool _interactionAborted;	// 24 = 0x18
    _Bool _clipUnderlapWhileTransitioning;	// 25 = 0x19
    _Bool __shouldReverseLayoutDirection;	// 26 = 0x1a
    long long _operation;	// 32 = 0x20
    id <UIViewControllerContextTransitioning> _transitionContext;	// 40 = 0x28
    _UINavigationInteractiveTransitionBase *_interactionController;	// 48 = 0x30
    _UIParallaxDimmingView *_borderDimmingView;	// 56 = 0x38
    _UIParallaxDimmingView *_contentDimmingView;	// 64 = 0x40
    UIView *_containerFromView;	// 72 = 0x48
    UIView *_containerToView;	// 80 = 0x50
    UIView *_clipUnderView;	// 88 = 0x58
    long long _transitionStyle;	// 96 = 0x60
    double _transitionGap;	// 104 = 0x68
    UIColor *_overrideDimmingColor;	// 112 = 0x70
}

+ (double)defaultSlidingTransitionDuration;	// IMP=0x00000000004fcfb7
+ (void)setDefaultSlidingTransitionDuration:(double)arg1;	// IMP=0x00000000004fcfa9
- (void).cxx_destruct;	// IMP=0x000000000050062a
@property(retain, nonatomic) UIColor *overrideDimmingColor; // @synthesize overrideDimmingColor=_overrideDimmingColor;
@property(nonatomic, setter=_setShouldReverseLayoutDirection:) _Bool _shouldReverseLayoutDirection; // @synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection;
@property(nonatomic) double transitionGap; // @synthesize transitionGap=_transitionGap;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) _Bool clipUnderlapWhileTransitioning; // @synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning;
@property(retain, nonatomic) UIView *clipUnderView; // @synthesize clipUnderView=_clipUnderView;
@property(retain, nonatomic) UIView *containerToView; // @synthesize containerToView=_containerToView;
@property(retain, nonatomic) UIView *containerFromView; // @synthesize containerFromView=_containerFromView;
@property(retain, nonatomic) _UIParallaxDimmingView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property(retain, nonatomic) _UIParallaxDimmingView *borderDimmingView; // @synthesize borderDimmingView=_borderDimmingView;
@property(nonatomic) _UINavigationInteractiveTransitionBase *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) _Bool interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void)_stopTransitionImmediately;	// IMP=0x0000000000500109
- (id)_timingFunctionForAnimation;	// IMP=0x00000000005000d0
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000004fff6b
- (void)completeKeyboard:(id)arg1;	// IMP=0x00000000004ffe98
- (void)animateKeyboard:(id)arg1;	// IMP=0x00000000004ff765
- (void)prepareToAnimateKeyboard:(id)arg1;	// IMP=0x00000000004ff006
- (void)resizeShadow:(id)arg1;	// IMP=0x00000000004fef0b
- (id)shadowContainerForKeyboardTransition:(id)arg1;	// IMP=0x00000000004fee84
- (void)animateTransition:(id)arg1;	// IMP=0x00000000004fd0c3
- (double)parallaxOffset;	// IMP=0x00000000004fd027
- (double)gapBetweenViews;	// IMP=0x00000000004fd010
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000004fcfd3
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000004fcfc5
- (id)resizedFromContainerView;	// IMP=0x00000000004fcd52
- (id)resizedToContainerView;	// IMP=0x00000000004fcafb
- (id)initWithCurrentOperation:(long long)arg1;	// IMP=0x00000000004fca6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

