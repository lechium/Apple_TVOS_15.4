//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface CalRecurrenceGenerator : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    _Bool _allDay;	// 16 = 0x10
    _Bool _shouldPinMonthDays;	// 17 = 0x11
    int _interval;	// 20 = 0x14
    int _frequency;	// 24 = 0x18
    NSDate *_eventStartDate;	// 32 = 0x20
    NSDate *_eventEndDate;	// 40 = 0x28
    NSTimeZone *_eventTimeZone;	// 48 = 0x30
    NSDate *_endDate;	// 56 = 0x38
    NSArray *_daysOfTheWeek;	// 64 = 0x40
    NSArray *_daysOfTheMonth;	// 72 = 0x48
    NSArray *_daysOfTheYear;	// 80 = 0x50
    NSArray *_weeksOfTheYear;	// 88 = 0x58
    NSArray *_monthsOfTheYear;	// 96 = 0x60
    NSArray *_setPositions;	// 104 = 0x68
    unsigned long long _weekStart;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000005832e
@property(nonatomic) _Bool shouldPinMonthDays; // @synthesize shouldPinMonthDays=_shouldPinMonthDays;
@property(nonatomic) unsigned long long weekStart; // @synthesize weekStart=_weekStart;
@property(nonatomic) int frequency; // @synthesize frequency=_frequency;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSArray *setPositions; // @synthesize setPositions=_setPositions;
@property(copy, nonatomic) NSArray *monthsOfTheYear; // @synthesize monthsOfTheYear=_monthsOfTheYear;
@property(copy, nonatomic) NSArray *weeksOfTheYear; // @synthesize weeksOfTheYear=_weeksOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheYear; // @synthesize daysOfTheYear=_daysOfTheYear;
@property(copy, nonatomic) NSArray *daysOfTheMonth; // @synthesize daysOfTheMonth=_daysOfTheMonth;
@property(copy, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
@property(copy, nonatomic) NSTimeZone *eventTimeZone; // @synthesize eventTimeZone=_eventTimeZone;
@property(copy, nonatomic) NSDate *eventEndDate; // @synthesize eventEndDate=_eventEndDate;
@property(copy, nonatomic) NSDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000056ee8
- (_Bool)_validateCalDate:(CDStruct_79f9e052)arg1 pinned:(_Bool)arg2;	// IMP=0x0000000000056ebb
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000055c39
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000054e89
- (id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000005444f
- (id)copyOccurrenceDatesBetweenStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 limit:(long long)arg4;	// IMP=0x0000000000053bb9
- (double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3;	// IMP=0x0000000000053b66
- (double)duration;	// IMP=0x0000000000053acf
- (_Bool)_isSimpleYearlyRecurrence;	// IMP=0x0000000000053a87
- (id)computeRecurrenceEndDate:(unsigned long long)arg1;	// IMP=0x00000000000539e6
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 allDay:(_Bool)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6;	// IMP=0x00000000000538fa
- (id)init;	// IMP=0x000000000005386e

@end

