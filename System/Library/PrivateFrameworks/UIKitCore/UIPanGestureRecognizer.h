//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer
{
    struct CGPoint _firstSceneReferenceLocation;	// 16 = 0x10
    struct CGPoint _lastSceneReferenceLocation;	// 32 = 0x20
    double _lastTouchTime;	// 48 = 0x30
    NSMutableArray *_touches;	// 56 = 0x38
    unsigned long long _lastTouchCount;	// 64 = 0x40
    unsigned long long _minimumNumberOfTouches;	// 72 = 0x48
    unsigned long long _maximumNumberOfTouches;	// 80 = 0x50
    double _hysteresis;	// 88 = 0x58
    double _allowableSeparation;	// 96 = 0x60
    struct CGPoint _lastUnadjustedSceneReferenceLocation;	// 104 = 0x68
    double _allowableTouchTimeSeparation;	// 120 = 0x78
    unsigned int _delegateImplementsShouldTryToBeginHorizontally:1;	// 128 = 0x80
    unsigned int _delegateImplementsShouldTryToBeginVertically:1;	// 128 = 0x80
    unsigned int _failsPastMaxTouches:1;	// 128 = 0x80
    unsigned int _failsPastHysteresisWithoutMinTouches:1;	// 128 = 0x80
    unsigned int _canPanHorizontally:1;	// 128 = 0x80
    unsigned int _canPanVertically:1;	// 128 = 0x80
    unsigned int _delegateAllowsPanHorizontally:1;	// 128 = 0x80
    unsigned int _delegateAllowsPanVertically:1;	// 128 = 0x80
    unsigned int _queriedDelegateAllowsPanHorizontally:1;	// 129 = 0x81
    unsigned int _queriedDelegateAllowsPanVertically:1;	// 129 = 0x81
    unsigned int _ignoresStationaryTouches:1;	// 129 = 0x81
    unsigned int _multitouchTimerOn:1;	// 129 = 0x81
    unsigned int _requiresImmediateMultipleTouches:1;	// 129 = 0x81
    NSMutableArray *_movingTouches;	// 136 = 0x88
    struct CGPoint _digitizerLocation;	// 144 = 0x90
    UIPanGestureVelocitySample *_velocitySample;	// 160 = 0xa0
    UIPanGestureVelocitySample *_previousVelocitySample;	// 168 = 0xa8
    struct CGPoint _swipeVelocity;	// 176 = 0xb0
    struct CGPoint _previousSwipeVelocity;	// 192 = 0xc0
    NSError *_swipeVelocityError;	// 208 = 0xd0
    long long _allowedScrollTypesMask;	// 216 = 0xd8
}

