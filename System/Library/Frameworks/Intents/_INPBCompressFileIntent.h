//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCompressFileIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBCompressFileIntent : PBCodable <_INPBCompressFileIntent, NSSecureCoding, NSCopying>
{
    CDStruct_032f6352 _has;	// 8 = 0x8
    int _entityType;	// 12 = 0xc
    _INPBString *_entityName;	// 16 = 0x10
    _INPBIntentMetadata *_intentMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021b71f
- (void).cxx_destruct;	// IMP=0x000000000021b446
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
- (id)dictionaryRepresentation;	// IMP=0x000000000021b251
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021aea2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021adbd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021ad2b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021ac2c
- (void)writeTo:(id)arg1;	// IMP=0x000000000021ab1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021ab10
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsEntityType:(id)arg1;	// IMP=0x000000000021aa38
- (id)entityTypeAsString:(int)arg1;	// IMP=0x000000000021a9bb
@property(nonatomic) _Bool hasEntityType;
@property(readonly, nonatomic) _Bool hasEntityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

