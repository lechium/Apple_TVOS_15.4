//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntegerValue-Protocol.h>

@class NSString, _INPBValueMetadata;

@interface _INPBIntegerValue : PBCodable <_INPBIntegerValue, NSSecureCoding, NSCopying>
{
    CDStruct_01ef6375 _has;	// 8 = 0x8
    int _value;	// 12 = 0xc
    _INPBValueMetadata *_valueMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c3e8e
- (void).cxx_destruct;	// IMP=0x00000000000c3c34
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int value; // @synthesize value=_value;
- (id)dictionaryRepresentation;	// IMP=0x00000000000c3b08
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c38c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c381c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c378a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c368b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c35d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c35cb
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(nonatomic) _Bool hasValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

