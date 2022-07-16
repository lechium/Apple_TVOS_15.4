//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAnimationSettings;
@protocol _UIBasicAnimationFactory;

@interface UIStatusBarAnimationParameters : NSObject
{
    double _duration;	// 8 = 0x8
    double _delay;	// 16 = 0x10
    long long _curve;	// 24 = 0x18
    id <_UIBasicAnimationFactory> _animationFactory;	// 32 = 0x20
    _Bool _skipFencing;	// 40 = 0x28
    double _startTime;	// 48 = 0x30
}

+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 frameInterval:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000cb17a9
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000cb1791
+ (void)animateWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cb1777
+ (id)fencingAnimation;	// IMP=0x0000000000cb169c
- (void).cxx_destruct;	// IMP=0x0000000000cb1b7c
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id <_UIBasicAnimationFactory> animationFactory; // @synthesize animationFactory=_animationFactory;
@property(nonatomic) _Bool skipFencing; // @synthesize skipFencing=_skipFencing;
@property(nonatomic) long long curve; // @synthesize curve=_curve;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) BSAnimationSettings *bsAnimationSettings;
- (_Bool)shouldAnimate;	// IMP=0x0000000000cb1a4f
- (id)initWithEmptyParameters;	// IMP=0x0000000000cb170c
- (id)initWithDefaultParameters;	// IMP=0x0000000000cb16d0
- (id)init;	// IMP=0x0000000000cb16be

@end
