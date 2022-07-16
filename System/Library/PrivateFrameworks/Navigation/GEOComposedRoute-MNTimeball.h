//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedRoute.h>

@interface GEOComposedRoute (MNTimeball)
+ (id)_stringForPoint:(const void *)arg1;	// IMP=0x0000000000085a12
+ (void)_addPointsToArray:(id)arg1 forMapPoints:(CDStruct_c3b9c2ee *)arg2 pointCount:(unsigned long long)arg3 isPolylineA:(_Bool)arg4;	// IMP=0x0000000000085699
+ (unsigned long long)_startIndexForPoints:(Matrix_2bdd42a3)arg1 withPoints:(void *)arg2 pointCount:(unsigned long long)arg3 toleranceSquared:(double)arg4;	// IMP=0x0000000000085500
+ (void)_findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outDivergenceCoordinateA:(out struct PolylineCoordinate *)arg7 outDivergenceCoordinateB:(out struct PolylineCoordinate *)arg8 outConvergenceCoordinateA:(out struct PolylineCoordinate *)arg9 outConvergenceCoordinateB:(out struct PolylineCoordinate *)arg10;	// IMP=0x000000000008526b
+ (void)findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 outDivergenceCoordinateA:(out struct PolylineCoordinate *)arg5 outDivergenceCoordinateB:(out struct PolylineCoordinate *)arg6 outConvergenceCoordinateA:(out struct PolylineCoordinate *)arg7 outConvergenceCoordinateB:(out struct PolylineCoordinate *)arg8;	// IMP=0x000000000008524b
+ (void)findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherCoordinates:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 distanceInMeters:(double)arg5 outDivergenceCoordinateA:(out struct PolylineCoordinate *)arg6 outDivergenceCoordinateB:(out struct PolylineCoordinate *)arg7 outConvergenceCoordinateA:(out struct PolylineCoordinate *)arg8 outConvergenceCoordinateB:(out struct PolylineCoordinate *)arg9;	// IMP=0x0000000000084fee
+ (void)findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outCoordinatesA:(out id *)arg7 outCoordinatesB:(out id *)arg8;	// IMP=0x00000000000848c9
+ (_Bool)_pointsConverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinatesA:(out id *)arg6 outCoordinatesB:(out id *)arg7;	// IMP=0x00000000000839af
+ (_Bool)_pointsConverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate *)arg6 outCoordinateB:(out struct PolylineCoordinate *)arg7;	// IMP=0x000000000008382d
+ (_Bool)pointsConverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate *)arg5 outCoordinateB:(out struct PolylineCoordinate *)arg6;	// IMP=0x0000000000083810
+ (_Bool)_pointsDiverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate *)arg6 outCoordinateB:(out struct PolylineCoordinate *)arg7;	// IMP=0x000000000008333d
+ (_Bool)pointsDiverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate *)arg5 outCoordinateB:(out struct PolylineCoordinate *)arg6;	// IMP=0x0000000000083320
- (_Bool)_timeball_isEqualToRoute:(id)arg1;	// IMP=0x00000000000570bf
- (_Bool)_isNavigableForWatch;	// IMP=0x0000000000085a3d
- (id)_mapPoints;	// IMP=0x0000000000085410
- (id)divergenceAndConvergenceWithRoute:(id)arg1 outOtherRoutePoints:(out id *)arg2;	// IMP=0x0000000000083154
- (id)divergenceAndConvergenceWithRoute:(id)arg1;	// IMP=0x0000000000083130
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 distanceInMeters:(double)arg2 outDivergenceCoordinate:(out struct PolylineCoordinate *)arg3 outConvergenceCoordinate:(out struct PolylineCoordinate *)arg4;	// IMP=0x0000000000082f72
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 outDivergenceCoordinate:(out struct PolylineCoordinate *)arg2 outConvergenceCoordinate:(out struct PolylineCoordinate *)arg3;	// IMP=0x0000000000082f58
- (double)remainingTimeFromRouteMatch:(id)arg1 etaRoute:(id)arg2 outRemainingDistanceToEndOfLeg:(out double *)arg3 outDistanceToManeuverStart:(out double *)arg4 outDistanceToManeuverEnd:(out double *)arg5 outRemainingTimeToEndOfRoute:(out double *)arg6 outRemainingDistanceToEndOfRoute:(out double *)arg7;	// IMP=0x0000000000082a84
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2 outRemainingDistanceToEndOfLeg:(out double *)arg3 outDistanceToManeuverStart:(out double *)arg4 outDistanceToManeuverEnd:(out double *)arg5 outRemainingTimeToEndOfRoute:(out double *)arg6 outRemainingDistanceToEndOfRoute:(out double *)arg7;	// IMP=0x0000000000082802
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2;	// IMP=0x00000000000827d1
- (double)remainingTimeFromLocation:(id)arg1;	// IMP=0x00000000000827bd
@end
