//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLCamera, GEOURLCenterSpan, GEOURLRouteHandle, GEOURLTimePoint, NSString, PBDataReader;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOURLCamera *_camera;	// 16 = 0x10
    GEOURLCenterSpan *_centerSpan;	// 24 = 0x18
    NSString *_referralIdentifier;	// 32 = 0x20
    GEOURLRouteHandle *_routeHandle;	// 40 = 0x28
    GEOURLTimePoint *_timePoint;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _mapType;	// 68 = 0x44
    int _transportType;	// 72 = 0x48
    int _userTrackingMode;	// 76 = 0x4c
    _Bool _connectedToCar;	// 80 = 0x50
    _Bool _enableTraffic;	// 81 = 0x51
    struct {
        unsigned int has_mapType:1;
        unsigned int has_transportType:1;
        unsigned int has_userTrackingMode:1;
        unsigned int has_connectedToCar:1;
        unsigned int has_enableTraffic:1;
        unsigned int read_camera:1;
        unsigned int read_centerSpan:1;
        unsigned int read_referralIdentifier:1;
        unsigned int read_routeHandle:1;
        unsigned int read_timePoint:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000987a4f
- (void).cxx_destruct;	// IMP=0x000000000098903f
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000988e76
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000988a67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000988771
- (void)copyTo:(id)arg1;	// IMP=0x00000000009885af
- (void)writeTo:(id)arg1;	// IMP=0x000000000098829e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000098828f
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000987326
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000987314
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000986b13
- (id)jsonRepresentation;	// IMP=0x0000000000986b04
- (id)dictionaryRepresentation;	// IMP=0x0000000000986581
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasConnectedToCar;
@property(nonatomic) _Bool connectedToCar;
@property(retain, nonatomic) GEOURLTimePoint *timePoint;
@property(readonly, nonatomic) _Bool hasTimePoint;
@property(retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (int)StringAsUserTrackingMode:(id)arg1;	// IMP=0x0000000000986158
- (id)userTrackingModeAsString:(int)arg1;	// IMP=0x00000000009860f2
@property(nonatomic) _Bool hasUserTrackingMode;
@property(nonatomic) int userTrackingMode;
@property(retain, nonatomic) NSString *referralIdentifier;
@property(readonly, nonatomic) _Bool hasReferralIdentifier;
@property(retain, nonatomic) GEOURLCamera *camera;
@property(readonly, nonatomic) _Bool hasCamera;
@property(retain, nonatomic) GEOURLCenterSpan *centerSpan;
@property(readonly, nonatomic) _Bool hasCenterSpan;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x0000000000985070
- (id)transportTypeAsString:(int)arg1;	// IMP=0x0000000000984fc9
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
- (int)StringAsMapType:(id)arg1;	// IMP=0x0000000000984e8c
- (id)mapTypeAsString:(int)arg1;	// IMP=0x0000000000984e01
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType;
@property(nonatomic) _Bool hasEnableTraffic;
@property(nonatomic) _Bool enableTraffic;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000984cd0
- (id)init;	// IMP=0x0000000000984c74
- (id)urlRepresentation;	// IMP=0x000000000038226e
- (id)initWithUrlRepresentation:(id)arg1;	// IMP=0x0000000000381893

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

