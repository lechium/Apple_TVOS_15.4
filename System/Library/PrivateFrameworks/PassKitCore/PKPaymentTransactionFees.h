//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    NSSet *_fees;	// 8 = 0x8
}

+ (id)_feesSetFromJsonString:(id)arg1;	// IMP=0x000000000032ff7c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000032fb7b
+ (id)recordNamePrefix;	// IMP=0x000000000032fb73
- (void).cxx_destruct;	// IMP=0x000000000033032b
@property(retain, nonatomic) NSSet *fees; // @synthesize fees=_fees;
- (id)description;	// IMP=0x000000000032fd68
- (_Bool)isEqualToFees:(id)arg1;	// IMP=0x000000000032fd56
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032fcee
- (unsigned long long)hash;	// IMP=0x000000000032fc86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032fc63
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032fb83
- (id)primaryIdentifier;	// IMP=0x000000000032fb6b
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;	// IMP=0x000000000032fb63
- (unsigned long long)itemType;	// IMP=0x000000000032fb58
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1;	// IMP=0x000000000032fa8b
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;	// IMP=0x000000000032fa6e
- (id)_feeItemsFromRecord:(id)arg1;	// IMP=0x000000000032f9fa
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;	// IMP=0x000000000032f95f
- (id)initWithCloudStoreCoder:(id)arg1;	// IMP=0x000000000032f8b1
- (id)jsonString;	// IMP=0x000000000032f74d
- (id)jsonArrayRepresentation;	// IMP=0x000000000032f588
- (id)initWithJsonString:(id)arg1;	// IMP=0x000000000032f4b7
- (id)initWithFeeItems:(id)arg1;	// IMP=0x000000000032f412

@end
