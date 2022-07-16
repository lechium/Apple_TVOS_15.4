//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEORouteBuilder : NSObject
{
}

+ (id)_roadComplexitiesForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2;	// IMP=0x0000000000ef3d38
+ (id)_visualInfosForGuidanceEvents:(id)arg1 steps:(id)arg2 coordinates:(id)arg3;	// IMP=0x0000000000ef3859
+ (id)_buildGuidanceEventsForGeoRoute:(id)arg1 withComposedSteps:(id)arg2 coordinates:(id)arg3;	// IMP=0x0000000000ef318e
+ (_Bool)_isGuidanceEventAtEndOfLeg:(int)arg1;	// IMP=0x0000000000ef317f
+ (id)_guidanceEventsForGeoWaypointRoute:(id)arg1 legs:(id)arg2 steps:(id)arg3 coordinates:(id)arg4;	// IMP=0x0000000000ef2953
+ (id)buildMapRegionFromPointSections:(id)arg1;	// IMP=0x0000000000ef2587
+ (unsigned long long)segmentIndexForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2;	// IMP=0x0000000000ef237e
+ (id)_segmentForStepIndex:(unsigned long long)arg1 withSegments:(id)arg2;	// IMP=0x0000000000ef21df
+ (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1 withSteps:(id)arg2;	// IMP=0x0000000000ef1fd6
+ (id)segmentForPointIndex:(unsigned long long)arg1 withSegments:(id)arg2 andSteps:(id)arg3;	// IMP=0x0000000000ef1f2d
+ (id)buildPointSectionsWithSteps:(id)arg1 segments:(id)arg2 coordinates:(id)arg3;	// IMP=0x0000000000ef173e
+ (id)_composedRouteLegForStartStep:(id)arg1 endStep:(id)arg2 custodian:(id)arg3 geoRouteLeg:(id)arg4 legIndex:(unsigned long long)arg5 origin:(id)arg6 destination:(id)arg7 arrivalParameters:(id)arg8 legLength:(double)arg9;	// IMP=0x0000000000ef1420
+ (id)_composedRouteSegmentForStartStep:(id)arg1 andEndStep:(id)arg2 andCustodian:(id)arg3;	// IMP=0x0000000000ef1154
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 stepStartPointIndex:(unsigned long long)arg6 legStartPointIndex:(unsigned long long)arg7;	// IMP=0x0000000000ef0dd4
+ (id)_composedRouteStepWithTransportType:(int)arg1 andCustodian:(id)arg2 geoRouteLeg:(id)arg3 forGeoStep:(id)arg4 withStepIndex:(unsigned long long)arg5 startRouteCoordinate:(struct PolylineCoordinate)arg6 endRouteCoordinate:(struct PolylineCoordinate)arg7 maneuverStartRouteCoordinate:(struct PolylineCoordinate)arg8;	// IMP=0x0000000000ef0b03
+ (void)_buildComponentsForGeoRoute:(id)arg1 andCustodian:(id)arg2 initializerData:(id)arg3 outLegs:(out id *)arg4 outSegments:(out id *)arg5 outSteps:(out id *)arg6;	// IMP=0x0000000000ef0165
+ (void)_componentsForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 coordinates:(id)arg3 custodian:(id)arg4 outLegs:(out id *)arg5 outSegments:(out id *)arg6 outSteps:(out id *)arg7;	// IMP=0x0000000000eeef89
+ (id)_cellularCoverageForGeoRoute:(id)arg1 coordinates:(id)arg2;	// IMP=0x0000000000eeec2f
+ (id)_cellularCoverageForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2;	// IMP=0x0000000000eee54d
+ (id)_buildCoordinatesForGeoRoute:(id)arg1;	// IMP=0x0000000000eedd61
+ (id)_unpackedPointsDataForGeoRoute:(id)arg1;	// IMP=0x0000000000eedb1a
+ (id)_coordinatesForGeoWaypointRoute:(id)arg1;	// IMP=0x0000000000eed0bc
+ (id)outputForGeoRoute:(id)arg1 initializerData:(id)arg2 andCustodian:(id)arg3;	// IMP=0x0000000000eecaac
+ (id)outputForGeoWaypointRoute:(id)arg1 initializerData:(id)arg2 custodian:(id)arg3;	// IMP=0x0000000000eec254

@end
