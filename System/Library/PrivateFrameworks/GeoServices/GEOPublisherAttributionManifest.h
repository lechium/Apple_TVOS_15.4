//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface GEOPublisherAttributionManifest : PBCodable <NSCopying>
{
    NSMutableDictionary *_publisherAttributionSources;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000cab387
+ (Class)publisherAttributionSourcesType;	// IMP=0x0000000000caa99d
- (void).cxx_destruct;	// IMP=0x0000000000cabc6b
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000cabbd3
- (unsigned long long)hash;	// IMP=0x0000000000cabb98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cabad5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cab958
- (void)copyTo:(id)arg1;	// IMP=0x0000000000cab7ee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cab6be
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cab6af
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000caaf3b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000caaf2e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000caac53
- (id)jsonRepresentation;	// IMP=0x0000000000caabb7
- (id)dictionaryRepresentation;	// IMP=0x0000000000caaa5d
- (id)description;	// IMP=0x0000000000caa9ae
- (unsigned long long)publisherAttributionSourcesCount;	// IMP=0x0000000000caa980
- (void)enumeratePublisherAttributionSourcesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000caa963
- (id)publisherAttributionSourcesForKey:(id)arg1;	// IMP=0x0000000000caa946
- (void)setPublisherAttributionSourcesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000caa8bf
- (void)clearPublisherAttributionSources;	// IMP=0x0000000000caa8a2
@property(retain, nonatomic) NSMutableDictionary *publisherAttributionSources;

@end

