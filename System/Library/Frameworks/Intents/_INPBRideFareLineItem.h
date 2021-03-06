//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRideFareLineItem-Protocol.h>

@class NSString, _INPBDecimalNumberValue;

@interface _INPBRideFareLineItem : PBCodable <_INPBRideFareLineItem, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_currencyCode;	// 8 = 0x8
    _INPBDecimalNumberValue *_price;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008fa24
- (void).cxx_destruct;	// IMP=0x000000000008f7d3
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _INPBDecimalNumberValue *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (id)dictionaryRepresentation;	// IMP=0x000000000008f620
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008f1c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008f0da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008f048
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008ef49
- (void)writeTo:(id)arg1;	// IMP=0x000000000008ee40
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008ee33
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasPrice;
@property(readonly, nonatomic) _Bool hasCurrencyCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

