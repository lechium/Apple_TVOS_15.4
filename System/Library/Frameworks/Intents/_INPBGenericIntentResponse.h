//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGenericIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntentResponse : PBCodable <_INPBGenericIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_metadata;	// 8 = 0x8
    NSArray *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000330b44
+ (Class)propertiesType;	// IMP=0x0000000000330b33
- (void).cxx_destruct;	// IMP=0x00000000003308ec
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
- (id)dictionaryRepresentation;	// IMP=0x0000000000330655
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033034b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033028c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003301fa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003300fb
- (void)writeTo:(id)arg1;	// IMP=0x000000000032ff70
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000032ff63
- (id)propertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000032ff46
@property(readonly, nonatomic) unsigned long long propertiesCount;
- (void)addProperties:(id)arg1;	// IMP=0x000000000032feaf
- (void)clearProperties;	// IMP=0x000000000032fe92
@property(readonly, nonatomic) _Bool hasMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
