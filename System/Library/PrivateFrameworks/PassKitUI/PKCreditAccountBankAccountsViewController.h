//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, PKAccount, PKPaymentWebService;

@interface PKCreditAccountBankAccountsViewController <PKAddBankAccountInformationViewControllerDelegate>
{
    PKAccount *_account;	// 8 = 0x8
    PKPaymentWebService *_paymentWebService;	// 16 = 0x10
    unsigned long long _accountFeatureIdentifier;	// 24 = 0x18
    NSMutableArray *_fundingSources;	// 32 = 0x20
    long long _context;	// 40 = 0x28
    NSMutableArray *_deletingFundingSources;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002c7dd1
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000002c7c54
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;	// IMP=0x00000000002c7bad
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;	// IMP=0x00000000002c7ac0
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;	// IMP=0x00000000002c7aba
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c79f0
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c79a6
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c784c
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002c7837
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c7822
- (void)_configureBankAccountCell:(id)arg1 withFundingSource:(id)arg2;	// IMP=0x00000000002c75b2
- (id)_broadwayBankAccountCellForRowAtIndex:(long long)arg1;	// IMP=0x00000000002c745b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c7231
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002c7210
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000002c7208
- (void)_presentAddBankAccount;	// IMP=0x00000000002c70a7
- (id)_addBankAccountInformationViewController;	// IMP=0x00000000002c6f6f
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c6ca3
- (void)_didSelectDeleteBroadwayBankAccountAtIndexPath:(id)arg1;	// IMP=0x00000000002c65c9
- (_Bool)_isBankAccountIndexPath:(id)arg1;	// IMP=0x00000000002c657f
- (void)_updateEditButtonIfNecessary;	// IMP=0x00000000002c648a
- (void)_toggleEditingMode;	// IMP=0x00000000002c641d
- (void)_editButtonPressed:(id)arg1;	// IMP=0x00000000002c640b
- (void)viewDidLoad;	// IMP=0x00000000002c622d
- (id)initWithAccount:(id)arg1 paymentWebService:(id)arg2 context:(long long)arg3;	// IMP=0x00000000002c60bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

