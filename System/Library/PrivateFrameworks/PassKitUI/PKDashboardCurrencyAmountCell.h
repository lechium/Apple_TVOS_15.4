//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKCurrencyAmount, UILabel;

@interface PKDashboardCurrencyAmountCell
{
    NSString *_titleString;	// 8 = 0x8
    PKCurrencyAmount *_currencyAmount;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_currencyLabel;	// 32 = 0x20
    _Bool _showsPositivePrefix;	// 40 = 0x28
    NSString *_detailString;	// 48 = 0x30
    PKCurrencyAmount *_amount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000de564
@property(nonatomic) _Bool showsPositivePrefix; // @synthesize showsPositivePrefix=_showsPositivePrefix;
@property(copy, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000de42c
- (_Bool)_shouldUseStackedLayoutWithBounds:(struct CGRect)arg1;	// IMP=0x00000000000de35b
- (void)_updateCurrencyLabel;	// IMP=0x00000000000de1fb
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x00000000000dddc6
- (void)resetFonts;	// IMP=0x00000000000ddcf1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ddc47
- (void)layoutSubviews;	// IMP=0x00000000000ddba8
- (id)defaultSecondaryColor;	// IMP=0x00000000000ddb8f
- (id)defaultPrimaryColor;	// IMP=0x00000000000ddb76
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000dd857

@end
