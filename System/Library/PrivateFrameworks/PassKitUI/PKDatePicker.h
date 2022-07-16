//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSCalendar, NSDate, NSLocale;
@protocol PKDatePickerDelegate, PKDatePickerInternalImplementationProtocol;

@interface PKDatePicker : UIView
{
    UIView<PKDatePickerInternalImplementationProtocol> *_internalPicker;	// 8 = 0x8
    _Bool _showsDay;	// 16 = 0x10
    _Bool _showsMonth;	// 17 = 0x11
    _Bool _showsYear;	// 18 = 0x12
    _Bool _usesDarkAppearance;	// 19 = 0x13
    unsigned long long _style;	// 24 = 0x18
    NSLocale *_locale;	// 32 = 0x20
    NSCalendar *_calendar;	// 40 = 0x28
    NSDate *_date;	// 48 = 0x30
    id <PKDatePickerDelegate> _delegate;	// 56 = 0x38
}

+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x000000000033ef3c
- (void).cxx_destruct;	// IMP=0x000000000033f280
@property(nonatomic) _Bool usesDarkAppearance; // @synthesize usesDarkAppearance=_usesDarkAppearance;
@property(nonatomic) __weak id <PKDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool showsYear; // @synthesize showsYear=_showsYear;
@property(readonly, nonatomic) _Bool showsMonth; // @synthesize showsMonth=_showsMonth;
@property(readonly, nonatomic) _Bool showsDay; // @synthesize showsDay=_showsDay;
- (void)_forceReloadInternalPicker;	// IMP=0x000000000033f0d2
- (void)_dateValueChanged:(id)arg1;	// IMP=0x000000000033f00e
- (Class)_classForDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 style:(unsigned long long)arg4;	// IMP=0x000000000033ef44
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000033ef1f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000033ef02
- (void)layoutSubviews;	// IMP=0x000000000033ee8d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000033edf8
- (void)reconfigureToShowDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 style:(unsigned long long)arg4 locale:(id)arg5 calendar:(id)arg6;	// IMP=0x000000000033ea67
- (void)dealloc;	// IMP=0x000000000033ea0d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033e97e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000033e859
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x000000000000c6b3
- (id)pk_childrenForAppearance;	// IMP=0x000000000000c6a6

@end
