//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface AVDigitizerTouchGestureRecognizer : UIPanGestureRecognizer
{
    NSPointerArray *_touchTargets;	// 8 = 0x8
    _Bool _touching;	// 16 = 0x10
    _Bool _cancelled;	// 17 = 0x11
    long long _touchPositionAtStart;	// 24 = 0x18
    double _timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved;	// 32 = 0x20
    struct CGPoint _digitizerLocation;	// 40 = 0x28
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x000000000006e3bf
- (void).cxx_destruct;	// IMP=0x000000000006e3ac
@property(readonly, nonatomic) double timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved; // @synthesize timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved=_timeIntervalSinceReferenceDateOfMostRecentTouchBeganOrMoved;
@property(nonatomic) long long touchPositionAtStart; // @synthesize touchPositionAtStart=_touchPositionAtStart;
@property(nonatomic, getter=wasCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isTouching) _Bool touching; // @synthesize touching=_touching;
@property(readonly, nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
- (void)_updateDigitizerLocationWithEvent:(id)arg1;	// IMP=0x000000000006e299
- (void)reset;	// IMP=0x000000000006e12b
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006e057
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006df03
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006ddb8
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006db34
- (void)_forwardToSelector:(SEL)arg1 touches:(id)arg2 event:(id)arg3;	// IMP=0x000000000006d9b6
@property(readonly, nonatomic) _Bool isTouchingStatusDubious;
@property(readonly, nonatomic) double timeIntervalSinceMostRecentTouchMovement;
- (id)_viewForTouchEventForwarding;	// IMP=0x000000000006d7b5
@property(readonly, nonatomic) long long avTouchPosition; // @dynamic avTouchPosition;
- (void)removeTouchesTarget:(id)arg1;	// IMP=0x000000000006d708
- (void)addTouchesTarget:(id)arg1;	// IMP=0x000000000006d60d
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000006d5a7

@end

