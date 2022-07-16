//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemonLegacy/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDDevice, HMDHome, HMDTriggerPolicy, HMDUser, HMFMessageDispatcher, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDTrigger : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMFLogging, HMDDevicePreferenceDataSource, HMDBackingStoreObjectProtocol>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _active;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSString *_configuredName;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    HMDUser *_owner;	// 48 = 0x30
    HMDDevice *_owningDevice;	// 56 = 0x38
    HMDTriggerPolicy *_policy;	// 64 = 0x40
    NSMutableDictionary *_actionSetMappings;	// 72 = 0x48
    NSMutableArray *_actionSetUUIDs;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    HMFMessageDispatcher *_msgDispatcher;	// 96 = 0x60
    unsigned long long _triggerType;	// 104 = 0x68
    NSDate *_mostRecentFireDate;	// 112 = 0x70
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x000000000001b004
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001affc
+ (id)logCategory;	// IMP=0x000000000001afcc
- (void).cxx_destruct;	// IMP=0x0000000000019da6
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @synthesize mostRecentFireDate=_mostRecentFireDate;
@property(nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *actionSetUUIDs; // @synthesize actionSetUUIDs=_actionSetUUIDs;
@property(retain, nonatomic) NSMutableDictionary *actionSetMappings; // @synthesize actionSetMappings=_actionSetMappings;
@property(retain, nonatomic) HMDTriggerPolicy *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) HMDDevice *owningDevice; // @synthesize owningDevice=_owningDevice;
@property(retain, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_addActionSet:(id)arg1;	// IMP=0x0000000000019b6c
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000019986
- (void)confirmResident;	// IMP=0x00000000000198c6
- (id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(_Bool)arg3;	// IMP=0x0000000000019697
- (void)timerFired:(id)arg1;	// IMP=0x0000000000019691
- (id)emptyModelObject;	// IMP=0x00000000000195e9
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000019541
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000001952d
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2;	// IMP=0x0000000000019477
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000193b6
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000193a4
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000192da
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000192c8
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018be9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018506
- (void)executeCompleteWithError:(id)arg1;	// IMP=0x000000000001838b
- (_Bool)shouldEncodeLastFireDate:(id)arg1;	// IMP=0x0000000000018383
- (void)_handleTriggerUpdate:(id)arg1 message:(id)arg2;	// IMP=0x0000000000017841
- (void)_fillBaseObjectChangeModel:(id)arg1;	// IMP=0x00000000000175fd
- (void)_registerForMessages;	// IMP=0x0000000000017046
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016fd1
- (void)_executeActionSets:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016698
- (void)_executeActionSetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016621
- (void)_handleRemoveTriggerPolicyRequest:(id)arg1;	// IMP=0x0000000000016359
- (void)_handleUpdateTriggerPolicyRequest:(id)arg1;	// IMP=0x0000000000015f74
- (void)_activateTriggerRequest:(id)arg1;	// IMP=0x0000000000015e13
- (void)_handleActivateTriggerRequest:(id)arg1;	// IMP=0x0000000000015dbe
- (void)_actionSetsUpdated:(id)arg1 message:(id)arg2;	// IMP=0x0000000000014fa8
- (void)_updateActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x0000000000014d11
- (void)_handleUpdateActionSetRequest:(id)arg1;	// IMP=0x0000000000014cb7
- (void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x00000000000148bd
- (void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x000000000001456b
- (void)_handleAddTriggerOwnedActionSetRequest:(id)arg1;	// IMP=0x000000000001411f
- (void)_handleAddActionSetRequest:(id)arg1;	// IMP=0x0000000000013e88
- (id)canRenameTriggerWithNewName:(id)arg1 configuredName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000137a4
- (void)_renameRequest:(id)arg1;	// IMP=0x000000000001321c
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x00000000000131c7
- (void)_activate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012fa3
- (void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2;	// IMP=0x0000000000012d83
- (void)markChangedForMessage:(id)arg1;	// IMP=0x0000000000012d6f
- (_Bool)modelContainsTriggerFired:(id)arg1;	// IMP=0x0000000000012cc8
- (void)activateAfterResidentChangeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012bd4
- (void)handleResidentDeviceConfirmed:(id)arg1;	// IMP=0x0000000000012b63
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012af4
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012974
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
- (_Bool)shouldActivateOnLocalDevice;	// IMP=0x000000000001292c
@property(readonly, nonatomic, getter=isOwnedByThisDevice) _Bool ownedByThisDevice;
- (void)invalidate;	// IMP=0x0000000000012658
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x000000000001257c
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x0000000000012412
- (_Bool)_isTriggerFiredNotificationEntitled;	// IMP=0x000000000001240a
- (void)sendTriggerFiredNotification:(id)arg1;	// IMP=0x0000000000012329
- (void)_recentFireDateUpdated:(id)arg1;	// IMP=0x0000000000012210
- (void)triggerFired;	// IMP=0x00000000000120ab
- (void)reEvaluate:(unsigned long long)arg1;	// IMP=0x0000000000011e0f
- (void)fixupForReplacementAccessory:(id)arg1;	// IMP=0x0000000000011e09
- (void)removeCharacteristic:(id)arg1;	// IMP=0x0000000000011e03
- (void)removeService:(id)arg1;	// IMP=0x0000000000011dfd
- (void)removeAccessory:(id)arg1;	// IMP=0x0000000000011df7
- (void)removeActionSet:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x0000000000011aa4
- (void)_forceEvaluate;	// IMP=0x00000000000119b0
- (void)_checkForNoActions;	// IMP=0x00000000000118d7
- (_Bool)hasNoActions;	// IMP=0x00000000000116a2
- (void)setEnabled:(_Bool)arg1 message:(id)arg2;	// IMP=0x000000000001150a
- (_Bool)compatible:(id)arg1 user:(id)arg2;	// IMP=0x0000000000011502
@property(readonly, nonatomic) _Bool requiresDataVersion4;
@property(readonly, copy) NSArray *actionSets;
- (id)actionSetMapKeys;	// IMP=0x00000000000113e2
- (void)removeAllActionSets;	// IMP=0x0000000000011368
- (void)removeActionSetForKey:(id)arg1;	// IMP=0x00000000000112d1
- (id)actionSetForKey:(id)arg1;	// IMP=0x0000000000011223
- (void)setActionSetForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000011161
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;	// IMP=0x000000000001098a
- (id)attributeDescriptions;	// IMP=0x0000000000010540
- (void)dealloc;	// IMP=0x00000000000104d2
- (id)logIdentifier;	// IMP=0x0000000000010418
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x000000000001018c
- (id)initWithName:(id)arg1 uuid:(id)arg2;	// IMP=0x000000000001000b
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, nonatomic) NSDictionary *actionContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

