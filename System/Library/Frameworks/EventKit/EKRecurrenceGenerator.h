//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarFoundation/CalRecurrenceGenerator.h>

@interface EKRecurrenceGenerator : CalRecurrenceGenerator
{
}

+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1;	// IMP=0x000000000001400e
- (void)_prepareForEKRecurrence:(id)arg1 forCalendarItem:(id)arg2;	// IMP=0x0000000000013c78
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5;	// IMP=0x00000000000135ca
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4;	// IMP=0x00000000000135a2
- (_Bool)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(_Bool)arg4;	// IMP=0x0000000000013271
- (_Bool)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2;	// IMP=0x00000000000130d0
- (id)_copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 adjustDatesForAllDayEvents:(_Bool)arg8;	// IMP=0x0000000000012e43
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7;	// IMP=0x0000000000012e0f
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6 adjustDatesForAllDayEvents:(_Bool)arg7;	// IMP=0x0000000000012deb
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 limit:(long long)arg6;	// IMP=0x0000000000012dca
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(long long)arg5;	// IMP=0x0000000000012b04
- (void)_setupForEKEvent:(id)arg1 adjustDatesForAllDayEvents:(_Bool)arg2;	// IMP=0x00000000000128c1

@end

