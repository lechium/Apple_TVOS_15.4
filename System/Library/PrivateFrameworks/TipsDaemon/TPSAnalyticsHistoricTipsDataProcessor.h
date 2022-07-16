//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor
{
    NSDate *_currentDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002db11
- (id)_furthestLookbackDate;	// IMP=0x000000000002da71
- (_Bool)_shouldProceedWithCrunching;	// IMP=0x000000000002d9bf
- (unsigned long long)_daysBetweenDate:(id)arg1 andOtherDate:(id)arg2;	// IMP=0x000000000002d906
- (void)updateDisplayedCount:(long long *)arg1 andFrequencyControlCount:(long long *)arg2 forTipStatus:(id)arg3 andLookbackDate:(id)arg4;	// IMP=0x000000000002d696
- (void)resetAnalytics;	// IMP=0x000000000002d653
- (void)processAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ccdd
- (id)init;	// IMP=0x000000000002cc70

@end
