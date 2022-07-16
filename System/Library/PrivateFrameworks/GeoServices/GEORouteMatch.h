//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedRoute, GEOComposedRouteLeg, GEOComposedRouteSegment, GEOComposedRouteStep, GEOComposedTransitStationRouteStep, GEOComposedTransitTripRouteStep, GEOMultiSectionFeature, GEONavigationMatchInfo, NSArray, NSDate;

@interface GEORouteMatch : NSObject <NSSecureCoding>
{
    GEOComposedRoute *_route;	// 8 = 0x8
    CDStruct_071ac149 _locationCoordinate;	// 16 = 0x10
    struct PolylineCoordinate _routeCoordinate;	// 40 = 0x28
    unsigned long long _stepIndex;	// 48 = 0x30
    NSArray *_candidateSteps;	// 56 = 0x38
    double _matchedCourse;	// 64 = 0x40
    double _distanceFromRoute;	// 72 = 0x48
    double _modifiedHorizontalAccuracy;	// 80 = 0x50
    double _modifiedCourseAccuracy;	// 88 = 0x58
    unsigned long long _consecutiveProgressionsOffRoute;	// 96 = 0x60
    double _distanceTraveledOffRoute;	// 104 = 0x68
    _Bool _isGoodMatch;	// 112 = 0x70
    _Bool _shouldProjectLocationAlongRoute;	// 113 = 0x71
    GEOMultiSectionFeature *_road;	// 120 = 0x78
    double _roadWidth;	// 128 = 0x80
    GEORouteMatch *_projectedFrom;	// 136 = 0x88
    NSDate *_timestamp;	// 144 = 0x90
    unsigned long long _transitID;	// 152 = 0x98
    _Bool _isTunnelProjection;	// 160 = 0xa0
    GEONavigationMatchInfo *_detailedMatchInfo;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000d8f0ad
- (id).cxx_construct;	// IMP=0x0000000000d8f9ff
- (void).cxx_destruct;	// IMP=0x0000000000d8f9a2
@property(retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // @synthesize detailedMatchInfo=_detailedMatchInfo;
@property(nonatomic) _Bool isTunnelProjection; // @synthesize isTunnelProjection=_isTunnelProjection;
@property(nonatomic) unsigned long long transitID; // @synthesize transitID=_transitID;
@property(nonatomic) double distanceTraveledOffRoute; // @synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute;
@property(nonatomic) unsigned long long consecutiveProgressionsOffRoute; // @synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool shouldProjectLocationAlongRoute; // @synthesize shouldProjectLocationAlongRoute=_shouldProjectLocationAlongRoute;
@property(nonatomic) _Bool isGoodMatch; // @synthesize isGoodMatch=_isGoodMatch;
@property(retain, nonatomic) GEORouteMatch *projectedFrom; // @synthesize projectedFrom=_projectedFrom;
@property(nonatomic) double modifiedCourseAccuracy; // @synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy;
@property(nonatomic) double modifiedHorizontalAccuracy; // @synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property(readonly, nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(retain, nonatomic) GEOMultiSectionFeature *road; // @synthesize road=_road;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) double matchedCourse; // @synthesize matchedCourse=_matchedCourse;
@property(retain, nonatomic) NSArray *candidateSteps; // @synthesize candidateSteps=_candidateSteps;
@property(nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) CDStruct_39925896 locationCoordinate3D; // @synthesize locationCoordinate3D=_locationCoordinate;
@property(nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
- (id)description;	// IMP=0x0000000000d8f4ca
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d8f339
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d8f0b5
@property(readonly, nonatomic) GEOComposedRouteLeg *leg;
@property(readonly, nonatomic) unsigned long long legIndex;
@property(readonly, nonatomic) GEOComposedRouteSegment *segment;
@property(readonly, nonatomic) unsigned long long segmentIndex;
@property(readonly, nonatomic) GEOComposedTransitStationRouteStep *transitStationStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *transitTripStep;
@property(readonly, nonatomic) GEOComposedRouteStep *step;
@property(readonly, nonatomic) _Bool isOnParkingLotRoad;
@property(readonly, nonatomic) _Bool routeMatchedToEnd;
- (_Bool)routeMatchBehind:(id)arg1;	// IMP=0x0000000000d8ec02
- (_Bool)isEqualIgnoringScore:(id)arg1;	// IMP=0x0000000000d8ea30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d8e9a7
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;	// IMP=0x0000000000d8e73c
@property(readonly, nonatomic) CDStruct_c3b9c2ee locationCoordinate;
- (void)dealloc;	// IMP=0x0000000000d8e6b8
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 locationCoordinate:(CDStruct_39925896)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;	// IMP=0x0000000000d8e4d4
- (id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2;	// IMP=0x0000000000cbd9c6

@end

