//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgEventARSessionUsage, GEOLogMsgEventBatchTrafficProbe, GEOLogMsgEventClientACSuggestions, GEOLogMsgEventCommuteWindow, GEOLogMsgEventCuratedCollectionStats, GEOLogMsgEventCuratedCollectionUsage, GEOLogMsgEventDailyUseSummary, GEOLogMsgEventDirections, GEOLogMsgEventDirectionsRequestDetails, GEOLogMsgEventDisplayAnalytic, GEOLogMsgEventEVRoutingVehicleDetails, GEOLogMsgEventEVTrip, GEOLogMsgEventFullNavTrace, GEOLogMsgEventGridDuration, GEOLogMsgEventHardStop, GEOLogMsgEventId, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogDiscard, GEOLogMsgEventMapKitCounts, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsDeviceSettings, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventMarcoLiteUsage, GEOLogMsgEventNetwork, GEOLogMsgEventPOIBusynessData, GEOLogMsgEventParkedCar, GEOLogMsgEventPeriodicSettingsSummary, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventPredExTrainingData, GEOLogMsgEventPressureData, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRealtimeTrafficProbe, GEOLogMsgEventRefineSearchSession, GEOLogMsgEventRideBookedSession, GEOLogMsgEventRideBookingSession, GEOLogMsgEventStateTiming, GEOLogMsgEventTableBookedSession, GEOLogMsgEventTableBookingSession, GEOLogMsgEventTelemetric, GEOLogMsgEventThermalPressure, GEOLogMsgEventThrottle, GEOLogMsgEventTileCacheAnalytic, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventTripDepartureFeedback, GEOLogMsgEventUserAction, GEOLogMsgEventVLFUsage, GEOLogMsgEventWifiConnectionQualityProbe, NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEvent : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLogMsgEventId *_analyticTag;	// 16 = 0x10
    GEOLogMsgEventARSessionUsage *_arSessionUsage;	// 24 = 0x18
    GEOLogMsgEventBatchTrafficProbe *_batchTrafficProbeCollection;	// 32 = 0x20
    GEOLogMsgEventClientACSuggestions *_clientAcSuggestions;	// 40 = 0x28
    GEOLogMsgEventCommuteWindow *_commuteWindow;	// 48 = 0x30
    GEOLogMsgEventCuratedCollectionStats *_curatedCollectionStats;	// 56 = 0x38
    GEOLogMsgEventCuratedCollectionUsage *_curatedCollectionUsage;	// 64 = 0x40
    GEOLogMsgEventDailyUseSummary *_dailyUseSummary;	// 72 = 0x48
    GEOLogMsgEventDirections *_directionsEvent;	// 80 = 0x50
    GEOLogMsgEventDirectionsRequestDetails *_directionsRequestDetails;	// 88 = 0x58
    GEOLogMsgEventDisplayAnalytic *_displayAnalytic;	// 96 = 0x60
    GEOLogMsgEventEVRoutingVehicleDetails *_evRoutingVehicleDetails;	// 104 = 0x68
    GEOLogMsgEventEVTrip *_evTrip;	// 112 = 0x70
    GEOLogMsgEventFullNavTrace *_fullNavTrace;	// 120 = 0x78
    GEOLogMsgEventGridDuration *_gridDuration;	// 128 = 0x80
    GEOLogMsgEventHardStop *_hardStop;	// 136 = 0x88
    GEOLogMsgEventListInteractionSession *_listInteractionSession;	// 144 = 0x90
    GEOLogMsgEventLogDiscard *_logDiscard;	// 152 = 0x98
    NSMutableArray *_logMsgStates;	// 160 = 0xa0
    GEOLogMsgEventMapKitCounts *_mapKitCounts;	// 168 = 0xa8
    GEOLogMsgEventMapLaunch *_mapLaunchEvent;	// 176 = 0xb0
    GEOLogMsgEventMapsDeviceSettings *_mapsDeviceSettings;	// 184 = 0xb8
    NSString *_mapsEnvironment;	// 192 = 0xc0
    GEOLogMsgEventMapsWidgetsInteractionSession *_mapsWidgetsInteractionSession;	// 200 = 0xc8
    GEOLogMsgEventMarcoLiteUsage *_marcoLiteUsage;	// 208 = 0xd0
    GEOLogMsgEventNetwork *_networkEvent;	// 216 = 0xd8
    GEOLogMsgEventParkedCar *_parkedCar;	// 224 = 0xe0
    GEOLogMsgEventPeriodicSettingsSummary *_periodicSettingsSummary;	// 232 = 0xe8
    GEOLogMsgEventPlaceDataCache *_placeDataCacheEvent;	// 240 = 0xf0
    GEOLogMsgEventPOIBusynessData *_poiBusynessData;	// 248 = 0xf8
    GEOLogMsgEventPredExTrainingData *_predExTrainingData;	// 256 = 0x100
    GEOLogMsgEventPressureData *_pressureData;	// 264 = 0x108
    GEOLogMsgEventProactiveSuggestionInteractionSession *_proactiveSuggestionInteractionSessionEvent;	// 272 = 0x110
    GEOLogMsgEventRealtimeTrafficProbe *_realtimeTrafficProbeCollection;	// 280 = 0x118
    GEOLogMsgEventRefineSearchSession *_refineSearchSession;	// 288 = 0x120
    GEOLogMsgEventRideBookedSession *_rideBookedSession;	// 296 = 0x128
    GEOLogMsgEventRideBookingSession *_rideBookingSession;	// 304 = 0x130
    GEOLogMsgEventStateTiming *_stateTimingEvent;	// 312 = 0x138
    GEOLogMsgEventTableBookedSession *_tableBookedSession;	// 320 = 0x140
    GEOLogMsgEventTableBookingSession *_tableBookingSession;	// 328 = 0x148
    GEOLogMsgEventTelemetric *_telemetric;	// 336 = 0x150
    GEOLogMsgEventThermalPressure *_thermalPressure;	// 344 = 0x158
    GEOLogMsgEventThrottle *_throttleEvent;	// 352 = 0x160
    GEOLogMsgEventTileCacheAnalytic *_tileCacheAnalytic;	// 360 = 0x168
    GEOLogMsgEventTileSetState *_tileSetStateEvent;	// 368 = 0x170
    GEOLogMsgEventTimeToLeaveHypothesis *_timeToLeaveHypothesisEvent;	// 376 = 0x178
    GEOLogMsgEventTimeToLeaveInitialTravelTime *_timeToLeaveInitialTravelTimeEvent;	// 384 = 0x180
    GEOLogMsgEventTransitAppLaunch *_transitAppLaunchEvent;	// 392 = 0x188
    GEOLogMsgEventTripDepartureFeedback *_tripDepartureFeedback;	// 400 = 0x190
    double _usageEventTime;	// 408 = 0x198
    GEOLogMsgEventUserAction *_userActionEvent;	// 416 = 0x1a0
    GEOLogMsgEventVLFUsage *_vlfUsage;	// 424 = 0x1a8
    GEOLogMsgEventWifiConnectionQualityProbe *_wifiConnectionQualityProbeEvent;	// 432 = 0x1b0
    unsigned int _readerMarkPos;	// 440 = 0x1b8
    unsigned int _readerMarkLength;	// 444 = 0x1bc
    struct os_unfair_lock_s _readerLock;	// 448 = 0x1c0
    int _eventType;	// 452 = 0x1c4
    struct {
        unsigned int has_usageEventTime:1;
        unsigned int has_eventType:1;
        unsigned int read_analyticTag:1;
        unsigned int read_arSessionUsage:1;
        unsigned int read_batchTrafficProbeCollection:1;
        unsigned int read_clientAcSuggestions:1;
        unsigned int read_commuteWindow:1;
        unsigned int read_curatedCollectionStats:1;
        unsigned int read_curatedCollectionUsage:1;
        unsigned int read_dailyUseSummary:1;
        unsigned int read_directionsEvent:1;
        unsigned int read_directionsRequestDetails:1;
        unsigned int read_displayAnalytic:1;
        unsigned int read_evRoutingVehicleDetails:1;
        unsigned int read_evTrip:1;
        unsigned int read_fullNavTrace:1;
        unsigned int read_gridDuration:1;
        unsigned int read_hardStop:1;
        unsigned int read_listInteractionSession:1;
        unsigned int read_logDiscard:1;
        unsigned int read_logMsgStates:1;
        unsigned int read_mapKitCounts:1;
        unsigned int read_mapLaunchEvent:1;
        unsigned int read_mapsDeviceSettings:1;
        unsigned int read_mapsEnvironment:1;
        unsigned int read_mapsWidgetsInteractionSession:1;
        unsigned int read_marcoLiteUsage:1;
        unsigned int read_networkEvent:1;
        unsigned int read_parkedCar:1;
        unsigned int read_periodicSettingsSummary:1;
        unsigned int read_placeDataCacheEvent:1;
        unsigned int read_poiBusynessData:1;
        unsigned int read_predExTrainingData:1;
        unsigned int read_pressureData:1;
        unsigned int read_proactiveSuggestionInteractionSessionEvent:1;
        unsigned int read_realtimeTrafficProbeCollection:1;
        unsigned int read_refineSearchSession:1;
        unsigned int read_rideBookedSession:1;
        unsigned int read_rideBookingSession:1;
        unsigned int read_stateTimingEvent:1;
        unsigned int read_tableBookedSession:1;
        unsigned int read_tableBookingSession:1;
        unsigned int read_telemetric:1;
        unsigned int read_thermalPressure:1;
        unsigned int read_throttleEvent:1;
        unsigned int read_tileCacheAnalytic:1;
        unsigned int read_tileSetStateEvent:1;
        unsigned int read_timeToLeaveHypothesisEvent:1;
        unsigned int read_timeToLeaveInitialTravelTimeEvent:1;
        unsigned int read_transitAppLaunchEvent:1;
        unsigned int read_tripDepartureFeedback:1;
        unsigned int read_userActionEvent:1;
        unsigned int read_vlfUsage:1;
        unsigned int read_wifiConnectionQualityProbeEvent:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 456 = 0x1c8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000131499b
+ (Class)logMsgStateType;	// IMP=0x00000000013034fa
- (void).cxx_destruct;	// IMP=0x0000000001323424
@property(nonatomic) _Bool hasUsageEventTime;
@property(nonatomic) double usageEventTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013224ee
- (unsigned long long)hash;	// IMP=0x0000000001321d6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013211e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013206d2
- (void)copyTo:(id)arg1;	// IMP=0x000000000131ff0a
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000131fc12
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000131f266
- (void)writeTo:(id)arg1;	// IMP=0x000000000131dbf7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000131dbe8
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000130da35
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000130da23
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000130ac6b
- (id)jsonRepresentation;	// IMP=0x000000000130ac5c
- (id)dictionaryRepresentation;	// IMP=0x0000000001308329
- (id)description;	// IMP=0x000000000130827a
@property(retain, nonatomic) GEOLogMsgEventARSessionUsage *arSessionUsage;
@property(readonly, nonatomic) _Bool hasArSessionUsage;
@property(retain, nonatomic) GEOLogMsgEventThermalPressure *thermalPressure;
@property(readonly, nonatomic) _Bool hasThermalPressure;
@property(retain, nonatomic) GEOLogMsgEventPeriodicSettingsSummary *periodicSettingsSummary;
@property(readonly, nonatomic) _Bool hasPeriodicSettingsSummary;
@property(retain, nonatomic) GEOLogMsgEventPOIBusynessData *poiBusynessData;
@property(readonly, nonatomic) _Bool hasPoiBusynessData;
@property(retain, nonatomic) GEOLogMsgEventPressureData *pressureData;
@property(readonly, nonatomic) _Bool hasPressureData;
@property(retain, nonatomic) GEOLogMsgEventDailyUseSummary *dailyUseSummary;
@property(readonly, nonatomic) _Bool hasDailyUseSummary;
@property(retain, nonatomic) GEOLogMsgEventLogDiscard *logDiscard;
@property(readonly, nonatomic) _Bool hasLogDiscard;
@property(retain, nonatomic) GEOLogMsgEventVLFUsage *vlfUsage;
@property(readonly, nonatomic) _Bool hasVlfUsage;
@property(retain, nonatomic) GEOLogMsgEventHardStop *hardStop;
@property(readonly, nonatomic) _Bool hasHardStop;
@property(retain, nonatomic) GEOLogMsgEventMapsDeviceSettings *mapsDeviceSettings;
@property(readonly, nonatomic) _Bool hasMapsDeviceSettings;
@property(retain, nonatomic) GEOLogMsgEventCuratedCollectionUsage *curatedCollectionUsage;
@property(readonly, nonatomic) _Bool hasCuratedCollectionUsage;
@property(retain, nonatomic) GEOLogMsgEventCuratedCollectionStats *curatedCollectionStats;
@property(readonly, nonatomic) _Bool hasCuratedCollectionStats;
@property(retain, nonatomic) GEOLogMsgEventEVTrip *evTrip;
@property(readonly, nonatomic) _Bool hasEvTrip;
@property(retain, nonatomic) GEOLogMsgEventEVRoutingVehicleDetails *evRoutingVehicleDetails;
@property(readonly, nonatomic) _Bool hasEvRoutingVehicleDetails;
@property(retain, nonatomic) GEOLogMsgEventDirectionsRequestDetails *directionsRequestDetails;
@property(readonly, nonatomic) _Bool hasDirectionsRequestDetails;
@property(retain, nonatomic) GEOLogMsgEventTripDepartureFeedback *tripDepartureFeedback;
@property(readonly, nonatomic) _Bool hasTripDepartureFeedback;
@property(retain, nonatomic) GEOLogMsgEventMarcoLiteUsage *marcoLiteUsage;
@property(readonly, nonatomic) _Bool hasMarcoLiteUsage;
@property(retain, nonatomic) GEOLogMsgEventPredExTrainingData *predExTrainingData;
@property(readonly, nonatomic) _Bool hasPredExTrainingData;
@property(retain, nonatomic) GEOLogMsgEventMapKitCounts *mapKitCounts;
@property(readonly, nonatomic) _Bool hasMapKitCounts;
@property(retain, nonatomic) GEOLogMsgEventThrottle *throttleEvent;
@property(readonly, nonatomic) _Bool hasThrottleEvent;
@property(retain, nonatomic) GEOLogMsgEventDisplayAnalytic *displayAnalytic;
@property(readonly, nonatomic) _Bool hasDisplayAnalytic;
@property(retain, nonatomic) GEOLogMsgEventGridDuration *gridDuration;
@property(readonly, nonatomic) _Bool hasGridDuration;
@property(retain, nonatomic) GEOLogMsgEventTileCacheAnalytic *tileCacheAnalytic;
@property(readonly, nonatomic) _Bool hasTileCacheAnalytic;
@property(retain, nonatomic) GEOLogMsgEventParkedCar *parkedCar;
@property(readonly, nonatomic) _Bool hasParkedCar;
@property(retain, nonatomic) GEOLogMsgEventWifiConnectionQualityProbe *wifiConnectionQualityProbeEvent;
@property(readonly, nonatomic) _Bool hasWifiConnectionQualityProbeEvent;
@property(retain, nonatomic) GEOLogMsgEventCommuteWindow *commuteWindow;
@property(readonly, nonatomic) _Bool hasCommuteWindow;
@property(retain, nonatomic) GEOLogMsgEventBatchTrafficProbe *batchTrafficProbeCollection;
@property(readonly, nonatomic) _Bool hasBatchTrafficProbeCollection;
@property(retain, nonatomic) GEOLogMsgEventRealtimeTrafficProbe *realtimeTrafficProbeCollection;
@property(readonly, nonatomic) _Bool hasRealtimeTrafficProbeCollection;
@property(retain, nonatomic) GEOLogMsgEventClientACSuggestions *clientAcSuggestions;
@property(readonly, nonatomic) _Bool hasClientAcSuggestions;
@property(retain, nonatomic) GEOLogMsgEventTelemetric *telemetric;
@property(readonly, nonatomic) _Bool hasTelemetric;
@property(retain, nonatomic) GEOLogMsgEventFullNavTrace *fullNavTrace;
@property(readonly, nonatomic) _Bool hasFullNavTrace;
@property(retain, nonatomic) GEOLogMsgEventTableBookedSession *tableBookedSession;
@property(readonly, nonatomic) _Bool hasTableBookedSession;
@property(retain, nonatomic) GEOLogMsgEventTableBookingSession *tableBookingSession;
@property(readonly, nonatomic) _Bool hasTableBookingSession;
@property(retain, nonatomic) GEOLogMsgEventRideBookedSession *rideBookedSession;
@property(readonly, nonatomic) _Bool hasRideBookedSession;
@property(retain, nonatomic) GEOLogMsgEventRideBookingSession *rideBookingSession;
@property(readonly, nonatomic) _Bool hasRideBookingSession;
@property(retain, nonatomic) GEOLogMsgEventMapLaunch *mapLaunchEvent;
@property(readonly, nonatomic) _Bool hasMapLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent;
@property(readonly, nonatomic) _Bool hasProactiveSuggestionInteractionSessionEvent;
@property(retain, nonatomic) GEOLogMsgEventRefineSearchSession *refineSearchSession;
@property(readonly, nonatomic) _Bool hasRefineSearchSession;
@property(retain, nonatomic) GEOLogMsgEventListInteractionSession *listInteractionSession;
@property(readonly, nonatomic) _Bool hasListInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession;
@property(readonly, nonatomic) _Bool hasMapsWidgetsInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent;
@property(readonly, nonatomic) _Bool hasTimeToLeaveInitialTravelTimeEvent;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent;
@property(readonly, nonatomic) _Bool hasTimeToLeaveHypothesisEvent;
@property(retain, nonatomic) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent;
@property(readonly, nonatomic) _Bool hasTransitAppLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventDirections *directionsEvent;
@property(readonly, nonatomic) _Bool hasDirectionsEvent;
@property(retain, nonatomic) GEOLogMsgEventNetwork *networkEvent;
@property(readonly, nonatomic) _Bool hasNetworkEvent;
@property(retain, nonatomic) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent;
@property(readonly, nonatomic) _Bool hasPlaceDataCacheEvent;
@property(retain, nonatomic) GEOLogMsgEventTileSetState *tileSetStateEvent;
@property(readonly, nonatomic) _Bool hasTileSetStateEvent;
@property(retain, nonatomic) GEOLogMsgEventStateTiming *stateTimingEvent;
@property(readonly, nonatomic) _Bool hasStateTimingEvent;
@property(retain, nonatomic) GEOLogMsgEventUserAction *userActionEvent;
@property(readonly, nonatomic) _Bool hasUserActionEvent;
- (int)StringAsEventType:(id)arg1;	// IMP=0x0000000001303bc0
- (id)eventTypeAsString:(int)arg1;	// IMP=0x000000000130382d
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType;
@property(retain, nonatomic) NSString *mapsEnvironment;
@property(readonly, nonatomic) _Bool hasMapsEnvironment;
@property(retain, nonatomic) GEOLogMsgEventId *analyticTag;
@property(readonly, nonatomic) _Bool hasAnalyticTag;
- (id)logMsgStateAtIndex:(unsigned long long)arg1;	// IMP=0x00000000013034c9
- (unsigned long long)logMsgStatesCount;	// IMP=0x000000000130349d
- (void)addLogMsgState:(id)arg1;	// IMP=0x00000000013033df
- (void)clearLogMsgStates;	// IMP=0x00000000013033ad
@property(retain, nonatomic) NSMutableArray *logMsgStates;
- (id)initWithData:(id)arg1;	// IMP=0x00000000012ff866
- (id)init;	// IMP=0x00000000012ff80a

@end
