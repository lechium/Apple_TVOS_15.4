//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CNPostalAddress, NSString, PKPhysicalCardPriceOption;

@interface PKPhysicalCardAction : NSObject <NSSecureCoding>
{
    unsigned long long _actionType;	// 8 = 0x8
    NSString *_activationCode;	// 16 = 0x10
    unsigned long long _reason;	// 24 = 0x18
    NSString *_artworkIdentifier;	// 32 = 0x20
    CNPostalAddress *_shippingAddress;	// 40 = 0x28
    NSString *_nameOnCard;	// 48 = 0x30
    PKPhysicalCardPriceOption *_priceOption;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000236e9
- (void).cxx_destruct;	// IMP=0x00000000000240bc
@property(retain, nonatomic) PKPhysicalCardPriceOption *priceOption; // @synthesize priceOption=_priceOption;
@property(copy, nonatomic) NSString *nameOnCard; // @synthesize nameOnCard=_nameOnCard;
@property(copy, nonatomic) CNPostalAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *activationCode; // @synthesize activationCode=_activationCode;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (id)_shippingAddressJSONRepresentation;	// IMP=0x0000000000023dcc
- (id)jsonRepresentation;	// IMP=0x0000000000023c03
- (unsigned long long)hash;	// IMP=0x0000000000023b5e
- (_Bool)isEqualToPhysicalCardAction:(id)arg1;	// IMP=0x00000000000239d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002396d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023895
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000236f1
- (id)initWithActionType:(unsigned long long)arg1;	// IMP=0x00000000000236ac

@end

