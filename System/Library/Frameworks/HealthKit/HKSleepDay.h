//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateInterval;

@interface HKSleepDay : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    NSArray *_sleepPeriods;	// 24 = 0x18
    NSDateInterval *_dateInterval;	// 32 = 0x20
    double _inBedDuration;	// 40 = 0x28
    double _asleepDuration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001e3ca5
@property(readonly, nonatomic) double asleepDuration; // @synthesize asleepDuration=_asleepDuration;
@property(readonly, nonatomic) double inBedDuration; // @synthesize inBedDuration=_inBedDuration;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, copy, nonatomic) NSArray *sleepPeriods; // @synthesize sleepPeriods=_sleepPeriods;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x00000000001e3b9e
- (id)primarySleepPeriod;	// IMP=0x00000000001e3b2a
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3;	// IMP=0x00000000001e3831

@end

