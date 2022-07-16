//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, PKServiceProviderPurchaseData;

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_visibleTransactionIdentifier;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    NSString *_deviceIdentifier;	// 32 = 0x20
    NSString *_regionIdentifier;	// 40 = 0x28
    NSString *_serviceProviderIdentifier;	// 48 = 0x30
    PKServiceProviderPurchaseData *_serviceProviderData;	// 56 = 0x38
    NSDate *_purchaseDate;	// 64 = 0x40
    NSString *_signature;	// 72 = 0x48
    NSString *_partnerMetadata;	// 80 = 0x50
    NSArray *_actions;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001be40f
+ (id)purchaseWithDictionary:(id)arg1;	// IMP=0x00000000001bdf4d
- (void).cxx_destruct;	// IMP=0x00000000001bee94
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *partnerMetadata; // @synthesize partnerMetadata=_partnerMetadata;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(copy, nonatomic) PKServiceProviderPurchaseData *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(copy, nonatomic) NSString *regionIdentifier; // @synthesize regionIdentifier=_regionIdentifier;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *visibleTransactionIdentifier; // @synthesize visibleTransactionIdentifier=_visibleTransactionIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000001bebad
- (_Bool)isEqualToServiceProviderPurchase:(id)arg1;	// IMP=0x00000000001beab5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bea57
- (unsigned long long)hash;	// IMP=0x00000000001be978
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001be82f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001be417
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001bdf96

@end

