//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKBarcodePaymentPrivacyViewController
{
    unsigned long long _displayContext;	// 8 = 0x8
    NSString *_issuerName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000055705
- (void)_dismiss;	// IMP=0x00000000000556c1
- (void)_closeButtonPressed:(id)arg1;	// IMP=0x00000000000556af
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x000000000005569d
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000055695
- (void)viewDidLoad;	// IMP=0x0000000000055444
- (id)initWithIssuerName:(id)arg1 displayContext:(unsigned long long)arg2 paymentSetupContext:(long long)arg3;	// IMP=0x00000000000553ba

@end
