//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORouteLegRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _endValidDistanceOffsetCm;	// 16 = 0x10
    unsigned int _startValidDistanceOffsetCm;	// 20 = 0x14
    struct {
        unsigned int has_endValidDistanceOffsetCm:1;
        unsigned int has_startValidDistanceOffsetCm:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000090528a
- (void).cxx_destruct;	// IMP=0x0000000000905657
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000905611
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000090558a
- (unsigned long long)hash;	// IMP=0x000000000090552a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000905441
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009053a4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000905332
- (void)writeTo:(id)arg1;	// IMP=0x00000000009052a6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000905297
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000090522a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000905218
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009050b0
- (id)jsonRepresentation;	// IMP=0x0000000000904f9e
- (id)dictionaryRepresentation;	// IMP=0x0000000000904d67
- (id)description;	// IMP=0x0000000000904cb8
@property(nonatomic) _Bool hasEndValidDistanceOffsetCm;
@property(nonatomic) unsigned int endValidDistanceOffsetCm;
@property(nonatomic) _Bool hasStartValidDistanceOffsetCm;
@property(nonatomic) unsigned int startValidDistanceOffsetCm;

@end
