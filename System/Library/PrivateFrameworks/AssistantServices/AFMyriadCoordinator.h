//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNotifyObserverDelegate-Protocol.h>

@class AFMyriadAdvertisementContextManager, AFMyriadAdvertisementContextRecord, AFMyriadContext, AFMyriadEmergencyCallPunchout, AFMyriadGoodnessScoreEvaluator, AFMyriadInstrumentation, AFMyriadPreferences, AFMyriadRecord, AFMyriadSession, AFNotifyObserver, AFNotifyStatePublisher, AFPowerAssertionManager, AFWatchdogTimer, NSData, NSDate, NSDateFormatter, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFMyriadCoordinator : NSObject <AFNotifyObserverDelegate>
{
    unsigned long long _myriadState;	// 8 = 0x8
    unsigned long long _nextState;	// 16 = 0x10
    unsigned long long _previousState;	// 24 = 0x18
    NSData *_previousAdvertisedData;	// 32 = 0x20
    NSMutableDictionary *_replies;	// 40 = 0x28
    NSMutableDictionary *_replyCounts;	// 48 = 0x30
    NSMutableDictionary *_repliesBeforeDecision;	// 56 = 0x38
    NSMutableDictionary *_previousTrumps;	// 64 = 0x40
    NSMutableDictionary *_incomingTrumps;	// 72 = 0x48
    NSMutableDictionary *_multipleContinuations;	// 80 = 0x50
    id _delegate;	// 88 = 0x58
    NSString *_deviceClassName;	// 96 = 0x60
    unsigned char _deviceClass;	// 104 = 0x68
    unsigned char _productType;	// 105 = 0x69
    NSString *_productTypeName;	// 112 = 0x70
    int _deviceAdjust;	// 120 = 0x78
    double _deviceDelay;	// 128 = 0x80
    double _deviceTrumpDelay;	// 136 = 0x88
    double _deviceVTEndtimeDistanceThreshold;	// 144 = 0x90
    double _deviceInEarDelay;	// 152 = 0x98
    double _deviceInEarInterval;	// 160 = 0xa0
    unsigned char _deviceGroup;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_myriadWorkQueue;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_myriadAdvertisementContextQueue;	// 184 = 0xb8
    NSString *_timerLabel;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_timer;	// 200 = 0xc8
    NSUUID *_eventToken;	// 208 = 0xd0
    AFWatchdogTimer *_overallTimeout;	// 216 = 0xd8
    AFPowerAssertionManager *_powerAssertionManager;	// 224 = 0xe0
    struct __CFNotificationCenter *_center;	// 232 = 0xe8
    AFMyriadRecord *_triggerRecord;	// 240 = 0xf0
    long long _recordType;	// 248 = 0xf8
    unsigned long long _voiceTriggerTime;	// 256 = 0x100
    float _delayTarget;	// 264 = 0x108
    float _advertInterval;	// 268 = 0x10c
    int _nTimesContinued;	// 272 = 0x110
    int _nTimesExtended;	// 276 = 0x114
    unsigned char _incomingAdjustment;	// 280 = 0x118
    AFMyriadRecord *_overrideMyriadRecord;	// 288 = 0x120
    int _slowdownMsecs;	// 296 = 0x128
    int _testInducedSlowdownMsecs;	// 300 = 0x12c
    AFMyriadRecord *_maxSlowdownRecord;	// 304 = 0x130
    _Bool _BTLEReady;	// 312 = 0x138
    _Bool _inTask;	// 313 = 0x139
    _Bool _inSetupMode;	// 314 = 0x13a
    _Bool _ducking;	// 315 = 0x13b
    _Bool _stateMachineEncounteredError;	// 316 = 0x13c
    _Bool _listenTimerIsRunning;	// 317 = 0x13d
    _Bool _coordinationEnabled;	// 318 = 0x13e
    _Bool _BLEActivityEnabled;	// 319 = 0x13f
    _Bool _clientIsDirectActivating;	// 320 = 0x140
    _Bool _clientIsInEarActivation;	// 321 = 0x141
    _Bool _clientRecentlyLostElection;	// 322 = 0x142
    _Bool _clientLostDueToTrumping;	// 323 = 0x143
    _Bool _clientIsListeningAfterRecentWin;	// 324 = 0x144
    _Bool _clientIsWatchActivation;	// 325 = 0x145
    _Bool _clientIsWatchTrumpPromote;	// 326 = 0x146
    _Bool _clientIsRespondingToSlowdown;	// 327 = 0x147
    _Bool _clientDoneRespondingToSlowdown;	// 328 = 0x148
    _Bool _clientRespondingToCarPlay;	// 329 = 0x149
    _Bool _clientIsDeciding;	// 330 = 0x14a
    int _constantGoodness;	// 332 = 0x14c
    NSObject<OS_dispatch_source> *_timerSource;	// 336 = 0x150
    NSDateFormatter *_dateFormat;	// 344 = 0x158
    NSUUID *_designatedSelfID;	// 352 = 0x160
    NSDate *_triggerTime;	// 360 = 0x168
    int _nDeltaTs;	// 368 = 0x170
    AFMyriadEmergencyCallPunchout *_callPunchout;	// 376 = 0x178
    unsigned long long _lastDecisionTime;	// 384 = 0x180
    _Bool _lastDecision;	// 392 = 0x188
    unsigned short _lastPHash;	// 394 = 0x18a
    double _lastEmergencyAttempt;	// 400 = 0x190
    _Bool _wasEmergency;	// 408 = 0x198
    _Bool _suppressLateTrigger;	// 409 = 0x199
    _Bool _ignoreInTaskTimer;	// 410 = 0x19a
    struct {
        _Bool didRequestForBTLEScan;
        _Bool didRequestForBTLEAdvertisement;
    } _heySiriBTLEState;	// 411 = 0x19b
    struct {
        NSObject<OS_dispatch_source> *waitTimer;
        CDUnknownBlockType waitBlock;
        _Bool isWaitTimerSuspended;
    } _wiproxReadinessTimer;	// 416 = 0x1a0
    struct {
        NSDate *advertTriggerAdvStartTime;
        NSDate *advertTriggerEndTime;
    } _advTiming;	// 440 = 0x1b8
    AFMyriadAdvertisementContextManager *_advContextManager;	// 456 = 0x1c8
    AFMyriadAdvertisementContextRecord *_contextRecord;	// 464 = 0x1d0
    AFMyriadGoodnessScoreEvaluator *_goodnessScoreEvaluator;	// 472 = 0x1d8
    AFMyriadSession *_myriadSession;	// 480 = 0x1e0
    AFNotifyStatePublisher *_electionBeginPublisher;	// 488 = 0x1e8
    AFNotifyStatePublisher *_electionWinPublisher;	// 496 = 0x1f0
    AFNotifyStatePublisher *_electionLossPublisher;	// 504 = 0x1f8
    AFNotifyStatePublisher *_electionRepostWinDecisionPublisher;	// 512 = 0x200
    AFNotifyObserver *_preferencesChangedNotification;	// 520 = 0x208
    unsigned long long _electionPublisherState;	// 528 = 0x210
    AFMyriadPreferences *_preferences;	// 536 = 0x218
    CDUnknownBlockType _waitForWiproxReadinessToScan;	// 544 = 0x220
    unsigned long long _latestRecordReceivedTime;	// 552 = 0x228
    AFMyriadContext *_currentMyriadContext;	// 560 = 0x230
    AFMyriadInstrumentation *_myriadInstrumentation;	// 568 = 0x238
}

