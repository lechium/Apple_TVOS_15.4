//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCalendar, NSDate;
@protocol DNDSScheduleLifetimeMonitorDataSource;

@interface DNDSScheduleLifetimeMonitor
{
    NSDate *_lifetimeTimerFireDate;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
}

+ (Class)lifetimeClass;	// IMP=0x000000000002fec6
- (void).cxx_destruct;	// IMP=0x0000000000030d81
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;	// IMP=0x000000000002fed7
- (id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 scheduleSettings:(id)arg4 calendar:(id)arg5 ignoreMatchScheduleStartDate:(_Bool)arg6;	// IMP=0x000000000002fc8e
- (id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertion:(id)arg2 date:(id)arg3 ignoreMatchScheduleStartDate:(_Bool)arg4;	// IMP=0x000000000002f7a2
- (id)nextActiveDateIntervalForScheduleLifetime:(id)arg1 assertion:(id)arg2 date:(id)arg3;	// IMP=0x000000000002f78d
- (id)activeDateIntervalForScheduleLifetime:(id)arg1 assertion:(id)arg2 date:(id)arg3;	// IMP=0x000000000002f775
- (void)setDelegate:(id)arg1;	// IMP=0x000000000002f5f1

// Remaining properties
@property(nonatomic) __weak id <DNDSScheduleLifetimeMonitorDataSource> dataSource; // @dynamic dataSource;

@end

