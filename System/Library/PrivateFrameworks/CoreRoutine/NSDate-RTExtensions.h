//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (RTExtensions)
+ (id)dateBisectingDate1:(id)arg1 date2:(id)arg2;	// IMP=0x0000000000029886
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;	// IMP=0x000000000002978d
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x000000000002940b
+ (id)dateWithResolution:(unsigned long long)arg1;	// IMP=0x000000000002937d
+ (id)dateFormatter;	// IMP=0x00000000000292aa
+ (id)stringFromTimestamp:(double)arg1;	// IMP=0x0000000000029253
+ (id)endOfDay;	// IMP=0x0000000000028e8a
+ (id)startOfDay;	// IMP=0x0000000000028d81
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;	// IMP=0x00000000000296c4
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;	// IMP=0x0000000000029647
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x0000000000029503
- (id)dateReducedToResolution:(unsigned long long)arg1;	// IMP=0x0000000000029498
- (id)stringFromDate;	// IMP=0x000000000002919d
- (id)weekdayStringFromDate;	// IMP=0x00000000000290f2
- (unsigned long long)weekday;	// IMP=0x0000000000029089
- (unsigned long long)minute;	// IMP=0x000000000002902a
- (unsigned long long)hour;	// IMP=0x0000000000028fcb
- (id)endOfDay;	// IMP=0x0000000000028eda
- (id)startOfDay;	// IMP=0x0000000000028dd1
- (id)dateOfTimestampForCurrentCalendar;	// IMP=0x0000000000028d1b
- (id)dateOfTimestampForCalendar:(id)arg1;	// IMP=0x0000000000028c99
- (_Bool)isOnOrAfter:(id)arg1;	// IMP=0x0000000000028c7f
- (_Bool)isAfterDate:(id)arg1;	// IMP=0x0000000000028c65
- (_Bool)isOnOrBefore:(id)arg1;	// IMP=0x0000000000028c4b
- (_Bool)isBeforeDate:(id)arg1;	// IMP=0x0000000000028c31
- (_Bool)betweenDate:(id)arg1 andDate:(id)arg2;	// IMP=0x0000000000028b73
@end
