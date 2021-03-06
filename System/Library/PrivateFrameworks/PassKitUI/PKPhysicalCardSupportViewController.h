//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class PKAccount, PKAccountService, PKAccountUser, PKBusinessChatController, PKPaymentPass, PKPhysicalCard, PKTableHeaderView, UIBarButtonItem;

@interface PKPhysicalCardSupportViewController : UITableViewController
{
    PKAccountService *_accountService;	// 8 = 0x8
    PKAccount *_account;	// 16 = 0x10
    PKAccountUser *_accountUser;	// 24 = 0x18
    PKPaymentPass *_paymentPass;	// 32 = 0x20
    PKPhysicalCard *_physicalCard;	// 40 = 0x28
    PKTableHeaderView *_tableHeaderView;	// 48 = 0x30
    UIBarButtonItem *_nextButton;	// 56 = 0x38
    PKBusinessChatController *_businessChatController;	// 64 = 0x40
    _Bool _hasSelectedReason;	// 72 = 0x48
    long long _selectedReason;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000015fc83
- (void)_presentManualActivation;	// IMP=0x000000000015fbca
- (void)_presentBusinessChatWithContext:(id)arg1;	// IMP=0x000000000015fa1b
- (void)_nextButtonTapped:(id)arg1;	// IMP=0x000000000015f935
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000015f7c1
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000015f7b3
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000015f7a2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000015f797
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000015f601
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000015f5c4
- (void)viewWillLayoutSubviews;	// IMP=0x000000000015f531
- (void)viewDidLoad;	// IMP=0x000000000015f25f
- (id)initWithAccountService:(id)arg1 account:(id)arg2 accountUser:(id)arg3 paymentPass:(id)arg4 physicalCard:(id)arg5;	// IMP=0x000000000015f063

@end

