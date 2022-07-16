//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/RCPCrownEventStreamComposer-Protocol.h>
#import <Recap/RCPEventStreamComposer-Protocol.h>
#import <Recap/RCPFluidSwipeGesturesEventStreamComposer-Protocol.h>
#import <Recap/RCPPointerEventStreamComposer-Protocol.h>

@class NSMutableArray, NSString, RCPEventSenderProperties, RCPPointerTrackingChildEventStream;

@interface RCPSyntheticEventStream <RCPEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPCrownEventStreamComposer, RCPPointerEventStreamComposer>
{
    NSMutableArray *_processingEventBuffer;	// 8 = 0x8
    double _currentTimeOffset;	// 16 = 0x10
    long long _generationCount;	// 24 = 0x18
    unsigned int _transducerType;	// 32 = 0x20
    long long _touchFrequency;	// 40 = 0x28
    double _pointerFrequency;	// 48 = 0x30
    RCPEventSenderProperties *_senderProperties;	// 56 = 0x38
    CDStruct_a6702499 *_activePoints;	// 64 = 0x40
    unsigned long long _activePointCount;	// 72 = 0x48
    double _gsScreenScaleFactor;	// 80 = 0x50
    RCPPointerTrackingChildEventStream *_pointerChildEventStream;	// 88 = 0x58
    struct CGSize _screenSize;	// 96 = 0x60
    struct CGSize _gsScreenPointSize;	// 112 = 0x70
}

