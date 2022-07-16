//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSString, PKDashboardPaymentTransactionItemPresenter, PKFamilyMember, PKFamilyMemberCollection, PKPaymentService, PKPeerPaymentAccount, PKPeerPaymentPreferences, PKPeerPaymentPreferencesUpdateRequest, PKPeerPaymentService, PKPeerPaymentWebService, PKTransactionSource;

@interface PKPeerPaymentAssociatedAccountViewController <PKPaymentServiceDelegate>
{
    PKFamilyMember *_familyMember;	// 8 = 0x8
    PKFamilyMemberCollection *_familyCollection;	// 16 = 0x10
    PKPeerPaymentWebService *_peerPaymentWebSerivce;	// 24 = 0x18
    PKPeerPaymentAccount *_peerPaymentAccount;	// 32 = 0x20
    PKPeerPaymentService *_peerPaymentService;	// 40 = 0x28
    PKPeerPaymentAccount *_associatedAccount;	// 48 = 0x30
    PKPeerPaymentPreferences *_preferences;	// 56 = 0x38
    PKTransactionSource *_transactionSource;	// 64 = 0x40
    PKPaymentService *_paymentService;	// 72 = 0x48
    long long _detailViewStyle;	// 80 = 0x50
    PKDashboardPaymentTransactionItemPresenter *_transactionPresenter;	// 88 = 0x58
    NSString *_viewerFamilyMemberTypeAnalyticsKey;	// 96 = 0x60
    PKPeerPaymentPreferencesUpdateRequest *_currentPreferencesUpdateRequest;	// 104 = 0x68
    PKPeerPaymentPreferencesUpdateRequest *_pendingPreferencesUpdateRequest;	// 112 = 0x70
    _Bool _hasPaymentTransactions;	// 120 = 0x78
    _Bool _modifyingAccount;	// 121 = 0x79
    _Bool _preferencesChanged;	// 122 = 0x7a
    _Bool _didBeginReporter;	// 123 = 0x7b
}

- (void).cxx_destruct;	// IMP=0x00000000000acfd9
- (void)_executeNextPreferencesUpdateRequestIfPossible;	// IMP=0x00000000000ac919
- (void)_addPreferencesUpdateWithRequest:(id)arg1;	// IMP=0x00000000000ac762
- (void)_updatePeerPaymentAccountWithNewAccount:(id)arg1;	// IMP=0x00000000000ac687
- (void)_presentPassworkPromptWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ac428
- (void)_modifyPeerPaymentAccountState:(unsigned long long)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aba65
- (void)_notificationTransactionsSelectionHasChanged:(id)arg1;	// IMP=0x00000000000ab821
- (void)_updateCellLoadingState:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000ab6c5
- (void)_applyDefaultStylingToCell:(id)arg1 textLabelColor:(id)arg2;	// IMP=0x00000000000ab55d
- (id)_linkCellWithText:(id)arg1 color:(id)arg2 forTableView:(id)arg3;	// IMP=0x00000000000ab45b
- (id)_switchCellWithTextColor:(id)arg1 forTableView:(id)arg2;	// IMP=0x00000000000ab3bf
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;	// IMP=0x00000000000ab320
- (id)_enableCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000ab1cc
- (id)_disableCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000ab078
- (id)_actionsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aaf98
- (id)_notificationTransactionsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aae2c
- (id)_notificationsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aada4
- (id)_restrictionScreenTimeSettingsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aacc4
- (id)_restrictionFamilyCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aab77
- (id)_restrictionContactsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aaa2a
- (id)_restrictionAnyoneCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa8dd
- (id)_rectrictionsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa84d
- (id)_transactionsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa771
- (id)_balanceCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa632
- (id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa598
- (_Bool)_enableCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa584
- (_Bool)_disableCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa570
- (_Bool)_actionsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa55c
- (_Bool)_notificationsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa548
- (_Bool)_rectrictionsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa51a
- (_Bool)_detailsCellShouldHighlightForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa4ec
- (void)_enableCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa4d5
- (void)_disableCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa265
- (void)_actionsCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000aa13c
- (void)_rectrictionsCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000a9e76
- (void)_detailsCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000a9ddd
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x00000000000a9b27
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x00000000000a99a8
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000000a995e
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000a9864
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000a97cc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000a971c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000a9678
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000a9603
- (void)_updatePreferencesFromPeerPaymentServiceAndReloadView;	// IMP=0x00000000000a9562
- (void)_peerPaymentPreferencesChanged:(id)arg1;	// IMP=0x00000000000a9429
- (void)_peerPaymentAccountChanged:(id)arg1;	// IMP=0x00000000000a92f7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000a914c
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000000a9013
- (id)familyMemberTransactionViewController;	// IMP=0x00000000000a8f51
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000a8e72
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a8ddc
- (id)initWithFamilyMember:(id)arg1 familyCollection:(id)arg2 account:(id)arg3;	// IMP=0x00000000000a8788

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

