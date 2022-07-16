//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _UILinearForceLevelClassifier
{
    double _smoothedForce;	// 8 = 0x8
    _Bool _anyForceObservations;	// 16 = 0x10
    double _smoothedImpulse;	// 24 = 0x18
    long long _impulseObservationState;	// 32 = 0x20
    double _lastForceForImpulse;	// 40 = 0x28
    double _lastTimestampForImpulse;	// 48 = 0x30
    double _revealThreshold;	// 56 = 0x38
    double _standardThreshold;	// 64 = 0x40
    double _strongThreshold;	// 72 = 0x48
    double _smoothingFactor;	// 80 = 0x50
    double _impulseSmoothingFactor;	// 88 = 0x58
}

@property(nonatomic) double impulseSmoothingFactor; // @synthesize impulseSmoothingFactor=_impulseSmoothingFactor;
@property(nonatomic) double smoothingFactor; // @synthesize smoothingFactor=_smoothingFactor;
@property(nonatomic) double strongThreshold; // @synthesize strongThreshold=_strongThreshold;
@property(nonatomic) double standardThreshold; // @synthesize standardThreshold=_standardThreshold;
@property(nonatomic) double revealThreshold; // @synthesize revealThreshold=_revealThreshold;
- (double)_thresholdForForceLevel:(long long)arg1;	// IMP=0x00000000006f9e85
- (long long)_forceLevelForTouchForceValue:(double)arg1;	// IMP=0x00000000006f9e48
@property(readonly, nonatomic) double currentImpulse;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;	// IMP=0x00000000006f9ba9
- (void)reset;	// IMP=0x00000000006f9b36
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;	// IMP=0x00000000006f9a99
- (void)_updateForceWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;	// IMP=0x00000000006f9a43
- (void)_updateImpulseWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;	// IMP=0x00000000006f995a
- (double)_instantaneousImpulseForTouchForceValue:(double)arg1 atTimestamp:(double)arg2;	// IMP=0x00000000006f9924
- (double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3;	// IMP=0x00000000006f9890
- (void)dealloc;	// IMP=0x00000000006f9861
- (void)debuggingPropertyForKey:(id)arg1 changedToValue:(id)arg2;	// IMP=0x00000000006f979e
- (void)touchForceMultiplierDidChange;	// IMP=0x00000000006f972d
- (id)init;	// IMP=0x00000000006f96c1

@end
