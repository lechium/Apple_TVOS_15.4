//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSString, NSTimer, PXScrollViewController;

@interface PXScrollViewSpeedometer <PXScrollViewControllerObserver>
{
    _Bool _hasRampedUpForCurrentAnimatedScroll;	// 8 = 0x8
    PXScrollViewController *_scrollViewController;	// 16 = 0x10
    long long _regime;	// 24 = 0x18
    long long _previousRegime;	// 32 = 0x20
    double __lastTime;	// 40 = 0x28
    NSTimer *__timeoutTimer;	// 48 = 0x30
    long long __nextRegime;	// 56 = 0x38
    long long __nextRegimeCount;	// 64 = 0x40
    struct CGPoint _scrollVelocity;	// 72 = 0x48
    struct CGPoint _lastScrollDirection;	// 88 = 0x58
    struct CGPoint _scrollAcceleration;	// 104 = 0x68
    struct CGRect __lastVisibleRect;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000873264
@property(nonatomic) _Bool hasRampedUpForCurrentAnimatedScroll; // @synthesize hasRampedUpForCurrentAnimatedScroll=_hasRampedUpForCurrentAnimatedScroll;
@property(nonatomic) struct CGPoint scrollAcceleration; // @synthesize scrollAcceleration=_scrollAcceleration;
@property(nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount; // @synthesize _nextRegimeCount=__nextRegimeCount;
@property(nonatomic, setter=_setNextRegime:) long long _nextRegime; // @synthesize _nextRegime=__nextRegime;
@property(retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property(nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property(nonatomic, setter=_setLastVisibleRect:) struct CGRect _lastVisibleRect; // @synthesize _lastVisibleRect=__lastVisibleRect;
@property(nonatomic) struct CGPoint lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(readonly, nonatomic) long long previousRegime; // @synthesize previousRegime=_previousRegime;
@property(readonly, nonatomic) long long regime; // @synthesize regime=_regime;
@property(nonatomic) struct CGPoint scrollVelocity; // @synthesize scrollVelocity=_scrollVelocity;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
- (void)_handleTimeoutTimer:(id)arg1;	// IMP=0x000000000087309a
- (void)_rescheduleTimeout;	// IMP=0x0000000000872f8a
- (void)_handleScrubbingTimeout;	// IMP=0x0000000000872eb5
- (void)_scheduleScrubbingTimeout;	// IMP=0x0000000000872dc0
- (double)fastUpperThreshold;	// IMP=0x0000000000872db2
- (double)fastLowerThreshold;	// IMP=0x0000000000872da4
- (double)mediumUpperThreshold;	// IMP=0x0000000000872d96
- (double)mediumLowerThreshold;	// IMP=0x0000000000872d88
- (void)_setPreviousRegime:(long long)arg1;	// IMP=0x0000000000872d18
- (void)_setRegime:(long long)arg1;	// IMP=0x0000000000872cbd
- (void)_handleScrollEvent:(id)arg1 didScrollingEnd:(_Bool)arg2;	// IMP=0x00000000008729b4
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000087299d
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;	// IMP=0x0000000000872989
- (void)scrollViewControllerDidEndScrolling:(id)arg1;	// IMP=0x0000000000872972
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x000000000087295e
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;	// IMP=0x0000000000872958
- (void)_updateScrollRegime;	// IMP=0x00000000008724a9
- (void)didPerformChanges;	// IMP=0x0000000000872468
@property(readonly, copy) NSString *description;
- (id)mutableChangeObject;	// IMP=0x0000000000872335
- (id)init;	// IMP=0x00000000008722a3
- (id)initWithScrollController:(id)arg1;	// IMP=0x0000000000872222

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

