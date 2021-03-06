//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString, PKFeatureApplicationOfferDetailsInfo;

@interface PKFeatureApplicationOfferDetails : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_offerTermsIdentifier;	// 8 = 0x8
    NSDate *_expiryDate;	// 16 = 0x10
    NSDecimalNumber *_creditLimit;	// 24 = 0x18
    NSDecimalNumber *_annualFee;	// 32 = 0x20
    NSDecimalNumber *_aprForPurchase;	// 40 = 0x28
    NSDecimalNumber *_balance;	// 48 = 0x30
    NSString *_currencyCode;	// 56 = 0x38
    PKFeatureApplicationOfferDetailsInfo *_detailsInfo;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000364bd6
- (void).cxx_destruct;	// IMP=0x0000000000365385
@property(copy, nonatomic) PKFeatureApplicationOfferDetailsInfo *detailsInfo; // @synthesize detailsInfo=_detailsInfo;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSDecimalNumber *aprForPurchase; // @synthesize aprForPurchase=_aprForPurchase;
@property(copy, nonatomic) NSDecimalNumber *annualFee; // @synthesize annualFee=_annualFee;
@property(copy, nonatomic) NSDecimalNumber *creditLimit; // @synthesize creditLimit=_creditLimit;
@property(copy, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(copy, nonatomic) NSString *offerTermsIdentifier; // @synthesize offerTermsIdentifier=_offerTermsIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000365188
- (unsigned long long)hash;	// IMP=0x00000000003650c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000364fdc
- (id)description;	// IMP=0x0000000000364ecd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000364de8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000364bde
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000364926

@end

