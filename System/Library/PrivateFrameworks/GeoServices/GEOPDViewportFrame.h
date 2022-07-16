//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDGeographicCoordinate, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDViewportFrame : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDGeographicCoordinate *_targetPoint;	// 16 = 0x10
    float _distance;	// 24 = 0x18
    float _heading;	// 28 = 0x1c
    float _pitch;	// 32 = 0x20
    struct {
        unsigned int has_distance:1;
        unsigned int has_heading:1;
        unsigned int has_pitch:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000bf0dec
- (unsigned long long)hash;	// IMP=0x0000000000bf0aac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bf0992
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bf08a0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bf07d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bf07c3
- (id)jsonRepresentation;	// IMP=0x0000000000bf06b1
- (id)dictionaryRepresentation;	// IMP=0x0000000000bf039e
- (id)description;	// IMP=0x0000000000bf02ef

@end

