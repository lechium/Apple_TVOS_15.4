//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDBounds, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _categorys;	// 24 = 0x18
    GEOPDBounds *_bounds;	// 48 = 0x30
    GEOLatLng *_center;	// 56 = 0x38
    GEOPDMapsIdentifier *_placeId;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_bounds:1;
        unsigned int read_center:1;
        unsigned int read_placeId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000bc01bf
- (void).cxx_destruct;	// IMP=0x0000000000bc1214
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000bc116d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000bc0d30
- (unsigned long long)hash;	// IMP=0x0000000000bc0c9f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bc0b60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bc0966
- (void)copyTo:(id)arg1;	// IMP=0x0000000000bc07ec
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000bc075c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bc052f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bc0520
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000bbff66
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000bbff54
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000bbf81e
- (id)jsonRepresentation;	// IMP=0x0000000000bbf70c
- (id)dictionaryRepresentation;	// IMP=0x0000000000bbf1dd
- (id)description;	// IMP=0x0000000000bbf12e
@property(retain, nonatomic) GEOPDBounds *bounds;
@property(readonly, nonatomic) _Bool hasBounds;
- (int)StringAsCategorys:(id)arg1;	// IMP=0x0000000000bbecc8
- (id)categorysAsString:(int)arg1;	// IMP=0x0000000000bbeb3c
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000bbeb1a
- (int)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000bbea44
- (void)addCategory:(int)arg1;	// IMP=0x0000000000bbea0b
- (void)clearCategorys;	// IMP=0x0000000000bbe9ef
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
@property(retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property(readonly, nonatomic) _Bool hasPlaceId;
- (void)dealloc;	// IMP=0x0000000000bbdc33
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bbdbd7
- (id)init;	// IMP=0x0000000000bbdb7b

@end
