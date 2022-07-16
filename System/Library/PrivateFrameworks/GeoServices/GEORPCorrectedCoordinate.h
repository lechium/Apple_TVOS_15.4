//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBDataReader;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLatLng *_correctedCoordinate;	// 16 = 0x10
    GEOLatLng *_originalCoordinate;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_correctedCoordinate:1;
        unsigned int read_originalCoordinate:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ddd4fb
- (void).cxx_destruct;	// IMP=0x0000000000dddd6f
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dddccc
- (unsigned long long)hash;	// IMP=0x0000000000dddc70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dddb7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ddd9d7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ddd909
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000ddd89b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ddd6df
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ddd6d0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ddd248
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ddd236
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ddd072
- (id)jsonRepresentation;	// IMP=0x0000000000ddd063
- (id)dictionaryRepresentation;	// IMP=0x0000000000ddcee1
- (id)description;	// IMP=0x0000000000ddce32
@property(retain, nonatomic) GEOLatLng *correctedCoordinate;
@property(readonly, nonatomic) _Bool hasCorrectedCoordinate;
@property(retain, nonatomic) GEOLatLng *originalCoordinate;
@property(readonly, nonatomic) _Bool hasOriginalCoordinate;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ddc666
- (id)init;	// IMP=0x0000000000ddc60a

@end

