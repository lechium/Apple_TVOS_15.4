//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer
{
    unsigned char _systemGestureGateType;	// 16 = 0x10
    unsigned int _systemGesturesRecognitionPossible:1;	// 17 = 0x11
    unsigned int _waitingForSystemGestureStateNotification:1;	// 17 = 0x11
    double _lastTouchTime;	// 24 = 0x18
    NSTimer *_delayTimeoutTimer;	// 32 = 0x20
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x00000000006e9af0
- (id)_gateGestureTypeString;	// IMP=0x00000000006ea0e1
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000006ea0db
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000006ea0d3
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x00000000006ea0be
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x00000000006ea098
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006ea086
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006e9dd0
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006e9af8
- (void)_timeOut;	// IMP=0x00000000006e9ab3
- (void)_systemGestureStateChanged:(id)arg1;	// IMP=0x00000000006e99bc
- (void)_resetGestureRecognizer;	// IMP=0x00000000006e9915
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;	// IMP=0x00000000006e97c6
- (void)setDelaysTouchesEnded:(_Bool)arg1;	// IMP=0x00000000006e968e
- (void)setDelaysTouchesBegan:(_Bool)arg1;	// IMP=0x00000000006e9556
- (void)dealloc;	// IMP=0x00000000006e94cc
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;	// IMP=0x00000000006e93e2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006e93b3
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000006e9384

@end
