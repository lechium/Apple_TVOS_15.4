//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate;

@interface PLClusterTimeInfo : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    double _endOfSameDayTimestamp;	// 16 = 0x10
    double _maximumNextDayTimestamp;	// 24 = 0x18
    NSDate *_latestUTCDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000560d74
@property(readonly, retain, nonatomic) NSDate *latestUTCDate; // @synthesize latestUTCDate=_latestUTCDate;
@property(readonly, nonatomic) double maximumNextDayTimestamp; // @synthesize maximumNextDayTimestamp=_maximumNextDayTimestamp;
@property(readonly, nonatomic) double endOfSameDayTimestamp; // @synthesize endOfSameDayTimestamp=_endOfSameDayTimestamp;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (_Bool)utcDateBelongsInCluster:(id)arg1;	// IMP=0x0000000000560cc3
- (void)updateWithUTCDate:(id)arg1 localDate:(id)arg2;	// IMP=0x0000000000560baf
- (void)_updateTimestampsWithUTCDate:(id)arg1 localDate:(id)arg2;	// IMP=0x0000000000560a91
- (void)reset;	// IMP=0x0000000000560a77
- (id)initWithCalendar:(id)arg1;	// IMP=0x0000000000560a0c

@end