+ (id)eventStreamWithEventActions:(CDUnknownBlockType)arg1;	// IMP=0x00000000000183d4
+ (id)eventStreamWithCLIArguments:(id)arg1;	// IMP=0x00000000000159c6
- (void).cxx_destruct;	// IMP=0x000000000001ce8a
@property(retain, nonatomic) RCPPointerTrackingChildEventStream *pointerChildEventStream; // @synthesize pointerChildEventStream=_pointerChildEventStream;
@property(nonatomic) unsigned int transducerType; // @synthesize transducerType=_transducerType;
@property(nonatomic) double gsScreenScaleFactor; // @synthesize gsScreenScaleFactor=_gsScreenScaleFactor;
@property(nonatomic) struct CGSize gsScreenPointSize; // @synthesize gsScreenPointSize=_gsScreenPointSize;
@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) unsigned long long activePointCount; // @synthesize activePointCount=_activePointCount;
@property(readonly, nonatomic) CDStruct_a6702499 *activePoints; // @synthesize activePoints=_activePoints;
@property(retain, nonatomic) RCPEventSenderProperties *senderProperties; // @synthesize senderProperties=_senderProperties;
@property(nonatomic) double pointerFrequency; // @synthesize pointerFrequency=_pointerFrequency;
@property(nonatomic) long long touchFrequency; // @synthesize touchFrequency=_touchFrequency;
- (void)stylusBarrelDoubleTap;	// IMP=0x000000000001ccd1
- (void)peekAndPop:(struct CGPoint)arg1 commit:(_Bool)arg2 duration:(double)arg3;	// IMP=0x000000000001cbb6
- (void)pinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x000000000001c99a
- (void)pinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x000000000001c765
- (void)_flickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x000000000001c5e8
- (void)_dragWithStartPoint:(struct CGPoint)arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint)arg3 mask:(unsigned long long)arg4 duration:(double)arg5 tapAndWait:(double)arg6 lift:(_Bool)arg7;	// IMP=0x000000000001c383
- (void)rotate:(struct CGPoint)arg1 withRadius:(double)arg2 rotation:(double)arg3 duration:(double)arg4 touchCount:(unsigned long long)arg5;	// IMP=0x000000000001c129
- (void)multifingerDragWithPointArray:(struct CGPoint *)arg1 numPoints:(unsigned long long)arg2 duration:(double)arg3 numFingers:(unsigned long long)arg4;	// IMP=0x000000000001bd3b
- (void)sendFlickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x000000000001bd26
- (void)dragWithStartPoint:(struct CGPoint)arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint)arg3 mask:(unsigned long long)arg4 duration:(double)arg5;	// IMP=0x000000000001bd08
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 tapAndWait:(double)arg4 lift:(_Bool)arg5;	// IMP=0x000000000001bcec
- (void)dragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;	// IMP=0x000000000001bcca
- (void)pressDiscreteGameControllerButton:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000001bc1a
- (void)sendUnicodeString:(id)arg1;	// IMP=0x000000000001bb47
- (void)knobNudge:(struct CGVector)arg1 buttonMask:(unsigned int)arg2 duration:(double)arg3;	// IMP=0x000000000001bae3
- (void)_knobEventForOffset:(struct CGVector)arg1 buttonMask:(unsigned int)arg2 oldButtonMask:(unsigned int)arg3;	// IMP=0x000000000001ba00
- (void)rotateCrown:(double)arg1 direction:(long long)arg2 duration:(double)arg3;	// IMP=0x000000000001b80d
- (void)endButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000001b7c7
- (void)beginButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000001b77e
- (void)pressButtons:(id)arg1 duration:(double)arg2;	// IMP=0x000000000001b443
- (void)pressButtonsWithPages:(id)arg1 usages:(id)arg2 duration:(double)arg3;	// IMP=0x000000000001b1ab
- (void)tapsNoLift:(unsigned long long)arg1 location:(struct CGPoint)arg2 withNumberOfTouches:(unsigned long long)arg3;	// IMP=0x000000000001b119
- (void)taps:(unsigned long long)arg1 location:(struct CGPoint)arg2 withNumberOfTouches:(unsigned long long)arg3;	// IMP=0x000000000001b05e
- (void)doubleFingerTap:(struct CGPoint)arg1;	// IMP=0x000000000001b042
- (void)doubleTap:(struct CGPoint)arg1;	// IMP=0x000000000001b026
- (void)_tap:(struct CGPoint)arg1 withPressure:(double)arg2;	// IMP=0x000000000001afce
- (void)tapToWakeAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000001af6a
- (void)tap:(struct CGPoint)arg1;	// IMP=0x000000000001af4e
@property(readonly, nonatomic) double defaultRadius;
@property(readonly, nonatomic) double defaultPressure;
- (void)_setMajorRadiusForAllPoints:(double)arg1;	// IMP=0x000000000001aebf
- (void)_setPressureForAllPoints:(double)arg1;	// IMP=0x000000000001ae70
- (void)moveToPoint:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x000000000001ae40
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;	// IMP=0x000000000001adec
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4;	// IMP=0x000000000001ad8b
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 duration:(double)arg4 radius:(double)arg5;	// IMP=0x000000000001aa97
- (void)_moveLastTouchPoint:(struct CGPoint)arg1 eventMask:(unsigned long long)arg2;	// IMP=0x000000000001a9ce
- (void)liftUp:(struct CGPoint)arg1;	// IMP=0x000000000001a9b7
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000000001a942
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x000000000001a85f
- (void)liftUpAtAllActivePoints;	// IMP=0x000000000001a7ae
- (void)liftUpActivePointsByIndex:(id)arg1;	// IMP=0x000000000001a484
- (void)edgeOrbSwipe:(struct CGPoint)arg1 withEndLocation:(struct CGPoint)arg2 withDuration:(double)arg3;	// IMP=0x000000000001a239
- (void)edgeOrb:(struct CGPoint)arg1;	// IMP=0x000000000001a117
- (void)touchTapDown:(struct CGPoint)arg1;	// IMP=0x000000000001a074
- (void)touchDown:(struct CGPoint)arg1;	// IMP=0x000000000001a007
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x0000000000019f48
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;	// IMP=0x0000000000019ee1
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3;	// IMP=0x0000000000019e87
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 radius:(double)arg4;	// IMP=0x0000000000019e6f
- (void)_touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 pressure:(double)arg3 radius:(double)arg4 edgeMaskOptions:(const CDStruct_0dd72924 *)arg5;	// IMP=0x0000000000019c90
- (double)touchMoveInterval;	// IMP=0x00000000000199d1
- (void)advanceTime:(double)arg1;	// IMP=0x00000000000199ba
- (void)composeWithSender:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019914
- (void)_delayBetweenMove:(int)arg1 elapsedTime:(double)arg2;	// IMP=0x00000000000198c3
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000197e0
- (void)_finalizeHomeButtonEvents;	// IMP=0x0000000000019187
- (void)_finalizeProcessingEventBuffer;	// IMP=0x0000000000019175
- (unsigned long long)_currentMachTime;	// IMP=0x0000000000019119
- (_Bool)_isEdgePoint:(struct CGPoint)arg1 getMask:(unsigned int *)arg2;	// IMP=0x0000000000019059
- (struct CGPoint)_normalizePoint:(struct CGPoint)arg1;	// IMP=0x0000000000018ef6
- (void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000018e6f
- (struct __IOHIDEvent *)_createIOHIDGameControllerEventForDpadButton:(long long)arg1;	// IMP=0x0000000000018da8
- (struct __IOHIDEvent *)_createIOHIDWithEventType:(long long)arg1;	// IMP=0x0000000000018859
- (struct __IOHIDEvent *)_createIOSButtonHIDEventWithButtonType:(long long)arg1 down:(_Bool)arg2;	// IMP=0x0000000000018822
- (struct __IOHIDEvent *)_createIOSButtonHIDEventWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(_Bool)arg3;	// IMP=0x00000000000187c0
- (void)_initScreenProperties;	// IMP=0x0000000000018727
- (void)_initScreenPropertiesForScreen:(id)arg1;	// IMP=0x00000000000185f1
- (void)dealloc;	// IMP=0x00000000000185b0
- (id)init;	// IMP=0x0000000000018463
- (void)withExclusiveChildStream:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015883
- (void)composeNavigationGestureInMotion:(unsigned short)arg1 frequency:(unsigned long long)arg2 actionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015751
- (void)composeDockGestureOfFlavor:(unsigned short)arg1 motion:(unsigned short)arg2 frequency:(unsigned long long)arg3 actionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000155cc
- (void)composeDockGestureInMotion:(unsigned short)arg1 frequency:(unsigned long long)arg2 actionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000155ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

