//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIRingGroupAnimation-Protocol.h>

@class CAMediaTimingFunction, NSString;
@protocol ARUIRingGroupAnimationDelegate;

__attribute__((visibility("hidden")))
@interface ARUIFloatAnimation : NSObject <ARUIRingGroupAnimation>
{
    double _percent;	// 8 = 0x8
    CDUnknownBlockType _applier;	// 16 = 0x10
    _Bool _completed;	// 24 = 0x18
    float _startValue;	// 28 = 0x1c
    float _currentValue;	// 32 = 0x20
    float _endValue;	// 36 = 0x24
    id <ARUIRingGroupAnimationDelegate> _delegate;	// 40 = 0x28
    double _duration;	// 48 = 0x30
    CAMediaTimingFunction *_timingFunction;	// 56 = 0x38
}

+ (id)animationWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(CDUnknownBlockType)arg5;	// IMP=0x0000000000012859
- (void).cxx_destruct;	// IMP=0x0000000000012bb1
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) float endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) float currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) float startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <ARUIRingGroupAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeAnimation;	// IMP=0x0000000000012ade
- (_Bool)isAnimating;	// IMP=0x0000000000012ac7
- (void)update:(double)arg1;	// IMP=0x0000000000012a2e
- (void)dealloc;	// IMP=0x00000000000129d0
- (id)initWithDuration:(double)arg1 startValue:(float)arg2 endValue:(float)arg3 timingFunction:(id)arg4 applier:(CDUnknownBlockType)arg5;	// IMP=0x00000000000128ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

