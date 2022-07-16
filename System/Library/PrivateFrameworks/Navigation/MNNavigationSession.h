//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/GEOConfigChangeListenerDelegate-Protocol.h>
#import <Navigation/GEOMotionContextDelegate-Protocol.h>
#import <Navigation/MNAudioManagerObserver-Protocol.h>
#import <Navigation/MNGuidanceManagerDelegate-Protocol.h>
#import <Navigation/MNLocationManagerHeadingObserver-Protocol.h>
#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNLocationTrackerDelegate-Protocol.h>
#import <Navigation/MNSessionUpdateManagerDelegate-Protocol.h>
#import <Navigation/MNTimeAndDistanceUpdaterDelegate-Protocol.h>
#import <Navigation/MNTracePlayerObserver-Protocol.h>
#import <Navigation/MNVehicleMonitorDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOComposedWaypoint, GEOMotionContext, GEONavigationGuidanceState, GEOResourceManifestUpdateAssertion, MNAudioManager, MNGuidanceManager, MNGuidanceSignInfo, MNLocation, MNLocationTracker, MNNavigationSessionLogger, MNNavigationTraceManager, MNObserverHashTable, MNRouteManager, MNTimeAndDistanceUpdater, MNTraceNavigationEventRecorder, MNTrafficIncidentAlert, MNVehicleMonitor, NSString, NSUUID;
@protocol MNAudioProvider;

