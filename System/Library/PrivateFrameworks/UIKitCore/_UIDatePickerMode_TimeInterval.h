//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_TimeInterval
{
    double _componentWidth;	// 240 = 0xf0
}

+ (unsigned long long)extractableCalendarUnits;	// IMP=0x0000000000acb29a
+ (long long)datePickerMode;	// IMP=0x0000000000acb28f
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000acbe02
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;	// IMP=0x0000000000acbde5
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000acbce9
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;	// IMP=0x0000000000acbbd6
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;	// IMP=0x0000000000acbaf9
- (_Bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;	// IMP=0x0000000000acb9fb
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000000acb4b8
- (struct _NSRange)rangeForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000acb489
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000acb47e
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;	// IMP=0x0000000000acb341
- (long long)hourForRow:(long long)arg1;	// IMP=0x0000000000acb338
- (id)font;	// IMP=0x0000000000acb326
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x0000000000acb30e
- (void)resetComponentWidths;	// IMP=0x0000000000acb2f9
- (double)rowHeight;	// IMP=0x0000000000acb2eb
- (void)updateDateForNewDateRange;	// IMP=0x0000000000acb2e5
- (id)localizedFormatString;	// IMP=0x0000000000acb2ad
- (_Bool)isTimeIntervalMode;	// IMP=0x0000000000acb2a5

@end

