//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>

@class NSArray, NSDateFormatter, NSMutableDictionary, NSSet, NSString, PKAccount, PKAccountService, PKAccountUserCollection, PKFamilyMemberCollection, PKTransactionSourceCollection;
@protocol PKPaymentDataProvider;

@interface PKInstallmentPlansViewController : UITableViewController <PKPaymentDataProviderDelegate>
{
    PKAccount *_account;	// 8 = 0x8
    PKAccountUserCollection *_accountUserCollection;	// 16 = 0x10
    NSSet *_physicalCards;	// 24 = 0x18
    PKAccountService *_accountService;	// 32 = 0x20
    id <PKPaymentDataProvider> _dataProvider;	// 40 = 0x28
    NSArray *_installmentPlans;	// 48 = 0x30
    NSMutableDictionary *_installmentPlanToDeviceName;	// 56 = 0x38
    NSMutableDictionary *_installmentPlanImages;	// 64 = 0x40
    NSDateFormatter *_installmentDateFormatter;	// 72 = 0x48
    PKFamilyMemberCollection *_familyCollection;	// 80 = 0x50
    PKTransactionSourceCollection *_transactionSourceCollection;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000d938a
@property(readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // @synthesize transactionSourceCollection=_transactionSourceCollection;
- (void)_handleAccountUpdatedNotification:(id)arg1;	// IMP=0x00000000000d917b
- (id)_totalAmountRemaining;	// IMP=0x00000000000d8f27
- (id)_totalAmountPaid;	// IMP=0x00000000000d8c83
- (void)_updateInstallmentPlans;	// IMP=0x00000000000d88c2
- (id)_installmentPlanForIndexPath:(id)arg1;	// IMP=0x00000000000d8853
- (id)_imageWithURL:(id)arg1 installmentPlan:(id)arg2;	// IMP=0x00000000000d8374
- (void)_configureCell:(id)arg1 forInstallmentPlan:(id)arg2;	// IMP=0x00000000000d80af
- (void)didUpdateFamilyMembers:(id)arg1;	// IMP=0x00000000000d7f5a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000d7e1e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000d7d78
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000d7d5b
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000d7cc8
- (void)viewDidLoad;	// IMP=0x00000000000d7c30
- (id)initWithAccount:(id)arg1 accountUserCollection:(id)arg2 physicalCards:(id)arg3 accountService:(id)arg4 transactionSourceCollection:(id)arg5 familyCollection:(id)arg6 dataProvider:(id)arg7;	// IMP=0x00000000000d794a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

