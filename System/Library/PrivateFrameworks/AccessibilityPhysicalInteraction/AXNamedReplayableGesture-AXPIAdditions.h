//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/AXNamedReplayableGesture.h>

@interface AXNamedReplayableGesture (AXPIAdditions)
+ (void)_addFingerPoints:(id)arg1 toReplayableGesture:(id)arg2 atTime:(double)arg3;	// IMP=0x000000000000dd43
+ (void)_addAllFingerPointsForPoint:(struct CGPoint)arg1 numberOfFingers:(unsigned long long)arg2 toReplayableGesture:(id)arg3 atTime:(double)arg4;	// IMP=0x000000000000dca1
+ (id)_pinchGestureWithCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 radiusDelta:(double)arg3 angleDelta:(double)arg4 startingWidth:(double)arg5;	// IMP=0x000000000000d471
+ (id)rotateLeftGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000d44e
+ (id)rotateRightGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000d42b
+ (id)pinchOutGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000d403
+ (id)pinchInGestureWithPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000000d3db
+ (id)forceTouchGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000d1eb
+ (id)scrollGestureFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x000000000000cfb5
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3 initialHoldDuration:(double)arg4;	// IMP=0x000000000000cabf
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000caaa
+ (id)flickGestureStartingAtPoint:(struct CGPoint)arg1 endingAtPoint:(struct CGPoint)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000c9ac
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000c940
+ (id)holdGestureAtPoint:(struct CGPoint)arg1 withDuration:(double)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000c70a
+ (id)longPressGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000c6eb
+ (id)_tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3 force:(double)arg4;	// IMP=0x000000000000c445
+ (id)tapGestureAtPoint:(struct CGPoint)arg1 isDoubleTap:(_Bool)arg2 numberOfFingers:(unsigned long long)arg3;	// IMP=0x000000000000c42d
+ (id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2;	// IMP=0x000000000000c416
+ (id)flickGestureAtPoint:(struct CGPoint)arg1 angle:(double)arg2;	// IMP=0x000000000000c3ff
+ (id)tapGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000000c3e6
@end

