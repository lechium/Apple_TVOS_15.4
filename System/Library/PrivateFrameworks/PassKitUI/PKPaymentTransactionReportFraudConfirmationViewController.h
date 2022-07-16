//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentTransaction;
@protocol PKPaymentDataProvider, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate;

@interface PKPaymentTransactionReportFraudConfirmationViewController
{
    PKPaymentTransaction *_transaction;	// 8 = 0x8
    id <PKPaymentDataProvider> _dataProvider;	// 16 = 0x10
    id <PKPaymentTransactionReportFraudConfirmationViewControllerDelegate> _fraudDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000055d48
- (void)reportFraud:(id)arg1;	// IMP=0x0000000000055a29
- (void)viewDidLoad;	// IMP=0x00000000000557f1
- (id)initWithContext:(long long)arg1 transaction:(id)arg2 dataProvider:(id)arg3 fraudDelegate:(id)arg4;	// IMP=0x0000000000055718

@end
