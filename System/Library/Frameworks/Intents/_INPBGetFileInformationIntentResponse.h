//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetFileInformationIntentResponse-Protocol.h>

@class NSString, _INPBFileProperty, _INPBString;

@interface _INPBGetFileInformationIntentResponse : PBCodable <_INPBGetFileInformationIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_f2ecb737 _has;	// 8 = 0x8
    _Bool _success;	// 12 = 0xc
    _INPBString *_entityName;	// 16 = 0x10
    _INPBFileProperty *_property;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000128a14
- (void).cxx_destruct;	// IMP=0x0000000000128735
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) _INPBFileProperty *property; // @synthesize property=_property;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
- (id)dictionaryRepresentation;	// IMP=0x00000000001285a1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012820e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012811c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012808a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000127f8b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000127e7b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000127e6e
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasProperty;
@property(readonly, nonatomic) _Bool hasEntityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

