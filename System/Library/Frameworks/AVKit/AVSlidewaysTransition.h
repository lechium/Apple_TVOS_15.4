//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <AVKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UISpringTimingParameters;

__attribute__((visibility("hidden")))
@interface AVSlidewaysTransition : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UISpringTimingParameters *_springTimingParameters;	// 8 = 0x8
    _Bool _shouldMovePresentingViewInParallel;	// 16 = 0x10
    long long _transitionDirection;	// 24 = 0x18
}

+ (id)viewPropertyAnimatorWithParameters:(id)arg1;	// IMP=0x00000000000d6e25
+ (id)springTimingParameters;	// IMP=0x00000000000d6dde
- (void).cxx_destruct;	// IMP=0x00000000000d76d2
@property(nonatomic) _Bool shouldMovePresentingViewInParallel; // @synthesize shouldMovePresentingViewInParallel=_shouldMovePresentingViewInParallel;
@property(nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000000d76a6
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000d718d
- (struct CGRect)finalFrameForViewController:(id)arg1;	// IMP=0x00000000000d712e
- (struct CGRect)initialFrameForViewController:(id)arg1;	// IMP=0x00000000000d7036
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000d6fb3
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000d6f8e
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000000d6f50
- (void)prepareViewController:(id)arg1 forTransitionInDirection:(long long)arg2;	// IMP=0x00000000000d6eb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

