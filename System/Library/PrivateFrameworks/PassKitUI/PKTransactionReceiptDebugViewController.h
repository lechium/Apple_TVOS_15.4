//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSString, PKPaymentService, PKPaymentTransaction, PKTransactionReceipt;

@interface PKTransactionReceiptDebugViewController <PKPaymentServiceDelegate>
{
    PKPaymentService *_paymentService;	// 8 = 0x8
    PKPaymentTransaction *_transaction;	// 16 = 0x10
    PKTransactionReceipt *_receipt;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000020c0db
- (id)_previewCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000020c064
- (id)_amountCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000020bee0
- (id)_summaryItemCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000020bcb4
- (id)_lineItemCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000020baa4
- (id)_headerFieldCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000020b938
- (id)_infoCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000020b692
- (void)_presentReceiptPreview;	// IMP=0x000000000020b68c
- (void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;	// IMP=0x000000000020b4a2
- (void)viewDidLoad;	// IMP=0x000000000020b2c8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000020b283
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000020b1ea
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000020b1b0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000020b10c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000020b038
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x000000000020af28
- (id)initWithPaymentTransaction:(id)arg1;	// IMP=0x000000000020ae7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

