//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEOMapRegionE7 : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_vertexE7s;	// 16 = 0x10
    int _eastLngE7;	// 24 = 0x18
    int _northLatE7;	// 28 = 0x1c
    int _southLatE7;	// 32 = 0x20
    int _westLngE7;	// 36 = 0x24
    CDStruct_37b5bf71 _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010a8956
+ (Class)vertexE7Type;	// IMP=0x00000000010a7967
+ (id)_geo_mapRegionForGEOCoordinateRegion:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000ef92ed
- (void).cxx_destruct;	// IMP=0x00000000010a96d1
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010a9565
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010a9357
- (unsigned long long)hash;	// IMP=0x00000000010a9298
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010a913f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010a8eeb
- (void)copyTo:(id)arg1;	// IMP=0x00000000010a8d9c
- (void)writeTo:(id)arg1;	// IMP=0x00000000010a8bbb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010a8bac
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010a848a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010a8478
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010a804e
- (id)jsonRepresentation;	// IMP=0x00000000010a7f3c
- (id)dictionaryRepresentation;	// IMP=0x00000000010a7a27
- (id)description;	// IMP=0x00000000010a7978
- (id)vertexE7AtIndex:(unsigned long long)arg1;	// IMP=0x00000000010a794a
- (unsigned long long)vertexE7sCount;	// IMP=0x00000000010a792d
- (void)addVertexE7:(id)arg1;	// IMP=0x00000000010a78c3
- (void)clearVertexE7s;	// IMP=0x00000000010a78a6
@property(retain, nonatomic) NSMutableArray *vertexE7s;
@property(nonatomic) _Bool hasEastLngE7;
@property(nonatomic) int eastLngE7;
@property(nonatomic) _Bool hasNorthLatE7;
@property(nonatomic) int northLatE7;
@property(nonatomic) _Bool hasWestLngE7;
@property(nonatomic) int westLngE7;
@property(nonatomic) _Bool hasSouthLatE7;
@property(nonatomic) int southLatE7;
- (id)coordinatesE7;	// IMP=0x0000000000ef90e0
@property(readonly, nonatomic) _Bool hasRectangleVertices;
- (_Bool)isValid;	// IMP=0x0000000000ef9044
@property(readonly, nonatomic) int spanLngE7;
@property(readonly, nonatomic) int spanLatE7;
@property(readonly, nonatomic) int centerLngE7;
@property(readonly, nonatomic) int centerLatE7;
- (void)setMapRect:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000ef8ba3
- (id)initWithRadialPlace:(id)arg1;	// IMP=0x0000000000ef8ac5
- (id)initWithMapRect:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000ef8a65
- (id)initWithCoordinateRegion:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000ef8a11
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x0000000000ef8954
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (id)initWithMapRegion:(id)arg1;	// IMP=0x0000000000ef830c

@end

