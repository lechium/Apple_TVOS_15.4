//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (Additions)
+ (unsigned long long)_hf_allPossibleComponents;	// IMP=0x000000000006c568
+ (id)hf_zeroDateComponentsWithComponents:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x000000000006c3b0
+ (id)hf_componentsWithHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x000000000006bac4
+ (id)hf_yearlyIntervalComponents;	// IMP=0x000000000006ba56
+ (id)hf_monthlyIntervalComponents;	// IMP=0x000000000006b9e8
+ (id)hf_biweeklyIntervalComponents;	// IMP=0x000000000006b97a
+ (id)hf_weeklyIntervalComponents;	// IMP=0x000000000006b90c
+ (id)hf_dailyIntervalComponents;	// IMP=0x000000000006b89e
+ (id)hf_dailyWeekdayIntervalComponents;	// IMP=0x000000000006b733
- (unsigned long long)hf_validComponents;	// IMP=0x000000000006c573
- (long long)hf_compareNextMatchingDate:(id)arg1 withCalendar:(id)arg2;	// IMP=0x000000000006c0c9
- (long long)hf_compareNextMatchingDate:(id)arg1;	// IMP=0x000000000006c048
- (id)hf_negativeValue;	// IMP=0x000000000006be9b
- (id)hf_absoluteValue;	// IMP=0x000000000006bcea
- (double)hf_timeInterval;	// IMP=0x000000000006bc34
- (_Bool)hf_isEqualToHomeKitRecurrence:(id)arg1;	// IMP=0x000000000006bb1b
@end

