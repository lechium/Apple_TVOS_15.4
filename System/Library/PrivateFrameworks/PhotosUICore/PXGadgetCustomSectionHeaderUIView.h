//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UIImageView, UILabel;

@interface PXGadgetCustomSectionHeaderUIView
{
    UILabel *_appleInternalLabel;	// 8 = 0x8
    UIButton *_infoButton;	// 16 = 0x10
    UIImageView *_iconImageView;	// 24 = 0x18
    UILabel *_iconTitleLabel;	// 32 = 0x20
}

+ (double)_preferredHeightOfAppleInternalTextWithWidth:(double)arg1;	// IMP=0x000000000086ac0d
+ (id)_appleInternalLabelText;	// IMP=0x000000000086ab8e
+ (double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(_Bool)arg5;	// IMP=0x000000000086aabb
- (void).cxx_destruct;	// IMP=0x0000000000869e67
@property(retain, nonatomic) UILabel *iconTitleLabel; // @synthesize iconTitleLabel=_iconTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *appleInternalLabel; // @synthesize appleInternalLabel=_appleInternalLabel;
- (void)layoutSubviews;	// IMP=0x0000000000869b53
- (void)configureTitleLabel:(id)arg1;	// IMP=0x0000000000869a03
- (void)_infoButtonSelected;	// IMP=0x000000000086997d

@end

