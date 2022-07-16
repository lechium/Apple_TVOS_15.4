//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/_GEOEnrouteNoticesProvider-Protocol.h>

@class GEOOutOfMapsAlertsInfo, GEORestrictionZoneInfo, GEORoutePlanningInfo, GEOTrafficBannerText, GEOTraversalTimes, GEOWaypointRouteFeatures, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOWaypointRoute : PBCodable <_GEOEnrouteNoticesProvider, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _initialPromptTypes;	// 24 = 0x18
    NSMutableArray *_arrivalParameters;	// 48 = 0x30
    GEOWaypointRouteFeatures *_feature;	// 56 = 0x38
    NSMutableArray *_incidentsOnRouteLegs;	// 64 = 0x40
    NSMutableArray *_names;	// 72 = 0x48
    GEOOutOfMapsAlertsInfo *_outOfMapsAlertsInfo;	// 80 = 0x50
    GEOTrafficBannerText *_rerouteBannerText;	// 88 = 0x58
    GEORestrictionZoneInfo *_restrictionZoneInfo;	// 96 = 0x60
    NSMutableArray *_routeLegs;	// 104 = 0x68
    GEORoutePlanningInfo *_routePlanningInfo;	// 112 = 0x70
    NSMutableArray *_trafficCameras;	// 120 = 0x78
    NSMutableArray *_trafficSignals;	// 128 = 0x80
    GEOTraversalTimes *_traversalTimes;	// 136 = 0x88
    unsigned int _readerMarkPos;	// 144 = 0x90
    unsigned int _readerMarkLength;	// 148 = 0x94
    struct os_unfair_lock_s _readerLock;	// 152 = 0x98
    unsigned int _distanceMeters;	// 156 = 0x9c
    int _drivingSide;	// 160 = 0xa0
    unsigned int _identifier;	// 164 = 0xa4
    int _transportType;	// 168 = 0xa8
    int _type;	// 172 = 0xac
    struct {
        unsigned int has_distanceMeters:1;
        unsigned int has_drivingSide:1;
        unsigned int has_identifier:1;
        unsigned int has_transportType:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_initialPromptTypes:1;
        unsigned int read_arrivalParameters:1;
        unsigned int read_feature:1;
        unsigned int read_incidentsOnRouteLegs:1;
        unsigned int read_names:1;
        unsigned int read_outOfMapsAlertsInfo:1;
        unsigned int read_rerouteBannerText:1;
        unsigned int read_restrictionZoneInfo:1;
        unsigned int read_routeLegs:1;
        unsigned int read_routePlanningInfo:1;
        unsigned int read_trafficCameras:1;
        unsigned int read_trafficSignals:1;
        unsigned int read_traversalTimes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 176 = 0xb0
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000973611
+ (Class)incidentsOnRouteLegsType;	// IMP=0x000000000096f9a6
+ (Class)trafficCameraType;	// IMP=0x000000000096f736
+ (Class)trafficSignalType;	// IMP=0x000000000096f4cc
+ (Class)arrivalParametersType;	// IMP=0x000000000096f262
+ (Class)nameType;	// IMP=0x000000000096ebca
+ (Class)routeLegType;	// IMP=0x000000000096e405
- (void).cxx_destruct;	// IMP=0x0000000000977a35
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000009773e9
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000976a90
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000097643c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009759a2
- (void)copyTo:(id)arg1;	// IMP=0x00000000009753c1
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000974dec
- (void)writeTo:(id)arg1;	// IMP=0x0000000000973f32
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000973f23
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000972f9b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000972f89
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009718d6
- (id)jsonRepresentation;	// IMP=0x00000000009717c4
- (id)dictionaryRepresentation;	// IMP=0x0000000000970158
@property(readonly, copy) NSString *description;
- (int)StringAsInitialPromptTypes:(id)arg1;	// IMP=0x0000000000970047
- (id)initialPromptTypesAsString:(int)arg1;	// IMP=0x000000000096fff2
- (void)setInitialPromptTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000096ffcd
- (int)initialPromptTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000096fef7
- (void)addInitialPromptType:(int)arg1;	// IMP=0x000000000096febb
- (void)clearInitialPromptTypes;	// IMP=0x000000000096fe9c
@property(readonly, nonatomic) int *initialPromptTypes;
@property(readonly, nonatomic) unsigned long long initialPromptTypesCount;
@property(retain, nonatomic) GEOTrafficBannerText *rerouteBannerText;
@property(readonly, nonatomic) _Bool hasRerouteBannerText;
@property(retain, nonatomic) GEOOutOfMapsAlertsInfo *outOfMapsAlertsInfo;
@property(readonly, nonatomic) _Bool hasOutOfMapsAlertsInfo;
@property(retain, nonatomic) GEORestrictionZoneInfo *restrictionZoneInfo;
@property(readonly, nonatomic) _Bool hasRestrictionZoneInfo;
- (id)incidentsOnRouteLegsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000096f975
- (unsigned long long)incidentsOnRouteLegsCount;	// IMP=0x000000000096f949
- (void)addIncidentsOnRouteLegs:(id)arg1;	// IMP=0x000000000096f892
- (void)clearIncidentsOnRouteLegs;	// IMP=0x000000000096f867
@property(retain, nonatomic) NSMutableArray *incidentsOnRouteLegs;
- (id)trafficCameraAtIndex:(unsigned long long)arg1;	// IMP=0x000000000096f705
- (unsigned long long)trafficCamerasCount;	// IMP=0x000000000096f6d9
- (void)addTrafficCamera:(id)arg1;	// IMP=0x000000000096f624
- (void)clearTrafficCameras;	// IMP=0x000000000096f5fb
@property(retain, nonatomic) NSMutableArray *trafficCameras;
- (id)trafficSignalAtIndex:(unsigned long long)arg1;	// IMP=0x000000000096f49b
- (unsigned long long)trafficSignalsCount;	// IMP=0x000000000096f46f
- (void)addTrafficSignal:(id)arg1;	// IMP=0x000000000096f3ba
- (void)clearTrafficSignals;	// IMP=0x000000000096f391
@property(retain, nonatomic) NSMutableArray *trafficSignals;
- (id)arrivalParametersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000096f231
- (unsigned long long)arrivalParametersCount;	// IMP=0x000000000096f205
- (void)addArrivalParameters:(id)arg1;	// IMP=0x000000000096f14e
- (void)clearArrivalParameters;	// IMP=0x000000000096f123
@property(retain, nonatomic) NSMutableArray *arrivalParameters;
@property(retain, nonatomic) GEORoutePlanningInfo *routePlanningInfo;
@property(readonly, nonatomic) _Bool hasRoutePlanningInfo;
@property(retain, nonatomic) GEOWaypointRouteFeatures *feature;
@property(readonly, nonatomic) _Bool hasFeature;
@property(retain, nonatomic) GEOTraversalTimes *traversalTimes;
@property(readonly, nonatomic) _Bool hasTraversalTimes;
@property(nonatomic) _Bool hasDistanceMeters;
@property(nonatomic) unsigned int distanceMeters;
- (id)nameAtIndex:(unsigned long long)arg1;	// IMP=0x000000000096eb99
- (unsigned long long)namesCount;	// IMP=0x000000000096eb6d
- (void)addName:(id)arg1;	// IMP=0x000000000096eab6
- (void)clearNames;	// IMP=0x000000000096ea8b
@property(retain, nonatomic) NSMutableArray *names;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000096e87c
- (id)typeAsString:(int)arg1;	// IMP=0x000000000096e7e5
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (int)StringAsDrivingSide:(id)arg1;	// IMP=0x000000000096e70e
- (id)drivingSideAsString:(int)arg1;	// IMP=0x000000000096e6b9
@property(nonatomic) _Bool hasDrivingSide;
@property(nonatomic) int drivingSide;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x000000000096e530
- (id)transportTypeAsString:(int)arg1;	// IMP=0x000000000096e489
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
- (id)routeLegAtIndex:(unsigned long long)arg1;	// IMP=0x000000000096e3d4
- (unsigned long long)routeLegsCount;	// IMP=0x000000000096e3a8
- (void)addRouteLeg:(id)arg1;	// IMP=0x000000000096e2f1
- (void)clearRouteLegs;	// IMP=0x000000000096e2c6
@property(retain, nonatomic) NSMutableArray *routeLegs;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) unsigned int identifier;
- (void)dealloc;	// IMP=0x000000000096c3e4
- (id)initWithData:(id)arg1;	// IMP=0x000000000096c388
- (id)init;	// IMP=0x000000000096c32c
- (id)_geoTrafficSignals;	// IMP=0x0000000001144bf1
- (id)_geoTrafficCameras;	// IMP=0x00000000011449cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
