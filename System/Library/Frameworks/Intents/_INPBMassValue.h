//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMassValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBMassValue : PBCodable <_INPBMassValue, NSSecureCoding, NSCopying>
{
    CDStruct_74078a21 _has;	// 8 = 0x8
    int _unit;	// 12 = 0xc
    double _magnitude;	// 16 = 0x10
    _INPBValueMetadata *_valueMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f77b9
- (void).cxx_destruct;	// IMP=0x00000000003f74ff
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
- (id)dictionaryRepresentation;	// IMP=0x00000000003f725a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f6e8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f6db7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f6d25
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f6c26
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f6b45
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f6b38
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsUnit:(id)arg1;	// IMP=0x00000000003f68b4
- (id)unitAsString:(int)arg1;	// IMP=0x00000000003f6788
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) _Bool hasMagnitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

