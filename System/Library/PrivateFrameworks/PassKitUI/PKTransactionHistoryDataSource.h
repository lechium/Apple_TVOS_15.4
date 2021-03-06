//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardDataSource-Protocol.h>
#import <PassKitUI/PKDashboardTransactionFetcherDelegate-Protocol.h>
#import <PassKitUI/PKWorldRegionUpdaterObserver-Protocol.h>

@class CNContact, NSArray, NSCalendar, NSDateFormatter, NSIndexPath, NSSet, NSString, PKAccount, PKAccountServiceAccountResolutionController, PKAccountUserCollection, PKCoarseLocationMonitor, PKContactResolver, PKCreditInstallmentPlan, PKCurrencyAmount, PKDashboardTransactionFetcher, PKFamilyMemberCollection, PKMerchant, PKPaymentTransaction, PKPaymentTransactionGroup, PKTransactionReceipt, PKTransactionSourceCollection, PKWorldRegionUpdater;
@protocol PKDashboardDataSourceDelegate, PKPaymentDataProvider;

@interface PKTransactionHistoryDataSource : NSObject <PKDashboardTransactionFetcherDelegate, PKWorldRegionUpdaterObserver, PKDashboardDataSource>
{
    PKTransactionSourceCollection *_transactionSourceCollection;	// 8 = 0x8
    PKDashboardTransactionFetcher *_transactionFetcher;	// 16 = 0x10
    PKContactResolver *_contactResolver;	// 24 = 0x18
    NSString *_peerPaymentCounterpartHandle;	// 32 = 0x20
    id <PKDashboardDataSourceDelegate> _delegate;	// 40 = 0x28
    PKPaymentTransaction *_featuredTransaction;	// 48 = 0x30
    PKPaymentTransactionGroup *_selectedTransactions;	// 56 = 0x38
    PKCreditInstallmentPlan *_associatedInstallmentPlan;	// 64 = 0x40
    PKTransactionReceipt *_associatedReceipt;	// 72 = 0x48
    NSArray *_featuredTransactionActions;	// 80 = 0x50
    NSArray *_actionItems;	// 88 = 0x58
    PKAccountServiceAccountResolutionController *_resolutionController;	// 96 = 0x60
    id <PKPaymentDataProvider> _dataProvider;	// 104 = 0x68
    PKWorldRegionUpdater *_regionUpdater;	// 112 = 0x70
    PKCoarseLocationMonitor *_coarseLocationMonitor;	// 120 = 0x78
    PKFamilyMemberCollection *_familyCollection;	// 128 = 0x80
    NSArray *_groups;	// 136 = 0x88
    NSArray *_tokens;	// 144 = 0x90
    _Bool _contentIsLoaded;	// 152 = 0x98
    _Bool _contactLoaded;	// 153 = 0x99
    _Bool _transactionHistoryLoaded;	// 154 = 0x9a
    _Bool _associatedReceiptLoaded;	// 155 = 0x9b
    NSArray *_transactionHistory;	// 160 = 0xa0
    _Bool _hasReceived;	// 168 = 0xa8
    _Bool _hasSent;	// 169 = 0xa9
    NSDateFormatter *_formatterTitle;	// 176 = 0xb0
    NSDateFormatter *_formatterMonth;	// 184 = 0xb8
    NSCalendar *_currentCalendar;	// 192 = 0xc0
    PKAccount *_account;	// 200 = 0xc8
    PKAccountUserCollection *_accountUserCollection;	// 208 = 0xd0
    NSSet *_physicalCards;	// 216 = 0xd8
    unsigned long long _type;	// 224 = 0xe0
    CNContact *_contact;	// 232 = 0xe8
    PKMerchant *_merchant;	// 240 = 0xf0
    PKPaymentTransactionGroup *_group;	// 248 = 0xf8
    PKCurrencyAmount *_footerTotal;	// 256 = 0x100
    PKCurrencyAmount *_footerSecondaryTotal;	// 264 = 0x108
    NSIndexPath *_headerIndexPath;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000003b3a4e
@property(readonly, nonatomic) NSIndexPath *headerIndexPath; // @synthesize headerIndexPath=_headerIndexPath;
@property(readonly, nonatomic) PKCurrencyAmount *footerSecondaryTotal; // @synthesize footerSecondaryTotal=_footerSecondaryTotal;
@property(readonly, nonatomic) PKCurrencyAmount *footerTotal; // @synthesize footerTotal=_footerTotal;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) PKPaymentTransactionGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)_updateGroup:(id)arg1 withRegion:(id)arg2;	// IMP=0x00000000003b378b
- (void)worldRegionUpdated:(id)arg1 updatedRegion:(id)arg2;	// IMP=0x00000000003b33af
- (void)_updateInstallmentPlan;	// IMP=0x00000000003b2f91
- (void)_handleCoarseLocationChangedNotification:(id)arg1;	// IMP=0x00000000003b2e8e
- (void)_handleAccountsChangedNotification:(id)arg1;	// IMP=0x00000000003b2a61
- (id)_contactKeysToFetch;	// IMP=0x00000000003b29b1
- (void)_handleTransactionHistoryUpdated:(id)arg1;	// IMP=0x00000000003b120c
- (void)_notifyContentLoadedIfNecessary;	// IMP=0x00000000003b116d
- (void)_reloadTransactions;	// IMP=0x00000000003b1051
- (void)_loadTransactionReceipt;	// IMP=0x00000000003b0e57
- (void)_loadContact;	// IMP=0x00000000003b0c84
- (id)_headerItem;	// IMP=0x00000000003b072b
- (id)_groupItemForTransaction:(id)arg1;	// IMP=0x00000000003b065a
- (id)_transactionItemForTransaction:(id)arg1;	// IMP=0x00000000003b0577
- (void)_p2pTotalsFromTransactions:(id)arg1 received:(id *)arg2 sent:(id *)arg3;	// IMP=0x00000000003affd0
- (id)_totalFromGroups:(id)arg1;	// IMP=0x00000000003af975
- (id)_totalDailyCashRewardsFromTransactions:(id)arg1;	// IMP=0x00000000003af6ff
- (id)_totalRewardsFromTransactions:(id)arg1;	// IMP=0x00000000003af3e4
- (id)_totalPaymentsFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00000000003aeffe
- (id)_totalSpendingFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00000000003aec0c
- (void)transactionsChanged:(id)arg1;	// IMP=0x00000000003aebfa
- (id)footerTextItemForSection:(unsigned long long)arg1;	// IMP=0x00000000003ae92c
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x00000000003ae373
- (unsigned long long)numberOfSections;	// IMP=0x00000000003ae368
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x00000000003ae20c
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00000000003ad92d
- (void)setDataSourceDelegate:(id)arg1;	// IMP=0x00000000003ad8e4
- (id)navigationBarTitle;	// IMP=0x00000000003ad20d
@property(readonly, nonatomic) NSString *footerSecondaryTitle;
@property(readonly, nonatomic) NSString *footerTitle;
- (void)updateGroups:(id)arg1 headerGroup:(id)arg2;	// IMP=0x00000000003ac2c7
- (void)dealloc;	// IMP=0x00000000003ac252
- (id)initWithTransactionGroups:(id)arg1 headerGroup:(id)arg2 regionUpdater:(id)arg3 tokens:(id)arg4 transactionSourceCollection:(id)arg5 familyCollection:(id)arg6 account:(id)arg7 accountUserCollection:(id)arg8 physicalCards:(id)arg9;	// IMP=0x00000000003abe22
- (id)initWithInstallmentPlan:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6;	// IMP=0x00000000003abb2e
- (void)_updateFooterTotalFromGroup:(id)arg1;	// IMP=0x00000000003ab7f3
- (void)updateGroup:(id)arg1;	// IMP=0x00000000003ab75c
- (id)initWithTransactionGroup:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6 fetcher:(id)arg7 transactionHistory:(id)arg8;	// IMP=0x00000000003aad87
- (id)initWithFetcher:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6 featuredTransaction:(id)arg7 selectedTransactions:(id)arg8 transactionHistory:(id)arg9 type:(unsigned long long)arg10;	// IMP=0x00000000003aa4a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

