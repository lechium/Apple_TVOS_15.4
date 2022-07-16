//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEODrivingRouteMatcher
{
    double _differentLegScorePenalty;	// 16 = 0x10
}

- (double)_courseFromLocation:(id)arg1;	// IMP=0x00000000012685b0
- (CDStruct_c3b9c2ee)_coordinateFromLocation:(id)arg1;	// IMP=0x00000000012684ce
- (_Bool)_supportsSnapping;	// IMP=0x00000000012684b8
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000126804f
- (id)_startStepForPreviousRouteMatch:(id)arg1;	// IMP=0x0000000001267fe7
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;	// IMP=0x0000000001267e18
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;	// IMP=0x0000000001267b7f
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2;	// IMP=0x0000000001267b3e
- (double)_roadWidthForRouteCoordinate:(struct PolylineCoordinate)arg1;	// IMP=0x0000000001267a77
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;	// IMP=0x00000000012679ae
- (double)_maxMatchDistance:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;	// IMP=0x00000000012678b3
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;	// IMP=0x0000000001266d7a
- (id)initWithRoute:(id)arg1;	// IMP=0x0000000001266cad

@end
