//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGOverTheYearsMemoryConfiguration
{
    _Bool _allowTwoConsecutiveYears;	// 72 = 0x48
    unsigned long long _minimumNumberOfYears;	// 80 = 0x50
    unsigned long long _minimumNumberOfMomentsForTwoConsecutiveYears;	// 88 = 0x58
}

+ (id)strictDefaultOverTheYearsMemoryConfiguration;	// IMP=0x00000000005001e9
+ (id)defaultOverTheYearsMemoryConfiguration;	// IMP=0x000000000050014e
@property(nonatomic) unsigned long long minimumNumberOfMomentsForTwoConsecutiveYears; // @synthesize minimumNumberOfMomentsForTwoConsecutiveYears=_minimumNumberOfMomentsForTwoConsecutiveYears;
@property(nonatomic) _Bool allowTwoConsecutiveYears; // @synthesize allowTwoConsecutiveYears=_allowTwoConsecutiveYears;
@property(nonatomic) unsigned long long minimumNumberOfYears; // @synthesize minimumNumberOfYears=_minimumNumberOfYears;

@end
