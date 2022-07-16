//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSDictionary, PKPaymentTransaction, UITableViewCell;

@interface PKTransactionDebugDetailsViewController : UITableViewController
{
    PKPaymentTransaction *_transaction;	// 8 = 0x8
    UITableViewCell *_mapsCell;	// 16 = 0x10
    _Bool _inBridge;	// 24 = 0x18
    NSDictionary *_transactionDetails;	// 32 = 0x20
    NSDictionary *_merchantDetails;	// 40 = 0x28
    NSDictionary *_mapsMerchantDetails;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000454d6c
@property(copy, nonatomic) NSDictionary *mapsMerchantDetails; // @synthesize mapsMerchantDetails=_mapsMerchantDetails;
@property(retain, nonatomic) NSDictionary *merchantDetails; // @synthesize merchantDetails=_merchantDetails;
@property(retain, nonatomic) NSDictionary *transactionDetails; // @synthesize transactionDetails=_transactionDetails;
- (void)_didSelectMap;	// IMP=0x0000000000454958
- (id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2;	// IMP=0x000000000045477c
- (id)_mapsCell;	// IMP=0x000000000045466e
- (id)_mapsBrandInfoCellForIndex:(long long)arg1;	// IMP=0x000000000045454a
- (id)_mapsMerchantInfoCellForIndex:(long long)arg1;	// IMP=0x00000000004543fc
- (id)_merchantInfoCellForIndex:(long long)arg1;	// IMP=0x00000000004542e7
- (id)_transactionInfoCellForIndex:(long long)arg1;	// IMP=0x00000000004541d2
- (id)mapsBrandDetails;	// IMP=0x0000000000453de4
- (id)_stringForTransactionSource:(unsigned long long)arg1;	// IMP=0x00000000004525f9
- (id)_stringForTechnologyType:(long long)arg1;	// IMP=0x00000000004525c0
- (id)_stringForTransactionType:(long long)arg1;	// IMP=0x00000000004524e4
- (id)_stringForTransactionStatus:(long long)arg1;	// IMP=0x000000000045249a
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000451fb5
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000451ed8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000451e87
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000451e7c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000451da3
- (void)viewDidLoad;	// IMP=0x0000000000451d23
- (id)initWithTransaction:(id)arg1;	// IMP=0x0000000000451cb5

@end

