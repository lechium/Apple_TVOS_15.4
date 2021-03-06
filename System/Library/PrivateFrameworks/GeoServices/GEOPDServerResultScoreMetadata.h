//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDServerResultScoreMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    float _normalizedScore;	// 16 = 0x10
    struct {
        unsigned int has_normalizedScore:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000063769a
- (unsigned long long)hash;	// IMP=0x0000000000637590
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006374f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000637475
- (void)writeTo:(id)arg1;	// IMP=0x0000000000637411
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000637402
- (id)jsonRepresentation;	// IMP=0x00000000006372f0
- (id)dictionaryRepresentation;	// IMP=0x000000000063711b
- (id)description;	// IMP=0x000000000063706c

@end

