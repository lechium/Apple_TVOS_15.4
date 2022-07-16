//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIRingGroupAnimation-Protocol.h>

@class CAMediaTimingFunction, MISSING_TYPE, NSString;
@protocol ARUIRingGroupAnimationDelegate;

__attribute__((visibility("hidden")))
@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation>
{
    double _percent;	// 8 = 0x8
    CDUnknownBlockType _applier;	// 16 = 0x10
    _Bool _completed;	// 24 = 0x18
    id <ARUIRingGroupAnimationDelegate> _delegate;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    MISSING_TYPE *_startValue;	// 48 = 0x30
    MISSING_TYPE *_currentValue;	// 56 = 0x38
    MISSING_TYPE *_endValue;	// 64 = 0x40
    CAMediaTimingFunction *_timingFunction;	// 72 = 0x48
}

+ (id)animationWithDuration:(double)arg1 startValue:(id)arg2 endValue:(CDUnknownBlockType)arg3 timingFunction:applier: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000dc75
- (void).cxx_destruct;	// IMP=0x000000000000dff6
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) MISSING_TYPE *endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) MISSING_TYPE *currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) MISSING_TYPE *startValue; // @synthesize startValue=_startValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <ARUIRingGroupAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeAnimation;	// IMP=0x000000000000df23
- (_Bool)isAnimating;	// IMP=0x000000000000df0c
- (void)update:(double)arg1;	// IMP=0x000000000000de4a
- (void)dealloc;	// IMP=0x000000000000ddec
- (id)initWithDuration:(double)arg1 startValue:(id)arg2 endValue:(CDUnknownBlockType)arg3 timingFunction:applier: /* Error: Ran out of types for this method. */;	// IMP=0x000000000000dd0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
