//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventPOIBusynessData : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    double _altitude;	// 16 = 0x10
    double _horizontalAccuracy;	// 24 = 0x18
    GEOLatLng *_location;	// 32 = 0x20
    NSMutableArray *_poiPredictions;	// 40 = 0x28
    double _timestamp;	// 48 = 0x30
    double _verticalAccuracy;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int has_altitude:1;
        unsigned int has_horizontalAccuracy:1;
        unsigned int has_timestamp:1;
        unsigned int has_verticalAccuracy:1;
        unsigned int read_location:1;
        unsigned int read_poiPredictions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000136ee1e
+ (Class)poiPredictionsType;	// IMP=0x000000000136e025
- (void).cxx_destruct;	// IMP=0x0000000001370118
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000136fef6
- (unsigned long long)hash;	// IMP=0x000000000136fa73
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000136f8bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000136f53b
- (void)copyTo:(id)arg1;	// IMP=0x000000000136f36f
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000136f33e
- (void)writeTo:(id)arg1;	// IMP=0x000000000136f030
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000136f021
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000136ea40
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000136ea2e
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000136e572
- (id)jsonRepresentation;	// IMP=0x000000000136e563
- (id)dictionaryRepresentation;	// IMP=0x000000000136e0e5
- (id)description;	// IMP=0x000000000136e036
- (id)poiPredictionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000136dff4
- (unsigned long long)poiPredictionsCount;	// IMP=0x000000000136dfc8
- (void)addPoiPredictions:(id)arg1;	// IMP=0x000000000136df14
- (void)clearPoiPredictions;	// IMP=0x000000000136deec
@property(retain, nonatomic) NSMutableArray *poiPredictions;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) double altitude;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) double verticalAccuracy;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(nonatomic) double horizontalAccuracy;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
- (id)initWithData:(id)arg1;	// IMP=0x000000000136d201
- (id)init;	// IMP=0x000000000136d1a5

@end
