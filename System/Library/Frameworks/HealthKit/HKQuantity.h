//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying>
{
    HKUnit *_unit;	// 8 = 0x8
    double _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c41a
+ (id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2;	// IMP=0x0000000000009948
+ (id)hk_quantityWithMinutes:(id)arg1;	// IMP=0x000000000005fedc
+ (id)hk_quantityWithSeconds:(id)arg1;	// IMP=0x000000000005fe2a
+ (id)_quantityWithBeatsPerMinute:(double)arg1;	// IMP=0x0000000000065f16
- (void).cxx_destruct;	// IMP=0x000000000000b4db
@property(readonly, nonatomic, getter=_value) double value; // @synthesize value=_value;
@property(readonly, nonatomic, getter=_unit) HKUnit *unit; // @synthesize unit=_unit;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000065f00
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001555e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a05e
- (double)_valueScaledForDisplay;	// IMP=0x0000000000065e7b
- (_Bool)hk_isGreaterThanQuantity:(id)arg1;	// IMP=0x0000000000065e61
- (_Bool)hk_isLessThanQuantity:(id)arg1;	// IMP=0x0000000000065e47
- (id)_foundationMeasurement;	// IMP=0x0000000000065c14
- (_Bool)_isZero;	// IMP=0x000000000000d0fb
- (id)_quantityByAddingQuantity:(id)arg1;	// IMP=0x0000000000065bcf
- (long long)compare:(id)arg1;	// IMP=0x000000000000ee1a
- (unsigned long long)hash;	// IMP=0x0000000000065bc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000118e3
- (id)description;	// IMP=0x00000000000152cf
- (_Bool)isCompatibleWithUnit:(id)arg1;	// IMP=0x000000000000d9f6
- (double)doubleValueForUnit:(id)arg1;	// IMP=0x0000000000003cf8
- (id)_initWithUnit:(id)arg1 doubleValue:(double)arg2;	// IMP=0x00000000000099a3
- (id)init;	// IMP=0x0000000000065b4d
- (id)hk_minutesNumber;	// IMP=0x0000000000060007
- (id)hk_secondsNumber;	// IMP=0x000000000005ff8e
- (double)_beatsPerMinute;	// IMP=0x0000000000065f8a

@end

