//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBFindMyLocationChangeEvent : PBCodable <NSCopying>
{
    double _latitude;	// 8 = 0x8
    double _longitude;	// 16 = 0x10
    int _activityState;	// 24 = 0x18
    NSString *_idsHandle;	// 32 = 0x20
    int _locationChangeType;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    struct {
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int activityState:1;
        unsigned int locationChangeType:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c3aa3
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *idsHandle; // @synthesize idsHandle=_idsHandle;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c3957
- (unsigned long long)hash;	// IMP=0x00000000000c36ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c3538
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c341c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c333e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c3251
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c3244
- (id)dictionaryRepresentation;	// IMP=0x00000000000c2c0d
- (id)description;	// IMP=0x00000000000c2b5e
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
- (int)StringAsActivityState:(id)arg1;	// IMP=0x00000000000c29c8
- (id)activityStateAsString:(int)arg1;	// IMP=0x00000000000c2931
@property(nonatomic) _Bool hasActivityState;
@property(nonatomic) int activityState; // @synthesize activityState=_activityState;
- (int)StringAsLocationChangeType:(id)arg1;	// IMP=0x00000000000c2835
- (id)locationChangeTypeAsString:(int)arg1;	// IMP=0x00000000000c27cf
@property(nonatomic) _Bool hasLocationChangeType;
@property(nonatomic) int locationChangeType; // @synthesize locationChangeType=_locationChangeType;
@property(readonly, nonatomic) _Bool hasIdsHandle;

@end

