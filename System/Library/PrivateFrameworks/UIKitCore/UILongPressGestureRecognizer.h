//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSObservation, NSString, UIDelayedAction, UIHeldAction, UILongPressGestureVelocitySample, UITapRecognizer;

@interface UILongPressGestureRecognizer <UITapRecognizerDelegate>
{
    NSArray *_touches;	// 16 = 0x10
    NSMutableSet *_activeTouches;	// 24 = 0x18
    unsigned long long _numberOfTouchesRequired;	// 32 = 0x20
    double _minimumPressDuration;	// 40 = 0x28
    double _allowableMovement;	// 48 = 0x30
    struct CGPoint _startPointScreen;	// 56 = 0x38
    struct CGPoint _lastCentroidScreen;	// 72 = 0x48
    UIHeldAction *_enoughTimeElapsed;	// 88 = 0x58
    UIDelayedAction *_tooMuchTimeElapsed;	// 96 = 0x60
    UIDelayedAction *_multitouchTimer;	// 104 = 0x68
    UITapRecognizer *_imp;	// 112 = 0x70
    UILongPressGestureVelocitySample *_velocitySample;	// 120 = 0x78
    UILongPressGestureVelocitySample *_previousVelocitySample;	// 128 = 0x80
    NSObservation *_touchForceObservation;	// 136 = 0x88
    long long _impulseObservations;	// 144 = 0x90
    double _currentImpulse;	// 152 = 0x98
    double _lastForce;	// 160 = 0xa0
    double _lastForceTimestamp;	// 168 = 0xa8
    unsigned int _gotTouchEnd:1;	// 176 = 0xb0
    unsigned int _gotTooMany:1;	// 176 = 0xb0
    unsigned int _gotEnoughTaps:1;	// 176 = 0xb0
    unsigned int _cancelPastAllowableMovement:1;	// 176 = 0xb0
    unsigned int _allowsDynamicTouchesList:1;	// 176 = 0xb0
    _Bool _requiresQuietImpulse;	// 177 = 0xb1
    _Bool _requiresQuietImpulseForCurrentTouchSequence;	// 178 = 0xb2
    _Bool __prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;	// 179 = 0xb3
    _Bool __shouldAlwaysEnableMultitouchTimerAtTouchesBegin;	// 180 = 0xb4
    long long _buttonType;	// 184 = 0xb8
    double _allowableElapsedTimeForAllRequiredTouches;	// 192 = 0xc0
    double _lastTouchTime;	// 200 = 0xc8
    struct CGPoint _lastSceneReferenceLocation;	// 208 = 0xd0
    struct CGPoint _lastUnadjustedSceneReferenceLocation;	// 224 = 0xe0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006d20f0
- (void).cxx_destruct;	// IMP=0x00000000006d577f
@property(nonatomic, setter=_setShouldAlwaysEnableMultitouchTimerAtTouchesBegin:) _Bool _shouldAlwaysEnableMultitouchTimerAtTouchesBegin; // @synthesize _shouldAlwaysEnableMultitouchTimerAtTouchesBegin=__shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
@property(nonatomic) _Bool _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers; // @synthesize _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers=__prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
@property(nonatomic) double lastTouchTime; // @synthesize lastTouchTime=_lastTouchTime;
@property(nonatomic) struct CGPoint lastUnadjustedSceneReferenceLocation; // @synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation;
@property(nonatomic) struct CGPoint lastSceneReferenceLocation; // @synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation;
@property(nonatomic, setter=_setAllowableElapsedTimeForAllRequiredTouches:) double _allowableElapsedTimeForAllRequiredTouches; // @synthesize _allowableElapsedTimeForAllRequiredTouches;
@property(nonatomic, setter=_setRequiresQuietImpulse:) _Bool _requiresQuietImpulse; // @synthesize _requiresQuietImpulse;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double delay; // @synthesize delay=_minimumPressDuration;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x00000000006d55fe
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x00000000006d553b
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3;	// IMP=0x00000000006d53e6
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x00000000006d53a7
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x00000000006d5295
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;	// IMP=0x00000000006d51bc
- (struct CGPoint)_locationOfTouches:(id)arg1;	// IMP=0x00000000006d512a
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x00000000006d5075
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x00000000006d4f95
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x00000000006d4e8b
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;	// IMP=0x00000000006d4d88
- (void)_resetVelocitySamples;	// IMP=0x00000000006d4d41
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;	// IMP=0x00000000006d4ba4
- (unsigned long long)numberOfTouches;	// IMP=0x00000000006d4b87
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x00000000006d4a7b
- (double)_touchSloppinessFactor;	// IMP=0x00000000006d4a2b
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;	// IMP=0x00000000006d4a14
- (void)tapRecognizerRecognizedTap:(id)arg1;	// IMP=0x00000000006d49d3
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;	// IMP=0x00000000006d49ba
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d4935
- (_Bool)_shouldReceivePress:(id)arg1;	// IMP=0x00000000006d4865
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d484e
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d4811
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d480b
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d472a
@property(nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
- (void)_setTranslation:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x00000000006d442d
- (struct CGPoint)_translationInView:(id)arg1;	// IMP=0x00000000006d43a7
@property(readonly, nonatomic) struct CGPoint startPoint;
- (struct CGPoint)_startPointInView:(id)arg1;	// IMP=0x00000000006d4287
@property(readonly, nonatomic) struct CGPoint _centroidScreen;
@property(readonly, nonatomic) struct CGPoint centroid;
- (struct CGPoint)_centroidInView:(id)arg1;	// IMP=0x00000000006d3f7a
- (void)_appendSubclassDescription:(id)arg1;	// IMP=0x00000000006d3e74
- (long long)_finalStateForRecognition;	// IMP=0x00000000006d3d16
- (void)_interactionsEndedWithValidTouches:(_Bool)arg1;	// IMP=0x00000000006d3ca2
- (void)_resetImpulseQuietness;	// IMP=0x00000000006d3c6e
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;	// IMP=0x00000000006d3ad7
- (_Bool)_impulseQuietEnough;	// IMP=0x00000000006d3aa8
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d3a60
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d37e0
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d358d
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006d308e
- (void)_changeTouchesListTo:(id)arg1;	// IMP=0x00000000006d2ff6
- (void)_startMultitouchTimer;	// IMP=0x00000000006d2f86
- (void)_startTapFinishedTimer;	// IMP=0x00000000006d2eff
- (void)startTimer;	// IMP=0x00000000006d2c8f
- (_Bool)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1;	// IMP=0x00000000006d29a9
- (void)clearTimer;	// IMP=0x00000000006d28d7
- (void)tooMuchElapsed:(id)arg1;	// IMP=0x00000000006d28c0
- (void)enoughTimeElapsed:(id)arg1;	// IMP=0x00000000006d281e
- (_Bool)activeTouchesExceedAllowableSeparation;	// IMP=0x00000000006d27a0
- (void)_resetGestureRecognizer;	// IMP=0x00000000006d268d
- (void)setView:(id)arg1;	// IMP=0x00000000006d262b
- (double)_allowableTouchTimeSeparation;	// IMP=0x00000000006d25f4
- (void)_setAllowableTouchTimeSeparation:(double)arg1;	// IMP=0x00000000006d25d7
- (void)_setAllowableSeparation:(double)arg1;	// IMP=0x00000000006d25ba
- (double)_allowableSeparation;	// IMP=0x00000000006d259d
- (void)_setAllowsDynamicTouchesList:(_Bool)arg1;	// IMP=0x00000000006d2582
- (_Bool)_allowsDynamicTouchesList;	// IMP=0x00000000006d256d
@property(nonatomic) _Bool cancelPastAllowableMovement;
@property(nonatomic) double minimumPressDuration;
- (void)setButtonMaskRequired:(long long)arg1;	// IMP=0x00000000006d2476
- (long long)buttonMaskRequired;	// IMP=0x00000000006d2459
@property(nonatomic) unsigned long long numberOfTapsRequired;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006d22d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006d20f8
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000006d1ffa
- (void)invalidate;	// IMP=0x0000000000e20d92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
