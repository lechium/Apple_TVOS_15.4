//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSLocale, NSTimeZone;

@interface PLDateRangeFormatter : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _preset;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
    _Bool _useLocalDates;	// 32 = 0x20
    NSTimeZone *_timeZone;	// 40 = 0x28
    _Bool _includeDayNumbers;	// 48 = 0x30
    _Bool _includeDayNumbersWhenMonthsDiffer;	// 49 = 0x31
    _Bool _useRelativeDayFormatting;	// 50 = 0x32
    _Bool _useShortMonths;	// 51 = 0x33
    _Bool _useShortDaysInRanges;	// 52 = 0x34
    _Bool _useTime;	// 53 = 0x35
    _Bool _yearOnly;	// 54 = 0x36
    _Bool _monthOnly;	// 55 = 0x37
    _Bool _timeOnly;	// 56 = 0x38
    _Bool _omitYear;	// 57 = 0x39
    _Bool _monthWithDelimiterAndYear;	// 58 = 0x3a
    NSDateFormatter *_sameDayDateFormatter;	// 64 = 0x40
    NSDateFormatter *_sameDayNoYearDateFormatter;	// 72 = 0x48
    NSDateFormatter *_dayOfTheWeekDateFormatter;	// 80 = 0x50
    NSDateFormatter *_yearDateFormatter;	// 88 = 0x58
    NSDateFormatter *_monthDateFormatter;	// 96 = 0x60
    NSDateFormatter *_monthYearDateFormatter;	// 104 = 0x68
    NSDateFormatter *_relativeDateFormatter;	// 112 = 0x70
    struct UDateIntervalFormat *_monthDayIntervalFormat;	// 120 = 0x78
    struct UDateIntervalFormat *_monthDayNoYearIntervalFormat;	// 128 = 0x80
    struct UDateIntervalFormat *_differentMonthDayIntervalFormat;	// 136 = 0x88
    struct UDateIntervalFormat *_differentMonthDayNoYearIntervalFormat;	// 144 = 0x90
    struct UDateIntervalFormat *_dayOfTheWeekIntervalFormat;	// 152 = 0x98
    struct UDateIntervalFormat *_timeIntervalFormat;	// 160 = 0xa0
    struct UDateIntervalFormat *_monthIntervalFormat;	// 168 = 0xa8
    struct UDateIntervalFormat *_monthYearIntervalFormat;	// 176 = 0xb0
    struct UDateIntervalFormat *_yearIntervalFormat;	// 184 = 0xb8
}

+ (id)autoupdatingFormatterWithPreset:(long long)arg1;	// IMP=0x00000000004d6cef
- (void).cxx_destruct;	// IMP=0x00000000004d5fb0
- (id)stringFromDate:(id)arg1;	// IMP=0x00000000004d5f9c
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x00000000004d5ef9
- (id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;	// IMP=0x00000000004d5e39
@property(nonatomic) _Bool useLocalDates;
@property(retain, nonatomic) NSLocale *locale;
@property(nonatomic) long long preset;
- (id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3;	// IMP=0x00000000004d47fd
- (struct UDateIntervalFormat *)_yearIntervalFormat;	// IMP=0x00000000004d47bd
- (struct UDateIntervalFormat *)_monthYearIntervalFormat;	// IMP=0x00000000004d4719
- (struct UDateIntervalFormat *)_monthIntervalFormat;	// IMP=0x00000000004d46b3
- (struct UDateIntervalFormat *)_timeIntervalFormat;	// IMP=0x00000000004d463c
- (struct UDateIntervalFormat *)_dayOfTheWeekIntervalFormat;	// IMP=0x00000000004d45ed
- (struct UDateIntervalFormat *)_differentMonthDayNoYearIntervalFormat;	// IMP=0x00000000004d450d
- (struct UDateIntervalFormat *)_differentMonthDayIntervalFormat;	// IMP=0x00000000004d442d
- (struct UDateIntervalFormat *)_monthDayNoYearIntervalFormat;	// IMP=0x00000000004d434d
- (struct UDateIntervalFormat *)_monthDayIntervalFormat;	// IMP=0x00000000004d4276
- (id)_relativeDateFormatter;	// IMP=0x00000000004d41cb
- (id)_monthYearDateFormatter;	// IMP=0x00000000004d4099
- (id)_monthDateFormatter;	// IMP=0x00000000004d3f97
- (id)_yearDateFormatter;	// IMP=0x00000000004d3eb8
- (id)_dayOfTheWeekDateFormatter;	// IMP=0x00000000004d3dca
- (id)_sameDayNoYearDateFormatter;	// IMP=0x00000000004d3c6c
- (id)_sameDayDateFormatter;	// IMP=0x00000000004d3b0e
- (id)_dayDifferentMonthsTemplate;	// IMP=0x00000000004d3acc
- (id)_dayTemplate;	// IMP=0x00000000004d3a99
- (id)_sameMonthTemplate;	// IMP=0x00000000004d3a66
- (void)_resetFormatters;	// IMP=0x00000000004d3901
- (id)localTimeZone;	// IMP=0x00000000004d38e8
- (void)_handleUseLocalDatesDidChange;	// IMP=0x00000000004d387c
- (void)_handlePresetDidChange;	// IMP=0x00000000004d3763
- (void)_significantTimeChange:(id)arg1;	// IMP=0x00000000004d3709
- (void)_systemTimeZoneDidChange:(id)arg1;	// IMP=0x00000000004d368e
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x00000000004d35fd
- (void)dealloc;	// IMP=0x00000000004d35bf
- (id)init;	// IMP=0x00000000004d35ab
- (id)initWithPreset:(long long)arg1;	// IMP=0x00000000004d3515

@end

