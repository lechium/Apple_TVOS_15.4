//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity;

@interface HKAudiogramSensitivityPoint : NSObject <NSSecureCoding>
{
    HKQuantity *_frequency;	// 8 = 0x8
    HKQuantity *_leftEarSensitivity;	// 16 = 0x10
    HKQuantity *_rightEarSensitivity;	// 24 = 0x18
}

+ (_Bool)_validateUnitForFrequency:(id)arg1;	// IMP=0x000000000013d141
+ (_Bool)_validateUnitForSensitivity:(id)arg1;	// IMP=0x000000000013cfa0
+ (_Bool)validSensitivity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013cd0d
+ (_Bool)validFrequency:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013ca86
+ (id)_rangeViolationMin:(id)arg1 max:(id)arg2 value:(id)arg3;	// IMP=0x000000000013c811
+ (id)_incompatibleUnit:(id)arg1 incompatibleWith:(id)arg2;	// IMP=0x000000000013c6b9
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013c6b1
+ (id)sensitivityPointWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000013c55b
- (void).cxx_destruct;	// IMP=0x000000000013d757
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013d67a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013d597
- (id)_audiogramDiagnosticSensitivityPointForEarSensitivity:(id)arg1;	// IMP=0x000000000013d50a
- (id)_rightDiagnosticSensitivityPoint;	// IMP=0x000000000013d4ab
- (id)_leftDiagnosticSensitivityPoint;	// IMP=0x000000000013d44c
@property(readonly, copy) HKQuantity *rightEarSensitivity;
@property(readonly, copy) HKQuantity *leftEarSensitivity;
@property(readonly, copy) HKQuantity *frequency;
- (id)initWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3;	// IMP=0x000000000013c4a4

@end

