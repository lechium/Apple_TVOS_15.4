//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_EnterBoard
{
    GEOPBTransitStop *_transitStop;	// 48 = 0x30
    GEOPBTransitStation *_transitStation;	// 56 = 0x38
    CDStruct_2c43369c _entranceCoordinate;	// 64 = 0x40
    struct PolylineCoordinate _routeCoordinateApproaching;	// 80 = 0x50
    struct PolylineCoordinate _routeCoordinateAtStation;	// 88 = 0x58
    GEOComposedRouteStep *_enterStationStep;	// 96 = 0x60
    GEOComposedRouteStep *_boardVehicleStep;	// 104 = 0x68
    GEOComposedTransitTripRouteStep *_rideStep;	// 112 = 0x70
    _Bool _hasEnteredStation;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x0000000001046f09
- (void).cxx_destruct;	// IMP=0x0000000001046ea5
- (_Bool)_isLocationNearAccessPoint:(id)arg1;	// IMP=0x0000000001046b25
- (_Bool)_isLocationNearTransitNode:(id)arg1;	// IMP=0x00000000010469d9
- (_Bool)_isLocationNearEndOfWalkingSegment:(id)arg1;	// IMP=0x00000000010468ed
- (_Bool)_hasLocationExitedStation:(id)arg1;	// IMP=0x000000000104688a
- (_Bool)_hasLocationEnteredStation:(id)arg1 routeMatch:(id)arg2;	// IMP=0x0000000001046742
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x00000000010463ca
- (id)initWithTransitRouteMatcher:(id)arg1 boardVehicleStep:(id)arg2;	// IMP=0x0000000001045f89

@end

