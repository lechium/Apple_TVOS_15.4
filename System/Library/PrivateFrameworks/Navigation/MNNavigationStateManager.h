//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationStateInterface-Protocol.h>

@class GEOApplicationAuditToken, MNNavigationState, MNObserverHashTable, NSString, geo_isolater;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface>
{
    _Bool _isStarted;	// 8 = 0x8
    MNNavigationState *_currentState;	// 16 = 0x10
    MNObserverHashTable *_navigationStateObservers;	// 24 = 0x18
    GEOApplicationAuditToken *_auditToken;	// 32 = 0x20
    geo_isolater *_isolater;	// 40 = 0x28
    id <MNNavigationSessionManagerDelegate> _navigationDelegate;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00000000000e7748
- (void).cxx_destruct;	// IMP=0x00000000000e8bd8
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000e8b35
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000e8ac3
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e8abd
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e8ab7
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000e8a45
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000e89d3
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000e8984
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000e8935
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000e88e9
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000e8871
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000e8825
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000e87d9
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000e8780
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000e872f
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000e86e3
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000e8697
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x00000000000e864b
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x00000000000e8645
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000e8608
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e8590
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e851e
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e84ac
- (void)changeUserOptions:(id)arg1;	// IMP=0x00000000000e843a
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x00000000000e83ee
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000e837c
- (void)forceReroute;	// IMP=0x00000000000e833f
- (void)resumeOriginalDestination;	// IMP=0x00000000000e8302
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000e8290
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000e8100
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e807a
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000e7ec5
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000e7ebf
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000e7eb9
- (id)_initialState;	// IMP=0x00000000000e7e83
- (void)_replayStateForNewObserver:(id)arg1;	// IMP=0x00000000000e7dc3
@property(readonly, nonatomic) unsigned long long currentStateType;
@property(readonly, nonatomic) MNNavigationState *currentState;
@property(readonly, nonatomic) _Bool isStarted;
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000e7b8d
- (void)addObserver:(id)arg1;	// IMP=0x00000000000e7b01
- (void)reset;	// IMP=0x00000000000e7ab5
- (void)start;	// IMP=0x00000000000e78ff
- (void)dealloc;	// IMP=0x00000000000e7880
- (id)init;	// IMP=0x00000000000e779d
- (id)navSessionDestination;	// IMP=0x00000000000e8c1f
- (unsigned long long)_stateTypeForState:(id)arg1;	// IMP=0x00000000000e9554
- (void)_changeToDesiredLocationProviderTypeForState:(id)arg1;	// IMP=0x00000000000e93f9
- (void)transitionToState:(id)arg1;	// IMP=0x00000000000e8c8e
- (void)setCurrentState:(id)arg1;	// IMP=0x00000000000e9572

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

