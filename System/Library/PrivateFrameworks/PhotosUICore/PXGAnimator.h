//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGAnimationDataStore, PXGAnimatorLayout, PXGIndexSetArray, PXGSpriteDataStore;

@interface PXGAnimator : NSObject
{
    PXGAnimationDataStore *_animationDataStore;	// 8 = 0x8
    PXGAnimatorLayout *_animatorLayout;	// 16 = 0x10
    double _lastUpdateTime;	// 24 = 0x18
    unsigned int _numberOfProlongatedSprites;	// 32 = 0x20
    PXGIndexSetArray *_spriteIndexesByGroupIndex;	// 40 = 0x28
    PXGSpriteDataStore *_doubleSidedSpriteDataStore;	// 48 = 0x30
    PXGSpriteDataStore *_oldAnimationPresentationSpriteDataStore;	// 56 = 0x38
    _Bool _isSkippingAnimations;	// 64 = 0x40
    _Bool _animating;	// 65 = 0x41
    double _speed;	// 72 = 0x48
    long long _computeCount;	// 80 = 0x50
    long long _preferredFramesPerSecond;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000005954c
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(readonly, nonatomic) long long computeCount; // @synthesize computeCount=_computeCount;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_stopAllAnimations;	// IMP=0x00000000000593a9
@property(readonly, nonatomic) unsigned int highFrameRateReason;
@property(readonly, nonatomic) _Bool hasCriticalAnimations;
- (void)retargetAnimationsAfterStartTime:(double)arg1 newStartTime:(double)arg2;	// IMP=0x0000000000059150
- (void)computeAnimationStateForTime:(double)arg1 inputSpriteDataStore:(id)arg2 inputChangeDetails:(id)arg3 inputLayout:(id)arg4 viewportShift:(struct CGPoint)arg5 animationPresentationSpriteDataStore:(id)arg6 animationTargetSpriteDataStore:(id)arg7 animationChangeDetails:(out id *)arg8 animationLayout:(out id *)arg9;	// IMP=0x000000000005536e
- (id)_animationByAnimationIndexForAnimations:(id)arg1;	// IMP=0x0000000000055291
- (void)dealloc;	// IMP=0x00000000000551d6
- (id)init;	// IMP=0x0000000000055129

@end

