//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKEnterCurrencyAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKNumberPadSuggestionsViewDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class NSDecimalNumber, NSString, PKAccount, PKAccountBillPaymentAmountContainerView, PKAccountServiceAccountResolutionCofiguration, PKBillPaymentSuggestedAmountList, PKNumberPadSuggestionsView, UILabel, UITextView;
@protocol PKAccountBillPaymentAmountDescriptionViewDelegate;

@interface PKAccountBillPaymentAmountDescriptionView : UIView <PKNumberPadSuggestionsViewDelegate, UITextViewDelegate, PKEnterCurrencyAmountViewDelegate>
{
    UILabel *_suggestedAmountTitleLabel;	// 8 = 0x8
    UITextView *_suggestedAmountDescriptionView;	// 16 = 0x10
    PKNumberPadSuggestionsView *_suggestionView;	// 24 = 0x18
    NSDecimalNumber *_enteredAmount;	// 32 = 0x20
    NSString *_learnMoreString;	// 40 = 0x28
    PKBillPaymentSuggestedAmountList *_suggestionList;	// 48 = 0x30
    PKAccount *_account;	// 56 = 0x38
    PKAccountServiceAccountResolutionCofiguration *_configuration;	// 64 = 0x40
    _Bool _showDescriptionLabels;	// 72 = 0x48
    _Bool _showDescriptionSubtitle;	// 73 = 0x49
    id <PKAccountBillPaymentAmountDescriptionViewDelegate> _delegate;	// 80 = 0x50
    PKAccountBillPaymentAmountContainerView *_amountContainerView;	// 88 = 0x58
    NSString *_titleText;	// 96 = 0x60
    NSString *_descriptionText;	// 104 = 0x68
    NSDecimalNumber *_minimumAmount;	// 112 = 0x70
    NSDecimalNumber *_maximumAmount;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000935d8
@property(nonatomic) _Bool showDescriptionSubtitle; // @synthesize showDescriptionSubtitle=_showDescriptionSubtitle;
@property(nonatomic) _Bool showDescriptionLabels; // @synthesize showDescriptionLabels=_showDescriptionLabels;
@property(copy, nonatomic) NSDecimalNumber *maximumAmount; // @synthesize maximumAmount=_maximumAmount;
@property(copy, nonatomic) NSDecimalNumber *minimumAmount; // @synthesize minimumAmount=_minimumAmount;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) PKAccountBillPaymentAmountContainerView *amountContainerView; // @synthesize amountContainerView=_amountContainerView;
@property(nonatomic) __weak id <PKAccountBillPaymentAmountDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_keypadSuggestions;	// IMP=0x0000000000092e5b
- (_Bool)_shouldShakeWithNewAmount:(id)arg1;	// IMP=0x0000000000092cdf
- (_Bool)_isEnteredAmountValid;	// IMP=0x0000000000092bd1
- (void)_enteredAmountDidChangeTo:(id)arg1;	// IMP=0x0000000000092b5a
- (void)_updateEnteredAmount:(id)arg1;	// IMP=0x0000000000092abe
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;	// IMP=0x0000000000092a43
- (_Bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;	// IMP=0x0000000000092877
- (void)dismissKeyboard;	// IMP=0x000000000009282f
- (void)showKeyboard;	// IMP=0x00000000000927e7
@property(copy, nonatomic) NSDecimalNumber *amount;
- (void)_updateDescriptionAlpha;	// IMP=0x000000000009274b
@property(nonatomic) _Bool showAmount;
- (id)_sugestedAmountDescriptionAttributedString;	// IMP=0x000000000009240a
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000092271
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;	// IMP=0x00000000000921d6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000920c8
- (void)layoutSubviews;	// IMP=0x0000000000091d9f
- (id)initWithSuggestedAmountList:(id)arg1 account:(id)arg2 configuration:(id)arg3;	// IMP=0x000000000009192c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

