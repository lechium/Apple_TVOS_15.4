//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOPathMatcher, NSMutableArray, NSSet, NSUUID, VKPolylineOverlay, VKPolylineOverlayRenderRegion;
@protocol VKRouteLineObserverProtocol;

__attribute__((visibility("hidden")))
@interface VKRouteLine : NSObject
{
    _Bool _matchToRoads;	// 8 = 0x8
    _Bool _hasNewRoadMatches;	// 9 = 0x9
    Box_96c34b7d _bounds;	// 16 = 0x10
    Matrix_08d701e4 _inverseMatrix;	// 64 = 0x40
    VKPolylineOverlay *_overlay;	// 192 = 0xc0
    double _boundsUnitsPerMeter;	// 200 = 0xc8
    double _metersPerPoint;	// 208 = 0xd0
    GEOPathMatcher *_pathMatcher;	// 216 = 0xd8
    unsigned short _numPathsMatching;	// 224 = 0xe0
    NSMutableArray *_matchedSegments;	// 232 = 0xe8
    unsigned int _matchingStartIndex;	// 240 = 0xf0
    unsigned int _matchingEndIndex;	// 244 = 0xf4
    double _boundsInWorldUnit;	// 248 = 0xf8
    double _simplificationEpsilonPoints;	// 256 = 0x100
    double _viewUnitsPerPoint;	// 264 = 0x108
    id <VKRouteLineObserverProtocol> _observer;	// 272 = 0x110
    vector_2082bb8e _sections;	// 280 = 0x118
    struct fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> _userLocationSection;	// 304 = 0x130
    struct PolylineCoordinate _userLocationIndex;	// 312 = 0x138
    Matrix_8746f91e _userLocation;	// 320 = 0x140
    struct _retain_ptr<NSUUID *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        NSUUID *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _revisionIdentifier;	// 328 = 0x148
    double _lastTrafficTimeStamp;	// 352 = 0x160
    NSSet *_retainedMatchedSegment;	// 360 = 0x168
    VKPolylineOverlayRenderRegion *_renderRegion;	// 368 = 0x170
    struct ManeuverArrowCoordinates _maneuverArrowCoordinates;	// 376 = 0x178
    double _builtViewUnitsPerPoint;	// 400 = 0x190
}

- (id).cxx_construct;	// IMP=0x00000000004af310
- (void).cxx_destruct;	// IMP=0x00000000004af28d
@property(nonatomic) unsigned int matchingEndIndex; // @synthesize matchingEndIndex=_matchingEndIndex;
@property(nonatomic) unsigned int matchingStartIndex; // @synthesize matchingStartIndex=_matchingStartIndex;
@property NSMutableArray *matchedSegments; // @synthesize matchedSegments=_matchedSegments;
@property unsigned short numPathsMatching; // @synthesize numPathsMatching=_numPathsMatching;
@property(readonly, nonatomic) GEOPathMatcher *pathMatcher; // @synthesize pathMatcher=_pathMatcher;
@property(readonly, nonatomic) double boundsInWorldUnit; // @synthesize boundsInWorldUnit=_boundsInWorldUnit;
@property(readonly, nonatomic) VKPolylineOverlayRenderRegion *renderRegion; // @synthesize renderRegion=_renderRegion;
@property(nonatomic) id <VKRouteLineObserverProtocol> observer; // @synthesize observer=_observer;
@property(nonatomic) double simplificationEpsilonPoints; // @synthesize simplificationEpsilonPoints=_simplificationEpsilonPoints;
@property _Bool hasNewRoadMatches; // @synthesize hasNewRoadMatches=_hasNewRoadMatches;
@property(readonly, nonatomic) VKPolylineOverlay *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) Box_96c34b7d bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) vector_2082bb8e sections; // @synthesize sections=_sections;
- (double)boundsUnitsPerMeter;	// IMP=0x00000000004af0e3
- (Matrix_08d701e4)maneuverTransform;	// IMP=0x00000000004af051
- (Matrix_08d701e4)inverseManeuverTransform;	// IMP=0x00000000004aeffd
- (vector_9022e479)maneuverPoints;	// IMP=0x00000000004aece1
- (void)_updateBounds:(id)arg1 boundsInflation:(float)arg2;	// IMP=0x00000000004ae448
- (void)forEachSection:(CDUnknownBlockType)arg1;	// IMP=0x00000000004ae3a0
- (void)splitRouteLineAtAnnotation:(id)arg1;	// IMP=0x00000000004aded3
- (optional_db527fce)snapRouteMatch:(id)arg1;	// IMP=0x00000000004ad45a
- (_Bool)needsUpdateForViewingScale:(double)arg1;	// IMP=0x00000000004ad37e
- (_Bool)isTrafficUptoDate:(double)arg1;	// IMP=0x00000000004ad34f
- (_Bool)isTrafficUpToDate;	// IMP=0x00000000004ad318
- (void)createMeshIfNecessary:(long long)arg1;	// IMP=0x00000000004ad26c
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;	// IMP=0x00000000004acc21
- (_Bool)buildRouteLine:(id)arg1 matchToRoads:(_Bool)arg2 shouldGenerateSnapPath:(_Bool)arg3 viewUnitsPerPoint:(double)arg4 force:(_Bool)arg5 boundsInflation:(float)arg6 isGradientTraffic:(_Bool)arg7;	// IMP=0x00000000004aadac
- (void)_updateTilesCovered:(id)arg1;	// IMP=0x00000000004aac11
@property(readonly, nonatomic) GEOComposedRoute *composedRoute;
- (void)dealloc;	// IMP=0x00000000004aab62
- (id)initWithPolylineOverlay:(id)arg1;	// IMP=0x00000000004aaaba

@end

