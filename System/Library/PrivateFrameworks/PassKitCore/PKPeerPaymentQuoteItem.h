//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDecimalNumber, NSString;

@interface PKPeerPaymentQuoteItem : NSObject <NSSecureCoding>
{
    _Bool _preservesCurrentBalance;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSDecimalNumber *_exchangeRate;	// 24 = 0x18
    NSDecimalNumber *_sendAmount;	// 32 = 0x20
    NSString *_sendAmountCurrency;	// 40 = 0x28
    NSDecimalNumber *_receiveAmount;	// 48 = 0x30
    NSString *_receiveAmountCurrency;	// 56 = 0x38
    NSDecimalNumber *_totalAmount;	// 64 = 0x40
    NSString *_totalAmountCurrency;	// 72 = 0x48
    NSDecimalNumber *_fees;	// 80 = 0x50
    NSString *_feesCurrency;	// 88 = 0x58
    NSString *_dpanIdentifier;	// 96 = 0x60
    NSString *_countryCode;	// 104 = 0x68
    NSArray *_supportedNetworks;	// 112 = 0x70
    NSString *_merchantIdentifier;	// 120 = 0x78
    unsigned long long _merchantCapabilities;	// 128 = 0x80
    NSData *_nonce;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000292704
+ (id)quoteItemWithDictionary:(id)arg1;	// IMP=0x00000000002922a4
- (void).cxx_destruct;	// IMP=0x00000000002932af
@property(readonly, nonatomic) _Bool preservesCurrentBalance; // @synthesize preservesCurrentBalance=_preservesCurrentBalance;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(readonly, copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(readonly, copy, nonatomic) NSArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property(readonly, copy, nonatomic) NSString *feesCurrency; // @synthesize feesCurrency=_feesCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *fees; // @synthesize fees=_fees;
@property(readonly, copy, nonatomic) NSString *totalAmountCurrency; // @synthesize totalAmountCurrency=_totalAmountCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(readonly, copy, nonatomic) NSString *receiveAmountCurrency; // @synthesize receiveAmountCurrency=_receiveAmountCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *receiveAmount; // @synthesize receiveAmount=_receiveAmount;
@property(readonly, copy, nonatomic) NSString *sendAmountCurrency; // @synthesize sendAmountCurrency=_sendAmountCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *sendAmount; // @synthesize sendAmount=_sendAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000292f90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000292e3b
- (unsigned long long)hash;	// IMP=0x0000000000292cf8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000292b22
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029270c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002922ed

@end

