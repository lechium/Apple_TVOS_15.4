//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>
#import <GeoServices/_GEORouteHypothesisMonitorETAProvider-Protocol.h>

@class GEOETARoute, GEOETATrafficUpdateWaypointRoute, NSArray, NSUUID;

@interface GEOComposedETARoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding>
{
    NSUUID *_uniqueRouteID;	// 8 = 0x8
    NSUUID *_etauResponseID;	// 16 = 0x10
    NSArray *_legs;	// 24 = 0x18
    _Bool _hasValidTravelDurations;	// 32 = 0x20
    double _travelDuration;	// 40 = 0x28
    double _historicTravelDuration;	// 48 = 0x30
    double _travelDurationAggressiveEstimate;	// 56 = 0x38
    double _travelDurationConservativeEstimate;	// 64 = 0x40
    double _length;	// 72 = 0x48
    CDStruct_3f2a7a20 _startRouteCoordinate;	// 80 = 0x50
    unsigned long long _startingStepIndex;	// 88 = 0x58
    GEOETARoute *_geoETARoute;	// 96 = 0x60
    GEOETATrafficUpdateWaypointRoute *_geoETAWaypointRoute;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000011d1d05
- (void).cxx_destruct;	// IMP=0x00000000011d22d4
@property(readonly, nonatomic) CDStruct_3f2a7a20 startRouteCoordinate; // @synthesize startRouteCoordinate=_startRouteCoordinate;
@property(readonly, nonatomic) double length; // @synthesize length=_length;
@property(readonly, nonatomic) double travelDurationConservativeEstimate; // @synthesize travelDurationConservativeEstimate=_travelDurationConservativeEstimate;
@property(readonly, nonatomic) double travelDurationAggressiveEstimate; // @synthesize travelDurationAggressiveEstimate=_travelDurationAggressiveEstimate;
@property(readonly, nonatomic) double historicTravelDuration; // @synthesize historicTravelDuration=_historicTravelDuration;
@property(readonly, nonatomic) double travelDuration; // @synthesize travelDuration=_travelDuration;
@property(readonly, nonatomic) _Bool hasValidTravelDurations; // @synthesize hasValidTravelDurations=_hasValidTravelDurations;
@property(readonly, nonatomic) NSArray *legs; // @synthesize legs=_legs;
@property(readonly, nonatomic) NSUUID *etauResponseID; // @synthesize etauResponseID=_etauResponseID;
@property(readonly, nonatomic) NSUUID *uniqueRouteID; // @synthesize uniqueRouteID=_uniqueRouteID;
- (id)description;	// IMP=0x00000000011d20a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011d1f6c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011d1d0d
- (_Bool)_updateForOldResponse:(id)arg1 route:(id)arg2;	// IMP=0x00000000011d1448
- (_Bool)_prepareForOldRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(CDStruct_3f2a7a20)arg3;	// IMP=0x00000000011d139d
- (double)_travelDurationFromStepID:(unsigned long long)arg1 toStepID:(unsigned long long)arg2 currentStepRemainingDistance:(double)arg3;	// IMP=0x00000000011d0fdd
- (id)evChargingStationInfos;	// IMP=0x00000000011d0d64
- (id)evStepInfos;	// IMP=0x00000000011d0964
- (id)navigabilityInfo;	// IMP=0x00000000011d0929
- (id)geoTrafficBannerText;	// IMP=0x00000000011d08ee
- (double)travelDurationToEndOfLegFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;	// IMP=0x00000000011d0605
- (double)travelDurationToEndOfRouteFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;	// IMP=0x00000000011d0467
- (_Bool)updateForResponse:(id)arg1 route:(id)arg2;	// IMP=0x00000000011cef87
- (_Bool)prepareForRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(CDStruct_3f2a7a20)arg3;	// IMP=0x00000000011cea0d
- (double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2;	// IMP=0x0000000000efe2e4
@property(readonly, nonatomic) double _hypothesis_travelDurationConservativeEstimate;
@property(readonly, nonatomic) double _hypothesis_travelDurationAggressiveEstimate;
@property(readonly, nonatomic) double _hypothesis_travelDuration;
- (id)initWithRouteForTesting:(id)arg1;	// IMP=0x00000000011d231d
- (id)geoETARoute;	// IMP=0x00000000011d23a8
- (id)geoETAWaypointRoute;	// IMP=0x00000000011d239a

@end

