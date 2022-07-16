//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEOMapRegion, GEOPlaceSearchRequest, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapQuery : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    struct GEOSessionID _sessionID;	// 16 = 0x10
    GEOMapRegion *_mapRegion;	// 32 = 0x20
    GEOPlaceSearchRequest *_placeSearchRequest;	// 40 = 0x28
    NSString *_query;	// 48 = 0x30
    GEOLocation *_userLocation;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _clientImgFmt;	// 76 = 0x4c
    int _clientImgMaxHeight;	// 80 = 0x50
    int _clientImgMaxWidth;	// 84 = 0x54
    int _mapCenterX;	// 88 = 0x58
    int _mapCenterY;	// 92 = 0x5c
    int _mapSpanX;	// 96 = 0x60
    int _mapSpanY;	// 100 = 0x64
    int _requestType;	// 104 = 0x68
    int _tilesizeX;	// 108 = 0x6c
    int _tilesizeY;	// 112 = 0x70
    int _zoomlevel;	// 116 = 0x74
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_clientImgFmt:1;
        unsigned int has_clientImgMaxHeight:1;
        unsigned int has_clientImgMaxWidth:1;
        unsigned int has_mapCenterX:1;
        unsigned int has_mapCenterY:1;
        unsigned int has_mapSpanX:1;
        unsigned int has_mapSpanY:1;
        unsigned int has_requestType:1;
        unsigned int has_tilesizeX:1;
        unsigned int has_tilesizeY:1;
        unsigned int has_zoomlevel:1;
        unsigned int read_mapRegion:1;
        unsigned int read_placeSearchRequest:1;
        unsigned int read_query:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000c5a76a
- (unsigned long long)hash;	// IMP=0x0000000000c5a4fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c5a183
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c59de7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c59825
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c59818
- (id)jsonRepresentation;	// IMP=0x0000000000c595a8
- (id)dictionaryRepresentation;	// IMP=0x0000000000c58e27
- (id)description;	// IMP=0x0000000000c58d78
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c57a3f
- (id)init;	// IMP=0x0000000000c579e3

@end

