//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityLocationSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_ess;	// 16 = 0x10
    GEOLocation *_location;	// 24 = 0x18
    unsigned long long _tileKey;	// 32 = 0x20
    NSMutableArray *_tiles;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _status;	// 60 = 0x3c
    struct {
        unsigned int has_tileKey:1;
        unsigned int has_status:1;
        unsigned int read_ess:1;
        unsigned int read_location:1;
        unsigned int read_tiles:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009ecd71
+ (Class)tileType;	// IMP=0x00000000009ebc19
+ (Class)essType;	// IMP=0x00000000009eb9b4
- (void).cxx_destruct;	// IMP=0x00000000009ee6a7
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009ee3d8
- (unsigned long long)hash;	// IMP=0x00000000009ee30b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009ee193
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009edd17
- (void)copyTo:(id)arg1;	// IMP=0x00000000009edaf1
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009ed85c
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000009ed6fa
- (void)writeTo:(id)arg1;	// IMP=0x00000000009ed2e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009ed2d7
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009ec917
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009ec905
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009ec2a6
- (id)jsonRepresentation;	// IMP=0x00000000009ec297
- (id)dictionaryRepresentation;	// IMP=0x00000000009ebcd9
- (id)description;	// IMP=0x00000000009ebc2a
- (id)tileAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009ebbe8
- (unsigned long long)tilesCount;	// IMP=0x00000000009ebbbc
- (void)addTile:(id)arg1;	// IMP=0x00000000009ebb08
- (void)clearTiles;	// IMP=0x00000000009ebae0
@property(retain, nonatomic) NSMutableArray *tiles;
- (id)essAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009eb983
- (unsigned long long)essCount;	// IMP=0x00000000009eb957
- (void)addEss:(id)arg1;	// IMP=0x00000000009eb8a3
- (void)clearEss;	// IMP=0x00000000009eb87b
@property(retain, nonatomic) NSMutableArray *ess;
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000009eb6ce
- (id)statusAsString:(int)arg1;	// IMP=0x00000000009eb668
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(nonatomic) _Bool hasTileKey;
@property(nonatomic) unsigned long long tileKey;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (id)initWithData:(id)arg1;	// IMP=0x00000000009eaa2b
- (id)init;	// IMP=0x00000000009ea9cf

@end

