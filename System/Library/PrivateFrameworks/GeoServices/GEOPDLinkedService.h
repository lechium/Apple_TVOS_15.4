//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDEntity, GEOPDPlaceInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedService : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDEntity *_entity;	// 24 = 0x18
    NSMutableArray *_hours;	// 32 = 0x20
    GEOPDPlaceInfo *_placeInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_entity:1;
        unsigned int read_hours:1;
        unsigned int read_placeInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (id)linkedServicesForPlaceData:(id)arg1;	// IMP=0x00000000009d02fd
- (void).cxx_destruct;	// IMP=0x0000000000b3999f
- (unsigned long long)hash;	// IMP=0x0000000000b39928
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b39812
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b3950a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b391dc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b391cd
- (id)jsonRepresentation;	// IMP=0x0000000000b38f2b
- (id)dictionaryRepresentation;	// IMP=0x0000000000b38a89
- (id)description;	// IMP=0x0000000000b389da
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b37cd0
- (id)init;	// IMP=0x0000000000b37c74

@end
