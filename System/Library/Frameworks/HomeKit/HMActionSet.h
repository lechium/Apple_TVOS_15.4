//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMApplicationData, HMFUnfairLock, HMHome, HMMutableArray, NSDate, NSDictionary, NSSet, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMActionSet : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _executionInProgress;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    HMHome *_home;	// 40 = 0x28
    HMApplicationData *_applicationData;	// 48 = 0x30
    NSDate *_lastExecutionDate;	// 56 = 0x38
    NSString *_assistantIdentifier;	// 64 = 0x40
    NSString *_actionSetType;	// 72 = 0x48
    _HMContext *_context;	// 80 = 0x50
    HMMutableArray *_currentActions;	// 88 = 0x58
    NSUUID *_uuid;	// 96 = 0x60
}

+ (id)actionSetFromProtoBuf:(id)arg1 home:(id)arg2;	// IMP=0x000000000022173d
+ (id)allowedActionClasses;	// IMP=0x0000000000221652
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000022164a
+ (id)shortcutsComponentActionSet;	// IMP=0x0000000000221549
- (void).cxx_destruct;	// IMP=0x00000000002204e2
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(nonatomic) _Bool executionInProgress; // @synthesize executionInProgress=_executionInProgress;
- (id)encodeAsProtoBuf;	// IMP=0x000000000022001e
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x000000000021f804
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021f7fe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021f559
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy) NSUUID *applicationDataIdentifier;
- (void)_registerNotificationHandlers;	// IMP=0x000000000021f400
- (void)_handleActionSetExecutedNotification:(id)arg1;	// IMP=0x000000000021f35d
- (void)_handleActionSetStartExecutionNotification:(id)arg1;	// IMP=0x000000000021f346
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021f1d5
- (_Bool)_handleActionSetRenameFromPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000021eedb
- (_Bool)_handleActionUpdatedFromResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000021e9ec
- (_Bool)_handleActionRemovedFromPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000021e88d
- (_Bool)_doRemoveActionWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021e528
- (void)_doAddAction:(id)arg1 uuid:(id)arg2;	// IMP=0x000000000021e2db
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000021dc33
- (void)_removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021d47f
- (void)removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021d185
- (void)_addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021c6b6
- (void)addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021c3bc
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021bb22
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021b828
- (void)recomputeAssistantIdentifier;	// IMP=0x000000000021b7bb
- (void)_recomputeAssistantIdentifier;	// IMP=0x000000000021b703
@property(retain, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (_Bool)requiresDeviceUnlock;	// IMP=0x000000000021b09d
@property(readonly, nonatomic, getter=isExecuting) _Bool executing;
@property(readonly, copy, nonatomic) NSSet *actions;
- (void)setLastExecutionDate:(id)arg1;	// IMP=0x000000000021ae5d
@property(readonly, copy, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;	// IMP=0x000000000021a992
- (void)_unconfigure;	// IMP=0x000000000021a72a
- (void)_unconfigureContext;	// IMP=0x000000000021a694
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;	// IMP=0x000000000021a4b0
- (id)init;	// IMP=0x000000000021a4a2
- (id)initWithShortcutsDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x0000000000015009
@property(readonly, copy) NSDictionary *shortcutsDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
