//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying>
{
    double _locationUncertainty;	// 8 = 0x8
    GEOLatLng *_location;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    struct {
        unsigned int has_locationUncertainty:1;
        unsigned int has_timestamp:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001370f90
- (void).cxx_destruct;	// IMP=0x00000000013715eb
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000137153a
- (unsigned long long)hash;	// IMP=0x00000000013712dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013711b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013710f5
- (void)copyTo:(id)arg1;	// IMP=0x000000000137105b
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000137103e
- (void)writeTo:(id)arg1;	// IMP=0x0000000001370fac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001370f9d
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001370f30
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001370f1e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001370d2e
- (id)jsonRepresentation;	// IMP=0x0000000001370d1f
- (id)dictionaryRepresentation;	// IMP=0x0000000001370b6c
- (id)description;	// IMP=0x0000000001370abd
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) _Bool hasLocationUncertainty;
@property(nonatomic) double locationUncertainty;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;

@end

