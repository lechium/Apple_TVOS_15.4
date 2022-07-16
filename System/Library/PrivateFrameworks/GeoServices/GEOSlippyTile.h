//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOSlippyTile : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _x;	// 16 = 0x10
    unsigned int _y;	// 20 = 0x14
    unsigned int _z;	// 24 = 0x18
    CDStruct_ad44f281 _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010b28be
- (void).cxx_destruct;	// IMP=0x00000000010b2fab
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010b2f65
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010b2ec3
- (unsigned long long)hash;	// IMP=0x00000000010b2e47
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010b2d39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010b2c81
- (void)copyTo:(id)arg1;	// IMP=0x00000000010b2bf4
- (void)writeTo:(id)arg1;	// IMP=0x00000000010b2b49
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010b2b3a
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010b249e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010b2491
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010b22ec
- (id)jsonRepresentation;	// IMP=0x00000000010b21da
- (id)dictionaryRepresentation;	// IMP=0x00000000010b1f6b
- (id)description;	// IMP=0x00000000010b1ebc
@property(nonatomic) _Bool hasZ;
@property(nonatomic) unsigned int z;
@property(nonatomic) _Bool hasY;
@property(nonatomic) unsigned int y;
@property(nonatomic) _Bool hasX;
@property(nonatomic) unsigned int x;

@end
