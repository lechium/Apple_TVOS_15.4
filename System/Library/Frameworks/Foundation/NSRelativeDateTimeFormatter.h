//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCalendar, NSLocale;

@interface NSRelativeDateTimeFormatter
{
    struct __CFRelativeDateTimeFormatter *_formatter;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSCalendar *_calendar;	// 24 = 0x18
    long long _dateTimeStyle;	// 32 = 0x20
    long long _unitsStyle;	// 40 = 0x28
    long long _formattingContext;	// 48 = 0x30
}

- (id)_stringFromDateComponents:(id)arg1;	// IMP=0x00000000000afe55
- (id)_stringForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;	// IMP=0x00000000000afdbe
- (id)stringForObjectValue:(id)arg1;	// IMP=0x00000000000afd59
- (id)localizedStringForDate:(id)arg1 relativeToDate:(id)arg2;	// IMP=0x00000000000afcff
- (id)localizedStringFromTimeInterval:(double)arg1;	// IMP=0x00000000000afc9a
- (id)localizedStringFromDateComponents:(id)arg1;	// IMP=0x00000000000afc88
@property long long formattingContext; // @synthesize formattingContext=_formattingContext;
@property long long dateTimeStyle; // @synthesize dateTimeStyle=_dateTimeStyle;
@property long long unitsStyle; // @synthesize unitsStyle=_unitsStyle;
@property(copy) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy) NSLocale *locale; // @synthesize locale=_locale;
- (void)_clearFormatter;	// IMP=0x00000000000afa8f
- (void)dealloc;	// IMP=0x00000000000af9ff

@end

