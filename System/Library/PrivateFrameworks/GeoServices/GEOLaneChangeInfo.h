//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOLaneChangeInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _endOffsetCm;	// 16 = 0x10
    unsigned int _numValidLanes;	// 20 = 0x14
    unsigned int _startOffsetCm;	// 24 = 0x18
    struct {
        unsigned int has_endOffsetCm:1;
        unsigned int has_numValidLanes:1;
        unsigned int has_startOffsetCm:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008a29e0
- (void).cxx_destruct;	// IMP=0x00000000008a30cd
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008a3087
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008a2fe5
- (unsigned long long)hash;	// IMP=0x00000000008a2f69
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008a2e5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008a2da3
- (void)copyTo:(id)arg1;	// IMP=0x00000000008a2d16
- (void)writeTo:(id)arg1;	// IMP=0x00000000008a2c6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008a2c5c
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008a25c0
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008a25ae
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008a23d4
- (id)jsonRepresentation;	// IMP=0x00000000008a22c2
- (id)dictionaryRepresentation;	// IMP=0x00000000008a2029
- (id)description;	// IMP=0x00000000008a1f7a
@property(nonatomic) _Bool hasNumValidLanes;
@property(nonatomic) unsigned int numValidLanes;
@property(nonatomic) _Bool hasEndOffsetCm;
@property(nonatomic) unsigned int endOffsetCm;
@property(nonatomic) _Bool hasStartOffsetCm;
@property(nonatomic) unsigned int startOffsetCm;

@end
