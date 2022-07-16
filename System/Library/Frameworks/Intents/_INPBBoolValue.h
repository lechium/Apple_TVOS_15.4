//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBoolValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBBoolValue : PBCodable <_INPBBoolValue, NSSecureCoding, NSCopying>
{
    CDStruct_01ef6375 _has;	// 8 = 0x8
    _Bool _value;	// 12 = 0xc
    _INPBValueMetadata *_valueMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a82ac
- (void).cxx_destruct;	// IMP=0x00000000001a804c
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) _Bool value; // @synthesize value=_value;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a7f1f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a7cd9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a7c32
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a7ba0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a7aa1
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a79ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a79e0
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(nonatomic) _Bool hasValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

