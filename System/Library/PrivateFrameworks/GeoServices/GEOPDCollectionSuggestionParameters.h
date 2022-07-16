//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionSuggestionParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categoryIds;	// 24 = 0x18
    NSMutableArray *_geoIds;	// 32 = 0x20
    NSMutableArray *_publisherIds;	// 40 = 0x28
    double _requestLocalTimestamp;	// 48 = 0x30
    GEOPDViewportInfo *_viewportInfo;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categoryIds:1;
        unsigned int read_geoIds:1;
        unsigned int read_publisherIds:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x00000000005024a5
- (unsigned long long)hash;	// IMP=0x0000000000501d5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000501bd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000050169f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000500f6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000500f5c
- (id)jsonRepresentation;	// IMP=0x000000000050028e
- (id)dictionaryRepresentation;	// IMP=0x00000000004ffb8c
- (id)description;	// IMP=0x00000000004ffadd
- (id)initWithData:(id)arg1;	// IMP=0x00000000004fe993
- (id)init;	// IMP=0x00000000004fe937

@end

