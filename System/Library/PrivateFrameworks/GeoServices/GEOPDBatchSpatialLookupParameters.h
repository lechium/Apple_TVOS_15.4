//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_spatialEventLookups;	// 24 = 0x18
    NSMutableArray *_spatialPlaceLookups;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookups:1;
        unsigned int read_spatialPlaceLookups:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000004ec75b
- (unsigned long long)hash;	// IMP=0x00000000004ec704
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ec622
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ec254
- (void)writeTo:(id)arg1;	// IMP=0x00000000004ebef1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004ebee2
- (id)jsonRepresentation;	// IMP=0x00000000004ebb61
- (id)dictionaryRepresentation;	// IMP=0x00000000004eb5bf
- (id)description;	// IMP=0x00000000004eb510
- (id)initWithData:(id)arg1;	// IMP=0x00000000004ea8be
- (id)init;	// IMP=0x00000000004ea862

@end

