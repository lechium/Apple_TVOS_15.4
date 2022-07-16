//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOCyclingOptions, GEODestinationInfo, GEOTransitOptions, GEOWalkingOptions, NSString, PBDataReader, PBUnknownFields;

@interface GEORouteAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _additionalTransportTypes;	// 24 = 0x18
    CDStruct_95bda58d _initialPromptTypes;	// 48 = 0x30
    CDStruct_95bda58d _uiContexts;	// 72 = 0x48
    struct GEOTimepoint _timepoint;	// 96 = 0x60
    GEOAutomobileOptions *_automobileOptions;	// 120 = 0x78
    GEOCyclingOptions *_cyclingOptions;	// 128 = 0x80
    GEODestinationInfo *_destinationInfo;	// 136 = 0x88
    NSString *_phoneticLocaleIdentifier;	// 144 = 0x90
    GEOTransitOptions *_transitOptions;	// 152 = 0x98
    GEOWalkingOptions *_walkingOptions;	// 160 = 0xa0
    unsigned int _readerMarkPos;	// 168 = 0xa8
    unsigned int _readerMarkLength;	// 172 = 0xac
    struct os_unfair_lock_s _readerLock;	// 176 = 0xb0
    int _basicPointsToBeIncluded;	// 180 = 0xb4
    int _destinationType;	// 184 = 0xb8
    int _mainTransportType;	// 188 = 0xbc
    int _trafficType;	// 192 = 0xc0
    unsigned int _walkingLimitMeters;	// 196 = 0xc4
    _Bool _directZilchByLaneFlowlines;	// 200 = 0xc8
    _Bool _enableExperimentalMode;	// 201 = 0xc9
    _Bool _includeContingencyRoutes;	// 202 = 0xca
    _Bool _includeHistoricTravelTime;	// 203 = 0xcb
    _Bool _includeLaneGuidance;	// 204 = 0xcc
    _Bool _includeManeuverIcons;	// 205 = 0xcd
    _Bool _includePhonetics;	// 206 = 0xce
    _Bool _includeTrafficAlongRoute;	// 207 = 0xcf
    _Bool _includeTrafficIncidents;	// 208 = 0xd0
    _Bool _includeZilchPoints;	// 209 = 0xd1
    _Bool _includeCellularCoverage;	// 210 = 0xd2
    _Bool _includeCrossLanguagePhonetics;	// 211 = 0xd3
    _Bool _includeLaneWidths;	// 212 = 0xd4
    _Bool _includeRoutingPathLeg;	// 213 = 0xd5
    _Bool _useMetricThreshold;	// 214 = 0xd6
    struct {
        unsigned int has_timepoint:1;
        unsigned int has_basicPointsToBeIncluded:1;
        unsigned int has_destinationType:1;
        unsigned int has_mainTransportType:1;
        unsigned int has_trafficType:1;
        unsigned int has_walkingLimitMeters:1;
        unsigned int has_directZilchByLaneFlowlines:1;
        unsigned int has_enableExperimentalMode:1;
        unsigned int has_includeContingencyRoutes:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeLaneGuidance:1;
        unsigned int has_includeManeuverIcons:1;
        unsigned int has_includePhonetics:1;
        unsigned int has_includeTrafficAlongRoute:1;
        unsigned int has_includeTrafficIncidents:1;
        unsigned int has_includeZilchPoints:1;
        unsigned int has_includeCellularCoverage:1;
        unsigned int has_includeCrossLanguagePhonetics:1;
        unsigned int has_includeLaneWidths:1;
        unsigned int has_includeRoutingPathLeg:1;
        unsigned int has_useMetricThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_additionalTransportTypes:1;
        unsigned int read_initialPromptTypes:1;
        unsigned int read_uiContexts:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_cyclingOptions:1;
        unsigned int read_destinationInfo:1;
        unsigned int read_phoneticLocaleIdentifier:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 216 = 0xd8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008f9076
+ (id)defaultRouteAttributes;	// IMP=0x0000000000a35999
- (void).cxx_destruct;	// IMP=0x00000000008fc909
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008fc827
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008fc1fe
- (unsigned long long)hash;	// IMP=0x00000000008fbd74
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008fb64f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008fb0e2
- (void)copyTo:(id)arg1;	// IMP=0x00000000008fab7c
- (void)writeTo:(id)arg1;	// IMP=0x00000000008fa48b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008fa47c
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008f895c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008f892f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008f6fad
- (id)jsonRepresentation;	// IMP=0x00000000008f6e80
- (id)dictionaryRepresentation;	// IMP=0x00000000008f5c1a
- (id)description;	// IMP=0x00000000008f5b6b
@property(nonatomic) _Bool hasIncludeCellularCoverage;
@property(nonatomic) _Bool includeCellularCoverage;
- (int)StringAsInitialPromptTypes:(id)arg1;	// IMP=0x00000000008f5aa5
- (id)initialPromptTypesAsString:(int)arg1;	// IMP=0x00000000008f5a50
- (void)setInitialPromptTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008f5a2b
- (int)initialPromptTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008f5955
- (void)addInitialPromptType:(int)arg1;	// IMP=0x00000000008f5919
- (void)clearInitialPromptTypes;	// IMP=0x00000000008f58fa
@property(readonly, nonatomic) int *initialPromptTypes;
@property(readonly, nonatomic) unsigned long long initialPromptTypesCount;
@property(nonatomic) _Bool hasIncludeLaneWidths;
@property(nonatomic) _Bool includeLaneWidths;
@property(nonatomic) _Bool hasDirectZilchByLaneFlowlines;
@property(nonatomic) _Bool directZilchByLaneFlowlines;
@property(nonatomic) _Bool hasIncludeCrossLanguagePhonetics;
@property(nonatomic) _Bool includeCrossLanguagePhonetics;
- (int)StringAsDestinationType:(id)arg1;	// IMP=0x00000000008f54f0
- (id)destinationTypeAsString:(int)arg1;	// IMP=0x00000000008f5405
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType;
@property(retain, nonatomic) GEODestinationInfo *destinationInfo;
@property(readonly, nonatomic) _Bool hasDestinationInfo;
@property(nonatomic) _Bool hasEnableExperimentalMode;
@property(nonatomic) _Bool enableExperimentalMode;
@property(nonatomic) _Bool hasUseMetricThreshold;
@property(nonatomic) _Bool useMetricThreshold;
- (int)StringAsUiContexts:(id)arg1;	// IMP=0x00000000008f50bc
- (id)uiContextsAsString:(int)arg1;	// IMP=0x00000000008f503e
- (void)setUiContexts:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008f501b
- (int)uiContextAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008f4f45
- (void)addUiContext:(int)arg1;	// IMP=0x00000000008f4f0b
- (void)clearUiContexts;	// IMP=0x00000000008f4eee
@property(readonly, nonatomic) int *uiContexts;
@property(readonly, nonatomic) unsigned long long uiContextsCount;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(readonly, nonatomic) _Bool hasWalkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(readonly, nonatomic) _Bool hasTransitOptions;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property(readonly, nonatomic) _Bool hasCyclingOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(readonly, nonatomic) _Bool hasAutomobileOptions;
- (int)StringAsAdditionalTransportTypes:(id)arg1;	// IMP=0x00000000008f47b4
- (id)additionalTransportTypesAsString:(int)arg1;	// IMP=0x00000000008f470f
- (void)setAdditionalTransportTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008f46ea
- (int)additionalTransportTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008f4614
- (void)addAdditionalTransportType:(int)arg1;	// IMP=0x00000000008f45d8
- (void)clearAdditionalTransportTypes;	// IMP=0x00000000008f45b9
@property(readonly, nonatomic) int *additionalTransportTypes;
@property(readonly, nonatomic) unsigned long long additionalTransportTypesCount;
@property(nonatomic) _Bool hasWalkingLimitMeters;
@property(nonatomic) unsigned int walkingLimitMeters;
@property(nonatomic) _Bool hasIncludeTrafficIncidents;
@property(nonatomic) _Bool includeTrafficIncidents;
@property(nonatomic) _Bool hasIncludeHistoricTravelTime;
@property(nonatomic) _Bool includeHistoricTravelTime;
@property(nonatomic) _Bool hasTimepoint;
@property(nonatomic) struct GEOTimepoint timepoint;
@property(nonatomic) _Bool hasIncludeTrafficAlongRoute;
@property(nonatomic) _Bool includeTrafficAlongRoute;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;
- (int)StringAsTrafficType:(id)arg1;	// IMP=0x00000000008f1ec7
- (id)trafficTypeAsString:(int)arg1;	// IMP=0x00000000008f1e60
@property(nonatomic) _Bool hasTrafficType;
@property(nonatomic) int trafficType;
- (int)StringAsBasicPointsToBeIncluded:(id)arg1;	// IMP=0x00000000008f1d56
- (id)basicPointsToBeIncludedAsString:(int)arg1;	// IMP=0x00000000008f1cf0
@property(nonatomic) _Bool hasBasicPointsToBeIncluded;
@property(nonatomic) int basicPointsToBeIncluded;
@property(nonatomic) _Bool hasIncludeLaneGuidance;
@property(nonatomic) _Bool includeLaneGuidance;
@property(nonatomic) _Bool hasIncludeContingencyRoutes;
@property(nonatomic) _Bool includeContingencyRoutes;
@property(nonatomic) _Bool hasIncludeRoutingPathLeg;
@property(nonatomic) _Bool includeRoutingPathLeg;
@property(nonatomic) _Bool hasIncludeZilchPoints;
@property(nonatomic) _Bool includeZilchPoints;
@property(nonatomic) _Bool hasIncludeManeuverIcons;
@property(nonatomic) _Bool includeManeuverIcons;
@property(nonatomic) _Bool hasIncludePhonetics;
@property(nonatomic) _Bool includePhonetics;
- (int)StringAsMainTransportType:(id)arg1;	// IMP=0x00000000008f1880
- (id)mainTransportTypeAsString:(int)arg1;	// IMP=0x00000000008f17dc
@property(nonatomic) _Bool hasMainTransportType;
@property(nonatomic) int mainTransportType;
- (void)dealloc;	// IMP=0x00000000008f170b
- (id)initWithData:(id)arg1;	// IMP=0x00000000008f16af
- (id)init;	// IMP=0x00000000008f1653
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x0000000000a35cee
- (void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a35cd6
- (void)buildRouteAttributes:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a35c14
- (void)setRoutePointTypeForTransportType:(int)arg1;	// IMP=0x0000000000a35b4d

@end

