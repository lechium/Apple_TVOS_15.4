//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import <AVKit/AVTransportBarObserver-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AVFocusTensionGestureRecognizer : UIPanGestureRecognizer <AVTransportBarObserver>
{
    double _lastTouchesBeganTime;	// 8 = 0x8
    _Bool _isTransportBarAnimatingVisibility;	// 16 = 0x10
    _Bool _isTransportBarFullyVisible;	// 17 = 0x11
    NSNumber *_xThreshold;	// 24 = 0x18
    NSNumber *_yThreshold;	// 32 = 0x20
    _Bool _hasExceededXThreshold;	// 40 = 0x28
    _Bool _hasExceededYThreshold;	// 41 = 0x29
    _Bool _isTouching;	// 42 = 0x2a
    unsigned long long _blockedSwipeDirection;	// 48 = 0x30
    struct CGPoint _tension;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000619a7
@property(nonatomic) unsigned long long blockedSwipeDirection; // @synthesize blockedSwipeDirection=_blockedSwipeDirection;
@property(nonatomic, setter=_setTension:) struct CGPoint tension; // @synthesize tension=_tension;
@property(nonatomic, setter=_setTouching:) _Bool isTouching; // @synthesize isTouching=_isTouching;
- (void)didHideTransportBarAnimated:(_Bool)arg1;	// IMP=0x0000000000061924
- (void)willHideTransportBarAnimated:(_Bool)arg1;	// IMP=0x0000000000061909
- (void)didShowTransportBarAnimated:(_Bool)arg1;	// IMP=0x00000000000618ed
- (void)willShowTransportBarAnimated:(_Bool)arg1;	// IMP=0x00000000000618dd
- (_Bool)hasExceededThresholdForAxis:(unsigned long long)arg1;	// IMP=0x000000000006189e
- (void)setThreshold:(double)arg1 forAxis:(unsigned long long)arg2;	// IMP=0x00000000000617c5
- (void)reset;	// IMP=0x0000000000061765
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000616bb
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000061611
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000061179
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006109b
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000060fbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

