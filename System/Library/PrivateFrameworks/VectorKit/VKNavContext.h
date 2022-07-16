//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEORouteMatch, NSArray, NSHashTable;

@interface VKNavContext : NSObject
{
    GEOComposedRoute *_route;	// 8 = 0x8
    GEORouteMatch *_routeMatch;	// 16 = 0x10
    unsigned long long _currentStepIndex;	// 24 = 0x18
    struct vector<AdditionalPointInfo, std::allocator<AdditionalPointInfo>> _pointsToFrame;	// 32 = 0x20
    NSHashTable *_observers;	// 56 = 0x38
    NSArray *_groupedManeuverCounts;	// 64 = 0x40
    unsigned long long _navCameraHeadingOverride;	// 72 = 0x48
    struct vector<AdditionalRouteInfo, std::allocator<AdditionalRouteInfo>> _additionalRoutesToFrame;	// 80 = 0x50
    unsigned long long _navigationCameraHeadingOverride;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x000000000034e0db
- (void).cxx_destruct;	// IMP=0x000000000034e09b
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(copy, nonatomic) NSArray *groupedManeuverCounts; // @synthesize groupedManeuverCounts=_groupedManeuverCounts;
@property(nonatomic) unsigned long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (void)enumerateAdditionalRoutesToFrameUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000034e01e
- (void)addRouteToFrame:(id)arg1 divergenceCoord:(struct PolylineCoordinate)arg2 convergenceCoord:(struct PolylineCoordinate)arg3;	// IMP=0x000000000034dd81
- (void)clearAdditionalRoutesToFrame;	// IMP=0x000000000034dd73
@property(nonatomic) unsigned long long navigationCameraHeadingOverride; // @synthesize navigationCameraHeadingOverride=_navigationCameraHeadingOverride;
- (void)removeObserver:(id)arg1;	// IMP=0x000000000034dc30
- (void)addObserver:(id)arg1;	// IMP=0x000000000034dc1a
- (void)_notifyObserversStateChanged;	// IMP=0x000000000034db05
- (void)enumeratePointsToFrameUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000034dab4
- (void)enumeratePointsToFrameOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000034da5a
- (void)addPointToFrame:(CDStruct_071ac149)arg1 ofType:(unsigned long long)arg2;	// IMP=0x000000000034d921
- (void)clearPointsToFrameOfType:(unsigned long long)arg1;	// IMP=0x000000000034d893
- (void)clearPointsToFrame;	// IMP=0x000000000034d885
@property(readonly, nonatomic) unsigned long long groupedManeuverCount; // @dynamic groupedManeuverCount;
- (void)updateWithNewRoute:(id)arg1 currentStepIndex:(unsigned long long)arg2;	// IMP=0x000000000034d734
- (void)dealloc;	// IMP=0x000000000034d6dc
- (id)init;	// IMP=0x000000000034d668

@end
