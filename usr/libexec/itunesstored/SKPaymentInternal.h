//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

@interface SKPaymentInternal : NSObject
{
    NSString *_applicationUsername;	// 8 = 0x8
    NSString *_partnerIdentifier;	// 16 = 0x10
    NSString *_partnerTransactionIdentifier;	// 24 = 0x18
    NSString *_productIdentifier;	// 32 = 0x20
    long long _quantity;	// 40 = 0x28
    NSData *_requestData;	// 48 = 0x30
    NSDictionary *_requestParameters;	// 56 = 0x38
    _Bool _simulatesAskToBuyInSandbox;	// 64 = 0x40
    _Bool _isStoreOriginated;	// 65 = 0x41
    SKPaymentDiscount *_paymentDiscount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000105a02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001058f3
- (id)init;	// IMP=0x00100000001058b3

@end

