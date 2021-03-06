//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEONavCameraState : PBCodable <NSCopying>
{
    int _distanceToManeuver;	// 8 = 0x8
    int _speedBucket;	// 12 = 0xc
    int _upcomingManeuverType;	// 16 = 0x10
    _Bool _isGroupedManeuver;	// 20 = 0x14
    struct {
        unsigned int has_distanceToManeuver:1;
        unsigned int has_speedBucket:1;
        unsigned int has_upcomingManeuverType:1;
        unsigned int has_isGroupedManeuver:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014b957f
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014b997d
- (unsigned long long)hash;	// IMP=0x00000000014b98e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014b97a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014b96f3
- (void)copyTo:(id)arg1;	// IMP=0x00000000014b964b
- (void)writeTo:(id)arg1;	// IMP=0x00000000014b959b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014b958c
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014b951f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014b950d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014b88cb
- (id)jsonRepresentation;	// IMP=0x00000000014b88bc
- (id)dictionaryRepresentation;	// IMP=0x00000000014b818e
- (id)description;	// IMP=0x00000000014b80df
- (int)StringAsSpeedBucket:(id)arg1;	// IMP=0x00000000014b8030
- (id)speedBucketAsString:(int)arg1;	// IMP=0x00000000014b7fb2
@property(nonatomic) _Bool hasSpeedBucket;
@property(nonatomic) int speedBucket;
@property(nonatomic) _Bool hasIsGroupedManeuver;
@property(nonatomic) _Bool isGroupedManeuver;
- (int)StringAsDistanceToManeuver:(id)arg1;	// IMP=0x00000000014b7d9c
- (id)distanceToManeuverAsString:(int)arg1;	// IMP=0x00000000014b7cdc
@property(nonatomic) _Bool hasDistanceToManeuver;
@property(nonatomic) int distanceToManeuver;
- (int)StringAsUpcomingManeuverType:(id)arg1;	// IMP=0x00000000014b748c
- (id)upcomingManeuverTypeAsString:(int)arg1;	// IMP=0x00000000014b7047
@property(nonatomic) _Bool hasUpcomingManeuverType;
@property(nonatomic) int upcomingManeuverType;

@end

