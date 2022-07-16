//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/_NSAutoCalendar.h>

@interface _NSAutoCalendar (_)
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f042
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f6e6
- (_Bool)isDateInWeekend:(id)arg1;	// IMP=0x000000000001f643
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;	// IMP=0x000000000001f57c
- (Class)classForCoder;	// IMP=0x000000000001f56b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f17c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f04a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ef57
- (id)description;	// IMP=0x000000000001ee51
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000001ed8a
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001eccb
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;	// IMP=0x000000000001ec17
- (id)dateFromComponents:(id)arg1;	// IMP=0x000000000001eb74
- (_Bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;	// IMP=0x000000000001eaad
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x000000000001e9ee
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;	// IMP=0x000000000001e92f
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x000000000001e88c
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;	// IMP=0x000000000001e7e9
- (id)gregorianStartDate;	// IMP=0x000000000001e74b
- (void)setGregorianStartDate:(id)arg1;	// IMP=0x000000000001e65d
- (unsigned long long)minimumDaysInFirstWeek;	// IMP=0x000000000001e5bf
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;	// IMP=0x000000000001e55c
- (unsigned long long)firstWeekday;	// IMP=0x000000000001e4be
- (void)setFirstWeekday:(unsigned long long)arg1;	// IMP=0x000000000001e45b
- (id)timeZone;	// IMP=0x000000000001e3bd
- (void)setTimeZone:(id)arg1;	// IMP=0x000000000001e2cf
- (id)locale;	// IMP=0x000000000001e231
- (void)setLocale:(id)arg1;	// IMP=0x000000000001e143
- (id)calendarIdentifier;	// IMP=0x000000000001e0a5
- (void)dealloc;	// IMP=0x000000000001e002
- (id)initWithCalendarIdentifier:(id)arg1;	// IMP=0x000000000001dff0
- (id)_init;	// IMP=0x000000000001df4d
- (id)init;	// IMP=0x000000000001df3b
- (void)_update;	// IMP=0x000000000001ddeb
@end
