//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOMapFeatureRoad;

@interface GEOMatchedPathSegment : NSObject
{
    GEOComposedRoute *_route;	// 8 = 0x8
    GEOMapFeatureRoad *_road;	// 16 = 0x10
    struct vector<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> _coordinates;	// 24 = 0x18
    struct GEOPolylineCoordinateRange {
        struct PolylineCoordinate start;
        struct PolylineCoordinate end;
    } _roadRange;	// 48 = 0x30
    _Bool _isPartialStart;	// 64 = 0x40
    _Bool _isPartialEnd;	// 65 = 0x41
}

- (id).cxx_construct;	// IMP=0x00000000009989dc
- (void).cxx_destruct;	// IMP=0x00000000009989a2
@property(readonly, nonatomic) _Bool isPartialEnd; // @synthesize isPartialEnd=_isPartialEnd;
@property(readonly, nonatomic) _Bool isPartialStart; // @synthesize isPartialStart=_isPartialStart;
@property(readonly, nonatomic) GEOPolylineCoordinateRange_3ad5eabb roadRange; // @synthesize roadRange=_roadRange;
@property(readonly, nonatomic) GEOMapFeatureRoad *road; // @synthesize road=_road;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id)debugDescription;	// IMP=0x0000000000998462
- (id)description;	// IMP=0x00000000009982d2
- (struct PolylineCoordinate)_roadPolylineCoordinateForCoordinate:(CDStruct_39925896)arg1 segmentCoordinateIndex:(unsigned long long)arg2;	// IMP=0x000000000099813e
- (pair_cb14b7b7)_interpolatedCoordinateFrom:(const void *)arg1 to:(const void *)arg2 routeCoordinate:(const struct PolylineCoordinate *)arg3;	// IMP=0x000000000099805d
- (CDStruct_39925896)locationCoordinateForRouteCoordinate:(struct PolylineCoordinate)arg1;	// IMP=0x0000000000997fa9
@property(readonly, nonatomic) GEOPolylineCoordinateRange_3ad5eabb range;
@property(readonly, nonatomic) struct PolylineCoordinate endRouteCoordinate;
@property(readonly, nonatomic) struct PolylineCoordinate startRouteCoordinate;
- (struct PolylineCoordinate)routeCoordinateAt:(unsigned long long)arg1;	// IMP=0x0000000000997e9f
- (CDStruct_39925896)locationCoordinateAt:(unsigned long long)arg1;	// IMP=0x0000000000997df6
@property(readonly, nonatomic) unsigned long long pointCount;
- (id)trimmedSegmentWithinRange:(struct GEOPolylineCoordinateRange)arg1;	// IMP=0x00000000009978c0
- (id)initForFailedMatchWithRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange)arg2;	// IMP=0x0000000000997589
- (id)initWithRoute:(id)arg1 road:(id)arg2 coordinates:(const void *)arg3 roadRange:(struct GEOPolylineCoordinateRange)arg4;	// IMP=0x00000000009972dc
- (id)init;	// IMP=0x0000000000997298

@end

