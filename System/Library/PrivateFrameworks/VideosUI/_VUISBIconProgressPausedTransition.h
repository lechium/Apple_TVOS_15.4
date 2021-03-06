//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _VUISBIconProgressPausedTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    _Bool _toPaused;	// 32 = 0x20
    double _fraction;	// 40 = 0x28
}

+ (id)newTransitionToPaused:(_Bool)arg1;	// IMP=0x000000000004a13d
- (void)_updateElapsedTimeFromFraction;	// IMP=0x000000000004a470
- (void)_updateTimingFunction;	// IMP=0x000000000004a40f
- (void)_updateView:(id)arg1;	// IMP=0x000000000004a33d
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x000000000004a31a
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x000000000004a2f3
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x000000000004a272
- (void)updateToPaused:(_Bool)arg1;	// IMP=0x000000000004a217
- (void)dealloc;	// IMP=0x000000000004a1d5
- (id)_initToPaused:(_Bool)arg1;	// IMP=0x000000000004a162

@end

