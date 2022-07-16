//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDSTransportHint, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchLocationParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDSTransportHint *_searchTransportHint;	// 16 = 0x10
    int _searchLocationParametersType;	// 24 = 0x18
    struct {
        unsigned int has_searchLocationParametersType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000064ae1b
- (unsigned long long)hash;	// IMP=0x000000000064aca5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000064abe0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000064ab3a
- (void)writeTo:(id)arg1;	// IMP=0x000000000064aabb
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000064aaac
- (id)jsonRepresentation;	// IMP=0x0000000000649bfd
- (id)dictionaryRepresentation;	// IMP=0x0000000000649971
- (id)description;	// IMP=0x00000000006498c2

@end
