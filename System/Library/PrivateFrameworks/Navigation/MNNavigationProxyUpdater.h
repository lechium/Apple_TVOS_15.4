//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class GEONavigationProxy, MNCompanionNavigationAdapter, NSString;

@interface MNNavigationProxyUpdater : NSObject <MNNavigationSessionObserver>
{
    GEONavigationProxy *_navigationProxy;	// 8 = 0x8
    MNCompanionNavigationAdapter *_companionNavigationAdapter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f5931
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x00000000000f5919
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x00000000000f5900
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x00000000000f58e8
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x00000000000f58cf
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x00000000000f58b0
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x00000000000f5891
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;	// IMP=0x00000000000f5841
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x00000000000f57f1
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x00000000000f57a1
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000f56c1
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x00000000000f5528
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000f550c
- (void)navigationSession:(id)arg1 didUpdateStepNameInfo:(id)arg2;	// IMP=0x00000000000f54f3
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000f54da
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00000000000f53fa
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00000000000f53e2
- (int)_geoNavigationTypeForNavigationType:(int)arg1;	// IMP=0x00000000000f53c5
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000f5385
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x00000000000f5345
- (void)setVoiceGuidance:(unsigned long long)arg1;	// IMP=0x00000000000f532f
- (void)updateClusteredSectionSelectedRideForNavigationSession:(id)arg1;	// IMP=0x00000000000f52b3
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000f529d
- (void)navigationSessionStopped:(id)arg1;	// IMP=0x00000000000f51c6
- (void)navigationSessionStarted:(id)arg1 navigationType:(int)arg2;	// IMP=0x00000000000f503c
- (void)enteredRoutePreviewWithTransportType:(int)arg1;	// IMP=0x00000000000f501c
- (id)init;	// IMP=0x00000000000f4f7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

