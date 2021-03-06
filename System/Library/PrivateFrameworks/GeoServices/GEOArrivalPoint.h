//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

@interface GEOArrivalPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOLatLng *_point;	// 16 = 0x10
    unsigned int _radius;	// 24 = 0x18
    struct {
        unsigned int has_radius:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000083d6f7
- (void).cxx_destruct;	// IMP=0x000000000083db39
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000083dad3
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000083da32
- (unsigned long long)hash;	// IMP=0x000000000083d9ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000083d8d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000083d824
- (void)copyTo:(id)arg1;	// IMP=0x000000000083d7af
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000083d792
- (void)writeTo:(id)arg1;	// IMP=0x000000000083d713
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000083d704
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000083d697
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000083d685
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000083d50e
- (id)jsonRepresentation;	// IMP=0x000000000083d3fc
- (id)dictionaryRepresentation;	// IMP=0x000000000083d1af
- (id)description;	// IMP=0x000000000083d100
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) unsigned int radius;
@property(retain, nonatomic) GEOLatLng *point;
@property(readonly, nonatomic) _Bool hasPoint;

@end

