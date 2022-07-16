//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKCurrencyAmount, PKProgressBar, UIImageView, UILabel;

@interface PKInstallmentPlanProgressCollectionViewCell
{
    UILabel *_leadingTitleLabel;	// 8 = 0x8
    UILabel *_leadingAmountLabel;	// 16 = 0x10
    UILabel *_trailingTitleLabel;	// 24 = 0x18
    UILabel *_trailingAmountLabel;	// 32 = 0x20
    PKProgressBar *_progressBar;	// 40 = 0x28
    UIImageView *_completeCheckmark;	// 48 = 0x30
    UILabel *_completeLabel;	// 56 = 0x38
    UILabel *_detailLabel;	// 64 = 0x40
    _Bool _complete;	// 72 = 0x48
    NSString *_leadingTitle;	// 80 = 0x50
    NSString *_trailingTitle;	// 88 = 0x58
    PKCurrencyAmount *_leadingAmount;	// 96 = 0x60
    PKCurrencyAmount *_trailingAmount;	// 104 = 0x68
    NSString *_subtitleText;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001edb77
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) PKCurrencyAmount *trailingAmount; // @synthesize trailingAmount=_trailingAmount;
@property(retain, nonatomic) PKCurrencyAmount *leadingAmount; // @synthesize leadingAmount=_leadingAmount;
@property(copy, nonatomic) NSString *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(copy, nonatomic) NSString *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(nonatomic) double progressAmount;
- (void)layoutSubviews;	// IMP=0x00000000001ecf47
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ecd2d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ec575

@end
