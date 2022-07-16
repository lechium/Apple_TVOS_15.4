//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHMemoryRelevanceHelper : NSObject
{
}

+ (double)_subcategoryWeightForMemory:(id)arg1;	// IMP=0x00000000000abdd8
+ (double)_categoryWeightForMemory:(id)arg1;	// IMP=0x00000000000abce6
+ (double)_notificationLevelWeightForMemory:(id)arg1;	// IMP=0x00000000000abc58
+ (_Bool)_isDate:(id)arg1 inSameDayAndMonthAsDate:(id)arg2;	// IMP=0x00000000000abb17
+ (_Bool)_isMemorySubcategoryTemporal:(unsigned long long)arg1;	// IMP=0x00000000000abb07
+ (_Bool)_isMemoryCategoryTemporal:(unsigned long long)arg1;	// IMP=0x00000000000abae6
+ (_Bool)_isMemoryTemporal:(id)arg1;	// IMP=0x00000000000aba63
+ (_Bool)isMemory:(id)arg1 proactiveWorthyAtDate:(id)arg2;	// IMP=0x00000000000ab993
+ (_Bool)isMemory:(id)arg1 relevantAtDate:(id)arg2;	// IMP=0x00000000000ab8e4
+ (double)relevanceScoreForMemory:(id)arg1 atDate:(id)arg2;	// IMP=0x00000000000ab821

@end

