//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPaymentAmountValue-Protocol.h>

@class NSString, _INPBCurrencyAmountValue;

@interface _INPBPaymentAmountValue : PBCodable <_INPBPaymentAmountValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int amountType:1;
    } _has;	// 8 = 0x8
    int _amountType;	// 12 = 0xc
    _INPBCurrencyAmountValue *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ecfb7
- (void).cxx_destruct;	// IMP=0x00000000001ecd5d
@property(retain, nonatomic) _INPBCurrencyAmountValue *value; // @synthesize value=_value;
@property(nonatomic) int amountType; // @synthesize amountType=_amountType;
- (id)dictionaryRepresentation;	// IMP=0x00000000001ecbbf
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ec979
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ec8d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ec841
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ec742
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ec68f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ec682
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsAmountType:(id)arg1;	// IMP=0x00000000001ec564
- (id)amountTypeAsString:(int)arg1;	// IMP=0x00000000001ec4c9
@property(nonatomic) _Bool hasAmountType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

