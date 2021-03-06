//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPowerValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBPowerValue : PBCodable <_INPBPowerValue, NSSecureCoding, NSCopying>
{
    CDStruct_74078a21 _has;	// 8 = 0x8
    int _unit;	// 12 = 0xc
    double _magnitude;	// 16 = 0x10
    _INPBValueMetadata *_valueMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b0005
- (void).cxx_destruct;	// IMP=0x00000000004afd4b
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
- (id)dictionaryRepresentation;	// IMP=0x00000000004afaeb
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004af71c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004af648
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004af5b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004af4b7
- (void)writeTo:(id)arg1;	// IMP=0x00000000004af3d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004af3c9
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsUnit:(id)arg1;	// IMP=0x00000000004af1e4
- (id)unitAsString:(int)arg1;	// IMP=0x00000000004af0fb
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) _Bool hasMagnitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

