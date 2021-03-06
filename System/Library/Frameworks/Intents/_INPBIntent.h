//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntent-Protocol.h>

@class NSString, _INPBAppIdentifier;

@interface _INPBIntent : PBCodable <_INPBIntent, NSSecureCoding, NSCopying>
{
    CDStruct_a8e956ad _has;	// 8 = 0x8
    int _encodingFormat;	// 12 = 0xc
    _INPBAppIdentifier *_appIdentifier;	// 16 = 0x10
    NSString *_encodedIntent;	// 24 = 0x18
    NSString *_encodedIntentDefinition;	// 32 = 0x20
    NSString *_intentTypeName;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f3b5c
- (void).cxx_destruct;	// IMP=0x00000000003f3806
@property(copy, nonatomic) NSString *intentTypeName; // @synthesize intentTypeName=_intentTypeName;
@property(nonatomic) int encodingFormat; // @synthesize encodingFormat=_encodingFormat;
@property(copy, nonatomic) NSString *encodedIntentDefinition; // @synthesize encodedIntentDefinition=_encodedIntentDefinition;
@property(copy, nonatomic) NSString *encodedIntent; // @synthesize encodedIntent=_encodedIntent;
@property(retain, nonatomic) _INPBAppIdentifier *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)dictionaryRepresentation;	// IMP=0x00000000003f3556
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f2f62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f2e07
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f2d75
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f2c76
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f2b00
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f2af3
@property(readonly, nonatomic) _Bool hasIntentTypeName;
- (int)StringAsEncodingFormat:(id)arg1;	// IMP=0x00000000003f2a43
- (id)encodingFormatAsString:(int)arg1;	// IMP=0x00000000003f29ed
@property(nonatomic) _Bool hasEncodingFormat;
@property(readonly, nonatomic) _Bool hasEncodedIntentDefinition;
@property(readonly, nonatomic) _Bool hasEncodedIntent;
@property(readonly, nonatomic) _Bool hasAppIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

