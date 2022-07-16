//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateInterval;

@interface _HKSampleQueryResult : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
    NSArray *_samples;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011dca1
@property(readonly, copy, nonatomic) NSArray *samples; // @synthesize samples=_samples;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 samples:(id)arg3;	// IMP=0x000000000011db7b

@end
