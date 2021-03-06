//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceClientInterface-Protocol.h>
#import <Navigation/NSXPCListenerDelegate-Protocol.h>

@class MNNavigationDetails, MNNavigationServiceLocalProxy, NSMutableSet, NSString, NSXPCListener;

@interface MNNavigationServer : NSObject <NSXPCListenerDelegate, MNNavigationServiceClientInterface>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSMutableSet *_peers;	// 16 = 0x10
    NSMutableSet *_unEntitledPeers;	// 24 = 0x18
    MNNavigationDetails *_details;	// 32 = 0x20
    MNNavigationServiceLocalProxy *_localProxy;	// 40 = 0x28
}

+ (id)sharedServer;	// IMP=0x00000000000095c1
- (void).cxx_destruct;	// IMP=0x000000000000d0be
- (void)navigationServiceProxy:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x000000000000d012
- (void)navigationServiceProxy:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;	// IMP=0x000000000000cf66
- (void)navigationServiceProxy:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;	// IMP=0x000000000000ceba
- (void)navigationServiceProxy:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x000000000000ce52
- (void)navigationServiceProxy:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x000000000000cda6
- (void)navigationServiceProxy:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x000000000000ccfa
- (void)navigationServiceProxy:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x000000000000cc90
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;	// IMP=0x000000000000cbc9
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x000000000000cb1d
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x000000000000cab4
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x000000000000ca08
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000000c939
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000000c86a
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000000c7be
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x000000000000c6f7
- (void)navigationServiceProxy:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x000000000000c64b
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x000000000000c578
- (void)navigationServiceProxy:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x000000000000c4cc
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;	// IMP=0x000000000000c49c
- (void)navigationServiceProxy:(id)arg1 didRerouteWithRoute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;	// IMP=0x000000000000c366
- (void)navigationServiceProxyWillReroute:(id)arg1;	// IMP=0x000000000000c336
- (void)navigationServiceProxy:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x000000000000c261
- (void)navigationServiceProxy:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x000000000000c1ef
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x000000000000c179
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x000000000000c0b2
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x000000000000bfd4
- (void)navigationServiceProxy:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x000000000000bf6a
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x000000000000bebe
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x000000000000be12
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x000000000000bd83
- (void)navigationServiceProxy:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x000000000000bcd7
- (void)navigationServiceProxy:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x000000000000bc2b
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x000000000000bb7f
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x000000000000bad3
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x000000000000ba6a
- (void)navigationServiceProxy:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x000000000000b9be
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x000000000000b912
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;	// IMP=0x000000000000b8e2
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;	// IMP=0x000000000000b8b2
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;	// IMP=0x000000000000b882
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x000000000000b761
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x000000000000b6f7
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x000000000000b5be
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x000000000000b54a
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x000000000000b480
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x000000000000b373
- (void)navigationServiceProxyDidArrive:(id)arg1;	// IMP=0x000000000000b343
- (void)navigationServiceProxyDidEnterPreArrivalState:(id)arg1;	// IMP=0x000000000000b313
- (void)navigationServiceProxy:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000000b25c
- (void)navigationServiceProxy:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000000b1a5
- (void)navigationServiceProxy:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000000b0ee
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x000000000000b024
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x000000000000af83
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x000000000000af11
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x000000000000ae4a
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x000000000000adbc
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000000ad10
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;	// IMP=0x000000000000ace0
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;	// IMP=0x000000000000acb0
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;	// IMP=0x000000000000abed
- (void)navigationServiceProxy:(id)arg1 didEndWithReason:(unsigned long long)arg2;	// IMP=0x000000000000ab83
- (void)navigationServiceProxy:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;	// IMP=0x000000000000a9b0
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000000a8fa
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000000a888
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000009f6c
- (void)_peerDidDisconnect:(id)arg1;	// IMP=0x0000000000009dcd
- (void)_enumerateRemoteObjectsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009a41
- (void)_defaultsDidChange;	// IMP=0x00000000000099d1
- (void)_resetDetails;	// IMP=0x00000000000098cb
- (void)dealloc;	// IMP=0x0000000000009814
- (id)init;	// IMP=0x0000000000009616

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

