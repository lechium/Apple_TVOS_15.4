//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAlertNonRecommendedRouteText, GEOClickableAdvisory, GEOElevationProfile, GEOFormattedString, GEOLaunchAndGoCardText, GEORouteInformation, GEOWaypointInfo, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORoute : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _cellularCoverageOffsets;	// 24 = 0x18
    CDStruct_95bda58d _cellularCoverages;	// 48 = 0x30
    CDStruct_9f2792e4 _incidentEndOffsetsInRoutes;	// 72 = 0x48
    CDStruct_9f2792e4 _incidentIndices;	// 96 = 0x60
    CDStruct_9f2792e4 _trafficColorOffsets;	// 120 = 0x78
    CDStruct_9f2792e4 _trafficColors;	// 144 = 0x90
    NSMutableArray *_advisoryNotices;	// 168 = 0xa8
    GEOAlertNonRecommendedRouteText *_alertNonRecommendedRouteText;	// 176 = 0xb0
    NSData *_arrivalRouteID;	// 184 = 0xb8
    NSMutableArray *_basicPoints;	// 192 = 0xc0
    GEOClickableAdvisory *_clickableAdvisory;	// 200 = 0xc8
    NSData *_departureRouteID;	// 208 = 0xd0
    GEOWaypointInfo *_destinationWaypointInfo;	// 216 = 0xd8
    GEOElevationProfile *_elevationProfile;	// 224 = 0xe0
    NSMutableArray *_endingRouteInstructions;	// 232 = 0xe8
    NSMutableArray *_enrouteNotices;	// 240 = 0xf0
    NSMutableArray *_guidanceEvents;	// 248 = 0xf8
    NSMutableArray *_incidentOnRouteInfos;	// 256 = 0x100
    GEOFormattedString *_infrastructureDescription;	// 264 = 0x108
    NSMutableArray *_laneWidths;	// 272 = 0x110
    GEOLaunchAndGoCardText *_launchAndGoCardText;	// 280 = 0x118
    NSString *_name;	// 288 = 0x120
    GEOWaypointInfo *_originWaypointInfo;	// 296 = 0x128
    NSData *_pathLeg;	// 304 = 0x130
    NSString *_phoneticName;	// 312 = 0x138
    NSMutableArray *_restrictedZoneIds;	// 320 = 0x140
    NSMutableArray *_roadComplexitys;	// 328 = 0x148
    NSData *_routeID;	// 336 = 0x150
    NSMutableArray *_routeNames;	// 344 = 0x158
    NSMutableArray *_routeCameraInputInfos;	// 352 = 0x160
    NSMutableArray *_routeDescriptions;	// 360 = 0x168
    GEOFormattedString *_routeLabelDetailText;	// 368 = 0x170
    NSMutableArray *_routeLineStyleInfos;	// 376 = 0x178
    GEORouteInformation *_routePlanningDescription;	// 384 = 0x180
    NSMutableArray *_startingRouteInstructions;	// 392 = 0x188
    NSMutableArray *_stepGroups;	// 400 = 0x190
    NSMutableArray *_steps;	// 408 = 0x198
    NSMutableArray *_trafficColorInfos;	// 416 = 0x1a0
    NSString *_trafficDescriptionLong;	// 424 = 0x1a8
    NSString *_trafficDescription;	// 432 = 0x1b0
    NSData *_unpackedLatLngVertices;	// 440 = 0x1b8
    NSMutableArray *_updateLocations;	// 448 = 0x1c0
    NSMutableArray *_zilchPoints;	// 456 = 0x1c8
    unsigned int _readerMarkPos;	// 464 = 0x1d0
    unsigned int _readerMarkLength;	// 468 = 0x1d4
    struct os_unfair_lock_s _readerLock;	// 472 = 0x1d8
    unsigned int _arrivalStepID;	// 476 = 0x1dc
    unsigned int _arrivalParameterIndex;	// 480 = 0x1e0
    unsigned int _departureStepID;	// 484 = 0x1e4
    unsigned int _distance;	// 488 = 0x1e8
    int _drivingSide;	// 492 = 0x1ec
    int _environmentalCongestionZoneImpact;	// 496 = 0x1f0
    unsigned int _expectedTime;	// 500 = 0x1f4
    unsigned int _historicTravelTime;	// 504 = 0x1f8
    int _licensePlateRestrictionImpact;	// 508 = 0x1fc
    int _routeType;	// 512 = 0x200
    unsigned int _staticTravelTime;	// 516 = 0x204
    int _tollCongestionZoneImpact;	// 520 = 0x208
    int _transportType;	// 524 = 0x20c
    unsigned int _travelTimeAggressiveEstimate;	// 528 = 0x210
    unsigned int _travelTimeConservativeEstimate;	// 532 = 0x214
    _Bool _avoidsHighways;	// 536 = 0x218
    _Bool _avoidsTolls;	// 537 = 0x219
    _Bool _avoidsTraffic;	// 538 = 0x21a
    struct {
        unsigned int has_arrivalStepID:1;
        unsigned int has_arrivalParameterIndex:1;
        unsigned int has_departureStepID:1;
        unsigned int has_distance:1;
        unsigned int has_drivingSide:1;
        unsigned int has_environmentalCongestionZoneImpact:1;
        unsigned int has_expectedTime:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_licensePlateRestrictionImpact:1;
        unsigned int has_routeType:1;
        unsigned int has_staticTravelTime:1;
        unsigned int has_tollCongestionZoneImpact:1;
        unsigned int has_transportType:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int has_avoidsHighways:1;
        unsigned int has_avoidsTolls:1;
        unsigned int has_avoidsTraffic:1;
        unsigned int read_unknownFields:1;
        unsigned int read_cellularCoverageOffsets:1;
        unsigned int read_cellularCoverages:1;
        unsigned int read_incidentEndOffsetsInRoutes:1;
        unsigned int read_incidentIndices:1;
        unsigned int read_trafficColorOffsets:1;
        unsigned int read_trafficColors:1;
        unsigned int read_advisoryNotices:1;
        unsigned int read_alertNonRecommendedRouteText:1;
        unsigned int read_arrivalRouteID:1;
        unsigned int read_basicPoints:1;
        unsigned int read_clickableAdvisory:1;
        unsigned int read_departureRouteID:1;
        unsigned int read_destinationWaypointInfo:1;
        unsigned int read_elevationProfile:1;
        unsigned int read_endingRouteInstructions:1;
        unsigned int read_enrouteNotices:1;
        unsigned int read_guidanceEvents:1;
        unsigned int read_incidentOnRouteInfos:1;
        unsigned int read_infrastructureDescription:1;
        unsigned int read_laneWidths:1;
        unsigned int read_launchAndGoCardText:1;
        unsigned int read_name:1;
        unsigned int read_originWaypointInfo:1;
        unsigned int read_pathLeg:1;
        unsigned int read_phoneticName:1;
        unsigned int read_restrictedZoneIds:1;
        unsigned int read_roadComplexitys:1;
        unsigned int read_routeID:1;
        unsigned int read_routeNames:1;
        unsigned int read_routeCameraInputInfos:1;
        unsigned int read_routeDescriptions:1;
        unsigned int read_routeLabelDetailText:1;
        unsigned int read_routeLineStyleInfos:1;
        unsigned int read_routePlanningDescription:1;
        unsigned int read_startingRouteInstructions:1;
        unsigned int read_stepGroups:1;
        unsigned int read_steps:1;
        unsigned int read_trafficColorInfos:1;
        unsigned int read_trafficDescriptionLong:1;
        unsigned int read_trafficDescription:1;
        unsigned int read_unpackedLatLngVertices:1;
        unsigned int read_updateLocations:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 540 = 0x21c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008e2af2
+ (Class)updateLocationType;	// IMP=0x00000000008d8945
+ (Class)stepGroupType;	// IMP=0x00000000008d86d5
+ (Class)restrictedZoneIdsType;	// IMP=0x00000000008d7cea
+ (Class)laneWidthType;	// IMP=0x00000000008d78a7
+ (Class)roadComplexityType;	// IMP=0x00000000008d762e
+ (Class)guidanceEventType;	// IMP=0x00000000008d726a
+ (Class)endingRouteInstructionType;	// IMP=0x00000000008d6c16
+ (Class)startingRouteInstructionType;	// IMP=0x00000000008d699d
+ (Class)routeDescriptionType;	// IMP=0x00000000008d6727
+ (Class)incidentOnRouteInfoType;	// IMP=0x00000000008d6367
+ (Class)enrouteNoticeType;	// IMP=0x00000000008d5a9a
+ (Class)advisoryNoticeType;	// IMP=0x00000000008d512f
+ (Class)routeNameType;	// IMP=0x00000000008d4e29
+ (Class)trafficColorInfoType;	// IMP=0x00000000008d4b9e
+ (Class)routeCameraInputInfoType;	// IMP=0x00000000008d492e
+ (Class)routeLineStyleInfoType;	// IMP=0x00000000008d46b8
+ (Class)basicPointsType;	// IMP=0x00000000008d391f
+ (Class)zilchPointsType;	// IMP=0x00000000008d369a
+ (Class)stepType;	// IMP=0x00000000008d2d2e
- (void).cxx_destruct;	// IMP=0x00000000008ef3f9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008ee40d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008ec7ec
- (unsigned long long)hash;	// IMP=0x00000000008ebf78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008eb31a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008e94f5
- (void)copyTo:(id)arg1;	// IMP=0x00000000008e8235
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000008e7f74
- (void)writeTo:(id)arg1;	// IMP=0x00000000008e57ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008e57f0
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008e1a16
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008e1a04
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008dd25a
- (id)jsonRepresentation;	// IMP=0x00000000008dd148
- (id)dictionaryRepresentation;	// IMP=0x00000000008d929d
- (id)description;	// IMP=0x00000000008d91ee
- (void)setCellularCoverageOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008d91c2
- (unsigned int)cellularCoverageOffsetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d90ec
- (void)addCellularCoverageOffset:(unsigned int)arg1;	// IMP=0x00000000008d90a9
- (void)clearCellularCoverageOffsets;	// IMP=0x00000000008d9083
@property(readonly, nonatomic) unsigned int *cellularCoverageOffsets;
@property(readonly, nonatomic) unsigned long long cellularCoverageOffsetsCount;
- (int)StringAsCellularCoverages:(id)arg1;	// IMP=0x00000000008d8ed6
- (id)cellularCoveragesAsString:(int)arg1;	// IMP=0x00000000008d8e70
- (void)setCellularCoverages:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008d8e44
- (int)cellularCoverageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d8d6e
- (void)addCellularCoverage:(int)arg1;	// IMP=0x00000000008d8d2b
- (void)clearCellularCoverages;	// IMP=0x00000000008d8d05
@property(readonly, nonatomic) int *cellularCoverages;
@property(readonly, nonatomic) unsigned long long cellularCoveragesCount;
@property(retain, nonatomic) GEOWaypointInfo *destinationWaypointInfo;
@property(readonly, nonatomic) _Bool hasDestinationWaypointInfo;
@property(retain, nonatomic) GEOWaypointInfo *originWaypointInfo;
@property(readonly, nonatomic) _Bool hasOriginWaypointInfo;
- (id)updateLocationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d8914
- (unsigned long long)updateLocationsCount;	// IMP=0x00000000008d88e8
- (void)addUpdateLocation:(id)arg1;	// IMP=0x00000000008d8833
- (void)clearUpdateLocations;	// IMP=0x00000000008d880a
@property(retain, nonatomic) NSMutableArray *updateLocations;
- (id)stepGroupAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d86a4
- (unsigned long long)stepGroupsCount;	// IMP=0x00000000008d8678
- (void)addStepGroup:(id)arg1;	// IMP=0x00000000008d85c1
- (void)clearStepGroups;	// IMP=0x00000000008d8596
@property(retain, nonatomic) NSMutableArray *stepGroups;
- (int)StringAsTollCongestionZoneImpact:(id)arg1;	// IMP=0x00000000008d8338
- (id)tollCongestionZoneImpactAsString:(int)arg1;	// IMP=0x00000000008d8284
@property(nonatomic) _Bool hasTollCongestionZoneImpact;
@property(nonatomic) int tollCongestionZoneImpact;
- (int)StringAsEnvironmentalCongestionZoneImpact:(id)arg1;	// IMP=0x00000000008d80b8
- (id)environmentalCongestionZoneImpactAsString:(int)arg1;	// IMP=0x00000000008d8007
@property(nonatomic) _Bool hasEnvironmentalCongestionZoneImpact;
@property(nonatomic) int environmentalCongestionZoneImpact;
- (int)StringAsLicensePlateRestrictionImpact:(id)arg1;	// IMP=0x00000000008d7e40
- (id)licensePlateRestrictionImpactAsString:(int)arg1;	// IMP=0x00000000008d7d8c
@property(nonatomic) _Bool hasLicensePlateRestrictionImpact;
@property(nonatomic) int licensePlateRestrictionImpact;
- (id)restrictedZoneIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d7cb9
- (unsigned long long)restrictedZoneIdsCount;	// IMP=0x00000000008d7c8d
- (void)addRestrictedZoneIds:(id)arg1;	// IMP=0x00000000008d7bd5
- (void)clearRestrictedZoneIds;	// IMP=0x00000000008d7ba9
@property(retain, nonatomic) NSMutableArray *restrictedZoneIds;
@property(nonatomic) _Bool hasArrivalParameterIndex;
@property(nonatomic) unsigned int arrivalParameterIndex;
@property(retain, nonatomic) GEOElevationProfile *elevationProfile;
@property(readonly, nonatomic) _Bool hasElevationProfile;
- (id)laneWidthAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d7876
- (unsigned long long)laneWidthsCount;	// IMP=0x00000000008d784a
- (void)addLaneWidth:(id)arg1;	// IMP=0x00000000008d7792
- (void)clearLaneWidths;	// IMP=0x00000000008d7766
@property(retain, nonatomic) NSMutableArray *laneWidths;
- (id)roadComplexityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d75fd
- (unsigned long long)roadComplexitysCount;	// IMP=0x00000000008d75d1
- (void)addRoadComplexity:(id)arg1;	// IMP=0x00000000008d7519
- (void)clearRoadComplexitys;	// IMP=0x00000000008d74ed
@property(retain, nonatomic) NSMutableArray *roadComplexitys;
@property(retain, nonatomic) GEOLaunchAndGoCardText *launchAndGoCardText;
@property(readonly, nonatomic) _Bool hasLaunchAndGoCardText;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d7239
- (unsigned long long)guidanceEventsCount;	// IMP=0x00000000008d720d
- (void)addGuidanceEvent:(id)arg1;	// IMP=0x00000000008d7155
- (void)clearGuidanceEvents;	// IMP=0x00000000008d7129
@property(retain, nonatomic) NSMutableArray *guidanceEvents;
@property(retain, nonatomic) GEOAlertNonRecommendedRouteText *alertNonRecommendedRouteText;
@property(readonly, nonatomic) _Bool hasAlertNonRecommendedRouteText;
@property(retain, nonatomic) NSString *trafficDescriptionLong;
@property(readonly, nonatomic) _Bool hasTrafficDescriptionLong;
@property(retain, nonatomic) NSString *trafficDescription;
@property(readonly, nonatomic) _Bool hasTrafficDescription;
- (id)endingRouteInstructionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d6be5
- (unsigned long long)endingRouteInstructionsCount;	// IMP=0x00000000008d6bb9
- (void)addEndingRouteInstruction:(id)arg1;	// IMP=0x00000000008d6b01
- (void)clearEndingRouteInstructions;	// IMP=0x00000000008d6ad5
@property(retain, nonatomic) NSMutableArray *endingRouteInstructions;
- (id)startingRouteInstructionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d696c
- (unsigned long long)startingRouteInstructionsCount;	// IMP=0x00000000008d6940
- (void)addStartingRouteInstruction:(id)arg1;	// IMP=0x00000000008d6889
- (void)clearStartingRouteInstructions;	// IMP=0x00000000008d685e
@property(retain, nonatomic) NSMutableArray *startingRouteInstructions;
- (id)routeDescriptionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d66f6
- (unsigned long long)routeDescriptionsCount;	// IMP=0x00000000008d66ca
- (void)addRouteDescription:(id)arg1;	// IMP=0x00000000008d6613
- (void)clearRouteDescriptions;	// IMP=0x00000000008d65e8
@property(retain, nonatomic) NSMutableArray *routeDescriptions;
@property(retain, nonatomic) GEORouteInformation *routePlanningDescription;
@property(readonly, nonatomic) _Bool hasRoutePlanningDescription;
- (id)incidentOnRouteInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d6336
- (unsigned long long)incidentOnRouteInfosCount;	// IMP=0x00000000008d630a
- (void)addIncidentOnRouteInfo:(id)arg1;	// IMP=0x00000000008d6252
- (void)clearIncidentOnRouteInfos;	// IMP=0x00000000008d6226
@property(retain, nonatomic) NSMutableArray *incidentOnRouteInfos;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008d60d3
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d5ffd
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;	// IMP=0x00000000008d5fba
- (void)clearIncidentEndOffsetsInRoutes;	// IMP=0x00000000008d5f94
@property(readonly, nonatomic) unsigned int *incidentEndOffsetsInRoutes;
@property(readonly, nonatomic) unsigned long long incidentEndOffsetsInRoutesCount;
- (void)setIncidentIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008d5e4d
- (unsigned int)incidentIndicesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d5d77
- (void)addIncidentIndices:(unsigned int)arg1;	// IMP=0x00000000008d5d34
- (void)clearIncidentIndices;	// IMP=0x00000000008d5d0e
@property(readonly, nonatomic) unsigned int *incidentIndices;
@property(readonly, nonatomic) unsigned long long incidentIndicesCount;
@property(retain, nonatomic) NSData *unpackedLatLngVertices;
@property(readonly, nonatomic) _Bool hasUnpackedLatLngVertices;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d5a69
- (unsigned long long)enrouteNoticesCount;	// IMP=0x00000000008d5a3d
- (void)addEnrouteNotice:(id)arg1;	// IMP=0x00000000008d5985
- (void)clearEnrouteNotices;	// IMP=0x00000000008d5959
@property(retain, nonatomic) NSMutableArray *enrouteNotices;
@property(nonatomic) _Bool hasAvoidsTraffic;
@property(nonatomic) _Bool avoidsTraffic;
@property(nonatomic) _Bool hasAvoidsHighways;
@property(nonatomic) _Bool avoidsHighways;
@property(nonatomic) _Bool hasAvoidsTolls;
@property(nonatomic) _Bool avoidsTolls;
@property(nonatomic) _Bool hasStaticTravelTime;
@property(nonatomic) unsigned int staticTravelTime;
@property(nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeConservativeEstimate;
@property(nonatomic) _Bool hasTravelTimeAggressiveEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate;
@property(retain, nonatomic) GEOClickableAdvisory *clickableAdvisory;
@property(readonly, nonatomic) _Bool hasClickableAdvisory;
@property(retain, nonatomic) GEOFormattedString *infrastructureDescription;
@property(readonly, nonatomic) _Bool hasInfrastructureDescription;
@property(retain, nonatomic) GEOFormattedString *routeLabelDetailText;
@property(readonly, nonatomic) _Bool hasRouteLabelDetailText;
- (id)advisoryNoticeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d50fe
- (unsigned long long)advisoryNoticesCount;	// IMP=0x00000000008d50d2
- (void)addAdvisoryNotice:(id)arg1;	// IMP=0x00000000008d5014
- (void)clearAdvisoryNotices;	// IMP=0x00000000008d4fe2
@property(retain, nonatomic) NSMutableArray *advisoryNotices;
@property(nonatomic) _Bool hasHistoricTravelTime;
@property(nonatomic) unsigned int historicTravelTime;
- (id)routeNameAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d4df8
- (unsigned long long)routeNamesCount;	// IMP=0x00000000008d4dcc
- (void)addRouteName:(id)arg1;	// IMP=0x00000000008d4d0e
- (void)clearRouteNames;	// IMP=0x00000000008d4cdc
@property(retain, nonatomic) NSMutableArray *routeNames;
- (id)trafficColorInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d4b6d
- (unsigned long long)trafficColorInfosCount;	// IMP=0x00000000008d4b41
- (void)addTrafficColorInfo:(id)arg1;	// IMP=0x00000000008d4a8c
- (void)clearTrafficColorInfos;	// IMP=0x00000000008d4a63
@property(retain, nonatomic) NSMutableArray *trafficColorInfos;
- (id)routeCameraInputInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d48fd
- (unsigned long long)routeCameraInputInfosCount;	// IMP=0x00000000008d48d1
- (void)addRouteCameraInputInfo:(id)arg1;	// IMP=0x00000000008d481a
- (void)clearRouteCameraInputInfos;	// IMP=0x00000000008d47ef
@property(retain, nonatomic) NSMutableArray *routeCameraInputInfos;
- (id)routeLineStyleInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d4687
- (unsigned long long)routeLineStyleInfosCount;	// IMP=0x00000000008d465b
- (void)addRouteLineStyleInfo:(id)arg1;	// IMP=0x00000000008d45a4
- (void)clearRouteLineStyleInfos;	// IMP=0x00000000008d4579
@property(retain, nonatomic) NSMutableArray *routeLineStyleInfos;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008d4427
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d4351
- (void)addTrafficColorOffset:(unsigned int)arg1;	// IMP=0x00000000008d430e
- (void)clearTrafficColorOffsets;	// IMP=0x00000000008d42e8
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008d41a1
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d40cb
- (void)addTrafficColor:(unsigned int)arg1;	// IMP=0x00000000008d4088
- (void)clearTrafficColors;	// IMP=0x00000000008d4062
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
@property(nonatomic) _Bool hasArrivalStepID;
@property(nonatomic) unsigned int arrivalStepID;
@property(retain, nonatomic) NSData *arrivalRouteID;
@property(readonly, nonatomic) _Bool hasArrivalRouteID;
@property(nonatomic) _Bool hasDepartureStepID;
@property(nonatomic) unsigned int departureStepID;
@property(retain, nonatomic) NSData *departureRouteID;
@property(readonly, nonatomic) _Bool hasDepartureRouteID;
- (int)StringAsDrivingSide:(id)arg1;	// IMP=0x00000000008d3b5f
- (id)drivingSideAsString:(int)arg1;	// IMP=0x00000000008d3b0a
@property(nonatomic) _Bool hasDrivingSide;
@property(nonatomic) int drivingSide;
@property(retain, nonatomic) NSData *pathLeg;
@property(readonly, nonatomic) _Bool hasPathLeg;
- (id)basicPointsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d38ee
- (unsigned long long)basicPointsCount;	// IMP=0x00000000008d38c2
- (void)addBasicPoints:(id)arg1;	// IMP=0x00000000008d3804
- (void)clearBasicPoints;	// IMP=0x00000000008d37d2
@property(retain, nonatomic) NSMutableArray *basicPoints;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d3669
- (unsigned long long)zilchPointsCount;	// IMP=0x00000000008d363d
- (void)addZilchPoints:(id)arg1;	// IMP=0x00000000008d3588
- (void)clearZilchPoints;	// IMP=0x00000000008d355f
@property(retain, nonatomic) NSMutableArray *zilchPoints;
- (int)StringAsRouteType:(id)arg1;	// IMP=0x00000000008d334c
- (id)routeTypeAsString:(int)arg1;	// IMP=0x00000000008d32b3
@property(nonatomic) _Bool hasRouteType;
@property(nonatomic) int routeType;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) unsigned int expectedTime;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) unsigned int distance;
@property(retain, nonatomic) NSString *phoneticName;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (id)stepAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008d2cfd
- (unsigned long long)stepsCount;	// IMP=0x00000000008d2cd1
- (void)addStep:(id)arg1;	// IMP=0x00000000008d2c13
- (void)clearSteps;	// IMP=0x00000000008d2be1
@property(retain, nonatomic) NSMutableArray *steps;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x00000000008cd790
- (id)transportTypeAsString:(int)arg1;	// IMP=0x00000000008cd6ec
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
- (void)dealloc;	// IMP=0x00000000008cd5cd
- (id)initWithData:(id)arg1;	// IMP=0x00000000008cd571
- (id)init;	// IMP=0x00000000008cd515
- (int)transportTypeForStep:(id)arg1;	// IMP=0x0000000000cc9c16
- (_Bool)isContingentRoute;	// IMP=0x0000000000cc9bdc
- (_Bool)isMainOrAlternateRoute;	// IMP=0x0000000000cc9ba3
- (_Bool)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;	// IMP=0x0000000000cc978f
- (id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2;	// IMP=0x0000000000cc929a
- (id)newETARoute;	// IMP=0x0000000000cc927e
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(_Bool)arg2 uniquePointRange:(struct _NSRange *)arg3;	// IMP=0x0000000000cc789b
- (unsigned long long)indexForStepID:(unsigned long long)arg1;	// IMP=0x0000000000cc76f8
- (id)simplifiedDescription;	// IMP=0x0000000000cc7591
- (id)debugDescription;	// IMP=0x0000000000cc74d8
- (unsigned long long)stepIndexForPointIndex:(unsigned int)arg1;	// IMP=0x0000000000cc72c9
- (double)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2;	// IMP=0x0000000000cc7216
- (_Bool)unpackBasicPoints;	// IMP=0x0000000000cc713f
- (_Bool)unpackZilchPoints;	// IMP=0x0000000000cc7065
- (_Bool)unpackLatLngVertices;	// IMP=0x0000000000cc6fd4
@property(readonly) unsigned int pointCount;
- (CDStruct_39925896)coordinateAt:(unsigned int)arg1;	// IMP=0x0000000000cc6eb0
- (CDStruct_c3b9c2ee)pointAt:(unsigned int)arg1;	// IMP=0x0000000000cc6e7f
- (void *)controlPoints;	// IMP=0x0000000000cc6db3

@end

