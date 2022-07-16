//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time
{
    double _timeHourWidth;	// 240 = 0xf0
    double _timeMinuteWidth;	// 248 = 0xf8
    double _timeAMPMWidth;	// 256 = 0x100
    NSString *_hourFormat;	// 264 = 0x108
    NSString *_minuteFormat;	// 272 = 0x110
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0000000000ac7c3c
+ (long long)datePickerMode;	// IMP=0x0000000000ac7c34
- (void).cxx_destruct;	// IMP=0x0000000000ac869d
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac8680
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac8656
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000ac847d
- (id)font;	// IMP=0x0000000000ac846b
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000ac80fc
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac80e1
- (void)noteCalendarChanged;	// IMP=0x0000000000ac807a
- (void)resetComponentWidths;	// IMP=0x0000000000ac8051
- (double)rowHeight;	// IMP=0x0000000000ac8043
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000ac7d7f
- (id)localizedFormatString;	// IMP=0x0000000000ac7ce1
- (void)_shouldReset:(id)arg1;	// IMP=0x0000000000ac7c7a
- (long long)displayedCalendarUnits;	// IMP=0x0000000000ac7c47

@end
