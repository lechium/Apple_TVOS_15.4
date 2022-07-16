//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceClientInterface-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, MNDisplayETAInfo, MNGuidanceLaneInfo, MNLocation, MNNavigationClientProxy, MNNavigationDetails, MNNavigationServiceRemoteProxy, MNObserverHashTable, MNRouteDistanceInfo, MNUserOptions, NSArray, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol MNNavigationServiceProxy;

@interface MNNavigationService : NSObject <MNNavigationServiceClientInterface>
{
    MNObserverHashTable *_navigationObservers;	// 8 = 0x8
    id <MNNavigationServiceProxy> _proxy;	// 16 = 0x10
    MNNavigationServiceRemoteProxy *_remoteProxy;	// 24 = 0x18
    MNNavigationClientProxy *_clientProxy;	// 32 = 0x20
    NSSet *_realtimeUpdates;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    NSMutableDictionary *_disabledCapabilities;	// 56 = 0x38
    MNNavigationDetails *_details;	// 64 = 0x40
    MNUserOptions *_cachedUserOptions;	// 72 = 0x48
}

+ (id)sharedService;	// IMP=0x000000000003d9e4
+ (unsigned long long)_hashForProtocol:(id)arg1;	// IMP=0x000000000004888e
+ (unsigned long long)daemonInterfaceHash;	// IMP=0x000000000004880a
+ (unsigned long long)clientInterfaceHash;	// IMP=0x000000000004877a
- (void).cxx_destruct;	// IMP=0x0000000000048705
@property(retain) MNUserOptions *cachedUserOptions; // @synthesize cachedUserOptions=_cachedUserOptions;
@property(retain) MNNavigationDetails *details; // @synthesize details=_details;
- (void)navigationServiceProxy:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000485c9
- (void)navigationServiceProxy:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;	// IMP=0x0000000000048580
- (void)navigationServiceProxy:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;	// IMP=0x0000000000048567
- (void)navigationServiceProxy:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x0000000000048484
- (void)navigationServiceProxy:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x000000000004831d
- (void)navigationServiceProxy:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000048227
- (void)navigationServiceProxy:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x00000000000480b6
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;	// IMP=0x0000000000047f9e
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x0000000000047ea8
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x0000000000047dc4
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x000000000004782a
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000475bc
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000047329
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000046fa9
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x0000000000046a11
- (void)navigationServiceProxy:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000468f8
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x000000000004669c
- (void)navigationServiceProxy:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x0000000000046460
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;	// IMP=0x0000000000046387
- (void)navigationServiceProxy:(id)arg1 didRerouteWithRoute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;	// IMP=0x0000000000045f93
- (void)navigationServiceProxyWillReroute:(id)arg1;	// IMP=0x0000000000045eba
- (void)navigationServiceProxy:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x0000000000045d3b
- (void)navigationServiceProxy:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x0000000000045d22
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x0000000000045d09
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000459bd
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x00000000000455ee
- (void)navigationServiceProxy:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x00000000000455d5
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000455bc
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000455a3
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0000000000045482
- (void)navigationServiceProxy:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x000000000004538c
- (void)navigationServiceProxy:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0000000000045296
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x0000000000045050
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x0000000000044efd
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x0000000000044e19
- (void)navigationServiceProxy:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x0000000000044d42
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x0000000000044b85
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;	// IMP=0x0000000000044aac
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;	// IMP=0x00000000000449d3
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;	// IMP=0x00000000000448fa
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x00000000000447bd
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x00000000000446da
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x0000000000044595
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x00000000000444a8
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x0000000000044344
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x000000000004419b
- (void)navigationServiceProxyDidArrive:(id)arg1;	// IMP=0x00000000000440c2
- (void)navigationServiceProxyDidEnterPreArrivalState:(id)arg1;	// IMP=0x0000000000043fad
- (void)navigationServiceProxy:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000043e63
- (void)navigationServiceProxy:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000043d19
- (void)navigationServiceProxy:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000043bcf
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x0000000000043a47
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000043921
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000043833
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x0000000000043664
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x000000000004333e
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000043233
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;	// IMP=0x000000000004315a
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;	// IMP=0x0000000000043081
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;	// IMP=0x0000000000042b2c
- (void)navigationServiceProxy:(id)arg1 didEndWithReason:(unsigned long long)arg2;	// IMP=0x00000000000429c4
- (void)navigationServiceProxy:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;	// IMP=0x0000000000042464
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000042144
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000041f65
- (void)_resetDetails;	// IMP=0x0000000000041eaf
- (id)_clientProxy;	// IMP=0x0000000000041e74
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x0000000000041d81
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x0000000000041c8e
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x0000000000041bae
@property(nonatomic) double tracePosition;
@property(nonatomic) _Bool traceIsPlaying;
@property(readonly, nonatomic, getter=isNavigatingFromTrace) _Bool navigatingFromTrace;
@property(readonly, nonatomic) NSArray *traceBookmarks;
@property(readonly, nonatomic) double traceDuration;
@property(readonly, nonatomic) NSString *tracePath;
@property(readonly, nonatomic) MNGuidanceLaneInfo *activeLaneInfo;
@property(readonly, nonatomic) _Bool isDetour;
@property(readonly, nonatomic) NSString *originalDestinationName;
@property(readonly, nonatomic) GEOComposedWaypoint *originalDestination;
@property(readonly, nonatomic) NSString *destinationName;
@property(readonly, nonatomic) GEOComposedWaypoint *destination;
@property(readonly, nonatomic) GEOComposedWaypoint *originalOrigin;
@property(readonly, nonatomic) GEOComposedWaypoint *origin;
@property(readonly, nonatomic) double timeUntilManeuver;
@property(readonly, nonatomic) double distanceUntilManeuver;
@property(readonly, nonatomic) double timeUntilSign;
@property(readonly, nonatomic) double distanceUntilSign;
@property(readonly, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property(readonly, nonatomic) MNDisplayETAInfo *displayEtaInfo;
@property(readonly, nonatomic) MNLocation *lastLocation;
@property(readonly, nonatomic) unsigned long long displayedStepIndex;
@property(readonly, nonatomic) unsigned long long stepIndex;
- (void)resumeRealtimeUpdates;	// IMP=0x00000000000411c2
- (void)pauseRealtimeUpdates;	// IMP=0x00000000000410e8
- (id)realtimeUpdatesForAllRoutes;	// IMP=0x00000000000410da
- (id)realtimeUpdatesForRoutes:(id)arg1;	// IMP=0x0000000000040d25
- (id)etaRouteForRoute:(id)arg1;	// IMP=0x0000000000040c84
- (unsigned long long)alternateRouteIndexForRoute:(id)arg1;	// IMP=0x0000000000040bd8
- (id)remainingDistanceInfoForRoute:(id)arg1;	// IMP=0x0000000000040b37
- (id)displayETAInfoForRoute:(id)arg1;	// IMP=0x0000000000040a96
@property(readonly, nonatomic) NSArray *alternateRoutes;
@property(readonly, nonatomic) unsigned long long reconnectionRouteIndex;
@property(readonly, nonatomic) unsigned long long routeIndex;
@property(readonly, nonatomic) GEODirectionsResponse *currentResponse;
@property(readonly, nonatomic) GEODirectionsRequest *currentRequest;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) int desiredTransportType;
@property(readonly, nonatomic) int desiredNavigationType;
@property(readonly, nonatomic) NSString *currentVoiceLanguage;
@property(readonly, nonatomic) _Bool isInPreArrivalState;
@property(readonly, nonatomic) _Bool isTrackingCurrentLocation;
@property(readonly, nonatomic) int navigationTransportType;
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) int navigationType;
@property(readonly, nonatomic) _Bool isInNavigatingState;
@property(readonly, nonatomic) unsigned long long state;
- (void)enableNavigationCapability:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x00000000000400b4
- (void)disableNavigationCapability:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000000003fe1d
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000003fd0f
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x000000000003fc24
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x000000000003fb44
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x000000000003fa83
@property(nonatomic) _Bool guidancePromptsEnabled;
@property(nonatomic) int headingOrientation;
- (void)stopCurrentGuidancePrompt;	// IMP=0x000000000003f6ec
- (void)vibrateForPrompt:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f589
- (void)repeatCurrentTrafficAlert:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f42e
- (void)repeatCurrentGuidance:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f2d3
- (void)changeUserOptions:(id)arg1;	// IMP=0x000000000003f1ce
- (id)userOptions;	// IMP=0x000000000003f1bc
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x000000000003f0dc
- (void)switchToRoute:(id)arg1;	// IMP=0x000000000003ef65
- (void)forceReroute;	// IMP=0x000000000003eee0
- (void)resumeOriginalDestination;	// IMP=0x000000000003ee18
- (void)updateDestination:(id)arg1;	// IMP=0x000000000003ece8
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x000000000003ebb0
- (_Bool)startNavigationWithDetails:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003e41e
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x000000000003e157
- (id)ticketForDirectionsRequest:(id)arg1;	// IMP=0x000000000003e0ca
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000003e0b4
- (void)registerObserver:(id)arg1;	// IMP=0x000000000003e09e
- (_Bool)isOpenForClient:(id)arg1;	// IMP=0x000000000003e088
- (void)closeForClient:(id)arg1;	// IMP=0x000000000003df06
- (void)openForClient:(id)arg1;	// IMP=0x000000000003de05
- (id)initPrivate;	// IMP=0x000000000003db00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

