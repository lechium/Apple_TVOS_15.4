//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLRouteHandle, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOURLRouteHandle *_routeHandle;	// 24 = 0x18
    NSMutableArray *_waypoints;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _transportType;	// 52 = 0x34
    struct {
        unsigned int has_transportType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeHandle:1;
        unsigned int read_waypoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000992f96
+ (Class)waypointsType;	// IMP=0x0000000000991ddc
- (void).cxx_destruct;	// IMP=0x0000000000994395
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000994344
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000994087
- (unsigned long long)hash;	// IMP=0x0000000000994003
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000993ee1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000993b87
- (void)copyTo:(id)arg1;	// IMP=0x0000000000993a20
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009938cf
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000993645
- (void)writeTo:(id)arg1;	// IMP=0x000000000099320a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009931fb
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000992ce3
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000992cd1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000992802
- (id)jsonRepresentation;	// IMP=0x00000000009926f0
- (id)dictionaryRepresentation;	// IMP=0x00000000009921fd
- (id)description;	// IMP=0x000000000099214e
@property(retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x0000000000991ef8
- (id)transportTypeAsString:(int)arg1;	// IMP=0x0000000000991e54
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
- (id)waypointsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000991dab
- (unsigned long long)waypointsCount;	// IMP=0x0000000000991d7f
- (void)addWaypoints:(id)arg1;	// IMP=0x0000000000991ccb
- (void)clearWaypoints;	// IMP=0x0000000000991ca3
@property(retain, nonatomic) NSMutableArray *waypoints;
- (id)initWithData:(id)arg1;	// IMP=0x000000000099123a
- (id)init;	// IMP=0x00000000009911de

@end

