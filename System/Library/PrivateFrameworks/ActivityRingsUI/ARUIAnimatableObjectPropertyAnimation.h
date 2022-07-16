//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ARUIAnimatableObjectPropertyAnimation : NSObject
{
    CDUnknownBlockType _animationTimingFunction;	// 8 = 0x8
    double _currentAnimationTime;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

+ (id)animationWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f55a
+ (CDUnknownBlockType)linearTimingFunction;	// IMP=0x000000000000f547
+ (CDUnknownBlockType)timingFunctionForMediaTimingFunction:(id)arg1;	// IMP=0x000000000000f4a5
- (void).cxx_destruct;	// IMP=0x000000000000f743
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)callAndReleaseCompletionHandler;	// IMP=0x000000000000f6e6
- (id)valueByAddingCurrentValueToValue:(id)arg1;	// IMP=0x0000000000022335
- (_Bool)isFinishedAnimating;	// IMP=0x000000000000f662
- (void)_updateWithProgress:(float)arg1;	// IMP=0x0000000000022311
- (void)update:(double)arg1;	// IMP=0x000000000000f5fb
@property(retain, nonatomic, setter=_setCurrentValue:) id _currentValue;
@property(retain, nonatomic, setter=_setEndValue:) id _endValue;
@property(retain, nonatomic, setter=_setStartValue:) id _startValue;

@end
