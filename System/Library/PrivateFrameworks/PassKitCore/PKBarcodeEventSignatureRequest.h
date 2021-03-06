//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSNumber, NSString;

@interface PKBarcodeEventSignatureRequest : NSObject <NSSecureCoding>
{
    NSString *_deviceAccountIdentifier;	// 8 = 0x8
    NSString *_transactionIdentifier;	// 16 = 0x10
    NSString *_barcodeIdentifier;	// 24 = 0x18
    NSString *_rawMerchantName;	// 32 = 0x20
    NSString *_merchantName;	// 40 = 0x28
    NSDate *_transactionDate;	// 48 = 0x30
    NSString *_currencyCode;	// 56 = 0x38
    NSNumber *_amount;	// 64 = 0x40
    NSString *_transactionStatus;	// 72 = 0x48
    NSData *_partialSignature;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000158471
- (void).cxx_destruct;	// IMP=0x0000000000158933
@property(copy, nonatomic) NSData *partialSignature; // @synthesize partialSignature=_partialSignature;
@property(copy, nonatomic) NSString *transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(retain, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(copy, nonatomic) NSString *rawMerchantName; // @synthesize rawMerchantName=_rawMerchantName;
@property(copy, nonatomic) NSString *barcodeIdentifier; // @synthesize barcodeIdentifier=_barcodeIdentifier;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSString *deviceAccountIdentifier; // @synthesize deviceAccountIdentifier=_deviceAccountIdentifier;
- (id)description;	// IMP=0x00000000001587f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000158586
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000158479
- (id)initWithPaymentTransaction:(id)arg1 deviceAccountIdentifier:(id)arg2;	// IMP=0x0000000000158246

@end

