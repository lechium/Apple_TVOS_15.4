//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, PKPaymentSetupProduct, PKServiceProviderPurchase;

@interface PKPaymentPurchasedProductCredential
{
    PKPaymentSetupProduct *_product;	// 80 = 0x50
    NSString *_productIdentifier;	// 88 = 0x58
    PKServiceProviderPurchase *_purchase;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001a9ae5
@property(readonly, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (_Bool)isEqualToPaymentPurchasedProductCredential:(id)arg1;	// IMP=0x00000000001a9847
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a97e9
- (unsigned long long)hash;	// IMP=0x00000000001a96dc
@property(readonly, copy, nonatomic) NSString *statusDescription;
@property(readonly, copy, nonatomic) NSString *summaryMetadataDescription;
@property(readonly, copy, nonatomic) NSArray *metadata;
- (void)setRequirementsResponse:(id)arg1;	// IMP=0x00000000001a914a
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2;	// IMP=0x00000000001a8fe5

@end

