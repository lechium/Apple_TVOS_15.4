//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKAccessibleLayoutObserverDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>

@class NSString, PKAdjustableSingleCellView, PKPaymentPass, PKRemoteDataAccessor, PKTransitBalanceModel;
@protocol PKPaymentDataProvider;

@interface PKPassTransitProductsViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate>
{
    PKTransitBalanceModel *_balanceModel;	// 8 = 0x8
    long long _accessibleLayout;	// 16 = 0x10
    id <PKPaymentDataProvider> _paymentDataProvider;	// 24 = 0x18
    _Bool _hasBalance;	// 32 = 0x20
    _Bool _hasCommutePlans;	// 33 = 0x21
    unsigned long long _transitType;	// 40 = 0x28
    PKAdjustableSingleCellView *_sampleSingleCellView;	// 48 = 0x30
    PKRemoteDataAccessor *_remoteDataAccessor;	// 56 = 0x38
    PKPaymentPass *_pass;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002b0307
@property(nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void)performActionViewControllerDidPerformAction:(id)arg1;	// IMP=0x00000000002b027d
- (void)performActionViewControllerDidCancel:(id)arg1;	// IMP=0x00000000002b0204
- (void)accessibleLayoutForView:(id)arg1 changedFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00000000002b0185
- (void)_configureCell:(id)arg1 inTableView:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x00000000002b00cc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002b0036
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000002aff5f
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002afe61
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000002afe53
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002afded
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002afde2
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002afda5
- (void)_configureView:(id)arg1 indexPath:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002af484
- (CDUnknownBlockType)_actionHandlerForIndexPath:(id)arg1;	// IMP=0x00000000002af1a8
- (id)_allocView;	// IMP=0x00000000002af167
- (id)_topUpActionForIndexPath:(id)arg1 balanceIdentifiers:(id)arg2;	// IMP=0x00000000002aec99
- (id)_renewActionForCommutePlanIdentifier:(id)arg1;	// IMP=0x00000000002aec81
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002aeafd
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002aea6a
- (void)viewDidLoad;	// IMP=0x00000000002ae9a7
- (void)_reloadContent;	// IMP=0x00000000002ae95b
- (void)_setupBalances;	// IMP=0x00000000002ae8c0
- (void)_setupPlans;	// IMP=0x00000000002ae88e
- (id)initWithPaymentPass:(id)arg1 transitType:(unsigned long long)arg2;	// IMP=0x00000000002ae592
- (void)_handlePassUpdate:(id)arg1;	// IMP=0x00000000002ae427
- (void)_reloadBalance;	// IMP=0x00000000002ae00d
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x00000000002adea2
- (void)dealloc;	// IMP=0x00000000002ade20
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceivePlanUpdate:(id)arg2;	// IMP=0x00000000002adcb5
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;	// IMP=0x00000000002ada2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

