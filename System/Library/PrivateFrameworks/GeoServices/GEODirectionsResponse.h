//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionCompatibility-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/_GEOEnrouteNoticesProvider-Protocol.h>

@class GEOAlert, GEOClientMetrics, GEOETAServiceResponseSummary, GEOPBTransitRoutingIncidentMessage, GEOPDDatasetABStatus, GEORouteDisplayHints, GEOSnapScoreMetadata, GEOStyleAttributes, GEOTransitDecoderData, GEOTransitRouteUpdateConfiguration, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsResponse : PBCodable <GEOCompanionCompatibility, _GEOEnrouteNoticesProvider, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOProblemDetail *_problemDetails;	// 24 = 0x18
    unsigned long long _problemDetailsCount;	// 32 = 0x20
    unsigned long long _problemDetailsSpace;	// 40 = 0x28
    CDStruct_95bda58d _supportedTransportTypes;	// 48 = 0x30
    struct GEOTimepoint _timepointUsed;	// 72 = 0x48
    NSMutableArray *_arrivalParameters;	// 96 = 0x60
    GEOClientMetrics *_clientMetrics;	// 104 = 0x68
    NSString *_dataVersion;	// 112 = 0x70
    GEOPDDatasetABStatus *_datasetAbStatus;	// 120 = 0x78
    NSString *_debugData;	// 128 = 0x80
    unsigned long long _debugLatencyMs;	// 136 = 0x88
    GEOTransitDecoderData *_decoderData;	// 144 = 0x90
    NSData *_directionsResponseID;	// 152 = 0x98
    GEORouteDisplayHints *_displayHints;	// 160 = 0xa0
    GEOETAServiceResponseSummary *_etaServiceSummary;	// 168 = 0xa8
    GEOAlert *_failureAlert;	// 176 = 0xb0
    NSMutableArray *_incidentsOffRoutes;	// 184 = 0xb8
    NSMutableArray *_incidentsOnRoutes;	// 192 = 0xc0
    NSMutableArray *_internalErrors;	// 200 = 0xc8
    NSData *_nonRecommendedRoutesCache;	// 208 = 0xd0
    NSMutableArray *_placeSearchResponses;	// 216 = 0xd8
    NSMutableArray *_routes;	// 224 = 0xe0
    NSMutableArray *_serviceGaps;	// 232 = 0xe8
    NSString *_serviceVersion;	// 240 = 0xf0
    NSData *_sessionState;	// 248 = 0xf8
    GEOSnapScoreMetadata *_snapScoreMetadataDebug;	// 256 = 0x100
    GEOStyleAttributes *_styleAttributes;	// 264 = 0x108
    NSMutableArray *_suggestedRoutes;	// 272 = 0x110
    NSMutableArray *_trafficCameras;	// 280 = 0x118
    NSMutableArray *_trafficSignals;	// 288 = 0x120
    NSString *_transitDataVersion;	// 296 = 0x128
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;	// 304 = 0x130
    GEOTransitRouteUpdateConfiguration *_transitRouteUpdateConfiguration;	// 312 = 0x138
    NSMutableArray *_waypointRoutes;	// 320 = 0x140
    unsigned int _readerMarkPos;	// 328 = 0x148
    unsigned int _readerMarkLength;	// 332 = 0x14c
    struct os_unfair_lock_s _readerLock;	// 336 = 0x150
    int _instructionSignFillColor;	// 340 = 0x154
    int _liveRouteSavingsSeconds;	// 344 = 0x158
    int _localDistanceUnits;	// 348 = 0x15c
    unsigned int _selectedRouteIndex;	// 352 = 0x160
    int _status;	// 356 = 0x164
    _Bool _hasKhSegments;	// 360 = 0x168
    _Bool _isNavigable;	// 361 = 0x169
    _Bool _isOfflineResponse;	// 362 = 0x16a
    _Bool _routeDeviatesFromOriginal;	// 363 = 0x16b
    struct {
        unsigned int has_timepointUsed:1;
        unsigned int has_debugLatencyMs:1;
        unsigned int has_instructionSignFillColor:1;
        unsigned int has_liveRouteSavingsSeconds:1;
        unsigned int has_localDistanceUnits:1;
        unsigned int has_selectedRouteIndex:1;
        unsigned int has_hasKhSegments:1;
        unsigned int has_isNavigable:1;
        unsigned int has_isOfflineResponse:1;
        unsigned int has_routeDeviatesFromOriginal:1;
        unsigned int read_unknownFields:1;
        unsigned int read_problemDetails:1;
        unsigned int read_supportedTransportTypes:1;
        unsigned int read_arrivalParameters:1;
        unsigned int read_clientMetrics:1;
        unsigned int read_dataVersion:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_debugData:1;
        unsigned int read_decoderData:1;
        unsigned int read_directionsResponseID:1;
        unsigned int read_displayHints:1;
        unsigned int read_etaServiceSummary:1;
        unsigned int read_failureAlert:1;
        unsigned int read_incidentsOffRoutes:1;
        unsigned int read_incidentsOnRoutes:1;
        unsigned int read_internalErrors:1;
        unsigned int read_nonRecommendedRoutesCache:1;
        unsigned int read_placeSearchResponses:1;
        unsigned int read_routes:1;
        unsigned int read_serviceGaps:1;
        unsigned int read_serviceVersion:1;
        unsigned int read_sessionState:1;
        unsigned int read_snapScoreMetadataDebug:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_suggestedRoutes:1;
        unsigned int read_trafficCameras:1;
        unsigned int read_trafficSignals:1;
        unsigned int read_transitDataVersion:1;
        unsigned int read_transitIncidentMessage:1;
        unsigned int read_transitRouteUpdateConfiguration:1;
        unsigned int read_waypointRoutes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 364 = 0x16c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000011b8a8a
+ (Class)suggestedRouteType;	// IMP=0x00000000011b2c84
+ (Class)internalErrorType;	// IMP=0x00000000011b2763
+ (Class)trafficSignalType;	// IMP=0x00000000011b238d
+ (Class)arrivalParametersType;	// IMP=0x00000000011b2102
+ (Class)trafficCameraType;	// IMP=0x00000000011b1987
+ (Class)serviceGapType;	// IMP=0x00000000011b0e37
+ (Class)incidentsOffRoutesType;	// IMP=0x00000000011b031d
+ (Class)incidentsOnRoutesType;	// IMP=0x00000000011b0098
+ (Class)placeSearchResponseType;	// IMP=0x00000000011af797
+ (Class)waypointRouteType;	// IMP=0x00000000011af512
+ (Class)routeType;	// IMP=0x00000000011af2a2
- (void).cxx_destruct;	// IMP=0x00000000011c0bb1
@property(retain, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) _Bool hasClientMetrics;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) _Bool hasEtaServiceSummary;
@property(nonatomic) _Bool hasDebugLatencyMs;
@property(nonatomic) unsigned long long debugLatencyMs;
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000011bfe7f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000011bed96
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011bdeec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011bcb48
- (void)copyTo:(id)arg1;	// IMP=0x00000000011bc002
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000011bb634
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000011bb3aa
- (void)writeTo:(id)arg1;	// IMP=0x00000000011b9a2f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011b9a20
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000011b8630
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000011b861e
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000011b5a0a
- (id)jsonRepresentation;	// IMP=0x00000000011b58f8
- (id)dictionaryRepresentation;	// IMP=0x00000000011b306e
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *transitDataVersion;
@property(readonly, nonatomic) _Bool hasTransitDataVersion;
@property(retain, nonatomic) GEOTransitDecoderData *decoderData;
@property(readonly, nonatomic) _Bool hasDecoderData;
@property(nonatomic) _Bool hasTimepointUsed;
@property(nonatomic) struct GEOTimepoint timepointUsed;
- (id)suggestedRouteAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b2c53
- (unsigned long long)suggestedRoutesCount;	// IMP=0x00000000011b2c27
- (void)addSuggestedRoute:(id)arg1;	// IMP=0x00000000011b2b69
- (void)clearSuggestedRoutes;	// IMP=0x00000000011b2b37
@property(retain, nonatomic) NSMutableArray *suggestedRoutes;
@property(retain, nonatomic) NSString *dataVersion;
@property(readonly, nonatomic) _Bool hasDataVersion;
@property(retain, nonatomic) NSString *serviceVersion;
@property(readonly, nonatomic) _Bool hasServiceVersion;
- (id)internalErrorAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b2732
- (unsigned long long)internalErrorsCount;	// IMP=0x00000000011b2706
- (void)addInternalError:(id)arg1;	// IMP=0x00000000011b2648
- (void)clearInternalErrors;	// IMP=0x00000000011b2616
@property(retain, nonatomic) NSMutableArray *internalErrors;
@property(retain, nonatomic) GEOTransitRouteUpdateConfiguration *transitRouteUpdateConfiguration;
@property(readonly, nonatomic) _Bool hasTransitRouteUpdateConfiguration;
- (id)trafficSignalAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b235c
- (unsigned long long)trafficSignalsCount;	// IMP=0x00000000011b2330
- (void)addTrafficSignal:(id)arg1;	// IMP=0x00000000011b2272
- (void)clearTrafficSignals;	// IMP=0x00000000011b2240
@property(retain, nonatomic) NSMutableArray *trafficSignals;
- (id)arrivalParametersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b20d1
- (unsigned long long)arrivalParametersCount;	// IMP=0x00000000011b20a5
- (void)addArrivalParameters:(id)arg1;	// IMP=0x00000000011b1fe7
- (void)clearArrivalParameters;	// IMP=0x00000000011b1fb5
@property(retain, nonatomic) NSMutableArray *arrivalParameters;
@property(retain, nonatomic) NSString *debugData;
@property(readonly, nonatomic) _Bool hasDebugData;
@property(nonatomic) _Bool hasHasKhSegments;
@property(nonatomic) _Bool hasKhSegments;
@property(retain, nonatomic) GEOSnapScoreMetadata *snapScoreMetadataDebug;
@property(readonly, nonatomic) _Bool hasSnapScoreMetadataDebug;
@property(nonatomic) _Bool hasIsOfflineResponse;
@property(nonatomic) _Bool isOfflineResponse;
@property(retain, nonatomic) NSData *nonRecommendedRoutesCache;
@property(readonly, nonatomic) _Bool hasNonRecommendedRoutesCache;
- (id)trafficCameraAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b1956
- (unsigned long long)trafficCamerasCount;	// IMP=0x00000000011b192a
- (void)addTrafficCamera:(id)arg1;	// IMP=0x00000000011b186c
- (void)clearTrafficCameras;	// IMP=0x00000000011b183a
@property(retain, nonatomic) NSMutableArray *trafficCameras;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property(readonly, nonatomic) _Bool hasDatasetAbStatus;
@property(nonatomic) _Bool hasLiveRouteSavingsSeconds;
@property(nonatomic) int liveRouteSavingsSeconds;
@property(retain, nonatomic) GEOAlert *failureAlert;
@property(readonly, nonatomic) _Bool hasFailureAlert;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(retain, nonatomic) GEORouteDisplayHints *displayHints;
@property(readonly, nonatomic) _Bool hasDisplayHints;
@property(retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property(readonly, nonatomic) _Bool hasTransitIncidentMessage;
@property(nonatomic) _Bool hasSelectedRouteIndex;
@property(nonatomic) unsigned int selectedRouteIndex;
- (id)serviceGapAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b0e06
- (unsigned long long)serviceGapsCount;	// IMP=0x00000000011b0dda
- (void)addServiceGap:(id)arg1;	// IMP=0x00000000011b0d1c
- (void)clearServiceGaps;	// IMP=0x00000000011b0cea
@property(retain, nonatomic) NSMutableArray *serviceGaps;
- (int)StringAsSupportedTransportTypes:(id)arg1;	// IMP=0x00000000011b0aac
- (id)supportedTransportTypesAsString:(int)arg1;	// IMP=0x00000000011b0a08
- (void)setSupportedTransportTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000011b09dc
- (int)supportedTransportTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b0906
- (void)addSupportedTransportType:(int)arg1;	// IMP=0x00000000011b08c3
- (void)clearSupportedTransportTypes;	// IMP=0x00000000011b089d
@property(readonly, nonatomic) int *supportedTransportTypes;
@property(readonly, nonatomic) unsigned long long supportedTransportTypesCount;
- (void)setProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000011b0709
- (struct GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b062c
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;	// IMP=0x00000000011b05b0
- (void)clearProblemDetails;	// IMP=0x00000000011b0556
@property(readonly, nonatomic) struct GEOProblemDetail *problemDetails;
@property(readonly, nonatomic) unsigned long long problemDetailsCount;
- (id)incidentsOffRoutesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b02ec
- (unsigned long long)incidentsOffRoutesCount;	// IMP=0x00000000011b02c0
- (void)addIncidentsOffRoutes:(id)arg1;	// IMP=0x00000000011b0202
- (void)clearIncidentsOffRoutes;	// IMP=0x00000000011b01d0
@property(retain, nonatomic) NSMutableArray *incidentsOffRoutes;
- (id)incidentsOnRoutesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011b0067
- (unsigned long long)incidentsOnRoutesCount;	// IMP=0x00000000011b003b
- (void)addIncidentsOnRoutes:(id)arg1;	// IMP=0x00000000011aff7d
- (void)clearIncidentsOnRoutes;	// IMP=0x00000000011aff4b
@property(retain, nonatomic) NSMutableArray *incidentsOnRoutes;
- (int)StringAsInstructionSignFillColor:(id)arg1;	// IMP=0x00000000011afcec
- (id)instructionSignFillColorAsString:(int)arg1;	// IMP=0x00000000011afc3b
@property(nonatomic) _Bool hasInstructionSignFillColor;
@property(nonatomic) int instructionSignFillColor;
@property(nonatomic) _Bool hasIsNavigable;
@property(nonatomic) _Bool isNavigable;
@property(retain, nonatomic) NSData *directionsResponseID;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
@property(nonatomic) _Bool hasRouteDeviatesFromOriginal;
@property(nonatomic) _Bool routeDeviatesFromOriginal;
- (int)StringAsLocalDistanceUnits:(id)arg1;	// IMP=0x00000000011af89d
- (id)localDistanceUnitsAsString:(int)arg1;	// IMP=0x00000000011af837
@property(nonatomic) _Bool hasLocalDistanceUnits;
@property(nonatomic) int localDistanceUnits;
- (id)placeSearchResponseAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011af766
- (unsigned long long)placeSearchResponsesCount;	// IMP=0x00000000011af73a
- (void)addPlaceSearchResponse:(id)arg1;	// IMP=0x00000000011af67c
- (void)clearPlaceSearchResponses;	// IMP=0x00000000011af64a
@property(retain, nonatomic) NSMutableArray *placeSearchResponses;
- (id)waypointRouteAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011af4e1
- (unsigned long long)waypointRoutesCount;	// IMP=0x00000000011af4b5
- (void)addWaypointRoute:(id)arg1;	// IMP=0x00000000011af400
- (void)clearWaypointRoutes;	// IMP=0x00000000011af3d7
@property(retain, nonatomic) NSMutableArray *waypointRoutes;
- (id)routeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011af271
- (unsigned long long)routesCount;	// IMP=0x00000000011af245
- (void)addRoute:(id)arg1;	// IMP=0x00000000011af187
- (void)clearRoutes;	// IMP=0x00000000011af155
@property(retain, nonatomic) NSMutableArray *routes;
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000011ab930
- (id)statusAsString:(int)arg1;	// IMP=0x00000000011ab856
@property(nonatomic) int status;
- (void)dealloc;	// IMP=0x00000000011ab7dd
- (id)initWithData:(id)arg1;	// IMP=0x00000000011ab781
- (id)init;	// IMP=0x00000000011ab725
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1;	// IMP=0x0000000000cb66ca
- (id)_geoTrafficSignals;	// IMP=0x000000000114503d
- (id)_geoTrafficCameras;	// IMP=0x0000000001144e17
- (void)clearLocations;	// IMP=0x0000000001231d12
- (void)_clearJupiterFieldsForTesting;	// IMP=0x000000000123825d
- (id)preJupiterCompatibleDirectionsResponseWithRoute:(id)arg1;	// IMP=0x0000000001237076

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
