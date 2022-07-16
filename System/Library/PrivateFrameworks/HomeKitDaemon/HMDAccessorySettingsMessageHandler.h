//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDAccessorySettingsMessageHandler-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDUserMessagePolicy, HMFMessageDispatcher, NSMapTable, NSObject, NSString, NSUUID;
@protocol HMDAccessorySettingsMessageController, OS_dispatch_queue;

@interface HMDAccessorySettingsMessageHandler : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessorySettingsMessageHandler>
{
    id <HMDAccessorySettingsMessageController> _messageController;	// 8 = 0x8
    NSMapTable *_settingMessageMap;	// 16 = 0x10
    HMDUserMessagePolicy *_onlyOwnerAllowedUserPolicy;	// 24 = 0x18
    HMDUserMessagePolicy *_sharedAdminAllowedUserPolicy;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000b29085
- (void).cxx_destruct;	// IMP=0x0000000000b284a0
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMDUserMessagePolicy *sharedAdminAllowedUserPolicy; // @synthesize sharedAdminAllowedUserPolicy=_sharedAdminAllowedUserPolicy;
@property(retain) HMDUserMessagePolicy *onlyOwnerAllowedUserPolicy; // @synthesize onlyOwnerAllowedUserPolicy=_onlyOwnerAllowedUserPolicy;
@property(readonly) NSMapTable *settingMessageMap; // @synthesize settingMessageMap=_settingMessageMap;
@property(readonly) __weak id <HMDAccessorySettingsMessageController> messageController; // @synthesize messageController=_messageController;
- (void)notifyOfUpdatedValue:(id)arg1 settingKeyPath:(id)arg2;	// IMP=0x0000000000b2821a
- (void)relayReplaceConstraints:(id)arg1 constraintIdsToRemove:(id)arg2 keyPath:(id)arg3 destination:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000b27dfe
- (void)relayUpdateValue:(id)arg1 keyPath:(id)arg2 destination:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b279e6
- (void)_handleReplaceConstraintsForKeyPath:(id)arg1;	// IMP=0x0000000000b27595
- (void)_handleReplaceConstraints:(id)arg1;	// IMP=0x0000000000b273d1
- (_Bool)processReplaceConstraintMessage:(id)arg1 outConstraintsToAdd:(id *)arg2 outConstraintIdsToRemove:(id *)arg3;	// IMP=0x0000000000b26bba
- (void)_handleUpdatedConstraints:(id)arg1;	// IMP=0x0000000000b26615
- (void)_handleRemoveConstraint:(id)arg1;	// IMP=0x0000000000b261a6
- (void)_handleAddConstraint:(id)arg1;	// IMP=0x0000000000b25d37
- (void)_handleSettingUpdateValueByKeyPath:(id)arg1;	// IMP=0x0000000000b25a79
- (void)_handleSettingUpdateValue:(id)arg1;	// IMP=0x0000000000b2580d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (_Bool)_decodeUpdateValueMessagePayload:(id)arg1 outValue:(id *)arg2;	// IMP=0x0000000000b25536
- (id)messageMapperForSetting:(id)arg1;	// IMP=0x0000000000b254b3
- (void)registerForSettingMessages:(id)arg1;	// IMP=0x0000000000b25029
- (void)registerForMessages;	// IMP=0x0000000000b24a5d
- (void)unconfigureFromSetting:(id)arg1;	// IMP=0x0000000000b24996
- (void)configureForSetting:(id)arg1 allowSharedAdminEditConstraints:(_Bool)arg2;	// IMP=0x0000000000b2485c
- (void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2;	// IMP=0x0000000000b2477e
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000b246ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

