//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _HKQueryUtilities : NSObject
{
}

+ (id)coalesceTotalDurations:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 intervalRecordCountsOut:(id *)arg4;	// IMP=0x00000000000f02a7
+ (_Bool)shouldUseDailyAverageWithDateComponents:(id)arg1 sampleType:(id)arg2;	// IMP=0x00000000000f01c6
+ (id)maximumFromQuantities:(id)arg1 unit:(id)arg2;	// IMP=0x00000000000effa8
+ (id)minimumFromQuantities:(id)arg1 unit:(id)arg2;	// IMP=0x00000000000efd8a
+ (id)averageSumFromQuantities:(id)arg1 unit:(id)arg2;	// IMP=0x00000000000efb66
+ (id)averageSumFromStatistics:(id)arg1 unit:(id)arg2;	// IMP=0x00000000000ef8eb
+ (id)countStatisticsQueryWithSampleType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 predicate:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000ef547
+ (id)calculateCountStatisticsWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4;	// IMP=0x00000000000ef3b2
+ (double)totalDurationFromCoalescedDateIntervals:(id)arg1;	// IMP=0x00000000000ef1c2
+ (id)arrayByCoalescingObjects:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 combiningBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000eee11
+ (void)_organizeSampleByStartDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x00000000000eea2c
+ (id)calculateIncludedValuesWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4;	// IMP=0x00000000000ee66b
+ (id)calculateTotalDurationsWithTimePeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 startOfDayTransform:(CDUnknownBlockType)arg5;	// IMP=0x00000000000edead
+ (id)coalesceTimePeriodsFromSamples:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3;	// IMP=0x00000000000edc40
+ (id)coalesceTimePeriods:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3;	// IMP=0x00000000000ed683
+ (id)sleepQueryWithStartDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 predicate:(id)arg5 healthStore:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d69d0
+ (id)_processSleepQueryResults:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 sourceOrder:(id)arg4 calendar:(id)arg5;	// IMP=0x00000000000d67ee
+ (id)sleepDateIntervalForThePastWeekWithCalendar:(id)arg1;	// IMP=0x00000000000d66d9

@end

