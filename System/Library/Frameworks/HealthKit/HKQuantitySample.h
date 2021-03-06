//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCodableQuantitySample, HKQuantity, HKQuantityType;

@interface HKQuantitySample
{
    HKQuantity *_quantity;	// 8 = 0x8
    long long _freezeState;	// 16 = 0x10
    long long _count;	// 24 = 0x18
    HDCodableQuantitySample *_codableQuantitySample;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000158879
+ (id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;	// IMP=0x000000000015803d
+ (_Bool)_isConcreteObjectClass;	// IMP=0x0000000000157dde
+ (id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4;	// IMP=0x0000000000157c3c
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x000000000000ecce
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;	// IMP=0x000000000001c5c2
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;	// IMP=0x000000000000ddab
- (void).cxx_destruct;	// IMP=0x000000000000e81b
@property(retain, nonatomic, setter=_setCodableQuantitySample:) HDCodableQuantitySample *codableQuantitySample; // @synthesize codableQuantitySample=_codableQuantitySample;
@property(readonly) long long count; // @synthesize count=_count;
- (long long)_compareFreezeStateWithSample:(id)arg1;	// IMP=0x00000000001589cb
- (void)_setCount:(long long)arg1;	// IMP=0x00000000001589ba
- (void)_setFreezing;	// IMP=0x00000000001589a5
@property(nonatomic, getter=_frozen, setter=_setFrozen:) _Bool frozen;
- (void)_setQuantity:(id)arg1;	// IMP=0x00000000000103e9
@property(readonly, copy) HKQuantity *quantity;
@property(readonly, copy) HKQuantityType *quantityType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000158881
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001810d
- (id)_valueDescription;	// IMP=0x000000000001b70e
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x0000000000157e4d
- (_Bool)_shouldNotifyOnInsert;	// IMP=0x0000000000157e38
- (id)_init;	// IMP=0x0000000000157de6

@end

