//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBConfigureHomeIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBConfigureHomeIntent : PBCodable <_INPBConfigureHomeIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_entities;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d18b
+ (Class)entitiesType;	// IMP=0x000000000000d17a
- (void).cxx_destruct;	// IMP=0x000000000000cf36
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (id)dictionaryRepresentation;	// IMP=0x000000000000cc8d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c983
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c8c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c832
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c733
- (void)writeTo:(id)arg1;	// IMP=0x000000000000c593
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000c586
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)entitiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000c540
@property(readonly, nonatomic) unsigned long long entitiesCount;
- (void)addEntities:(id)arg1;	// IMP=0x000000000000c4a9
- (void)clearEntities;	// IMP=0x000000000000c48c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
