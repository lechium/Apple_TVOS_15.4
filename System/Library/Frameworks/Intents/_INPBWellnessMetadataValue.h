//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBWellnessMetadataValue-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBString;

@interface _INPBWellnessMetadataValue : PBCodable <_INPBWellnessMetadataValue, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBDouble *_pbDoubleValue;	// 8 = 0x8
    _INPBInteger *_ordinalValue;	// 16 = 0x10
    _INPBString *_pbStringValue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f8c01
- (void).cxx_destruct;	// IMP=0x00000000000f894e
@property(retain, nonatomic) _INPBString *pbStringValue; // @synthesize pbStringValue=_pbStringValue;
@property(retain, nonatomic) _INPBInteger *ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property(retain, nonatomic) _INPBDouble *pbDoubleValue; // @synthesize pbDoubleValue=_pbDoubleValue;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f87c3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f8367
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f827d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f81eb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f80ec
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f7fad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f7fa0
@property(readonly, nonatomic) _Bool hasPbStringValue;
@property(readonly, nonatomic) _Bool hasOrdinalValue;
@property(readonly, nonatomic) _Bool hasPbDoubleValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

