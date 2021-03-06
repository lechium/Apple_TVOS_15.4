//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNLocationManagerObserver-Protocol.h>

@class GEORoadMatcher, GEOTransitRouteMatcher, MNLocation, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MNTransitLocationTracker <MNLocationManagerObserver>
{
    GEOTransitRouteMatcher *_transitRouteMatcher;	// 8 = 0x8
    GEORoadMatcher *_roadMatcher;	// 16 = 0x10
    NSDate *_lastLocationTimestamp;	// 24 = 0x18
    NSDate *_lastAccurateLocationDate;	// 32 = 0x20
    MNLocation *_lastMatchedLocation;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    _Bool _hasArrived;	// 56 = 0x38
    _Bool _debugSnapToTransitLines;	// 57 = 0x39
    NSMutableDictionary *_monitoredRegions;	// 64 = 0x40
    NSMutableDictionary *_transitRegions;	// 72 = 0x48
    NSMutableDictionary *_transitAlerts;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000b7e43
@property(nonatomic) _Bool debugSnapToTransitLines; // @synthesize debugSnapToTransitLines=_debugSnapToTransitLines;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000b7d07
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x00000000000b7ac0
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x00000000000b7879
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000b7873
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000b786d
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000b7867
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000b7861
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000b7859
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00000000000b7853
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000b784d
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00000000000b7847
- (void)_triggerAlertForRegionId:(id)arg1;	// IMP=0x00000000000b7348
- (id)_stepForRegionAlert:(id)arg1;	// IMP=0x00000000000b7199
- (void)_stopMonitoringForRegionWithIdentifier:(id)arg1;	// IMP=0x00000000000b704d
- (void)_stopMonitoringAllRegions;	// IMP=0x00000000000b6eee
- (id)_clRegionWithCenter:(id)arg1 identifier:(id)arg2 signalStrength:(int)arg3;	// IMP=0x00000000000b6da7
- (void)_startMonitoringTransitAlerts;	// IMP=0x00000000000b699a
- (_Bool)_isInaccurateLocation:(id)arg1;	// IMP=0x00000000000b6973
- (double)_timeToDisplayStaleGPSLocation;	// IMP=0x00000000000b6910
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;	// IMP=0x00000000000b6733
- (id)_locationForInaccurateLocation:(id)arg1;	// IMP=0x00000000000b63f8
- (id)_correctedLocationForLocation:(id)arg1;	// IMP=0x00000000000b5de3
- (id)_matchedLocationForLocation:(id)arg1;	// IMP=0x00000000000b5a2b
- (void)_initRegionAlertsForRoute:(id)arg1;	// IMP=0x00000000000b52d5
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x00000000000b5180
- (void)stopTracking;	// IMP=0x00000000000b5101
- (void)startTracking;	// IMP=0x00000000000b5033
- (int)transportType;	// IMP=0x00000000000b5028
- (id)initWithNavigationSession:(id)arg1;	// IMP=0x00000000000b4c94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