+ (void)clearCurrentCoordinator;	// IMP=0x0000000000105055
+ (void)didChangeDefaults;	// IMP=0x0000000000105032
+ (id)currentCoordinator;	// IMP=0x0000000000105021
- (void).cxx_destruct;	// IMP=0x0000000000115eff
- (void)resetMyriadCoordinator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000115e40
- (void)myriadSession:(CDUnknownBlockType)arg1;	// IMP=0x0000000000115e25
- (id)stateAsString:(unsigned long long)arg1;	// IMP=0x0000000000115e13
- (void)updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3;	// IMP=0x0000000000115e01
- (unsigned char)deviceGroup;	// IMP=0x0000000000115df4
- (unsigned char)deviceClass;	// IMP=0x0000000000115dea
- (void)setupActionWindows;	// IMP=0x0000000000115dd8
- (float)deviceTrumpDelay;	// IMP=0x0000000000115dca
- (void)startAdvertisingEmergencySignal;	// IMP=0x0000000000115dc4
- (void)startListeningToEmergencySignal;	// IMP=0x0000000000115dbe
- (void)injectAdvertisementForTesting:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000115db8
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x0000000000115c9b
- (void)_signalEmergencyCallHandled;	// IMP=0x0000000000115bad
- (void)_triggerABCForType:(id)arg1 context:(id)arg2;	// IMP=0x0000000000115ba7
- (void)_leaveBLEDiagnosticMode;	// IMP=0x0000000000115ba1
- (void)_enterBLEDiagnosticMode;	// IMP=0x0000000000115b9b
- (void)_waitWiProxAndExecute:(CDUnknownBlockType)arg1;	// IMP=0x0000000000115b81
- (void)waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;	// IMP=0x0000000000115ac6
- (void)_waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;	// IMP=0x0000000000115668
- (void)_createWaitWiProxTimer:(long long)arg1 waitBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000115453
- (void)_clearWiProxReadinessTimer;	// IMP=0x00000000001153a5
- (void)_suspendWiProxReadinessTimer;	// IMP=0x00000000001152fd
- (void)_resumeWiProxReadinessTimer;	// IMP=0x00000000001152da
- (void)_initializeWiProxReadinessTimer;	// IMP=0x00000000001151fa
- (void)_ageWedgeFilter;	// IMP=0x000000000011508c
- (_Bool)_testAndUpdateWedgeFilter:(id)arg1;	// IMP=0x0000000000114da9
- (unsigned long long)_nextElectionPublisherState;	// IMP=0x0000000000114d5c
- (void)notifyCurrentDecisionResult;	// IMP=0x0000000000114b36
- (void)_updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3;	// IMP=0x00000000001147fe
- (_Bool)_inTaskTriggerWasTooSoon;	// IMP=0x000000000011441f
- (id)_sortedReplies:(id)arg1;	// IMP=0x000000000011405a
- (id)_sortedReplies;	// IMP=0x0000000000114044
- (_Bool)_isAPhone:(unsigned char)arg1;	// IMP=0x0000000000114038
- (_Bool)_shouldHandleEmergency;	// IMP=0x0000000000113c62
- (_Bool)_shouldContinueFor:(id)arg1;	// IMP=0x000000000011384c
- (id)emptyRecord;	// IMP=0x0000000000113789
- (id)slowdownRecord:(unsigned short)arg1;	// IMP=0x0000000000113616
- (id)responseObject:(unsigned short)arg1;	// IMP=0x000000000011354f
- (id)emergencyHandledRecord;	// IMP=0x000000000011348b
- (id)emergencyRecord;	// IMP=0x00000000001133c7
- (id)continuationRecord;	// IMP=0x0000000000113303
- (id)lateSuppressionRecord;	// IMP=0x000000000011322c
- (id)directTriggerRecord;	// IMP=0x000000000011309f
- (id)_phsSetupRecord;	// IMP=0x0000000000112fcb
- (id)voiceTriggerRecord;	// IMP=0x0000000000112e33
- (void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(CDUnknownBlockType)arg4;	// IMP=0x0000000000112508
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;	// IMP=0x0000000000112387
- (void)advertiseWith:(id)arg1;	// IMP=0x00000000001122c0
- (void)_startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;	// IMP=0x0000000000112250
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;	// IMP=0x000000000011217d
- (void)_advertiseIndefinite:(id)arg1;	// IMP=0x0000000000112177
- (void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4;	// IMP=0x00000000001120c1
- (void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2;	// IMP=0x00000000001120a4
- (void)_advertiseSuppressTriggerInOutput;	// IMP=0x0000000000111ece
- (_Bool)_okayToSuppressOnOutput;	// IMP=0x0000000000111ead
- (void)_advertiseSlowdown;	// IMP=0x0000000000111b5d
- (void)_advertiseTrigger;	// IMP=0x0000000000111318
- (void)_resetAdvertisementTimings;	// IMP=0x00000000001112d3
- (void)setupAdvIntervalsInDelay:(float *)arg1 interval:(float *)arg2 withSlowdown:(int)arg3;	// IMP=0x0000000000110f9a
- (void)_duringNextWindowEnterState:(unsigned long long)arg1;	// IMP=0x0000000000110eb4
- (void)_duringNextWindowExecute:(CDUnknownBlockType)arg1;	// IMP=0x0000000000110c78
- (void)_adjustActionWindowsFromSlowdown:(int)arg1;	// IMP=0x0000000000110b30
- (void)_resetActionWindows;	// IMP=0x0000000000110afe
- (void)_setupActionWindows;	// IMP=0x0000000000110a86
- (void)_resetAudioData;	// IMP=0x0000000000110a66
- (void)_pushMyriadAdvertisementContextToContextCollectorWithAdvertisementInterval:(double)arg1 advertisementDelay:(double)arg2;	// IMP=0x000000000010fbc8
- (void)_suppressDeviceIfNeededWithVoiceTriggerEndTime:(double)arg1 adverisementDispatchTime:(double)arg2;	// IMP=0x000000000010f814
- (id)_testAndFilterAdvertisementsFromContextCollector:(id)arg1 voiceTriggerEndTime:(double)arg2 advertisementDispatchTime:(double)arg3 advertisement:(id)arg4;	// IMP=0x000000000010f2a4
- (_Bool)_shouldUseContextCollector;	// IMP=0x000000000010f28a
- (double)_contextFetchDelayForAdvertimentInterval:(double)arg1 advertisementDelay:(double)arg2;	// IMP=0x000000000010f27c
- (void)_handleStateMachineErrorIfNeeded;	// IMP=0x000000000010f0e5
- (void)_unduck;	// IMP=0x000000000010f03a
- (void)_stopAdvertisingAndListening;	// IMP=0x000000000010ef2b
- (void)stopListening:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ee80
- (void)stopListening;	// IMP=0x000000000010ee1a
- (void)_stopListening:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ed35
- (void)_stopAdvertising:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ec50
- (_Bool)_shouldStopListeningBeforeAdvertising;	// IMP=0x000000000010ec2e
- (void)startListening:(CDUnknownBlockType)arg1;	// IMP=0x000000000010eb83
- (void)startListening;	// IMP=0x000000000010eb1d
- (void)_startListeningAfterWiProxIsReady:(_Bool)arg1 inState:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000010e8c6
- (void)_startListening:(CDUnknownBlockType)arg1;	// IMP=0x000000000010e7e1
- (void)resetReplies;	// IMP=0x000000000010e75d
- (void)_enteringIntoState:(unsigned long long)arg1 fromState:(unsigned long long)arg2;	// IMP=0x000000000010e73c
- (id)_stateAsString:(unsigned long long)arg1;	// IMP=0x000000000010e64a
- (id)_stateAsString;	// IMP=0x000000000010e634
- (void)enterState:(unsigned long long)arg1;	// IMP=0x000000000010e5c5
- (void)_enterState:(unsigned long long)arg1;	// IMP=0x000000000010d48a
- (void)_cancelOverallTimeout;	// IMP=0x000000000010d35c
- (void)_setOverallTimeout;	// IMP=0x000000000010d18f
- (void)_cancelTimer;	// IMP=0x000000000010d069
- (void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3;	// IMP=0x000000000010cf5d
- (void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(CDUnknownBlockType)arg3;	// IMP=0x000000000010cd2f
- (void)_startListenTimer;	// IMP=0x000000000010cd0c
- (void)_createDispatchTimerForEvent:(id)arg1 toExecute:(CDUnknownBlockType)arg2;	// IMP=0x000000000010cc76
- (void)_createDispatchTimerFor:(double)arg1 toExecute:(CDUnknownBlockType)arg2;	// IMP=0x000000000010cc1d
- (void)_createDispatchTimerWithTime:(unsigned long long)arg1 toExecute:(CDUnknownBlockType)arg2;	// IMP=0x000000000010ca17
- (void)_initializeTimer;	// IMP=0x000000000010c911
- (void)_clearMyriadSession;	// IMP=0x000000000010c690
- (void)_createMyriadSessionIfRequired;	// IMP=0x000000000010c44e
- (void)_addElectionAdvertisementDataToMyriadSession:(id)arg1;	// IMP=0x000000000010c0de
- (id)_myriadSession;	// IMP=0x000000000010c0cd
- (void)_loseElection;	// IMP=0x000000000010be3c
- (void)_winElection;	// IMP=0x000000000010bc45
- (_Bool)_deviceShouldContinue:(id)arg1;	// IMP=0x000000000010ba09
- (void)instrumentationUpdateBoost:(unsigned char)arg1 value:(unsigned int)arg2;	// IMP=0x000000000010b9a5
- (void)setupEnabled:(_Bool)arg1;	// IMP=0x000000000010b805
- (void)setInTask:(_Bool)arg1;	// IMP=0x000000000010b70c
- (_Bool)inTask;	// IMP=0x000000000010b65d
- (void)endTask;	// IMP=0x000000000010b555
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;	// IMP=0x000000000010b4aa
- (void)_endAdvertisingWithDeviceProhibitions:(id)arg1;	// IMP=0x000000000010b157
- (id)_endAdvertisingAnalyticsContext:(_Bool)arg1;	// IMP=0x0000000000109e72
- (void)endAdvertising;	// IMP=0x0000000000109e5e
- (void)endAdvertising:(CDUnknownBlockType)arg1;	// IMP=0x0000000000109db3
- (void)_endAdvertising:(CDUnknownBlockType)arg1;	// IMP=0x0000000000109d62
- (void)endAdvertisingAfterDelay:(float)arg1;	// IMP=0x0000000000109bf9
- (void)startAdvertisingSlowdown:(unsigned short)arg1;	// IMP=0x0000000000109acb
- (void)startResponseAdvertising:(unsigned short)arg1;	// IMP=0x0000000000109987
- (void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)arg1;	// IMP=0x0000000000109547
- (void)startAdvertisingFromAlertFiringVoiceTrigger;	// IMP=0x0000000000109533
- (void)startAdvertisingFromInTaskVoiceTrigger;	// IMP=0x000000000010951f
- (void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)arg1;	// IMP=0x000000000010945a
- (void)startAdvertisingFromInTaskTriggerWithContext:(id)arg1;	// IMP=0x0000000000109448
- (void)_startAdvertisingFromInTaskVoiceTrigger;	// IMP=0x0000000000109004
- (void)startAdvertisingEmergency;	// IMP=0x0000000000108d56
- (void)startAdvertisingEmergencyHandled;	// IMP=0x0000000000108c3e
- (void)startAdvertisingFromCarPlayTrigger;	// IMP=0x0000000000108984
- (void)startAdvertisingFromInEarTrigger;	// IMP=0x00000000001086b9
- (void)startAdvertisingFromOutgoingTriggerWithContext:(id)arg1;	// IMP=0x0000000000108279
- (void)startAdvertisingFromOutgoingTrigger;	// IMP=0x0000000000108265
- (void)startAdvertisingFromDirectTriggerWithContext:(id)arg1;	// IMP=0x0000000000107e25
- (void)startAdvertisingFromDirectTrigger;	// IMP=0x0000000000107e11
- (void)startWatchAdvertisingFromDirectTriggerWithContext:(id)arg1;	// IMP=0x00000000001079c5
- (void)startWatchAdvertisingFromDirectTrigger;	// IMP=0x00000000001079b1
- (void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)arg1;	// IMP=0x00000000001073c7
- (void)startWatchAdvertisingFromVoiceTrigger;	// IMP=0x00000000001073b3
- (void)startAdvertisingFromVoiceTriggerWithGoodnessScoreContext:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000106ce7
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1 withContext:(id)arg2;	// IMP=0x0000000000106c2e
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;	// IMP=0x0000000000106c1a
- (void)resetStateMachine;	// IMP=0x0000000000106c06
- (void)_startAdvertisingFromVoiceTrigger;	// IMP=0x0000000000106805
- (void)startAdvertisingFromVoiceTriggerWithContext:(id)arg1;	// IMP=0x00000000001064c2
- (void)startAdvertisingFromVoiceTrigger;	// IMP=0x00000000001064ae
- (void)startAdvertisingForPHSSetupAfterDelay:(float)arg1 maxInterval:(float)arg2;	// IMP=0x00000000001063ac
- (void)preheatWiProx;	// IMP=0x000000000010626c
- (void)_setMyriadContext:(id)arg1;	// IMP=0x0000000000106239
- (void)_initDeviceClassAndAdjustments;	// IMP=0x0000000000105e2e
- (void)_readDefaults;	// IMP=0x0000000000105b7e
- (void)readDefaults;	// IMP=0x0000000000105b18
- (void)dealloc;	// IMP=0x0000000000105ac1
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000105072

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

