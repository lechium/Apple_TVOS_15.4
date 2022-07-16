//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBWellnessValue-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBValueMetadata;

@interface _INPBWellnessValue : PBCodable <_INPBWellnessValue, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBDouble *_pbDoubleValue;	// 8 = 0x8
    _INPBInteger *_ordinalValue;	// 16 = 0x10
    _INPBValueMetadata *_valueMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000027eef6
- (void).cxx_destruct;	// IMP=0x000000000027ec43
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBInteger *ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property(retain, nonatomic) _INPBDouble *pbDoubleValue; // @synthesize pbDoubleValue=_pbDoubleValue;
- (id)dictionaryRepresentation;	// IMP=0x000000000027eab8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027e65c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027e572
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027e4e0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000027e3e1
- (void)writeTo:(id)arg1;	// IMP=0x000000000027e2a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000027e295
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasOrdinalValue;
@property(readonly, nonatomic) _Bool hasPbDoubleValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