+ (void)_setPanGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000000006d5fe8
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006d59d5
+ (_Bool)_shouldDefaultToTouches;	// IMP=0x00000000006d5835
+ (double)_defaultHysteresis;	// IMP=0x00000000006d5827
- (void).cxx_destruct;	// IMP=0x00000000006d8b13
@property(nonatomic) long long allowedScrollTypesMask; // @synthesize allowedScrollTypesMask=_allowedScrollTypesMask;
@property(nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property(nonatomic) unsigned long long minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x00000000006d8aa0
- (void)_updateVelocityWithEvent:(id)arg1;	// IMP=0x00000000006d89fc
- (struct CGPoint)_swipeVelocity;	// IMP=0x00000000006d89e4
- (struct CGPoint)_previousSwipeVelocity;	// IMP=0x00000000006d89cc
- (void)_updateDigitizerLocationWithEvent:(id)arg1;	// IMP=0x00000000006d8999
- (struct CGPoint)_digitizerLocation;	// IMP=0x00000000006d8981
- (void)_ignoreTouches:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000006d87c8
- (id)_activeTouches;	// IMP=0x00000000006d87b3
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;	// IMP=0x00000000006d8616
- (unsigned long long)numberOfTouches;	// IMP=0x00000000006d85f9
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x00000000006d85d5
- (void)_ignoreTouchForTouchIdentifier:(unsigned int)arg1;	// IMP=0x00000000006d840c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d835e
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d82f7
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d8205
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(CDUnknownBlockType)arg2;	// IMP=0x00000000006d7f6b
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d7e05
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d7b90
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d76ee
- (_Bool)_updateMovingTouchesArraySavingOldArray:(id *)arg1;	// IMP=0x00000000006d7487
- (_Bool)_touchesExceedAllowableSeparation;	// IMP=0x00000000006d7424
- (void)_willBeginAfterSatisfyingFailureRequirements;	// IMP=0x00000000006d73c8
- (void)_removeHysteresisFromTranslation;	// IMP=0x00000000006d7224
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;	// IMP=0x00000000006d7152
- (_Bool)_shouldBeginHorizontally:(_Bool)arg1 vertically:(_Bool)arg2 withEvent:(id)arg3;	// IMP=0x00000000006d7001
- (void)setDelegate:(id)arg1;	// IMP=0x00000000006d6f65
- (_Bool)_willScrollY;	// IMP=0x00000000006d6f13
- (_Bool)_willScrollX;	// IMP=0x00000000006d6ec2
- (double)_translationDistanceInSceneInSelfAxis:(struct CGPoint)arg1;	// IMP=0x00000000006d6df4
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 affectingTranslation:(_Bool)arg3;	// IMP=0x00000000006d6c90
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x00000000006d6bff
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1 lockingToAxis:(unsigned long long)arg2;	// IMP=0x00000000006d6ac2
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;	// IMP=0x00000000006d69e9
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000006d674f
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x00000000006d65e0
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromNormalizedCoordinatesToView:(id)arg2;	// IMP=0x00000000006d6498
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x00000000006d639f
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x00000000006d62cf
- (struct CGPoint)translationInView:(id)arg1;	// IMP=0x00000000006d6215
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x00000000006d60f7
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;	// IMP=0x00000000006d5ff4
- (void)_setCanPanVertically:(_Bool)arg1;	// IMP=0x00000000006d5fcd
- (void)_setCanPanHorizontally:(_Bool)arg1;	// IMP=0x00000000006d5fb2
- (_Bool)_canPanVertically;	// IMP=0x00000000006d5f9d
- (_Bool)_canPanHorizontally;	// IMP=0x00000000006d5f88
@property(nonatomic, getter=_ignoresStationaryTouches, setter=_setIgnoresStationaryTouches:) _Bool ignoresStationaryTouches;
- (_Bool)_requiresImmediateMultipleTouches;	// IMP=0x00000000006d5f43
- (void)_setRequiresImmediateMultipleTouches:(_Bool)arg1;	// IMP=0x00000000006d5f28
- (double)_allowableTouchTimeSeparation;	// IMP=0x00000000006d5f16
- (void)_setAllowableTouchTimeSeparation:(double)arg1;	// IMP=0x00000000006d5f04
- (double)_allowableSeparation;	// IMP=0x00000000006d5e9e
- (void)_setAllowableSeparation:(double)arg1;	// IMP=0x00000000006d5e8c
- (double)_hysteresis;	// IMP=0x00000000006d5e26
- (void)_setHysteresis:(double)arg1;	// IMP=0x00000000006d5e14
@property(readonly, nonatomic, getter=_lastTouchCount) long long lastTouchCount;
- (_Bool)_failsPastHysteresisWithoutMinTouches;	// IMP=0x00000000006d5dee
- (void)_setFailsPastHysteresisWithoutMinTouches:(_Bool)arg1;	// IMP=0x00000000006d5dd3
@property(nonatomic) _Bool failsPastMaxTouches;
- (void)multitouchExpired:(id)arg1;	// IMP=0x00000000006d5d43
- (void)startMultitouchTimer:(double)arg1;	// IMP=0x00000000006d5cef
- (void)clearMultitouchTimer;	// IMP=0x00000000006d5ca6
- (void)_resetGestureRecognizer;	// IMP=0x00000000006d5beb
- (void)_resetVelocitySamples;	// IMP=0x00000000006d5b72
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006d5ad1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006d59dd
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000006d583d

@end

