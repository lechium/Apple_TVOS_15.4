//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView
{
    struct {
        unsigned int isAmPm:1;
        unsigned int useDigitFont:1;
    } _datePickerContentViewFlags;	// 112 = 0x70
    UILabel *_titleLabel;	// 120 = 0x78
    double _titleLabelMaxX;	// 128 = 0x80
    long long _titleAlignment;	// 136 = 0x88
    _UIDatePickerMode *_mode;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000abdab9
@property(retain, nonatomic) _UIDatePickerMode *mode; // @synthesize mode=_mode;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) double titleLabelMaxX; // @synthesize titleLabelMaxX=_titleLabelMaxX;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x0000000000abd694
@property(nonatomic) _Bool useDigitFont;
@property(nonatomic) _Bool isAmPm;
- (_Bool)_canBeReusedInPickerView;	// IMP=0x0000000000abd5c6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000abd42a
- (id)initWithMode:(id)arg1;	// IMP=0x0000000000abd3ab

@end

