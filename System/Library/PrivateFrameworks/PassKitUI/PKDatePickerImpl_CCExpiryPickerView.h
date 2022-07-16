//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPickerView.h>

#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSNumber, NSString, UIFont;

@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate>
{
    unsigned long long _calendarUnit[2];	// 8 = 0x8
    struct _NSRange _possibleRange[2];	// 24 = 0x18
    double _width[2];	// 56 = 0x38
    NSDateFormatter *_dateFormatter[2];	// 72 = 0x48
    NSNumber *_useDoubleMonthStyle;	// 88 = 0x58
    NSCalendar *_calendar;	// 96 = 0x60
    NSLocale *_locale;	// 104 = 0x68
    UIFont *_font;	// 112 = 0x70
    id _changeTarget;	// 120 = 0x78
    SEL _changeAction;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000341132
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000000003410c6
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x0000000000340f30
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;	// IMP=0x0000000000340f1b
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000000340f06
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0000000000340efb
- (double)_widthForComponent:(long long)arg1;	// IMP=0x0000000000340ed9
- (id)_stringForComponent:(long long)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000000340e62
- (id)_dateForComponent:(long long)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000000340e2d
- (unsigned long long)_defaultIndexForComponent:(long long)arg1;	// IMP=0x0000000000340d9a
- (long long)_numberOfItemsForComponent:(long long)arg1;	// IMP=0x0000000000340d84
- (double)_calculateWidthForComponent:(long long)arg1 usingFont:(id)arg2;	// IMP=0x0000000000340ac6
- (id)_dateWithCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;	// IMP=0x0000000000340a2c
- (_Bool)_useDoubleMonthStyle;	// IMP=0x00000000003407f6
- (id)_dateFormatForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00000000003406bd
- (void)prepareToDie;	// IMP=0x00000000003406a7
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000340678
@property(retain, nonatomic) NSDate *date;
- (id)initShowingDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 useDarkAppearance:(_Bool)arg4 locale:(id)arg5 calendar:(id)arg6;	// IMP=0x000000000033ffaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

