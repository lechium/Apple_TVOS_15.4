//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

@interface _SBInstallProgressStateTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    long long _fromState;	// 32 = 0x20
    long long _toState;	// 40 = 0x28
    double _fraction;	// 48 = 0x30
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0040000000048896
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x001000000004884e
- (void).cxx_destruct;	// IMP=0x0020000000048b31
- (void)_updateView:(id)arg1;	// IMP=0x0010000000048ab9
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x0010000000048a96
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0010000000048a6f
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x00100000000489c7
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000048908

@end
