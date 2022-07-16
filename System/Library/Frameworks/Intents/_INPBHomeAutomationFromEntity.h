//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeAutomationFromEntity-Protocol.h>

@class NSString, _INPBString;

@interface _INPBHomeAutomationFromEntity : PBCodable <_INPBHomeAutomationFromEntity, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    _INPBString *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004cf257
- (void).cxx_destruct;	// IMP=0x00000000004ceffd
@property(retain, nonatomic) _INPBString *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)dictionaryRepresentation;	// IMP=0x00000000004cee79
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cec33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ceb8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004ceafb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004ce9fc
- (void)writeTo:(id)arg1;	// IMP=0x00000000004ce949
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004ce93c
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000004ce864
- (id)typeAsString:(int)arg1;	// IMP=0x00000000004ce7e5
@property(nonatomic) _Bool hasType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
