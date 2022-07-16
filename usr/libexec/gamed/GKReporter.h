//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetrics, NSDate, NSNumber, NSTimer;

@interface GKReporter : NSObject
{
    double _authenticateResponseTimestamp;	// 8 = 0x8
    double _inviteeUILaunchTimestamp;	// 16 = 0x10
    double _connectingDevicesTimestamp;	// 24 = 0x18
    double _programaticInviteTimestamp;	// 32 = 0x20
    double _appLaunchTimestamp;	// 40 = 0x28
    double _totalInviteReceivedTimestamp;	// 48 = 0x30
    double _messageInviteProcessingTimestamp;	// 56 = 0x38
    double _currentRealtimeMatchPersistenceTimestamp;	// 64 = 0x40
    AMSMetrics *_metrics;	// 72 = 0x48
    NSNumber *_metricsThrottlePercentage;	// 80 = 0x50
    double _randomMetricsCollection;	// 88 = 0x58
    NSDate *_lastBagCheck;	// 96 = 0x60
    NSTimer *_flushTimer;	// 104 = 0x68
}

+ (id)appendAMSPropertiesForEventType:(id)arg1;	// IMP=0x00400000001932d2
+ (_Bool)shouldCollectAMSMetricForDomain:(id)arg1 event:(id)arg2;	// IMP=0x00100000001930c0
+ (id)gameCenterBag;	// IMP=0x001000000018fcfa
+ (id)reporter;	// IMP=0x001000000018f26c
- (void).cxx_destruct;	// IMP=0x0020000000193c3c
@property(retain, nonatomic) NSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(retain, nonatomic) NSDate *lastBagCheck; // @synthesize lastBagCheck=_lastBagCheck;
@property(nonatomic) double randomMetricsCollection; // @synthesize randomMetricsCollection=_randomMetricsCollection;
@property(retain) NSNumber *metricsThrottlePercentage; // @synthesize metricsThrottlePercentage=_metricsThrottlePercentage;
@property(retain, nonatomic) AMSMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) double currentRealtimeMatchPersistenceTimestamp; // @synthesize currentRealtimeMatchPersistenceTimestamp=_currentRealtimeMatchPersistenceTimestamp;
@property(nonatomic) double messageInviteProcessingTimestamp; // @synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp;
@property(nonatomic) double totalInviteReceivedTimestamp; // @synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp;
@property(nonatomic) double appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic) double programaticInviteTimestamp; // @synthesize programaticInviteTimestamp=_programaticInviteTimestamp;
@property(nonatomic) double connectingDevicesTimestamp; // @synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp;
@property(nonatomic) double inviteeUILaunchTimestamp; // @synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp;
@property(nonatomic) double authenticateResponseTimestamp; // @synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp;
- (void)reportPlayerAuthenticationFailure:(id)arg1;	// IMP=0x00100000001929d7
- (void)reportDurationForEvent:(id)arg1 eventType:(id)arg2 withStartTimestamp:(double)arg3;	// IMP=0x0010000000192893
- (void)reportOnboardingEventForType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x0010000000192762
- (void)reportScreenTimeEventForType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x0010000000192631
- (void)reportCurrentRealtimeMatchPersistenceDuration;	// IMP=0x00100000001925b3
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;	// IMP=0x001000000019258f
- (void)reportTotalInviteReceivedDuration;	// IMP=0x0010000000192511
- (void)reportAppLaunchDuration;	// IMP=0x0010000000192493
- (void)recordAppLaunchAndTotalTimestamp;	// IMP=0x0010000000192458
- (void)reportProgramaticInviteDuration;	// IMP=0x00100000001923da
- (void)recordProgramaticInviteTimestamp;	// IMP=0x00100000001923b6
- (void)reportConnectingDevicesDuration;	// IMP=0x0010000000192338
- (void)recordConnectingDevicesTimestamp;	// IMP=0x0010000000192314
- (void)reportMessageInviteProcessingDuration;	// IMP=0x0010000000192296
- (void)recordMessageInviteProcessingTimestamp;	// IMP=0x0010000000192272
- (void)reportInviteeUILaunchDuration;	// IMP=0x00100000001921f4
- (void)recordInviteeUILaunchTimestamp;	// IMP=0x00100000001921d0
- (void)reportAuthenticateResponseDuration;	// IMP=0x0010000000192152
- (void)recordAuthenticateResponseTimestamp;	// IMP=0x001000000019212e
- (void)reportTournamentAnalyticsWithDomain:(id)arg1 type:(id)arg2 tournamentType:(id)arg3 replayCount:(id)arg4 friendCount:(id)arg5 tournamentID:(id)arg6 bundleID:(id)arg7 inviteeCount:(id)arg8;	// IMP=0x0010000000191ef5
- (_Bool)isTimeSpanValid:(double)arg1 maxDuration:(double)arg2;	// IMP=0x0010000000191edb
- (void)reportEvent:(id)arg1 reportable:(id)arg2;	// IMP=0x0010000000191cff
- (void)reportEvent:(id)arg1 target:(id)arg2 keyPath:(id)arg3;	// IMP=0x0010000000191bee
- (void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3;	// IMP=0x0010000000191af4
- (void)reportEvent:(id)arg1 type:(id)arg2 inboxFriendRequestCount:(long long)arg3;	// IMP=0x00100000001919e4
- (void)reportEvent:(id)arg1 type:(id)arg2 count:(long long)arg3;	// IMP=0x00100000001918d4
- (void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3;	// IMP=0x00100000001917da
- (void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3;	// IMP=0x00100000001916c2
- (void)reportEvent:(id)arg1 type:(id)arg2 adamID:(id)arg3;	// IMP=0x001000000019153d
- (void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3;	// IMP=0x0010000000191443
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3;	// IMP=0x00100000001912b6
- (void)reportEvent:(id)arg1 type:(id)arg2;	// IMP=0x00100000001911dd
- (void)reportEvent:(id)arg1 payload:(id)arg2;	// IMP=0x0010000000190eae
- (void)reportAMSMetricsForTask:(id)arg1 session:(id)arg2 metrics:(id)arg3;	// IMP=0x0010000000190b12
- (void)reportAMSMetricDomain:(id)arg1 properties:(id)arg2;	// IMP=0x00100000001909b9
- (void)reportAMSMetricEvent:(id)arg1;	// IMP=0x0010000000190443
- (void)spinupAMSMetricsFlusher;	// IMP=0x001000000018fd86
- (void)_getThrottlePercentage:(id)arg1;	// IMP=0x001000000018f3f8

@end

