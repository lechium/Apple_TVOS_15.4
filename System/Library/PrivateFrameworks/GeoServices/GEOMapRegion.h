//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _eastLng;	// 16 = 0x10
    double _northLat;	// 24 = 0x18
    double _southLat;	// 32 = 0x20
    NSMutableArray *_vertexs;	// 40 = 0x28
    double _westLng;	// 48 = 0x30
    int _mapRegionSourceType;	// 56 = 0x38
    struct {
        unsigned int has_eastLng:1;
        unsigned int has_northLat:1;
        unsigned int has_southLat:1;
        unsigned int has_westLng:1;
        unsigned int has_mapRegionSourceType:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010a62e6
+ (Class)vertexType;	// IMP=0x00000000010a4bad
+ (id)_geo_mapRegionForGEOCoordinateRegion:(CDStruct_90e2a262)arg1;	// IMP=0x00000000002baa6e
- (void).cxx_destruct;	// IMP=0x00000000010a76e8
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010a757c
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010a733c
- (unsigned long long)hash;	// IMP=0x00000000010a6ead
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010a6cef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010a6a6d
- (void)copyTo:(id)arg1;	// IMP=0x00000000010a68f4
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000010a67af
- (void)writeTo:(id)arg1;	// IMP=0x00000000010a65a3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010a6594
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010a5d9c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010a5d8a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010a5712
- (id)jsonRepresentation;	// IMP=0x00000000010a5600
- (id)dictionaryRepresentation;	// IMP=0x00000000010a4fb6
- (id)description;	// IMP=0x00000000010a4f07
- (int)StringAsMapRegionSourceType:(id)arg1;	// IMP=0x00000000010a4d24
- (id)mapRegionSourceTypeAsString:(int)arg1;	// IMP=0x00000000010a4c2b
@property(nonatomic) _Bool hasMapRegionSourceType;
@property(nonatomic) int mapRegionSourceType;
- (id)vertexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010a4b90
- (unsigned long long)vertexsCount;	// IMP=0x00000000010a4b73
- (void)addVertex:(id)arg1;	// IMP=0x00000000010a4b09
- (void)clearVertexs;	// IMP=0x00000000010a4aec
@property(retain, nonatomic) NSMutableArray *vertexs;
@property(nonatomic) _Bool hasEastLng;
@property(nonatomic) double eastLng;
@property(nonatomic) _Bool hasNorthLat;
@property(nonatomic) double northLat;
@property(nonatomic) _Bool hasWestLng;
@property(nonatomic) double westLng;
@property(nonatomic) _Bool hasSouthLat;
@property(nonatomic) double southLat;
- (id)coordinates;	// IMP=0x00000000002ba846
@property(readonly, nonatomic) _Bool hasRectangleVertices;
- (_Bool)isValid;	// IMP=0x00000000002ba7aa
@property(readonly, nonatomic) double spanLng;
@property(readonly, nonatomic) double spanLat;
@property(readonly, nonatomic) double centerLng;
@property(readonly, nonatomic) double centerLat;
- (void)setMapRect:(CDStruct_90e2a262)arg1;	// IMP=0x00000000002ba312
- (id)initWithRadialPlace:(id)arg1;	// IMP=0x00000000002ba234
- (id)initWithMapRect:(CDStruct_90e2a262)arg1;	// IMP=0x00000000002ba1d4
- (id)initWithCoordinateRegion:(CDStruct_90e2a262)arg1;	// IMP=0x00000000002ba180
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x00000000002ba0e7
- (id)intersectionsOnPolyline:(id)arg1;	// IMP=0x0000000000fce2de
- (_Bool)intersectsMapRect:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000fce0ae
- (_Bool)containsMapRect:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000fcde72
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;	// IMP=0x0000000000fcd808
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000fcd7ae
- (_Bool)intersectsRegion:(id)arg1;	// IMP=0x0000000000fcd702
- (_Bool)containsRegion:(id)arg1;	// IMP=0x0000000000fcd656

@end
