//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOURLCamera : PBCodable <NSCopying>
{
    double _altitude;	// 8 = 0x8
    double _heading;	// 16 = 0x10
    double _latitude;	// 24 = 0x18
    double _longitude;	// 32 = 0x20
    double _pitch;	// 40 = 0x28
    struct {
        unsigned int has_altitude:1;
        unsigned int has_heading:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_pitch:1;
    } _flags;	// 48 = 0x30
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000098188a
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009823e6
- (unsigned long long)hash;	// IMP=0x0000000000981e9e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000981d1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000981c3e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000981b67
- (void)writeTo:(id)arg1;	// IMP=0x0000000000981a8f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000981a80
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000981484
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000981477
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000981212
- (id)jsonRepresentation;	// IMP=0x0000000000981208
- (id)dictionaryRepresentation;	// IMP=0x0000000000980ff2
- (id)description;	// IMP=0x0000000000980f43
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) double altitude;
@property(nonatomic) _Bool hasPitch;
@property(nonatomic) double pitch;
@property(nonatomic) _Bool hasHeading;
@property(nonatomic) double heading;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) double latitude;

@end