@interface MNNavigationSession : NSObject <GEOConfigChangeListenerDelegate, GEOMotionContextDelegate, MNAudioManagerObserver, MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVehicleMonitorDelegate, MNSessionUpdateManagerDelegate>
{
    int _navigationType;	// 8 = 0x8
    MNRouteManager *_routeManager;	// 16 = 0x10
    GEOComposedWaypoint *_destination;	// 24 = 0x18
    MNLocationTracker *_locationTracker;	// 32 = 0x20
    GEOMotionContext *_motionContext;	// 40 = 0x28
    MNAudioManager *_audioProvider;	// 48 = 0x30
    MNGuidanceManager *_guidanceManager;	// 56 = 0x38
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;	// 64 = 0x40
    MNVehicleMonitor *_vehicleMonitor;	// 72 = 0x48
    double _locationProjectionTime;	// 80 = 0x50
    MNNavigationSessionLogger *_logger;	// 88 = 0x58
    MNNavigationTraceManager *_traceManager;	// 96 = 0x60
    MNTraceNavigationEventRecorder *_navigationEventRecorder;	// 104 = 0x68
    MNTrafficIncidentAlert *_activeTrafficIncidentAlert;	// 112 = 0x70
    _Bool _guidancePromptsEnabled;	// 120 = 0x78
    _Bool _isConnectedToCarplay;	// 121 = 0x79
    _Bool _isSpeakingTrafficIncidentAlert;	// 122 = 0x7a
    GEONavigationGuidanceState *_guidanceState;	// 128 = 0x80
    MNObserverHashTable *_observers;	// 136 = 0x88
    NSString *_tileLoaderClient;	// 144 = 0x90
    GEOApplicationAuditToken *_auditToken;	// 152 = 0x98
    GEOResourceManifestUpdateAssertion *_manifestUpdateAssertion;	// 160 = 0xa0
    _Bool _etaUpdatesDisabled;	// 168 = 0xa8
    MNGuidanceSignInfo *_lastSignInfo;	// 176 = 0xb0
    NSUUID *_lastLaneID;	// 184 = 0xb8
    NSUUID *_lastJunctionViewID;	// 192 = 0xc0
    _Bool _isAllowedToSwitchTransportTypes;	// 200 = 0xc8
    unsigned long long _displayedStepIndex;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000000000d29f7
@property(nonatomic) unsigned long long displayedStepIndex; // @synthesize displayedStepIndex=_displayedStepIndex;
@property(nonatomic) _Bool isConnectedToCarplay; // @synthesize isConnectedToCarplay=_isConnectedToCarplay;
@property(nonatomic) _Bool guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(readonly, nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) _Bool isAllowedToSwitchTransportTypes; // @synthesize isAllowedToSwitchTransportTypes=_isAllowedToSwitchTransportTypes;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOMotionContext *motionContext; // @synthesize motionContext=_motionContext;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) id <MNAudioProvider> audioProvider; // @synthesize audioProvider=_audioProvider;
- (void)valueChangedForGEOConfigKey:(CDStruct_35640fce)arg1;	// IMP=0x00000000000d2937
- (id)userLocationForUpdateManager:(id)arg1;	// IMP=0x00000000000d2925
- (id)routeInfoForUpdateManager:(id)arg1;	// IMP=0x00000000000d28c7
- (_Bool)wantsETAUpdates;	// IMP=0x00000000000d2852
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2;	// IMP=0x00000000000d2839
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;	// IMP=0x00000000000d2820
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;	// IMP=0x00000000000d281a
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x00000000000d2814
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x00000000000d280e
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;	// IMP=0x00000000000d2808
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;	// IMP=0x00000000000d2802
- (void)audioManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x00000000000d27e6
- (void)audioManager:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x00000000000d27ca
- (void)vehicleMonitorDidDisconnectFromVehicle:(id)arg1;	// IMP=0x00000000000d276d
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000d2767
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000d2761
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;	// IMP=0x00000000000d275b
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x00000000000d2755
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000d274f
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000d2749
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;	// IMP=0x00000000000d2743
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x00000000000d273d
- (void)tracePlayerDidStayOnRoute:(id)arg1;	// IMP=0x00000000000d2737
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;	// IMP=0x00000000000d2731
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;	// IMP=0x00000000000d2713
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;	// IMP=0x00000000000d270d
- (void)tracePlayerDidResume:(id)arg1;	// IMP=0x00000000000d2707
- (void)tracePlayerDidPause:(id)arg1;	// IMP=0x00000000000d26f1
- (void)tracePlayerDidStop:(id)arg1;	// IMP=0x00000000000d26eb
- (void)tracePlayerDidStart:(id)arg1;	// IMP=0x00000000000d26e5
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;	// IMP=0x00000000000d24a7
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x00000000000d248b
- (void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x00000000000d246f
- (void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000d2453
- (void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000d2437
- (void)guidanceManager:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x00000000000d2386
- (void)guidanceManager:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x00000000000d2238
- (void)guidanceManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x00000000000d221c
- (void)guidanceManager:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x00000000000d2200
- (void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00000000000d1fcb
- (void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x00000000000d1f1a
- (void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00000000000d1dcc
- (void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x00000000000d1db0
- (void)guidanceManager:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000d1d94
- (void)guidanceManager:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000d1d78
- (void)guidanceManager:(id)arg1 announce:(id)arg2 isImportant:(_Bool)arg3 shortPromptType:(unsigned long long)arg4 ignorePromptStyle:(_Bool)arg5 stage:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d1c74
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x00000000000d1c58
- (void)guidanceManagerEndGuidanceUpdate:(id)arg1;	// IMP=0x00000000000d1c3c
- (void)guidanceManagerBeginGuidanceUpdate:(id)arg1;	// IMP=0x00000000000d1c20
- (void)locationManagerUpdatedHeading:(id)arg1;	// IMP=0x00000000000d1b9c
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000d1b96
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000d1b90
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000d1b8a
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000d1b84
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000d1b7c
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00000000000d1b76
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000d1b70
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00000000000d1b08
- (void)locationTracker:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x00000000000d1aec
- (void)locationTracker:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000d1ad0
- (void)locationTracker:(id)arg1 shouldShowChargingInfoForWaypoint:(id)arg2;	// IMP=0x00000000000d1ab5
- (void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000d1a99
- (void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000d1a3c
- (void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d1930
- (void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;	// IMP=0x00000000000d1731
- (void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000d1633
- (void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000d1617
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;	// IMP=0x00000000000d143b
- (void)locationTrackerDidCancelReroute:(id)arg1;	// IMP=0x00000000000d141f
- (void)locationTracker:(id)arg1 didSuppressReroute:(id)arg2;	// IMP=0x00000000000d1403
- (void)locationTrackerWillReroute:(id)arg1;	// IMP=0x00000000000d13e7
- (void)locationTracker:(id)arg1 didReachETAUpdatePosition:(id)arg2;	// IMP=0x00000000000d13cb
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;	// IMP=0x00000000000d135c
- (void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000d127d
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00000000000d0eec
- (void)locationTrackerDidTimeoutInArrivalRegion:(id)arg1;	// IMP=0x00000000000d0ecb
- (void)locationTrackerDidArrive:(id)arg1;	// IMP=0x00000000000d0d96
- (void)locationTrackerDidEnterPreArrivalState:(id)arg1;	// IMP=0x00000000000d0d58
- (void)locationTracker:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000d0ced
- (void)locationTracker:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000d0cd1
- (void)locationTracker:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000d0cb5
- (void)locationTracker:(id)arg1 didChangeState:(int)arg2;	// IMP=0x00000000000d0c99
- (void)motionContextDidUpdateMotion:(id)arg1;	// IMP=0x00000000000d0c17
- (void)_stopVirtualGarageUpdates;	// IMP=0x00000000000d0bd3
- (void)_startVirtualGarageUpdates;	// IMP=0x00000000000d0b8f
- (id)_transitStopAtStopIndex:(unsigned long long)arg1;	// IMP=0x00000000000d0971
- (void)_stopTravelTimeUpdates;	// IMP=0x00000000000d092c
- (void)_startTravelTimeUpdates;	// IMP=0x00000000000d0832
- (void)_stopGuidance;	// IMP=0x00000000000d081c
- (void)_startGuidanceAllowMidRouteStart:(_Bool)arg1 announcementsToIgnore:(id)arg2;	// IMP=0x00000000000d0749
- (void)didChangeUserOptionsFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000d0733
- (void)_stopAudioSession;	// IMP=0x00000000000d06b0
- (void)_startAudioSession;	// IMP=0x00000000000d049e
- (void)_stopMotionUpdates;	// IMP=0x00000000000d0459
- (void)_startMotionUpdates;	// IMP=0x00000000000d0372
- (void)_stopLocationUpdates;	// IMP=0x00000000000d030f
- (void)_startLocationUpdates;	// IMP=0x00000000000d0298
- (void)_stopLocationTracking;	// IMP=0x00000000000d0214
- (void)_startLocationTracking;	// IMP=0x00000000000d00dc
- (id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2;	// IMP=0x00000000000cfa8c
- (void)_closeTileLoader;	// IMP=0x00000000000cf9d0
- (void)_openTileLoader;	// IMP=0x00000000000cf914
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000cf898
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000cf885
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000cf86f
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x00000000000cf859
- (void)traceJumpedInTime;	// IMP=0x00000000000cf843
- (double)durationForAnnouncement:(id)arg1;	// IMP=0x00000000000cf82d
- (_Bool)isCurrentlySpeaking;	// IMP=0x00000000000cf817
- (double)timeUntilNextAnnouncement;	// IMP=0x00000000000cf801
- (double)timeSinceLastAnnouncement;	// IMP=0x00000000000cf7eb
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000cf7d5
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;	// IMP=0x00000000000cf7bf
- (_Bool)repeatCurrentTrafficAlert;	// IMP=0x00000000000cf6b4
- (_Bool)repeatCurrentGuidance;	// IMP=0x00000000000cf631
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000cf511
- (void)forceReroute;	// IMP=0x00000000000cf4fb
- (void)resumeOriginalDestination;	// IMP=0x00000000000cf43b
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000cf3be
- (void)stopNavigationSessionWithReason:(unsigned long long)arg1;	// IMP=0x00000000000cf15c
- (void)updateWithInitialLocation:(id)arg1;	// IMP=0x00000000000ceef0
- (void)startNavigationSessionWithDetails:(id)arg1;	// IMP=0x00000000000ce7a4
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000ce78b
- (void)addObserver:(id)arg1;	// IMP=0x00000000000ce772
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation;
- (void)dealloc;	// IMP=0x00000000000ce66b
- (id)initWithRouteManager:(id)arg1 auditToken:(id)arg2 traceManager:(id)arg3;	// IMP=0x00000000000ce492
- (id)init;	// IMP=0x00000000000ce468
@property(readonly, nonatomic) _Bool traceIsPlaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

