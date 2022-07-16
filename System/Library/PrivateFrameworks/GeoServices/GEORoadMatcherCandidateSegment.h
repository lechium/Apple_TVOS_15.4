//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapFeatureJunction, GEOMapFeatureRoad;

__attribute__((visibility("hidden")))
@interface GEORoadMatcherCandidateSegment : NSObject
{
    double _score;	// 8 = 0x8
    GEOMapFeatureRoad *_road;	// 16 = 0x10
    CDStruct_071ac149 _coordinateOnSegment;	// 24 = 0x18
    double _distanceFromSegment;	// 48 = 0x30
    double _segmentAngle;	// 56 = 0x38
    GEOMapFeatureJunction *_junction;	// 64 = 0x40
    double _distanceInMetersFromJunction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000106540d
@property(readonly, nonatomic) double distanceFromJunction; // @synthesize distanceFromJunction=_distanceInMetersFromJunction;
@property(readonly, nonatomic) GEOMapFeatureJunction *junction; // @synthesize junction=_junction;
@property(readonly, nonatomic) double segmentAngle; // @synthesize segmentAngle=_segmentAngle;
@property(readonly, nonatomic) double distanceFromSegment; // @synthesize distanceFromSegment=_distanceFromSegment;
@property(readonly, nonatomic) CDStruct_39925896 coordinateOnSegment; // @synthesize coordinateOnSegment=_coordinateOnSegment;
@property(readonly, nonatomic) GEOMapFeatureRoad *road; // @synthesize road=_road;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
- (id)initWithCoordinate:(CDStruct_39925896)arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(CDStruct_39925896)arg4 endCoordinate:(CDStruct_39925896)arg5;	// IMP=0x0000000001064fc6

@end

