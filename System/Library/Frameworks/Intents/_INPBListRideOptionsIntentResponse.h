//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBListRideOptionsIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBTimestamp;

@interface _INPBListRideOptionsIntentResponse : PBCodable <_INPBListRideOptionsIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int supportsApplePayForPayment:1;
    } _has;	// 8 = 0x8
    _Bool _supportsApplePayForPayment;	// 12 = 0xc
    _INPBTimestamp *_expirationDate;	// 16 = 0x10
    NSArray *_paymentMethods;	// 24 = 0x18
    NSArray *_rideOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000187452
+ (Class)rideOptionsType;	// IMP=0x0000000000187441
+ (Class)paymentMethodsType;	// IMP=0x0000000000187430
- (void).cxx_destruct;	// IMP=0x00000000001870ba
@property(nonatomic) _Bool supportsApplePayForPayment; // @synthesize supportsApplePayForPayment=_supportsApplePayForPayment;
@property(copy, nonatomic) NSArray *rideOptions; // @synthesize rideOptions=_rideOptions;
@property(copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)dictionaryRepresentation;	// IMP=0x0000000000186bed
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000186731
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000186616
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000186584
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000186485
- (void)writeTo:(id)arg1;	// IMP=0x00000000001861ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001861dd
@property(nonatomic) _Bool hasSupportsApplePayForPayment;
- (id)rideOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018617b
@property(readonly, nonatomic) unsigned long long rideOptionsCount;
- (void)addRideOptions:(id)arg1;	// IMP=0x00000000001860e4
- (void)clearRideOptions;	// IMP=0x00000000001860c7
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000186076
@property(readonly, nonatomic) unsigned long long paymentMethodsCount;
- (void)addPaymentMethods:(id)arg1;	// IMP=0x0000000000185fdf
- (void)clearPaymentMethods;	// IMP=0x0000000000185fc2
@property(readonly, nonatomic) _Bool hasExpirationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

