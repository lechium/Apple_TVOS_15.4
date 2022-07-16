//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface HVUserDefaults : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
}

+ (void)resetHarvestBudgetRefillDisabled;	// IMP=0x00000000000122c0
+ (void)setHarvestBudgetRefillDisabled:(_Bool)arg1;	// IMP=0x000000000001226d
+ (_Bool)harvestBudgetRefillDisabled;	// IMP=0x0000000000012222
+ (void)resetHarvestBudgetThrottleBudgetDisabled;	// IMP=0x00000000000121de
+ (void)setHarvestBudgetThrottleBudgetDisabled:(_Bool)arg1;	// IMP=0x000000000001218b
+ (_Bool)harvestBudgetThrottleBudgetDisabled;	// IMP=0x0000000000012140
+ (void)resetHarvestBudgetDisabled;	// IMP=0x00000000000120fc
+ (void)setHarvestBudgetDisabled:(_Bool)arg1;	// IMP=0x00000000000120a9
+ (_Bool)harvestBudgetDisabled;	// IMP=0x000000000001205e
+ (void)resetHarvestBudgetCPUTimeSeconds;	// IMP=0x000000000001201a
+ (void)setHarvestBudgetCPUTimeSeconds:(double)arg1;	// IMP=0x0000000000011fc4
+ (double)harvestBudgetCPUTimeSeconds;	// IMP=0x0000000000011f1b
+ (void)resetHarvestBudgetNumberOfOperations;	// IMP=0x0000000000011ed7
+ (void)setHarvestBudgetNumberOfOperations:(long long)arg1;	// IMP=0x0000000000011e84
+ (long long)harvestBudgetNumberOfOperations;	// IMP=0x0000000000011de7
+ (id)defaults;	// IMP=0x0000000000011d90
+ (id)sharedInstance;	// IMP=0x0000000000011d2d
- (void).cxx_destruct;	// IMP=0x0000000000011d1d
- (id)defaults;	// IMP=0x0000000000011d0f
- (id)init;	// IMP=0x0000000000011c11

@end

