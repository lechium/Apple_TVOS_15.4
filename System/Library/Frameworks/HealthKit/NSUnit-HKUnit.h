//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUnit.h>

@interface NSUnit (HKUnit)
+ (_Bool)hk_equalConstant:(double)arg1 forUnit:(id)arg2;	// IMP=0x00000000000547bb
+ (_Bool)hk_equalCoefficient:(double)arg1 forUnit:(id)arg2;	// IMP=0x0000000000054778
+ (id)hk_prefixForCoefficient:(double)arg1;	// IMP=0x0000000000054567
+ (_Bool)hk_isSIUnit:(id)arg1;	// IMP=0x00000000000544c0
+ (double)hk_conversionConstant:(id)arg1;	// IMP=0x000000000005415d
+ (double)hk_conversionCoefficient:(id)arg1;	// IMP=0x00000000000531ab
- (id)hk_convertQuantityWithValue:(double)arg1 constant:(double)arg2 coefficient:(double)arg3;	// IMP=0x0000000000054a7f
- (id)hk_equivalentQuantityWithValue:(double)arg1;	// IMP=0x0000000000054916
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;	// IMP=0x000000000005490e
- (id)hk_equivalentBaseUnit;	// IMP=0x0000000000054906
- (id)hk_equivalentUnit;	// IMP=0x00000000000547fe
@end
