//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBalanceAmountValue-Protocol.h>

@class NSString, _INPBCurrencyAmountValue, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBBalanceAmountValue : PBCodable <_INPBBalanceAmountValue, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    _INPBCurrencyAmountValue *_currencyAmount;	// 16 = 0x10
    _INPBDecimalNumberValue *_customAmount;	// 24 = 0x18
    _INPBValueMetadata *_valueMetadata;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a6a24
- (void).cxx_destruct;	// IMP=0x00000000001a66c8
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBDecimalNumberValue *customAmount; // @synthesize customAmount=_customAmount;
@property(retain, nonatomic) _INPBCurrencyAmountValue *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a6485
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a5fbf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a5e9b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a5e09
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a5d0a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a5b9f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a5b92
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000001a5acc
- (id)typeAsString:(int)arg1;	// IMP=0x00000000001a5a65
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasCustomAmount;
@property(readonly, nonatomic) _Bool hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

