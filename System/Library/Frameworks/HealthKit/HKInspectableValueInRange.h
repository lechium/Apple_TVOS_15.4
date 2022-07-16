//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKInspectableValue, HKInspectableValueCollection, NSDate, NSNumber, NSString;

@interface HKInspectableValueInRange : NSObject <NSSecureCoding>
{
    HKInspectableValue *_lowValue;	// 8 = 0x8
    HKInspectableValue *_highValue;	// 16 = 0x10
    HKInspectableValueCollection *_currentValue;	// 24 = 0x18
    NSString *_unitString;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021b9dc
+ (id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;	// IMP=0x000000000021af10
- (void).cxx_destruct;	// IMP=0x000000000021bc30
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property(readonly, nonatomic) HKInspectableValueCollection *currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) HKInspectableValue *highValue; // @synthesize highValue=_highValue;
@property(readonly, nonatomic) HKInspectableValue *lowValue; // @synthesize lowValue=_lowValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021bb58
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021b9e4
- (id)description;	// IMP=0x000000000021b957
- (void)_setUnitString:(id)arg1;	// IMP=0x000000000021b946
- (id)_numberForValue:(id)arg1;	// IMP=0x000000000021b81e
- (id)_numberForValueCollection:(id)arg1;	// IMP=0x000000000021b70d
@property(readonly, nonatomic) _Bool hasRenderableContent;
@property(readonly, nonatomic) long long currentValueRelation;
- (id)_currentValueDoubleRepresentation;	// IMP=0x000000000021b1e7
@property(readonly, nonatomic) NSNumber *highValueNumberRepresentation;
@property(readonly, nonatomic) NSNumber *lowValueNumberRepresentation;
- (void)_assertValidRange;	// IMP=0x000000000021b035
- (id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;	// IMP=0x000000000021ae0a

@end

