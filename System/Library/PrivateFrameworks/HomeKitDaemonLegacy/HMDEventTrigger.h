//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDEventDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDEventTriggerExecutionSession, HMDEventTriggerUserConfirmationSession, HMDPredicateUtilities, NSArray, NSMutableArray, NSPredicate, NSString;

@interface HMDEventTrigger <HMDEventDelegate, HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _migratedEventsToRecords;	// 12 = 0xc
    _Bool _executeOnce;	// 13 = 0xd
    NSMutableArray *_currentEvents;	// 16 = 0x10
    NSPredicate *_evaluationCondition;	// 24 = 0x18
    NSArray *_recurrences;	// 32 = 0x20
    HMDPredicateUtilities *_predicateUtilities;	// 40 = 0x28
    HMDEventTriggerExecutionSession *_executionSession;	// 48 = 0x30
    HMDEventTriggerUserConfirmationSession *_userConfirmationSession;	// 56 = 0x38
    unsigned long long _activationType;	// 64 = 0x40
    unsigned long long _activationState;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002a29ac
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000002a29a4
+ (_Bool)__validateRecurrences:(id)arg1;	// IMP=0x00000000002a2792
+ (id)logCategory;	// IMP=0x00000000002a2762
- (void).cxx_destruct;	// IMP=0x00000000002a1345
@property(nonatomic) unsigned long long activationState; // @synthesize activationState=_activationState;
@property(nonatomic) unsigned long long activationType; // @synthesize activationType=_activationType;
@property(retain, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // @synthesize userConfirmationSession=_userConfirmationSession;
@property(retain, nonatomic) HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property(retain, nonatomic) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(readonly, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(retain, nonatomic) NSPredicate *evaluationCondition; // @synthesize evaluationCondition=_evaluationCondition;
@property(retain, nonatomic) NSMutableArray *currentEvents; // @synthesize currentEvents=_currentEvents;
@property(nonatomic) _Bool migratedEventsToRecords; // @synthesize migratedEventsToRecords=_migratedEventsToRecords;
- (_Bool)isOwnerOfHome;	// IMP=0x00000000002a11b3
- (_Bool)isAuthorizedForLocation;	// IMP=0x00000000002a1163
- (_Bool)isThisDeviceDesignatedFMFDevice;	// IMP=0x00000000002a115b
@property(readonly, nonatomic) _Bool containsRecurrences;
- (void)timerFired:(id)arg1;	// IMP=0x00000000002a0d04
- (id)emptyModelObject;	// IMP=0x00000000002a0c4b
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000002a0a5e
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000002a081f
- (void)_handleEventTriggerUpdate:(id)arg1 message:(id)arg2;	// IMP=0x00000000002a050a
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000002a03cf
- (void)processEventRecords:(id)arg1 message:(id)arg2;	// IMP=0x00000000002a0285
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000029ff31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029fa47
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029f52a
- (id)messageReceiverChildren;	// IMP=0x000000000029f390
- (void)_handleUserPermissionRequest:(id)arg1;	// IMP=0x000000000029ec41
- (void)_userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029ea09
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029e952
- (_Bool)_isTriggerFiredNotificationEntitled;	// IMP=0x000000000029e8a2
- (void)takeOverOwnershipOfTrigger;	// IMP=0x000000000029e831
- (void)_resetExecutionState;	// IMP=0x000000000029e6d7
- (void)resetExecutionState;	// IMP=0x000000000029e666
- (void)executionComplete:(id)arg1 error:(id)arg2;	// IMP=0x000000000029e58a
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;	// IMP=0x000000000029de40
- (_Bool)isEventTriggerOnLocalDeviceForAccessory:(id)arg1;	// IMP=0x000000000029da18
- (_Bool)isEventTriggerOnRemoteGatewayForAccessory:(id)arg1;	// IMP=0x000000000029d5f0
- (void)_executeOnceUpdated:(id)arg1 message:(id)arg2;	// IMP=0x000000000029d4e2
- (void)_updateEventTriggerExecuteOnce:(id)arg1;	// IMP=0x000000000029d251
- (void)_handleUpdateEventTriggerExecuteOnce:(id)arg1;	// IMP=0x000000000029d1fc
- (void)_updateOwningDevice:(id)arg1;	// IMP=0x000000000029cd9c
- (void)_handleUpdateOwningDevice:(id)arg1;	// IMP=0x000000000029cd47
- (void)_evaluationConditionUpdated:(id)arg1 message:(id)arg2;	// IMP=0x000000000029cb66
- (void)_updateEventTriggerCondition:(id)arg1;	// IMP=0x000000000029c7a3
- (void)_handleUpdateEventTriggerCondition:(id)arg1;	// IMP=0x000000000029c74e
- (void)_eventTriggerRecurrencesUpdated:(id)arg1 message:(id)arg2;	// IMP=0x000000000029c655
- (void)_updateEventTriggerRecurrences:(id)arg1;	// IMP=0x000000000029c3ef
- (void)_handleUpdateEventTriggerRecurrences:(id)arg1;	// IMP=0x000000000029c39a
- (id)_updateEventsOnEventTrigger:(id)arg1;	// IMP=0x000000000029b45c
- (void)_handleUpdateEventsOnEventTrigger:(id)arg1;	// IMP=0x000000000029af3d
- (_Bool)checkSharedEventTriggerActivationResidentRequirement:(id)arg1;	// IMP=0x000000000029ab32
- (_Bool)_checkAddEventModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000029aa20
- (_Bool)addEventsFromMessage:(id)arg1;	// IMP=0x0000000000299985
- (void)_handleRemoveEventModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000002996cf
- (void)_removeEventsFromEventTrigger:(id)arg1;	// IMP=0x0000000000299267
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1;	// IMP=0x0000000000299250
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1 relay:(_Bool)arg2;	// IMP=0x00000000002991fe
- (void)_handleAddEventModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000298368
- (id)createEventModel:(id)arg1 endEvent:(_Bool)arg2 message:(id)arg3 checkForSupport:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000297f25
- (void)_addEventToEventTrigger:(id)arg1;	// IMP=0x0000000000297bdb
- (void)_handleAddEventToEventTrigger:(id)arg1;	// IMP=0x0000000000297b86
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;	// IMP=0x0000000000297984
- (void)fixupForReplacementAccessory:(id)arg1;	// IMP=0x000000000029744e
- (void)_updateCondition:(id)arg1;	// IMP=0x000000000029730d
- (void)removeUser:(id)arg1;	// IMP=0x0000000000296f6d
- (void)_removeEvents:(id)arg1;	// IMP=0x0000000000296bcd
- (void)_handleCharacteristicRemove:(id)arg1 eventsToRemove:(id)arg2;	// IMP=0x0000000000296987
- (void)removeCharacteristic:(id)arg1;	// IMP=0x000000000029648c
- (void)removeService:(id)arg1;	// IMP=0x00000000002962ec
- (void)removeAccessory:(id)arg1;	// IMP=0x00000000002960fb
- (void)sendTriggerFiredNotification:(id)arg1;	// IMP=0x0000000000295ff4
- (_Bool)shouldEncodeLastFireDate:(id)arg1;	// IMP=0x0000000000295f72
- (void)dealloc;	// IMP=0x0000000000295f04
- (void)_registerForMessages;	// IMP=0x0000000000295718
- (void)_migrateEventsToRecords;	// IMP=0x0000000000295201
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x0000000000294fca
- (void)_reevaluateIfRelaunchRequired;	// IMP=0x0000000000294cf9
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000294ca7
- (void)_activateEvents:(CDUnknownBlockType)arg1;	// IMP=0x00000000002945ae
- (void)_computeActivation;	// IMP=0x0000000000293a41
@property(readonly, nonatomic) _Bool computedActive;
- (_Bool)shouldActivateOnLocalDevice;	// IMP=0x00000000002939d6
- (_Bool)compatible:(id)arg1 user:(id)arg2;	// IMP=0x0000000000293774
- (_Bool)requiresDataVersion4;	// IMP=0x00000000002934e8
- (void)invalidate;	// IMP=0x00000000002933de
@property(readonly, nonatomic) NSArray *presenceEvents;
@property(readonly, nonatomic) NSArray *charThresholdEvents;
@property(readonly, nonatomic) NSArray *durationEvents;
@property(readonly) NSArray *timeEvents;
@property(readonly, nonatomic) NSArray *significantTimeEvents;
@property(readonly, nonatomic) NSArray *calendarEvents;
@property(readonly, nonatomic) NSArray *locationEvents;
@property(readonly, nonatomic) NSArray *characteristicBaseEvents;
@property(readonly, nonatomic) NSArray *characteristicEvents;
@property(readonly, nonatomic) NSArray *endEvents;
@property(readonly, nonatomic) NSArray *triggerEvents;
- (void)removeEvent:(id)arg1;	// IMP=0x00000000002920e0
- (void)addEvent:(id)arg1;	// IMP=0x0000000000292053
@property(readonly, nonatomic) NSArray *events;
- (unsigned long long)triggerType;	// IMP=0x0000000000291fe8
- (id)dumpState;	// IMP=0x0000000000291b4c
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3;	// IMP=0x000000000029165a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

