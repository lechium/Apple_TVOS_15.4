//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PKContinuousButton, PKPaymentSetupFooterView, UITextView;

@interface PKPaymentSetupDockView : UIView
{
    PKContinuousButton *_continuousButton;	// 8 = 0x8
    UITextView *_buttonExplanationTextView;	// 16 = 0x10
    PKPaymentSetupFooterView *_footerView;	// 24 = 0x18
    _Bool _isBuddyiPad;	// 32 = 0x20
    _Bool _requiresAdditionalContinuousButtonPadding;	// 33 = 0x21
    long long _context;	// 40 = 0x28
    UIView *_additionalLinkView;	// 48 = 0x30
    NSString *_buttonExplanationText;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000240743
@property(retain, nonatomic) NSString *buttonExplanationText; // @synthesize buttonExplanationText=_buttonExplanationText;
@property(retain, nonatomic) UIView *additionalLinkView; // @synthesize additionalLinkView=_additionalLinkView;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) _Bool requiresAdditionalContinuousButtonPadding; // @synthesize requiresAdditionalContinuousButtonPadding=_requiresAdditionalContinuousButtonPadding;
- (struct CGSize)_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize)arg2;	// IMP=0x00000000002404d7
- (void)setButtonsEnabled:(_Bool)arg1;	// IMP=0x0000000000240487
- (void)layoutSubviews;	// IMP=0x0000000000240084
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000023fe8f
@property(retain, nonatomic) PKPaymentSetupFooterView *footerView;
@property(retain, nonatomic) PKContinuousButton *continuousButton;
@property(readonly, nonatomic) UITextView *buttonExplanationTextView;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;	// IMP=0x000000000023f839

@end

