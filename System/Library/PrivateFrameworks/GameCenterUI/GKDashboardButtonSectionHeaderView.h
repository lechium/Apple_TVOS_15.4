//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSLayoutConstraint, NSString, UIButton, UIStackView, UIView;

@interface GKDashboardButtonSectionHeaderView
{
    _Bool _buttonHidden;	// 8 = 0x8
    NSAttributedString *_attributedButtonTitle;	// 16 = 0x10
    id _buttonTarget;	// 24 = 0x18
    SEL _buttonAction;	// 32 = 0x20
    UIView *_backgroundPlatterView;	// 40 = 0x28
    UIButton *_button;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
    NSLayoutConstraint *_rightMarginConstraint;	// 64 = 0x40
}

+ (struct CGSize)platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2;	// IMP=0x0000000000031f44
+ (double)widthForTitle:(id)arg1 buttonTitle:(id)arg2;	// IMP=0x0000000000031e1e
+ (struct CGSize)platformSizeForTitle:(id)arg1;	// IMP=0x0000000000031e0a
+ (double)widthForTitle:(id)arg1;	// IMP=0x0000000000031df6
+ (double)defaultHeight;	// IMP=0x0000000000031dc7
- (void).cxx_destruct;	// IMP=0x0000000000032505
@property(nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) UIView *backgroundPlatterView; // @synthesize backgroundPlatterView=_backgroundPlatterView;
@property(nonatomic, getter=isButtonHidden) _Bool buttonHidden; // @synthesize buttonHidden=_buttonHidden;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) id buttonTarget; // @synthesize buttonTarget=_buttonTarget;
@property(copy, nonatomic) NSAttributedString *attributedButtonTitle; // @synthesize attributedButtonTitle=_attributedButtonTitle;
- (void)prepareForReuse;	// IMP=0x00000000000323be
- (void)buttonPressed:(id)arg1;	// IMP=0x000000000003236b
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000032298
@property(copy, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
- (void)awakeFromNib;	// IMP=0x0000000000031f86

@end

