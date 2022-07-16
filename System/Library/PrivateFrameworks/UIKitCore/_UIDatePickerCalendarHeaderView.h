//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSString, UIButton, UIImageView, UIView, _UIDatePickerCalendarDay, _UIDatePickerCalendarMonth, _UIDatePickerDateRange, _UIDatePickerLinkedLabel;
@protocol _UIDatePickerCalendarHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarHeaderView
{
    NSDateFormatter *_longFormatter;	// 8 = 0x8
    NSDateFormatter *_shortFormatter;	// 16 = 0x10
    UIView *_monthYearSelectorContainer;	// 24 = 0x18
    _UIDatePickerLinkedLabel *_monthYearLabel;	// 32 = 0x20
    UIImageView *_chevron;	// 40 = 0x28
    UIButton *_previousMonthButton;	// 48 = 0x30
    UIButton *_nextMonthButton;	// 56 = 0x38
    NSDate *_lastCalculatedYearStart;	// 64 = 0x40
    NSDate *_lastCalculatedYearEnd;	// 72 = 0x48
    _Bool _expanded;	// 80 = 0x50
    id <_UIDatePickerCalendarHeaderViewDelegate> _delegate;	// 88 = 0x58
    NSCalendar *_calendar;	// 96 = 0x60
    NSLocale *_locale;	// 104 = 0x68
    _UIDatePickerDateRange *_dateRange;	// 112 = 0x70
    NSString *_customFontDesign;	// 120 = 0x78
    _UIDatePickerCalendarMonth *_visibleMonth;	// 128 = 0x80
    _UIDatePickerCalendarDay *_selectedDay;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000fa090a
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) _UIDatePickerCalendarDay *selectedDay; // @synthesize selectedDay=_selectedDay;
@property(retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth; // @synthesize visibleMonth=_visibleMonth;
@property(retain, nonatomic) NSString *customFontDesign; // @synthesize customFontDesign=_customFontDesign;
@property(readonly, nonatomic) _UIDatePickerDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <_UIDatePickerCalendarHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000fa0841
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000fa06b0
- (void)_didTap:(id)arg1;	// IMP=0x0000000000fa0650
- (void)_adjustMonth:(id)arg1;	// IMP=0x0000000000fa05bd
- (void)_updateMonthButtonVisibility;	// IMP=0x0000000000fa04a6
- (void)_updateMonthButtonEnablement;	// IMP=0x0000000000fa03bb
- (void)_updateMonthYearLabel;	// IMP=0x0000000000fa01e8
- (void)_updatePossibleTitlesIfNeccessaryForDate:(id)arg1;	// IMP=0x0000000000f9fbc4
- (void)_updateFonts;	// IMP=0x0000000000f9fb29
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 visibleMonth:(id)arg4 selectedDay:(id)arg5;	// IMP=0x0000000000f9f5ac
- (void)_reload;	// IMP=0x0000000000f9f571
- (void)_reloadDateFormatters;	// IMP=0x0000000000f9f3e0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000f9f38a
- (void)_updateMonthButtonImages;	// IMP=0x0000000000f9f021
- (void)tintColorDidChange;	// IMP=0x0000000000f9efe0
- (void)_setupGestureRecognizers;	// IMP=0x0000000000f9ef3f
- (void)_setupViewHierarchy;	// IMP=0x0000000000f9da1e
- (void)_setupDateFormatter;	// IMP=0x0000000000f9d975
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f9d7f2

@end

