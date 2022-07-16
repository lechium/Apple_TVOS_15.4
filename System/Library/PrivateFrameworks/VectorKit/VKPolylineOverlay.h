//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOComposedRouteObserver-Protocol.h>
#import <VectorKit/VKRouteOverlay-Protocol.h>

@class GEOComposedRoute, GEOComposedRouteTraffic, GEOMapRegion, NSString, VKRouteLine;
@protocol VKPolylineOverlayRouteRibbonObserver;

@interface VKPolylineOverlay : NSObject <VKRouteOverlay, GEOComposedRouteObserver>
{
    struct __CFSet *_observers;	// 8 = 0x8
    GEOComposedRoute *_composedRoute;	// 16 = 0x10
    _Bool _isReadyForSnapping;	// 24 = 0x18
    VKRouteLine *_routeRibbon;	// 32 = 0x20
    id <VKPolylineOverlayRouteRibbonObserver> _routeRibbonObserver;	// 40 = 0x28
    double _trafficTimeStamp;	// 48 = 0x30
    struct unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>> _trafficSegments;	// 56 = 0x38
    _Bool _selected;	// 64 = 0x40
    _Bool _hasFocus;	// 65 = 0x41
    _Bool _showTraffic;	// 66 = 0x42
    GEOComposedRouteTraffic *_traffic;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00000000004d7262
- (void).cxx_destruct;	// IMP=0x00000000004d7242
@property(nonatomic) _Bool showTraffic; // @synthesize showTraffic=_showTraffic;
@property(nonatomic) _Bool hasFocus; // @synthesize hasFocus=_hasFocus;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) id <VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver; // @synthesize routeRibbonObserver=_routeRibbonObserver;
@property(nonatomic) VKRouteLine *routeRibbon; // @synthesize routeRibbon=_routeRibbon;
@property(readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;
@property(readonly, nonatomic) GEOComposedRouteTraffic *traffic; // @synthesize traffic=_traffic;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x00000000004d71c9
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x00000000004d71c3
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x00000000004d7092
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x00000000004d7080
- (struct DebugTreeNode)createDebugNode;	// IMP=0x00000000004d6c3d
- (_Bool)isSnappingForSceneTiles;	// IMP=0x00000000004d6c16
- (id)getPathsForRenderRegion:(id)arg1 shouldSnapToRoads:(_Bool)arg2 shouldGenerateSnapPath:(_Bool)arg3 verifySnapping:(_Bool)arg4 isGradientTraffic:(_Bool)arg5 observer:(id)arg6;	// IMP=0x00000000004d546a
- (void)createMatchedSegmentAndAddToPaths:(id)arg1 section:(id)arg2 pathStartIndex:(unsigned int)arg3 pathEndIndex:(unsigned int)arg4 shouldGenerateSnapPath:(_Bool)arg5;	// IMP=0x00000000004d5224
- (_Bool)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;	// IMP=0x00000000004d510b
- (void)clearSnappedPathsForObserver:(id)arg1;	// IMP=0x00000000004d50f1
- (void)updateTraffic:(id)arg1;	// IMP=0x00000000004d4f19
- (struct _NSRange)sectionRangeForBounds:(Box_3d7e3c2c)arg1;	// IMP=0x00000000004d4d0d
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) _Bool containsTransit;
- (void)_setNeedsLayout;	// IMP=0x00000000004d4b07
- (void)removeObserver:(id)arg1;	// IMP=0x00000000004d4ad1
- (void)addObserver:(id)arg1;	// IMP=0x00000000004d4a6a
- (void)dealloc;	// IMP=0x00000000004d49d1
- (id)initWithComposedRoute:(id)arg1 traffic:(id)arg2;	// IMP=0x00000000004d4908

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

