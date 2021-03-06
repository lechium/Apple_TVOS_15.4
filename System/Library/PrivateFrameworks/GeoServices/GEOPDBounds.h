//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDViewportFrame, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBounds : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOMapRegion *_displayMapRegion;	// 24 = 0x18
    GEOMapRegion *_mapRegion;	// 32 = 0x20
    GEOPDViewportFrame *_viewportFrame;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    float _maxZoom;	// 60 = 0x3c
    float _minZoom;	// 64 = 0x40
    struct {
        unsigned int has_maxZoom:1;
        unsigned int has_minZoom:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_mapRegion:1;
        unsigned int read_viewportFrame:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (id)boundsInfoForPlaceData:(id)arg1;	// IMP=0x00000000009c934a
- (void).cxx_destruct;	// IMP=0x0000000000a602e2
- (unsigned long long)hash;	// IMP=0x0000000000a5ff98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a5fe25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a5fbd5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a5f947
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a5f938
- (id)jsonRepresentation;	// IMP=0x0000000000a5e84a
- (id)dictionaryRepresentation;	// IMP=0x0000000000a5e466
- (id)description;	// IMP=0x0000000000a5e3b7
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a5d690
- (id)init;	// IMP=0x0000000000a5d634

@end

