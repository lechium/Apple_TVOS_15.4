//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentPass, PKPhysicalCard;

@interface PKAccountOtherCardNumbersViewController
{
    PKPhysicalCard *_physicalCard;	// 8 = 0x8
    PKPaymentPass *_paymentPass;	// 16 = 0x10
    unsigned long long _accountFeatureIdentifier;	// 24 = 0x18
    long long _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013de73
- (id)_applePayCardNumberHeaderWithTableView:(id)arg1;	// IMP=0x000000000013de57
- (id)_titaniumCardNumberHeaderWithTableView:(id)arg1;	// IMP=0x000000000013de3b
- (void)_appendApplePayCardNumberSectionToConfiguration:(id)arg1;	// IMP=0x000000000013dbe0
- (void)_appendPhysicalCardSectionToConfiguration:(id)arg1;	// IMP=0x000000000013da03
- (void)_updateCardNumbersConfigurationAnimated:(_Bool)arg1;	// IMP=0x000000000013d973
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000013d8d8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000013d8c7
- (void)viewDidLoad;	// IMP=0x000000000013d7cf
- (id)initWithPhysicalCard:(id)arg1 paymentPass:(id)arg2 accountFeatureIdentifier:(unsigned long long)arg3 context:(long long)arg4;	// IMP=0x000000000013d6ed

@end
