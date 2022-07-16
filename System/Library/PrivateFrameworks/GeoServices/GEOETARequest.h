//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOAutomobileOptions, GEOClientCapabilities, GEOCommonOptions, GEOCyclingOptions, GEOLocation, GEOOriginalWaypointRoute, GEOPDABClientDatasetMetadata, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions, GEOWaypoint, GEOWaypointTyped, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETARequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOTimepoint _timepoint;	// 24 = 0x18
    struct GEOSessionID _sessionID;	// 48 = 0x30
    GEOPDABClientDatasetMetadata *_abClientMetadata;	// 64 = 0x40
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;	// 72 = 0x48
    GEOAutomobileOptions *_automobileOptions;	// 80 = 0x50
    GEOClientCapabilities *_clientCapabilities;	// 88 = 0x58
    GEOCommonOptions *_commonOptions;	// 96 = 0x60
    GEOCyclingOptions *_cyclingOptions;	// 104 = 0x68
    NSMutableArray *_destinationWaypointTypeds;	// 112 = 0x70
    NSMutableArray *_destinations;	// 120 = 0x78
    NSMutableArray *_deviceHistoricalLocations;	// 128 = 0x80
    GEOLocation *_lastKnownRoadLocation;	// 136 = 0x88
    GEOWaypointTyped *_originWaypointTyped;	// 144 = 0x90
    NSData *_originalRouteID;	// 152 = 0x98
    NSMutableArray *_originalRouteZilchPoints;	// 160 = 0xa0
    GEOOriginalWaypointRoute *_originalWaypointRoute;	// 168 = 0xa8
    GEOWaypoint *_origin;	// 176 = 0xb0
    NSString *_phoneticLocaleIdentifier;	// 184 = 0xb8
    NSString *_requestingAppId;	// 192 = 0xc0
    NSMutableArray *_serviceTags;	// 200 = 0xc8
    double _sessionRelativeTimestamp;	// 208 = 0xd0
    NSData *_sessionState;	// 216 = 0xd8
    NSMutableArray *_trafficApiResponses;	// 224 = 0xe0
    NSMutableArray *_trafficSnapshotIds;	// 232 = 0xe8
    GEOTFTrafficSnapshot *_trafficSnapshot;	// 240 = 0xf0
    GEOTransitOptions *_transitOptions;	// 248 = 0xf8
    GEOWalkingOptions *_walkingOptions;	// 256 = 0x100
    unsigned int _readerMarkPos;	// 264 = 0x108
    unsigned int _readerMarkLength;	// 268 = 0x10c
    struct os_unfair_lock_s _readerLock;	// 272 = 0x110
    int _transportType;	// 276 = 0x114
    unsigned int _walkingLimitMeters;	// 280 = 0x118
    _Bool _allowPartialResults;	// 284 = 0x11c
    _Bool _includeDistance;	// 285 = 0x11d
    _Bool _includeHistoricTravelTime;	// 286 = 0x11e
    _Bool _includeEtaRouteIncidents;	// 287 = 0x11f
    _Bool _includeRouteTrafficDetail;	// 288 = 0x120
    _Bool _includeShortTrafficSummary;	// 289 = 0x121
    _Bool _isFromAPI;	// 290 = 0x122
    _Bool _needServerLatency;	// 291 = 0x123
    _Bool _useLiveTrafficAsFallback;	// 292 = 0x124
    struct {
        unsigned int has_timepoint:1;
        unsigned int has_sessionID:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_transportType:1;
        unsigned int has_walkingLimitMeters:1;
        unsigned int has_allowPartialResults:1;
        unsigned int has_includeDistance:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeEtaRouteIncidents:1;
        unsigned int has_includeRouteTrafficDetail:1;
        unsigned int has_includeShortTrafficSummary:1;
        unsigned int has_isFromAPI:1;
        unsigned int has_needServerLatency:1;
        unsigned int has_useLiveTrafficAsFallback:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_commonOptions:1;
        unsigned int read_cyclingOptions:1;
        unsigned int read_destinationWaypointTypeds:1;
        unsigned int read_destinations:1;
        unsigned int read_deviceHistoricalLocations:1;
        unsigned int read_lastKnownRoadLocation:1;
        unsigned int read_originWaypointTyped:1;
        unsigned int read_originalRouteID:1;
        unsigned int read_originalRouteZilchPoints:1;
        unsigned int read_originalWaypointRoute:1;
        unsigned int read_origin:1;
        unsigned int read_phoneticLocaleIdentifier:1;
        unsigned int read_requestingAppId:1;
        unsigned int read_serviceTags:1;
        unsigned int read_sessionState:1;
        unsigned int read_trafficApiResponses:1;
        unsigned int read_trafficSnapshotIds:1;
        unsigned int read_trafficSnapshot:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 296 = 0x128
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000012a07c1
+ (Class)trafficSnapshotIdsType;	// IMP=0x000000000129c59a
+ (Class)trafficApiResponsesType;	// IMP=0x000000000129c32a
+ (Class)serviceTagType;	// IMP=0x000000000129c0ba
+ (Class)deviceHistoricalLocationType;	// IMP=0x000000000129b637
+ (Class)originalRouteZilchPointsType;	// IMP=0x000000000129b267
+ (Class)destinationWaypointTypedType;	// IMP=0x000000000129a65a
+ (Class)destinationType;	// IMP=0x0000000001299e1d
- (void).cxx_destruct;	// IMP=0x00000000012a6c9e
@property(nonatomic) _Bool hasNeedServerLatency;
@property(nonatomic) _Bool needServerLatency;
@property(nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property(nonatomic) _Bool useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) _Bool hasTrafficSnapshot;
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000012a653c
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000012a5709
- (unsigned long long)hash;	// IMP=0x00000000012a509c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012a47d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012a3908
- (void)copyTo:(id)arg1;	// IMP=0x00000000012a3087
- (Class)responseClass;	// IMP=0x00000000012a3076
- (unsigned int)requestTypeCode;	// IMP=0x00000000012a306b
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000012a2c32
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000012a2234
- (void)writeTo:(id)arg1;	// IMP=0x00000000012a117f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012a1170
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000012a050e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000012a04fc
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000129e5da
- (id)jsonRepresentation;	// IMP=0x000000000129e4c8
- (id)dictionaryRepresentation;	// IMP=0x000000000129c65a
- (id)description;	// IMP=0x000000000129c5ab
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129c569
- (unsigned long long)trafficSnapshotIdsCount;	// IMP=0x000000000129c53d
- (void)addTrafficSnapshotIds:(id)arg1;	// IMP=0x000000000129c488
- (void)clearTrafficSnapshotIds;	// IMP=0x000000000129c45f
@property(retain, nonatomic) NSMutableArray *trafficSnapshotIds;
- (id)trafficApiResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129c2f9
- (unsigned long long)trafficApiResponsesCount;	// IMP=0x000000000129c2cd
- (void)addTrafficApiResponses:(id)arg1;	// IMP=0x000000000129c218
- (void)clearTrafficApiResponses;	// IMP=0x000000000129c1ef
@property(retain, nonatomic) NSMutableArray *trafficApiResponses;
- (id)serviceTagAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129c089
- (unsigned long long)serviceTagsCount;	// IMP=0x000000000129c05d
- (void)addServiceTag:(id)arg1;	// IMP=0x000000000129bfa8
- (void)clearServiceTags;	// IMP=0x000000000129bf7f
@property(retain, nonatomic) NSMutableArray *serviceTags;
@property(nonatomic) _Bool hasIncludeEtaRouteIncidents;
@property(nonatomic) _Bool includeEtaRouteIncidents;
@property(retain, nonatomic) NSString *requestingAppId;
@property(readonly, nonatomic) _Bool hasRequestingAppId;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;
@property(nonatomic) _Bool hasIncludeShortTrafficSummary;
@property(nonatomic) _Bool includeShortTrafficSummary;
@property(nonatomic) _Bool hasIncludeRouteTrafficDetail;
@property(nonatomic) _Bool includeRouteTrafficDetail;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
@property(retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property(readonly, nonatomic) _Bool hasLastKnownRoadLocation;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129b606
- (unsigned long long)deviceHistoricalLocationsCount;	// IMP=0x000000000129b5da
- (void)addDeviceHistoricalLocation:(id)arg1;	// IMP=0x000000000129b51c
- (void)clearDeviceHistoricalLocations;	// IMP=0x000000000129b4ea
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property(retain, nonatomic) GEOOriginalWaypointRoute *originalWaypointRoute;
@property(readonly, nonatomic) _Bool hasOriginalWaypointRoute;
- (id)originalRouteZilchPointsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129b236
- (unsigned long long)originalRouteZilchPointsCount;	// IMP=0x000000000129b20a
- (void)addOriginalRouteZilchPoints:(id)arg1;	// IMP=0x000000000129b14c
- (void)clearOriginalRouteZilchPoints;	// IMP=0x000000000129b11a
@property(retain, nonatomic) NSMutableArray *originalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID;
@property(readonly, nonatomic) _Bool hasOriginalRouteID;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(retain, nonatomic) GEOCommonOptions *commonOptions;
@property(readonly, nonatomic) _Bool hasCommonOptions;
@property(nonatomic) _Bool hasIsFromAPI;
@property(nonatomic) _Bool isFromAPI;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property(readonly, nonatomic) _Bool hasCyclingOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129a629
- (unsigned long long)destinationWaypointTypedsCount;	// IMP=0x000000000129a5fd
- (void)addDestinationWaypointTyped:(id)arg1;	// IMP=0x000000000129a53f
- (void)clearDestinationWaypointTypeds;	// IMP=0x000000000129a50d
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
@property(retain, nonatomic) GEOWaypointTyped *originWaypointTyped;
@property(readonly, nonatomic) _Bool hasOriginWaypointTyped;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasWalkingLimitMeters;
@property(nonatomic) unsigned int walkingLimitMeters;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
@property(nonatomic) _Bool hasIncludeDistance;
@property(nonatomic) _Bool includeDistance;
@property(nonatomic) _Bool hasAllowPartialResults;
@property(nonatomic) _Bool allowPartialResults;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;
@property(nonatomic) _Bool includeHistoricTravelTime;
- (id)destinationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001299dec
- (unsigned long long)destinationsCount;	// IMP=0x0000000001299dc0
- (void)addDestination:(id)arg1;	// IMP=0x0000000001299d02
- (void)clearDestinations;	// IMP=0x0000000001299cd0
@property(retain, nonatomic) NSMutableArray *destinations;
@property(retain, nonatomic) GEOWaypoint *origin;
@property(readonly, nonatomic) _Bool hasOrigin;
@property(nonatomic) _Bool hasTimepoint;
@property(nonatomic) struct GEOTimepoint timepoint;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x0000000001296db0
- (id)transportTypeAsString:(int)arg1;	// IMP=0x0000000001296d0b
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001296c20
- (id)init;	// IMP=0x0000000001296bc4
- (id)initWithQuickETARequest:(id)arg1;	// IMP=0x000000000116132e

@end

