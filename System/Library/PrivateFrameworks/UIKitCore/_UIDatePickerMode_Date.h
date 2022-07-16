//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Date
{
    double _dateYearWidth;	// 240 = 0xf0
    double _dateMonthWidth;	// 248 = 0xf8
    double _dateDayWidth;	// 256 = 0x100
    NSString *_yearFormat;	// 264 = 0x108
    NSString *_monthFormat;	// 272 = 0x110
    NSString *_dayFormat;	// 280 = 0x118
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0000000000ac6a0d
+ (long long)datePickerMode;	// IMP=0x0000000000ac6a02
- (void).cxx_destruct;	// IMP=0x0000000000ac7bf2
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac7bc8
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac7b9e
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000ac792e
- (id)_dateForYearRow:(long long)arg1;	// IMP=0x0000000000ac7740
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;	// IMP=0x0000000000ac74fe
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000ac6f96
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac6f8b
- (void)noteCalendarChanged;	// IMP=0x0000000000ac6f12
- (void)resetComponentWidths;	// IMP=0x0000000000ac6ee9
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac6b3a
- (id)localizedFormatString;	// IMP=0x0000000000ac6a9c
- (void)_shouldReset:(id)arg1;	// IMP=0x0000000000ac6a23
- (long long)displayedCalendarUnits;	// IMP=0x0000000000ac6a18

@end

