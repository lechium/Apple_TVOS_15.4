//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOURLCenterSpan : PBCodable <NSCopying>
{
    double _latitudeDelta;	// 8 = 0x8
    double _latitude;	// 16 = 0x10
    double _longitudeDelta;	// 24 = 0x18
    double _longitude;	// 32 = 0x20
    struct {
        unsigned int has_latitudeDelta:1;
        unsigned int has_latitude:1;
        unsigned int has_longitudeDelta:1;
        unsigned int has_longitude:1;
    } _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000982e7a
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000098383d
- (unsigned long long)hash;	// IMP=0x00000000009833f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009832a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009831ea
- (void)copyTo:(id)arg1;	// IMP=0x0000000000983132
- (void)writeTo:(id)arg1;	// IMP=0x000000000098307b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000098306c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000982ab9
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000982aac
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009828aa
- (id)jsonRepresentation;	// IMP=0x00000000009828a0
- (id)dictionaryRepresentation;	// IMP=0x00000000009826e0
- (id)description;	// IMP=0x0000000000982631
@property(nonatomic) _Bool hasLongitudeDelta;
@property(nonatomic) double longitudeDelta;
@property(nonatomic) _Bool hasLatitudeDelta;
@property(nonatomic) double latitudeDelta;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) double latitude;

@end

