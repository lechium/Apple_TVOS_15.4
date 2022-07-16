//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOMapRegion *_displayMapRegion;	// 24 = 0x18
    NSMutableArray *_places;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _statusCode;	// 52 = 0x34
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_places:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005f510d
- (unsigned long long)hash;	// IMP=0x00000000005f5082
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f4f6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f4c41
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f4971
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f4962
- (id)jsonRepresentation;	// IMP=0x00000000005f4850
- (id)dictionaryRepresentation;	// IMP=0x00000000005f430d
- (id)description;	// IMP=0x00000000005f425e
- (id)initWithData:(id)arg1;	// IMP=0x00000000005f3624
- (id)init;	// IMP=0x00000000005f35c8

@end
