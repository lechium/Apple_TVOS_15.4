//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDecimalNumber, NSString, PKPaymentMerchantSession;

@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam
{
    PKPaymentMerchantSession *_merchantSession;	// 8 = 0x8
    NSString *_secureElementIdentifier;	// 16 = 0x10
    NSDecimalNumber *_transactionAmount;	// 24 = 0x18
    NSString *_currencyCode;	// 32 = 0x20
}

+ (id)paramWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 transactionAmount:(id)arg3 currencyCode:(id)arg4;	// IMP=0x00000000002f7378
- (void).cxx_destruct;	// IMP=0x00000000002f7588
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(retain, nonatomic) PKPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
- (id)description;	// IMP=0x00000000002f745b

@end
