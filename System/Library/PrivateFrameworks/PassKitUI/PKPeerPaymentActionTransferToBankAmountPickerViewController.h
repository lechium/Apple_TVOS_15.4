//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKEnterCurrencyAmountPassViewDelegate-Protocol.h>
#import <PassKitUI/PKEnterCurrencyAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKEnterValueNewBalanceViewDelegate-Protocol.h>

@class NSString, PKEnterCurrencyAmountPassView, UIScrollView;

@interface PKPeerPaymentActionTransferToBankAmountPickerViewController <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate, PKEnterCurrencyAmountPassViewDelegate>
{
    UIScrollView *_scrollView;	// 8 = 0x8
    PKEnterCurrencyAmountPassView *_amountPassView;	// 16 = 0x10
    unsigned char _visibility;	// 24 = 0x18
    _Bool _keyboardVisible;	// 25 = 0x19
    struct CGRect _keyboardFrame;	// 32 = 0x20
    struct CGRect _lastKeyboardFrame;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000246cee
- (_Bool)_isCurrentAmountValid;	// IMP=0x0000000000246ac9
- (_Bool)_shouldShakeWithNewAmount:(id)arg1;	// IMP=0x000000000024696c
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;	// IMP=0x000000000024691f
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;	// IMP=0x0000000000246849
- (void)_nextBarButtonPressed:(id)arg1;	// IMP=0x00000000002466b9
- (void)_updateBarButtonEnabledState;	// IMP=0x0000000000246606
- (id)_nextBarButton;	// IMP=0x0000000000246596
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;	// IMP=0x00000000002464ee
- (_Bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;	// IMP=0x0000000000246235
- (void)setCardBalance:(id)arg1;	// IMP=0x0000000000246112
- (void)setMinLoadAmount:(id)arg1;	// IMP=0x0000000000245fef
- (void)setMaxLoadAmount:(id)arg1;	// IMP=0x0000000000245ecc
- (void)setMinBalance:(id)arg1;	// IMP=0x0000000000245da9
- (void)setMaxBalance:(id)arg1;	// IMP=0x0000000000245c86
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1;	// IMP=0x0000000000245c49
- (void)_updateLayoutForKeyboardAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000245b32
- (void)keyboardWillHide:(id)arg1;	// IMP=0x0000000000245a67
- (void)keyboardWillChange:(id)arg1;	// IMP=0x00000000002458d3
- (void)keyboardWillShow:(id)arg1;	// IMP=0x000000000024573a
- (void)updateAccountValues;	// IMP=0x0000000000245453
- (void)updateFirstResponder;	// IMP=0x00000000002453de
- (void)willDismissViewController;	// IMP=0x000000000024536c
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000244fda
- (void)loadView;	// IMP=0x0000000000244d40
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000244cbe
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000244c3c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000244bba
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000244b38
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;	// IMP=0x000000000024494e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

