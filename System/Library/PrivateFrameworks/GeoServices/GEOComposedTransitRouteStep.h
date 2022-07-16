//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOPBTransitHall, GEOPBTransitStop, GEOTransitScheduleInfo, GEOTransitStep, NSArray, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage, GEOTransitVehicleEntries;

@interface GEOComposedTransitRouteStep
{
    int _maneuver;	// 8 = 0x8
    unsigned int _startTime;	// 12 = 0xc
    unsigned int _duration;	// 16 = 0x10
    GEOTransitStep *_transitStep;	// 24 = 0x18
    NSArray *_routeDetailsPrimaryArtwork;	// 32 = 0x20
    id <GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;	// 40 = 0x28
    NSArray *_steppingArtwork;	// 48 = 0x30
    id <GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;	// 56 = 0x38
    id <GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;	// 64 = 0x40
    GEOPBTransitStop *_originStop;	// 72 = 0x48
    GEOPBTransitStop *_destinationStop;	// 80 = 0x50
    GEOPBTransitHall *_originHall;	// 88 = 0x58
    GEOPBTransitHall *_destinationHall;	// 96 = 0x60
    NSArray *_advisories;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009b0503
- (void).cxx_destruct;	// IMP=0x00000000009b0bd8
@property(readonly, nonatomic) NSArray *advisories; // @synthesize advisories=_advisories;
@property(readonly, nonatomic) GEOPBTransitHall *destinationHall; // @synthesize destinationHall=_destinationHall;
@property(readonly, nonatomic) GEOPBTransitHall *originHall; // @synthesize originHall=_originHall;
@property(readonly, nonatomic) GEOPBTransitStop *destinationStop; // @synthesize destinationStop=_destinationStop;
@property(readonly, nonatomic) GEOPBTransitStop *originStop; // @synthesize originStop=_originStop;
- (id)steppingArtwork;	// IMP=0x00000000009b0b72
- (id)routeDetailsSecondaryArtwork;	// IMP=0x00000000009b0b61
- (id)routeDetailsPrimaryArtwork;	// IMP=0x00000000009b0b50
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage; // @synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> steppingIncidentMessage; // @synthesize steppingIncidentMessage=_steppingIncidentMessage;
@property(readonly, nonatomic) int maneuver; // @synthesize maneuver=_maneuver;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009b094f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009b050b
- (id)_intermediateListNameForStop:(id)arg1;	// IMP=0x00000000009b042a
@property(readonly, nonatomic) NSString *destinationStopIntermediateListName;
@property(readonly, nonatomic) NSString *originStopIntermediateListName;
- (id)_largestEntityAtStop:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000009b022a
- (unsigned long long)_muidForStop:(id)arg1;	// IMP=0x00000000009b01ca
@property(readonly, nonatomic) unsigned long long destinationTransitEntityMuid;
@property(readonly, nonatomic) unsigned long long originTransitEntityMuid;
- (id)description;	// IMP=0x00000000009afe73
- (_Bool)isArrivalStep;	// IMP=0x00000000009afda2
- (CDStruct_39925896)endGeoCoordinate;	// IMP=0x00000000009afc02
- (CDStruct_39925896)startGeoCoordinate;	// IMP=0x00000000009afa62
- (id)previousAlightingStep;	// IMP=0x00000000009af9e6
- (id)nextAlightingStep;	// IMP=0x00000000009af96a
- (id)previousBoardingStep;	// IMP=0x00000000009af8ee
- (id)nextBoardingStep;	// IMP=0x00000000009af872
- (id)nextStop;	// IMP=0x00000000009af76f
- (id)previousStop;	// IMP=0x00000000009af66c
- (unsigned int)startTime;	// IMP=0x00000000009af65c
- (id)endingStop;	// IMP=0x00000000009af64a
- (id)startingStop;	// IMP=0x00000000009af638
@property(readonly, nonatomic) GEOComposedTransitRouteStep *nextTransitStep;
@property(readonly, nonatomic) GEOComposedTransitRouteStep *previousTransitStep;
@property(readonly, nonatomic) NSArray *regionAlerts;
@property(readonly, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property(readonly, nonatomic) id <GEOTransitVehicleEntries> vehicleEntries;
- (id)instructions;	// IMP=0x00000000009af477
@property(readonly, nonatomic) GEOTransitStep *transitStep; // @synthesize transitStep=_transitStep;
- (double)distance;	// IMP=0x00000000009af418
- (unsigned int)duration;	// IMP=0x00000000009af408
- (_Bool)hasDuration;	// IMP=0x00000000009af3f4
- (void)_populateArtworksWithDecoderData:(id)arg1;	// IMP=0x00000000009af1e6
- (void)_populateIncidentsWithDecoderData:(id)arg1;	// IMP=0x00000000009aedbd
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 routeSegmentType:(long long)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 duration:(unsigned int)arg6 pointRange:(struct _NSRange)arg7;	// IMP=0x00000000009aea10

@end
