//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOFormattedString, GEOPBTransitArtwork, GEOStyleAttributes, NSArray;
@protocol GEOServerFormattedString, GEOTransitArtworkDataSource;

@interface GEOComposedRouteVisualInfo : NSObject <NSSecureCoding>
{
    GEOFormattedString *_title;	// 8 = 0x8
    GEOFormattedString *_detail;	// 16 = 0x10
    GEOStyleAttributes *_styleAttributes;	// 24 = 0x18
    GEOPBTransitArtwork *_icon;	// 32 = 0x20
    NSArray *_laneChangeInfos;	// 40 = 0x28
    GEOPolylineCoordinateRange_482ebfc6 _routeCoordinateRange;	// 48 = 0x30
    CDStruct_071ac149 _startCoordinate;	// 64 = 0x40
    CDStruct_071ac149 _endCoordinate;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000012648e1
+ (id)_infosForRouteLineStyleInfos:(id)arg1 coordinates:(id)arg2 updateable:(_Bool)arg3;	// IMP=0x0000000001266851
+ (id)cameraInfosForRoute:(id)arg1 etaRoute:(id)arg2;	// IMP=0x000000000126638f
+ (id)visualInfosForRoute:(id)arg1 etaRoute:(id)arg2;	// IMP=0x0000000001265ecd
+ (id)cameraInfosForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2 updateable:(_Bool)arg3;	// IMP=0x0000000001265c12
+ (id)visualInfosForGeoWaypointRoute:(id)arg1 coordinates:(id)arg2 updateable:(_Bool)arg3;	// IMP=0x0000000001265957
- (void).cxx_destruct;	// IMP=0x00000000012651d1
@property(readonly, nonatomic) CDStruct_39925896 endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(readonly, nonatomic) CDStruct_39925896 startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(readonly, nonatomic) GEOPolylineCoordinateRange_38d3edb7 routeCoordinateRange; // @synthesize routeCoordinateRange=_routeCoordinateRange;
@property(readonly, nonatomic) NSArray *laneChangeInfos; // @synthesize laneChangeInfos=_laneChangeInfos;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) id <GEOServerFormattedString> detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) id <GEOServerFormattedString> title; // @synthesize title=_title;
- (id)description;	// IMP=0x0000000001264caf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001264bb4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000012648e9
- (id)initWithGeoRouteLineStyleInfo:(id)arg1 coordinates:(id)arg2 distanceOffset:(double)arg3;	// IMP=0x000000000126536a
- (id)initWithTitle:(id)arg1 detail:(id)arg2 routeCoordinate:(CDStruct_3f2a7a20)arg3 locationCoordinate:(CDStruct_39925896)arg4;	// IMP=0x000000000126521a

@end

