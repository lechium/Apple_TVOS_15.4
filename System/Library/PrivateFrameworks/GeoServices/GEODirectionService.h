//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionsRequester;

@interface GEODirectionService : NSObject
{
    GEODirectionsRequester *_directionsRequester;	// 8 = 0x8
}

+ (id)sharedService;	// IMP=0x000000000127cc99
- (void).cxx_destruct;	// IMP=0x0000000001281fdc
@property(readonly, nonatomic) GEODirectionsRequester *directionsRequester; // @synthesize directionsRequester=_directionsRequester;
- (id)_geoOriginalWaypointRouteForReroute:(id)arg1 fromStepIndex:(unsigned long long)arg2;	// IMP=0x0000000001281e85
- (id)_ticketForSearchAlongRoute:(id)arg1 transportType:(int)arg2 currentLocation:(id)arg3 originalRoute:(id)arg4 routeCoordinate:(CDStruct_3f2a7a20)arg5 returnToOriginalDestination:(_Bool)arg6 routeAttributes:(id)arg7 commonOptions:(id)arg8;	// IMP=0x0000000001281a5f
- (id)ticketForCyclingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;	// IMP=0x00000000012815d2
- (id)ticketForCyclingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 routeCoordinate:(CDStruct_3f2a7a20)arg4 returnToOriginalDestination:(_Bool)arg5 routeAttributes:(id)arg6 commonOptions:(id)arg7;	// IMP=0x0000000001281592
- (id)ticketForCyclingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeCoordinate:(CDStruct_3f2a7a20)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 lastETADisplayed:(id)arg8 commonOptions:(id)arg9 requestingAppIdentifier:(id)arg10;	// IMP=0x0000000001280e17
- (id)ticketForCyclingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7 sessionID:(struct GEOSessionID)arg8;	// IMP=0x00000000012809d8
- (id)ticketForCyclingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7;	// IMP=0x0000000001280862
- (id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;	// IMP=0x0000000001280304
- (id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(double)arg6 commonOptions:(id)arg7;	// IMP=0x000000000127fe5b
- (id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7 sessionID:(struct GEOSessionID)arg8;	// IMP=0x000000000127fa1c
- (id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7;	// IMP=0x000000000127f8a6
- (id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;	// IMP=0x000000000127f419
- (id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeCoordinate:(CDStruct_3f2a7a20)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 lastETADisplayed:(id)arg8 commonOptions:(id)arg9 requestingAppIdentifier:(id)arg10;	// IMP=0x000000000127ecff
- (id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7 sessionID:(struct GEOSessionID)arg8;	// IMP=0x000000000127e8c0
- (id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7;	// IMP=0x000000000127e74a
- (id)ticketForDrivingDoomFromOrigin:(id)arg1 toDestination:(id)arg2 requestPriority:(id)arg3 routeAttributes:(id)arg4;	// IMP=0x000000000127e290
- (id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;	// IMP=0x000000000127de06
- (id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 routeCoordinate:(CDStruct_3f2a7a20)arg4 returnToOriginalDestination:(_Bool)arg5 routeAttributes:(id)arg6 commonOptions:(id)arg7;	// IMP=0x000000000127ddc9
- (id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeCoordinate:(CDStruct_3f2a7a20)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 lastETADisplayed:(id)arg8 commonOptions:(id)arg9 requestingAppIdentifier:(id)arg10;	// IMP=0x000000000127d651
- (id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7 sessionID:(struct GEOSessionID)arg8;	// IMP=0x000000000127d166
- (id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 commonOptions:(id)arg7;	// IMP=0x000000000127cff0
- (id)directionsURL;	// IMP=0x000000000127cd44
- (id)init;	// IMP=0x000000000127ccee

@end

