//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDGeographicCoordinate : PBCodable <NSCopying>
{
    double _altitude;	// 8 = 0x8
    double _latitude;	// 16 = 0x10
    double _longitude;	// 24 = 0x18
    struct {
        unsigned int has_altitude:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ff3d95
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ff4592
- (unsigned long long)hash;	// IMP=0x0000000000ff4254
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ff4134
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ff4092
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ff3ff9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ff3f63
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ff3f54
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ff3a5d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ff3a50
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ff38b1
- (id)jsonRepresentation;	// IMP=0x0000000000ff38a7
- (id)dictionaryRepresentation;	// IMP=0x0000000000ff373d
- (id)description;	// IMP=0x0000000000ff368e
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) double altitude;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) double latitude;

@end
