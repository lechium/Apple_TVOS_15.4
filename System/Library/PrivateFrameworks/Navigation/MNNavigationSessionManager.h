//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationSessionObserver-Protocol.h>
#import <Navigation/MNNavigationTraceManagerDelegate-Protocol.h>
#import <Navigation/MNSessionUpdateManagerDelegate-Protocol.h>
#import <Navigation/MNUserOptionsObserver-Protocol.h>

@class GEOApplicationAuditToken, MNNavigationProxyUpdater, MNNavigationSession, MNNavigationTraceManager, MNRouteManager, MNSessionUpdateManager, MNSimulationLocationProvider, NSMutableDictionary, NSString;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationSessionManager : NSObject <MNSessionUpdateManagerDelegate, MNNavigationSessionObserver, MNUserOptionsObserver, MNNavigationTraceManagerDelegate>
{
    id <MNNavigationSessionManagerDelegate> _delegate;	// 8 = 0x8
    MNSessionUpdateManager *_updateManager;	// 16 = 0x10
    MNNavigationSession *_navigationSession;	// 24 = 0x18
    MNRouteManager *_routeManager;	// 32 = 0x20
    MNNavigationProxyUpdater *_proxyUpdater;	// 40 = 0x28
    MNNavigationTraceManager *_traceManager;	// 48 = 0x30
    MNSimulationLocationProvider *_simulationLocationProvider;	// 56 = 0x38
    NSMutableDictionary *_trafficIncidentAlertCallbacks;	// 64 = 0x40
    GEOApplicationAuditToken *_auditToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000f223e
@property(readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider; // @synthesize simulationLocationProvider=_simulationLocationProvider;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNSessionUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigationTraceManagerDidFailToRecordTrace:(id)arg1;	// IMP=0x00000000000f21d5
- (void)navigationTraceManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x00000000000f2179
- (void)userOptionsEngine:(id)arg1 didChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000000000f1f3c
- (void)navigationSession:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000f1ee0
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x00000000000f1e9b
- (void)navigationSession:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000f1e3f
- (void)navigationSession:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000f1de3
- (void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x00000000000f1d87
- (void)navigationSession:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x00000000000f1d81
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000f1d25
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000f1cc9
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f1c15
- (void)navigationSession:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000f1bb9
- (void)navigationSession:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000f1b5d
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x00000000000f1b18
- (void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x00000000000f1abc
- (void)navigationSession:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x00000000000f1a60
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x00000000000f1a04
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00000000000f19a8
- (void)navigationSession:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x00000000000f1963
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x00000000000f1907
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00000000000f18ab
- (void)navigationSessionEndGuidanceUpdate:(id)arg1;	// IMP=0x00000000000f1875
- (void)navigationSessionBeginGuidanceUpdate:(id)arg1;	// IMP=0x00000000000f183f
- (void)navigationSessionHideSecondaryStep:(id)arg1;	// IMP=0x00000000000f1809
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x00000000000f1757
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x00000000000f1712
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x00000000000f164a
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x00000000000f15fb
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x00000000000f159f
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x00000000000f152c
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000f14d0
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000f1474
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x00000000000f1409
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x00000000000f134e
- (void)navigationSessionDidCancelReroute:(id)arg1;	// IMP=0x00000000000f1318
- (void)navigationSessionWillReroute:(id)arg1;	// IMP=0x00000000000f12e2
- (void)navigationSession:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x00000000000f1298
- (void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x00000000000f1246
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000f11ea
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x00000000000f116e
- (void)navigationSession:(id)arg1 didReachETAUpdatePosition:(id)arg2;	// IMP=0x00000000000f1155
- (void)navigationSession:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x00000000000f1110
- (void)navigationSessionWillResumeFromPause:(id)arg1;	// IMP=0x00000000000f10da
- (void)navigationSessionWillPause:(id)arg1;	// IMP=0x00000000000f10a4
- (void)navigationSessionDidArrive:(id)arg1;	// IMP=0x00000000000f106e
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;	// IMP=0x00000000000f1038
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000f0fcd
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000f0f62
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000f0ef7
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x00000000000f0e9b
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000f0e51
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00000000000f0df5
- (void)navigationSession:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;	// IMP=0x00000000000f0db0
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;	// IMP=0x00000000000f0d6b
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00000000000f0d26
- (id)userLocationForUpdateManager:(id)arg1;	// IMP=0x00000000000f0d10
- (id)routeInfoForUpdateManager:(id)arg1;	// IMP=0x00000000000f0cfa
- (_Bool)wantsETAUpdates;	// IMP=0x00000000000f0ce4
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2;	// IMP=0x00000000000f0cce
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;	// IMP=0x00000000000f0cb8
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;	// IMP=0x00000000000f0c45
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x00000000000f0be9
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x00000000000f0b8d
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;	// IMP=0x00000000000f0b1a
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;	// IMP=0x00000000000f0937
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000f0921
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000f090b
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x00000000000f08cb
- (id)_traceManager;	// IMP=0x00000000000f087c
- (id)_proxyUpdater;	// IMP=0x00000000000f0841
- (id)_routeManager;	// IMP=0x00000000000f07e1
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000f071e
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000f04b4
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000f044d
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000f03fa
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000f039c
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000f01b8
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000f01a2
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000f018c
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000f0176
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000effbd
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000eff26
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000efee6
- (void)setVoiceGuidanceLevel:(unsigned long long)arg1;	// IMP=0x00000000000efe60
- (unsigned long long)voiceGuidanceLevel;	// IMP=0x00000000000efe18
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x00000000000efe02
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000efdec
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;	// IMP=0x00000000000efc9e
- (_Bool)repeatCurrentTrafficAlert;	// IMP=0x00000000000efb5a
- (_Bool)repeatCurrentGuidance;	// IMP=0x00000000000efa16
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000ef5eb
- (void)forceReroute;	// IMP=0x00000000000ef4a7
- (void)resumeOriginalDestination;	// IMP=0x00000000000ef363
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000ef203
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000ef105
- (void)updateWithInitialLocation:(id)arg1;	// IMP=0x00000000000ef0ef
- (void)startNavigationWithDetails:(id)arg1;	// IMP=0x00000000000eeb55
- (void)updateForStartNavigation:(id)arg1;	// IMP=0x00000000000ee708
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000ee38b
- (void)dealloc;	// IMP=0x00000000000ee2fc
- (id)initWithAuditToken:(id)arg1;	// IMP=0x00000000000ee21f
- (id)init;	// IMP=0x00000000000ee1f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

