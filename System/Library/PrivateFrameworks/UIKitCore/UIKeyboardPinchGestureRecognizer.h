//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet;
@protocol UIKeyboardPinchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardPinchGestureRecognizer
{
    id <UIKeyboardPinchGestureRecognizerDelegate> _pinchDelegate;	// 8 = 0x8
    _Bool _pinchDetected;	// 16 = 0x10
    double _initialPinchSeparation;	// 24 = 0x18
    double _pinchSeparationValues[4];	// 32 = 0x20
    NSMutableSet *_activeTouches;	// 64 = 0x40
    NSMutableDictionary *_initialTouchPoints;	// 72 = 0x48
    double _beginPinchTimestamp;	// 80 = 0x50
}

@property(readonly, nonatomic) double initialPinchSeparation; // @synthesize initialPinchSeparation=_initialPinchSeparation;
@property(readonly, nonatomic) _Bool pinchDetected; // @synthesize pinchDetected=_pinchDetected;
@property(nonatomic) id <UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate; // @synthesize pinchDelegate=_pinchDelegate;
- (double)finalProgressForInitialProgress:(double)arg1;	// IMP=0x0000000000a0c55b
- (void)interpretTouchesForSplit;	// IMP=0x0000000000a0c151
- (void)resetPinchCalculations;	// IMP=0x0000000000a0c129
- (void)reset;	// IMP=0x0000000000a0c09c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a0beac
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a0bba4
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a0bb1b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a0b8cd
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000a0b8c5
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000a0b8bd
- (void)dealloc;	// IMP=0x0000000000a0b865
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000a0b7c9

@end
