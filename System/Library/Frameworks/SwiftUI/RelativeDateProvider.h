//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateComponents, NSDateComponentsFormatter;

@interface RelativeDateProvider
{
    double _elapsedTime;	// 8 = 0x8
    NSDateComponents *_sessionComponents;	// 16 = 0x10
    long long _sessionTimePeriod;	// 24 = 0x18
    unsigned long long _sessionVisibleUnits;	// 32 = 0x20
    _Bool _sessionInProgress;	// 40 = 0x28
    NSDate *_mostRecentSessionDate;	// 48 = 0x30
    _Bool _disableOffsetPrefix;	// 56 = 0x38
    _Bool _twoDigitMinuteZeroPadding;	// 57 = 0x39
    _Bool _wantsSubseconds;	// 58 = 0x3a
    _Bool _showLeadingMinutes;	// 59 = 0x3b
    _Bool _pauseTimerAtZero;	// 60 = 0x3c
    NSDate *_date;	// 64 = 0x40
    NSDate *_relativeDate;	// 72 = 0x48
    unsigned long long _calendarUnits;	// 80 = 0x50
    long long _relativeDateStyle;	// 88 = 0x58
    NSDateComponentsFormatter *_formatter;	// 96 = 0x60
}

+ (_Bool)_configureFormatter:(id)arg1 fallbackIndex:(unsigned long long)arg2 style:(long long)arg3;	// IMP=0x0000000000008000
- (void).cxx_destruct;	// IMP=0x0000000000008b4e
@property(nonatomic) _Bool pauseTimerAtZero; // @synthesize pauseTimerAtZero=_pauseTimerAtZero;
@property(nonatomic) _Bool showLeadingMinutes; // @synthesize showLeadingMinutes=_showLeadingMinutes;
@property(nonatomic) _Bool wantsSubseconds; // @synthesize wantsSubseconds=_wantsSubseconds;
@property(nonatomic) _Bool twoDigitMinuteZeroPadding; // @synthesize twoDigitMinuteZeroPadding=_twoDigitMinuteZeroPadding;
@property(nonatomic) _Bool disableOffsetPrefix; // @synthesize disableOffsetPrefix=_disableOffsetPrefix;
@property(retain, nonatomic) NSDateComponentsFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) long long relativeDateStyle; // @synthesize relativeDateStyle=_relativeDateStyle;
@property(nonatomic) unsigned long long calendarUnits; // @synthesize calendarUnits=_calendarUnits;
@property(retain, nonatomic) NSDate *relativeDate; // @synthesize relativeDate=_relativeDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (long long)_updateFrequency;	// IMP=0x0000000000008941
- (_Bool)_timerIsPausedAtZero;	// IMP=0x0000000000008909
- (id)_signPrefixString;	// IMP=0x00000000000087e2
- (long long)_timePeriodForElapsedTime:(double)arg1;	// IMP=0x00000000000087ba
- (id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long *)arg2;	// IMP=0x0000000000008258
- (void)_configureFormatterForTimerStyle;	// IMP=0x00000000000081a4
- (id)_sessionTextForIndex:(long long)arg1;	// IMP=0x0000000000007b4b
- (id)formattedString;	// IMP=0x0000000000007ad6
- (void)_endSession;	// IMP=0x0000000000007a99
- (void)_startSessionWithDate:(id)arg1;	// IMP=0x000000000000798c
- (id)initWithDate:(id)arg1 relativeToDate:(id)arg2 units:(unsigned long long)arg3 style:(long long)arg4 calendar:(id)arg5 locale:(id)arg6;	// IMP=0x000000000000782a
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 style:(long long)arg3 calendar:(id)arg4 locale:(id)arg5;	// IMP=0x0000000000007804

@end

