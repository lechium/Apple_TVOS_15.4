//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupDisplayPINView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIButton *_nextButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b01dbc
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setMessage:(id)arg1 showButton:(_Bool)arg2;	// IMP=0x0000000000b01d20
- (void)layoutSubviews;	// IMP=0x0000000000b01c62
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b017e8

@end

