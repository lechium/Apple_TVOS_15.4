//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKEnterCurrencyAmountPassViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentActionControllerDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class NSArray, NSDecimalNumber, NSDecimalNumberHandler, NSNumberFormatter, NSString, PKAnimatedNavigationBarTitleView, PKEnterCurrencyAmountPassTableHeaderFooterView, PKPaymentPass, UIImageView, UILabel, UITableView, _PKUIKVisibilityBackdropView;

@interface PKPeerPaymentActionTransferToBankViewController <_PKUIKVisibilityBackdropViewDelegate, PKPeerPaymentActionControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKEnterCurrencyAmountPassViewDelegate>
{
    NSArray *_supportedTransferActions;	// 8 = 0x8
    NSNumberFormatter *_currencyFormatter;	// 16 = 0x10
    NSNumberFormatter *_percentageFormatter;	// 24 = 0x18
    NSDecimalNumberHandler *_roundingHandler;	// 32 = 0x20
    PKPaymentPass *_defaultInstantFundsOutPaymentPass;	// 40 = 0x28
    _Bool _isSmallPhone;	// 48 = 0x30
    _Bool _usesAccessibilityLayout;	// 49 = 0x31
    PKAnimatedNavigationBarTitleView *_passNavbarTitleView;	// 56 = 0x38
    UITableView *_tableView;	// 64 = 0x40
    UIImageView *_navbarPassView;	// 72 = 0x48
    _PKUIKVisibilityBackdropView *_backdropView;	// 80 = 0x50
    UILabel *_footerTextLabel;	// 88 = 0x58
    PKEnterCurrencyAmountPassTableHeaderFooterView *_tableHeaderView;	// 96 = 0x60
    NSDecimalNumber *_feePercentage;	// 104 = 0x68
    NSDecimalNumber *_minimumFee;	// 112 = 0x70
    NSDecimalNumber *_maximumFee;	// 120 = 0x78
    double _backdropWeight;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000381099
- (id)_detailTextForAction:(unsigned long long)arg1;	// IMP=0x0000000000380e41
- (void)_showNavigationBarSpinner:(_Bool)arg1;	// IMP=0x0000000000380d19
- (void)_dismissViewController:(id)arg1;	// IMP=0x0000000000380c52
- (id)_defaultInstantFundsOutPaymentPass;	// IMP=0x0000000000380b10
- (void)_updateFooterText;	// IMP=0x000000000038082d
- (id)_amountPassView;	// IMP=0x0000000000380810
- (void)_updateTableHeaderHeight;	// IMP=0x0000000000380658
- (id)_calculateFee;	// IMP=0x0000000000380559
- (id)_indexPathForAction:(unsigned long long)arg1;	// IMP=0x00000000003804bf
- (_Bool)_passViewInNavBar;	// IMP=0x000000000038049c
- (void)_calculateBlur;	// IMP=0x0000000000380311
- (_Bool)_isCurrentAmountValid;	// IMP=0x00000000003800f1
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;	// IMP=0x00000000003800a4
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;	// IMP=0x000000000037ffb2
- (void)_transferBarButtonPressed:(id)arg1;	// IMP=0x000000000037fe90
- (void)_updateBarButtonEnabledState;	// IMP=0x000000000037fd56
- (id)_spinnerBarButton;	// IMP=0x000000000037fcdd
- (id)_transferBarButton;	// IMP=0x000000000037fc6d
- (void)setCardBalance:(id)arg1;	// IMP=0x000000000037fb34
- (void)setMinLoadAmount:(id)arg1;	// IMP=0x000000000037f9fb
- (void)setMaxLoadAmount:(id)arg1;	// IMP=0x000000000037f8c2
- (void)setMinBalance:(id)arg1;	// IMP=0x000000000037f789
- (void)setMaxBalance:(id)arg1;	// IMP=0x000000000037f650
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1;	// IMP=0x000000000037f603
- (void)updateAccountValues;	// IMP=0x000000000037f089
- (void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2;	// IMP=0x000000000037ee32
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;	// IMP=0x000000000037edb8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000037ed57
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000037ed46
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000037ed29
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000037ed1e
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000037ed16
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000037ea8a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000037e7a8
- (void)viewWillLayoutSubviews;	// IMP=0x000000000037e239
- (void)loadView;	// IMP=0x000000000037db0b
- (void)dealloc;	// IMP=0x000000000037dadc
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4;	// IMP=0x000000000037d861

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
