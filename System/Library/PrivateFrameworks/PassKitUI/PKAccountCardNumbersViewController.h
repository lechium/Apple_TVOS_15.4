//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccount, PKAccountService, PKPaymentPass, PKPhysicalCard, PKSettingTableCell, PKVirtualCard, PKVirtualCardCredentials;

@interface PKAccountCardNumbersViewController
{
    unsigned long long _accountFeatureIdentifier;	// 8 = 0x8
    PKVirtualCard *_virtualCard;	// 16 = 0x10
    PKVirtualCardCredentials *_cardCredentials;	// 24 = 0x18
    PKAccountService *_accountService;	// 32 = 0x20
    PKAccount *_account;	// 40 = 0x28
    PKPaymentPass *_pass;	// 48 = 0x30
    long long _context;	// 56 = 0x38
    _Bool _loadingReplacementCard;	// 64 = 0x40
    PKPhysicalCard *_physicalCard;	// 72 = 0x48
    PKSettingTableCell *_dynamicSecurityCodeCell;	// 80 = 0x50
    _Bool _redactSensitiveDetails;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003023be
- (void)_toggleDynamicSecurityCodeSetting;	// IMP=0x0000000000301f15
- (id)_replaceCardAlertFromIndexPath:(id)arg1;	// IMP=0x0000000000301588
- (id)_virtualCardStateFooter;	// IMP=0x00000000003014ce
- (id)_reuseIdentifierForSection:(unsigned long long)arg1;	// IMP=0x00000000003014a9
- (id)_tableHeaderView;	// IMP=0x00000000003014a1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000301460
- (id)_buttonCellForRowIndex:(long long)arg1 text:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;	// IMP=0x0000000000301242
- (id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 detailImage:(id)arg3 forTableView:(id)arg4;	// IMP=0x00000000003010fc
- (id)_credentialsCellWithPrimaryText:(id)arg1 detailText:(id)arg2 forTableView:(id)arg3;	// IMP=0x00000000003010e4
- (id)_otherNumbersCellForRowIndex:(long long)arg1 tableView:(id)arg2;	// IMP=0x0000000000300fe4
- (id)_dynamicSecurityCodeCellForRowIndex:(long long)arg1 tableView:(id)arg2;	// IMP=0x0000000000300ea8
- (id)_cardCredentialsCellForRowIndex:(long long)arg1 tableView:(id)arg2;	// IMP=0x00000000003009ac
- (void)_copyCardDetails;	// IMP=0x0000000000300800
- (void)_willHideUIMenuController:(id)arg1;	// IMP=0x000000000030078e
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000300786
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000003006d4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000003003b3
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000300246
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000003001b5
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000003001a4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003000e8
- (unsigned long long)_virtualCardCredentialDetailsRowForRowIndex:(long long)arg1;	// IMP=0x0000000000300082
- (_Bool)_virtualCardCredentialDetailsRowIsEnabled:(unsigned long long)arg1;	// IMP=0x000000000030000d
- (long long)_numberOfVirtualCardCredentialDetailsRowsEnabled;	// IMP=0x00000000002fffbc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002fff5e
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000002fff0b
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00000000002ffec3
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000000002ffe7b
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000002ffdbb
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00000000002ffdb3
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002ffc07
- (void)viewDidLoad;	// IMP=0x00000000002ffaec
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 physicalCard:(id)arg4 context:(long long)arg5;	// IMP=0x00000000002ffac5
- (id)initWithPass:(id)arg1 accountService:(id)arg2 account:(id)arg3 cardCredentials:(id)arg4 virtualCard:(id)arg5 physicalCard:(id)arg6 context:(long long)arg7;	// IMP=0x00000000002ff7b0

@end

