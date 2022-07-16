//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeManagerObserver-Protocol.h>

@class GEOComposedGuidanceEvent, GEOComposedRoute, MNAnnouncementEngine, MNAnnouncementPlanEvent, MNGuidanceSignInfo, MNJunctionViewImageLoader, MNLocation, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceManager : NSObject <MNTimeManagerObserver>
{
    MNAnnouncementEngine *_announcementEngine;	// 8 = 0x8
    NSMutableDictionary *_announcementsSpoken;	// 16 = 0x10
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;	// 24 = 0x18
    NSMutableDictionary *_specialSpokenEvents;	// 32 = 0x20
    NSMutableDictionary *_specialSignEvents;	// 40 = 0x28
    NSMutableDictionary *_specialAREvents;	// 48 = 0x30
    GEOComposedRoute *_route;	// 56 = 0x38
    NSMutableArray *_events;	// 64 = 0x40
    NSDictionary *_eventIndexes;	// 72 = 0x48
    GEOComposedGuidanceEvent *_nextEvent;	// 80 = 0x50
    _Bool _hasBeenOnRouteOnce;	// 88 = 0x58
    _Bool _canSpeakReturnToRouteAnnouncement;	// 89 = 0x59
    double _timeLastAnnouncementStarted;	// 96 = 0x60
    double _timeLastAnnouncementEnded;	// 104 = 0x68
    _Bool _hasPersistentEvents;	// 112 = 0x70
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;	// 120 = 0x78
    NSMutableDictionary *_hapticsTriggered;	// 128 = 0x80
    MNGuidanceSignInfo *_signInfo;	// 136 = 0x88
    NSArray *_arEvents;	// 144 = 0x90
    NSArray *_previousSignEvents;	// 152 = 0x98
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;	// 160 = 0xa0
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;	// 168 = 0xa8
    MNJunctionViewImageLoader *_junctionViewImageLoader;	// 176 = 0xb0
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;	// 184 = 0xb8
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;	// 192 = 0xc0
    MNLocation *_location;	// 200 = 0xc8
    double _speed;	// 208 = 0xd0
    NSMutableArray *_validEvents;	// 216 = 0xd8
    NSMutableDictionary *_feedback;	// 224 = 0xe0
    _Bool _isInPreArrivalState;	// 232 = 0xe8
    _Bool _shouldShowChargingInfo;	// 233 = 0xe9
    id <MNGuidanceManagerDelegate> _delegate;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000000090b34
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool shouldShowChargingInfo; // @synthesize shouldShowChargingInfo=_shouldShowChargingInfo;
@property(nonatomic) _Bool isInPreArrivalState; // @synthesize isInPreArrivalState=_isInPreArrivalState;
@property(nonatomic) __weak id <MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timeManagerDidChangeProvider:(id)arg1;	// IMP=0x0000000000090a88
- (unsigned int)_trafficColorForRoute:(id)arg1 traffic:(id)arg2 distanceRemaining:(double)arg3;	// IMP=0x0000000000090976
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;	// IMP=0x000000000008ff7d
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;	// IMP=0x000000000008fd4d
- (double)_distanceToEndOfRoute;	// IMP=0x000000000008fcc2
- (double)_distanceToManeuverStart;	// IMP=0x000000000008fbf0
- (double)_distanceToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x000000000008fb77
- (double)_timeUntilEventTrigger:(id)arg1;	// IMP=0x000000000008fa5c
- (double)timeUntilNextAnnouncement;	// IMP=0x000000000008fa2e
- (double)timeSinceLastAnnouncement;	// IMP=0x000000000008fa05
- (double)_timeRemainingForEvent:(id)arg1;	// IMP=0x000000000008f960
- (int)_indexForEventUUID:(id)arg1;	// IMP=0x000000000008f79b
- (_Bool)_isEVChargingEvent:(id)arg1;	// IMP=0x000000000008f6cc
- (_Bool)_guidanceEventIsSpecial:(id)arg1;	// IMP=0x000000000008f6a1
- (_Bool)_isValidEvent:(id)arg1;	// IMP=0x000000000008f439
- (double)_adjustedVehicleSpeed;	// IMP=0x000000000008f3ba
- (void)_markEventSpoken:(id)arg1;	// IMP=0x000000000008f2b3
- (_Bool)_eventWasSpoken:(id)arg1;	// IMP=0x000000000008f1d7
- (id)_specialSpokenEvents:(int)arg1 forLegIndex:(unsigned long long)arg2;	// IMP=0x000000000008f07a
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000008f061
- (id)_junctionViewEvents;	// IMP=0x000000000008ee8d
- (void)_handleJunctionViewInfo:(id)arg1;	// IMP=0x000000000008eb47
- (id)_nextJunctionViewGuidanceEvent;	// IMP=0x000000000008e9d7
- (void)_considerJunctionViewGuidance;	// IMP=0x000000000008e42c
- (_Bool)_hasPersistentEvents;	// IMP=0x000000000008e2f4
- (void)_considerPersistence;	// IMP=0x000000000008e29d
- (double)_headingForArEvent:(id)arg1;	// IMP=0x000000000008e06c
- (int)_maneuverTypeForAREvent:(id)arg1;	// IMP=0x000000000008de44
- (id)_specialAREvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x000000000008dd85
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)arg1;	// IMP=0x000000000008dab5
- (id)_closestContinueAREventToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x000000000008d8e3
- (id)_validEventsForARGuidance;	// IMP=0x000000000008d078
- (id)_createArGuidanceInfosForEvent:(id)arg1 forStep:(id)arg2;	// IMP=0x000000000008c176
- (void)_considerARGuidance;	// IMP=0x000000000008bdf4
- (id)_signForGuidanceEvent:(id)arg1 isPrimary:(_Bool)arg2 shouldOverridePrimaryDistances:(_Bool)arg3 distance:(out double *)arg4;	// IMP=0x000000000008b839
- (id)_sortedSignEventsFromValidSignEvents:(id)arg1;	// IMP=0x000000000008b5dd
- (id)_specialSignEvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x000000000008b480
- (id)_validEventsForSignGuidance:(out _Bool *)arg1;	// IMP=0x000000000008b005
- (void)_considerSignGuidance;	// IMP=0x000000000008ab8e
- (id)_nextLaneGuidanceEvent;	// IMP=0x000000000008a9f2
- (void)_considerLaneGuidance;	// IMP=0x000000000008a53e
- (void)_considerHaptics;	// IMP=0x000000000008a1f4
- (id)_durationsForEvent:(id)arg1;	// IMP=0x0000000000089f57
- (id)_serverStringDictionaryForChargingEvent:(id)arg1;	// IMP=0x0000000000089dff
- (id)_serverStringDictionaryForEvent:(id)arg1 distance:(double)arg2 validDistance:(double)arg3 spoken:(_Bool)arg4;	// IMP=0x0000000000089d15
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinIndex:(unsigned long long)arg3 selectedIndex:(out unsigned long long *)arg4;	// IMP=0x0000000000089684
- (void)_notifySpeechEvent:(id)arg1 variant:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3;	// IMP=0x0000000000088f0c
- (id)_spokenEventsRemainingInStep;	// IMP=0x0000000000088b13
- (void)_planAnnouncements;	// IMP=0x0000000000087ef9
- (_Bool)_considerOtherSpecialAnnouncementsForLocation:(id)arg1;	// IMP=0x0000000000087d9d
- (_Bool)_considerArrivalAnnouncementsForLocation:(id)arg1;	// IMP=0x0000000000087b27
- (_Bool)_considerChargingAnnouncementsForLocation:(id)arg1;	// IMP=0x0000000000087899
- (_Bool)_considerGetOnRouteAnnouncementsForLocation:(id)arg1;	// IMP=0x000000000008773d
- (_Bool)_considerStartingAnnouncementsForLocation:(id)arg1;	// IMP=0x0000000000087620
- (void)_considerAnnouncements;	// IMP=0x0000000000087529
- (void)_filterValidEvents;	// IMP=0x0000000000087387
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;	// IMP=0x000000000008716e
- (void)updateForReroute:(id)arg1;	// IMP=0x000000000008707a
- (void)updateDestination:(id)arg1;	// IMP=0x0000000000086fe6
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;	// IMP=0x0000000000086c57
- (void)stop;	// IMP=0x0000000000086bc3
@property(readonly, nonatomic) NSArray *events;
- (void)_resetLastAnnouncementTime;	// IMP=0x0000000000086972
- (void)reset;	// IMP=0x0000000000086556
- (void)dealloc;	// IMP=0x00000000000864e1
- (void)_initSpecialGuidanceEventsForRoute:(id)arg1;	// IMP=0x0000000000086074
- (id)initWithRouteInfo:(id)arg1 andIsReconnecting:(_Bool)arg2 announcementsToIgnore:(id)arg3;	// IMP=0x0000000000085b7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
