//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _HKDimension, _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKCompoundUnit
{
    _HKFactorization *_baseUnits;	// 48 = 0x30
    _HKDimension *_dimension;	// 56 = 0x38
    struct os_unfair_lock_s _dimensionLock;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000186740
+ (id)unitWithBaseUnits:(id)arg1;	// IMP=0x000000000001b399
- (void).cxx_destruct;	// IMP=0x000000000018685c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018674b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e7c4
- (unsigned long long)hash;	// IMP=0x0000000000186723
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e397
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;	// IMP=0x000000000001b5a5
- (id)_baseUnits;	// IMP=0x000000000000e43c
- (id)dimension;	// IMP=0x000000000018652b
- (id)unitString;	// IMP=0x000000000000e46e
- (id)_initWithBaseUnits:(id)arg1;	// IMP=0x000000000001b3e2

@end

