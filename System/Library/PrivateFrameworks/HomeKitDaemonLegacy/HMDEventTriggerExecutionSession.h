//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDEventDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDEventTriggerUserConfirmationSession, HMDPredicateUtilities, HMDTriggerConfirmationTimer, HMFTimer, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableSet, NSPredicate, NSString;

@interface HMDEventTriggerExecutionSession <HMFDumpState, HMFLogging, HMDEventDelegate, HMFTimerDelegate>
{
    _Bool _actionSetExecutionInProgress;	// 8 = 0x8
    _Bool _restoreInProgress;	// 9 = 0x9
    _Bool _executionCompleteCalled;	// 10 = 0xa
    NSMutableArray *_triggerEvents;	// 16 = 0x10
    NSMutableArray *_causingDevices;	// 24 = 0x18
    NSArray *_endEvents;	// 32 = 0x20
    NSArray *_monitorEvents;	// 40 = 0x28
    unsigned long long _executionState;	// 48 = 0x30
    HMDPredicateUtilities *_predicateUtilities;	// 56 = 0x38
    NSArray *_actionSets;	// 64 = 0x40
    NSPredicate *_evaluationCondition;	// 72 = 0x48
    NSArray *_recurrences;	// 80 = 0x50
    HMDEventTriggerUserConfirmationSession *_userConfirmationSession;	// 88 = 0x58
    HMDTriggerConfirmationTimer *_secureTriggerConfirmationTimer;	// 96 = 0x60
    HMFTimer *_startCharacteristicsMonitorTimer;	// 104 = 0x68
    NSMapTable *_writeRequests;	// 112 = 0x70
    NSMutableSet *_mediaProfiles;	// 120 = 0x78
    NSDate *_executionStartTime;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x0000000000a08283
- (void).cxx_destruct;	// IMP=0x0000000000a06a2c
@property(readonly, nonatomic) NSDate *executionStartTime; // @synthesize executionStartTime=_executionStartTime;
@property(readonly, nonatomic) NSMutableSet *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
@property(readonly, nonatomic) NSMapTable *writeRequests; // @synthesize writeRequests=_writeRequests;
@property(nonatomic) _Bool executionCompleteCalled; // @synthesize executionCompleteCalled=_executionCompleteCalled;
@property(nonatomic) _Bool restoreInProgress; // @synthesize restoreInProgress=_restoreInProgress;
@property(nonatomic) _Bool actionSetExecutionInProgress; // @synthesize actionSetExecutionInProgress=_actionSetExecutionInProgress;
@property(retain, nonatomic) HMFTimer *startCharacteristicsMonitorTimer; // @synthesize startCharacteristicsMonitorTimer=_startCharacteristicsMonitorTimer;
@property(retain, nonatomic) HMDTriggerConfirmationTimer *secureTriggerConfirmationTimer; // @synthesize secureTriggerConfirmationTimer=_secureTriggerConfirmationTimer;
@property(readonly, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // @synthesize userConfirmationSession=_userConfirmationSession;
@property(readonly, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(readonly, nonatomic) NSPredicate *evaluationCondition; // @synthesize evaluationCondition=_evaluationCondition;
@property(readonly, nonatomic) NSArray *actionSets; // @synthesize actionSets=_actionSets;
@property(readonly, nonatomic) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(nonatomic) unsigned long long executionState; // @synthesize executionState=_executionState;
@property(retain, nonatomic) NSArray *monitorEvents; // @synthesize monitorEvents=_monitorEvents;
@property(readonly, nonatomic) NSArray *endEvents; // @synthesize endEvents=_endEvents;
@property(readonly, nonatomic) NSMutableArray *causingDevices; // @synthesize causingDevices=_causingDevices;
@property(readonly, nonatomic) NSMutableArray *triggerEvents; // @synthesize triggerEvents=_triggerEvents;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a067e0
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;	// IMP=0x0000000000a0672d
- (void)_callExecutionCompleteIfNoMoreOutstandingRequests;	// IMP=0x0000000000a065b1
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;	// IMP=0x0000000000a064b4
- (void)_handleMonitoringEvent:(id)arg1;	// IMP=0x0000000000a0614c
- (void)_restoreState;	// IMP=0x0000000000a05c9e
- (void)_removeUserDialog;	// IMP=0x0000000000a05bfb
- (void)_callExecutionComplete:(id)arg1;	// IMP=0x0000000000a05be4
- (void)_submitAnalyticsData:(id)arg1;	// IMP=0x0000000000a05616
- (void)_callExecutionComplete:(id)arg1 callDelegate:(_Bool)arg2;	// IMP=0x0000000000a04fbf
- (id)valueInActionSetWriteResponse:(id)arg1 actionSetUUID:(id)arg2 accUUID:(id)arg3 serviceID:(id)arg4 characteristicID:(id)arg5;	// IMP=0x0000000000a04e97
- (id)_createMonitoringEvents:(id)arg1;	// IMP=0x0000000000a03ef7
- (void)_activateEvents:(id)arg1;	// IMP=0x0000000000a03c03
- (void)_activateMonitoringEvents;	// IMP=0x0000000000a03bb7
- (void)_activateDurationEvents;	// IMP=0x0000000000a03b6b
- (void)_handleActionSetExecutionResponse:(id)arg1 actionSetError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a03464
- (void)_directlyExecuteActionSetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a032fd
- (void)_addEvent:(id)arg1 causingDevice:(id)arg2;	// IMP=0x0000000000a02ea0
- (void)addEvent:(id)arg1 causingDevice:(id)arg2;	// IMP=0x0000000000a02dc4
- (void)_userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a027ba
- (void)userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a026d2
- (id)durationEndEvents;	// IMP=0x0000000000a024e6
- (void)postponeRestoreIfWaitingForEndEvent;	// IMP=0x0000000000a02475
- (void)cancelSessionIfWaitingForUserResponse;	// IMP=0x0000000000a02404
- (_Bool)containsSecureActionSet;	// IMP=0x0000000000a022cb
- (void)_executeTriggerAfterEvaluatingCondition:(id)arg1;	// IMP=0x0000000000a01b85
- (void)_evaluateFiringTrigger;	// IMP=0x0000000000a00fd7
- (void)evaluateFiringTrigger;	// IMP=0x0000000000a00f66
- (id)dumpState;	// IMP=0x0000000000a00bb4
@property(readonly, nonatomic) _Bool needsUserConfirmation;
- (id)logIdentifier;	// IMP=0x0000000000a00b5a
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000a00a72
- (id)initWithEventTrigger:(id)arg1 predicateUtilities:(id)arg2 triggerEvent:(id)arg3 causingDevice:(id)arg4 workQueue:(id)arg5 actionSets:(id)arg6 evaluationCondition:(id)arg7 recurrences:(id)arg8 endEvents:(id)arg9 msgDispatcher:(id)arg10;	// IMP=0x0000000000a00622

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

