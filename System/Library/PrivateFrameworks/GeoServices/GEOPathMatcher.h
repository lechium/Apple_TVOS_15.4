//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, NSArray, geo_isolater;
@protocol OS_dispatch_queue;

@interface GEOPathMatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
    double _preloadDistance;	// 24 = 0x18
    NSArray *_matchedSegments;	// 32 = 0x20
    geo_isolater *_matchedSegmentsIsolater;	// 40 = 0x28
    struct vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> _failedRanges;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0000000000f9a780
- (void).cxx_destruct;	// IMP=0x0000000000f9a730
@property(nonatomic) double preloadDistance; // @synthesize preloadDistance=_preloadDistance;
- (void)_addCoordinatesFromRoad:(id)arg1 routeCoordinates:(id)arg2 offsetFromStartOfPath:(double)arg3 errorScale:(double)arg4 offsetFromPathToCurrentPoint:(double *)arg5 outCoordinates:(void *)arg6;	// IMP=0x0000000000f9a4c9
- (struct GEOPolylineCoordinateRange)_uncachedCoordinateRangeForStart:(struct PolylineCoordinate)arg1 end:(struct PolylineCoordinate)arg2;	// IMP=0x0000000000f9a2cd
- (id)_cachedSegments;	// IMP=0x0000000000f9a18b
- (id)_matchedPathSegmentsForPath:(const void *)arg1 routeCoordinates:(id)arg2 start:(struct PolylineCoordinate)arg3 end:(struct PolylineCoordinate)arg4 roadLookup:(id)arg5;	// IMP=0x0000000000f99182
- (id)_roadLookupForRoadNetwork:(const void *)arg1;	// IMP=0x0000000000f99174
- (RoadNetworkPath_17a82ac0)_decodePathForRoute:(id)arg1 start:(struct PolylineCoordinate)arg2 end:(struct PolylineCoordinate)arg3 roadNetwork:(const void *)arg4;	// IMP=0x0000000000f96b9c
- (_Bool)_isFailedRange:(struct GEOPolylineCoordinateRange)arg1;	// IMP=0x0000000000f96b52
- (id)_matchedSegmentsInRange:(struct GEOPolylineCoordinateRange)arg1 ofMatchedSegments:(id)arg2;	// IMP=0x0000000000f9663e
- (id)_updateCacheWithNewSegments:(id)arg1 range:(struct GEOPolylineCoordinateRange)arg2;	// IMP=0x0000000000f95fdf
- (void)_callbackWithMatchedSegments:(id)arg1 range:(struct GEOPolylineCoordinateRange)arg2 handler:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;	// IMP=0x0000000000f95e78
- (void)_matchRouteOnQueueForRange:(struct GEOPolylineCoordinateRange)arg1 finishedHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;	// IMP=0x0000000000f94fc9
- (id)_supportPointsForRange:(struct GEOPolylineCoordinateRange)arg1;	// IMP=0x0000000000f94cef
- (struct GEOPolylineCoordinateRange)_validateInputRange:(struct GEOPolylineCoordinateRange)arg1 finishedHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;	// IMP=0x0000000000f94507
- (id)matchedSegmentsFromStart:(struct PolylineCoordinate)arg1 toEnd:(struct PolylineCoordinate)arg2;	// IMP=0x0000000000f9415d
- (void)matchRouteFromStart:(struct PolylineCoordinate)arg1 toEnd:(struct PolylineCoordinate)arg2 finishedHandler:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;	// IMP=0x0000000000f93e1f
- (void)matchRouteFromStart:(struct PolylineCoordinate)arg1 toEnd:(struct PolylineCoordinate)arg2 finishedHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f93dcc
- (void)dealloc;	// IMP=0x0000000000f93d28
- (id)initForTesting;	// IMP=0x0000000000f93cf9
- (id)initWithRoute:(id)arg1;	// IMP=0x0000000000f93c1c
- (void)_zilchMatchedSegmentsForRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000609bbf
- (id)_zilchMatchedSegmentsForRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange)arg2;	// IMP=0x000000000060903d
- (void)_clearZilchSnappedPathsForRoute:(id)arg1;	// IMP=0x0000000000609022

@end

