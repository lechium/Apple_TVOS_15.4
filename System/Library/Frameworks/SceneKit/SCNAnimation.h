//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimation-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNTimingFunction;

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding>
{
    struct __C3DAnimation *_animationRef;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    double _repeatCount;	// 32 = 0x20
    double _timeOffset;	// 40 = 0x28
    double _beginTime;	// 48 = 0x30
    _Bool _autoreverses;	// 56 = 0x38
    _Bool _removedOnCompletion;	// 57 = 0x39
    _Bool _applyOnCompletion;	// 58 = 0x3a
    _Bool _additive;	// 59 = 0x3b
    _Bool _cumulative;	// 60 = 0x3c
    _Bool _usesSceneTimeBase;	// 61 = 0x3d
    _Bool _fillForward;	// 62 = 0x3e
    _Bool _fillBackward;	// 63 = 0x3f
    SCNTimingFunction *_timingFunction;	// 64 = 0x40
    NSArray *_animationEvents;	// 72 = 0x48
    double _fadeInDuration;	// 80 = 0x50
    double _fadeOutDuration;	// 88 = 0x58
    CDUnknownBlockType _animationDidStart;	// 96 = 0x60
    CDUnknownBlockType _animationDidStop;	// 104 = 0x68
    NSMutableDictionary *_userInfo;	// 112 = 0x70
    id _caAnimationCache;	// 120 = 0x78
    id _userAnimation;	// 128 = 0x80
    _Bool _didMutate;	// 136 = 0x88
}

+ (id)animationWithCAAnimation:(id)arg1;	// IMP=0x00000000001bf369
+ (id)animationWithContentsOfURL:(id)arg1;	// IMP=0x00000000001bf1cf
+ (id)animationFromScene:(id)arg1;	// IMP=0x00000000001bee10
+ (id)animationNamed:(id)arg1;	// IMP=0x00000000001bed7b
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001bed73
+ (id)animationWithC3DAnimation:(struct __C3DAnimation *)arg1;	// IMP=0x00000000001be2bb
+ (id)animationWithMDLTransform:(id)arg1;	// IMP=0x0000000000013d4e
- (id)subAnimations;	// IMP=0x00000000001c0e22
- (void)_optimizeKeyframesWithTarget:(id)arg1;	// IMP=0x00000000001c0d14
@property(readonly, copy) NSString *description;
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000001c0ca3
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000001c0c52
@property(nonatomic, getter=isCumulative) _Bool cumulative;
@property(nonatomic, getter=isAdditive) _Bool additive;
@property(nonatomic) double blendOutDuration;
- (void)setFadeOutDuration:(double)arg1;	// IMP=0x00000000001c09b0
- (double)fadeOutDuration;	// IMP=0x00000000001c09a5
@property(nonatomic) double blendInDuration;
- (double)fadeInDuration;	// IMP=0x00000000001c08e2
- (void)setFadeInDuration:(double)arg1;	// IMP=0x00000000001c08d0
@property(copy, nonatomic) NSArray *animationEvents;
@property(copy, nonatomic) CDUnknownBlockType animationDidStop;
@property(copy, nonatomic) CDUnknownBlockType animationDidStart;
@property(nonatomic, getter=isAppliedOnCompletion) _Bool appliedOnCompletion;
@property(nonatomic, getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property(retain, nonatomic) SCNTimingFunction *timingFunction;
@property(nonatomic) _Bool fillsBackward;
@property(nonatomic) _Bool fillsForward;
@property(nonatomic) _Bool usesSceneTimeBase;
@property(nonatomic) _Bool autoreverses;
@property(nonatomic) double startDelay;
@property(nonatomic) double timeOffset;
- (void)setRepeatDuration:(double)arg1;	// IMP=0x00000000001bfa12
- (double)repeatDuration;	// IMP=0x00000000001bf9c9
@property(nonatomic) double repeatCount;
@property(nonatomic) double duration;
- (void)_didMutate;	// IMP=0x00000000001bf855
@property(copy, nonatomic) NSString *keyPath;
- (const void *)__CFObject;	// IMP=0x00000000001bf76a
- (id)caAnimation;	// IMP=0x00000000001bf4dc
- (id)userAnimation;	// IMP=0x00000000001bf4c8
- (void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2;	// IMP=0x00000000001bf39f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001be999
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001be604
- (void)_syncObjCModel;	// IMP=0x00000000001be489
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001be351
- (struct __C3DAnimation *)animationRef;	// IMP=0x00000000001be347
- (void)_setAnimationRef:(struct __C3DAnimation *)arg1;	// IMP=0x00000000001be2f1
- (id)initWithCAAnimation:(id)arg1;	// IMP=0x00000000001be05d
- (id)initWithC3DAnimation:(struct __C3DAnimation *)arg1;	// IMP=0x00000000001bdfeb
- (void)dealloc;	// IMP=0x00000000001bdf40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

