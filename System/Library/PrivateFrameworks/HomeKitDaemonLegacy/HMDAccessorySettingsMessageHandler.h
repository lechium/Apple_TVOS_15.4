//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDAccessorySettingsMessageHandler-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

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

+ (id)logCategory;	// IMP=0x0000000000a67906
- (void).cxx_destruct;	// IMP=0x0000000000a66d21
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMDUserMessagePolicy *sharedAdminAllowedUserPolicy; // @synthesize sharedAdminAllowedUserPolicy=_sharedAdminAllowedUserPolicy;
@property(retain) HMDUserMessagePolicy *onlyOwnerAllowedUserPolicy; // @synthesize onlyOwnerAllowedUserPolicy=_onlyOwnerAllowedUserPolicy;
@property(readonly) NSMapTable *settingMessageMap; // @synthesize settingMessageMap=_settingMessageMap;
@property(readonly) __weak id <HMDAccessorySettingsMessageController> messageController; // @synthesize messageController=_messageController;
- (void)notifyOfUpdatedValue:(id)arg1 settingKeyPath:(id)arg2;	// IMP=0x0000000000a66a9b
- (void)relayReplaceConstraints:(id)arg1 constraintIdsToRemove:(id)arg2 keyPath:(id)arg3 destination:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000a6667f
- (void)relayUpdateValue:(id)arg1 keyPath:(id)arg2 destination:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a66267
- (void)_handleReplaceConstraintsForKeyPath:(id)arg1;	// IMP=0x0000000000a65e16
- (void)_handleReplaceConstraints:(id)arg1;	// IMP=0x0000000000a65c52
- (_Bool)processReplaceConstraintMessage:(id)arg1 outConstraintsToAdd:(id *)arg2 outConstraintIdsToRemove:(id *)arg3;	// IMP=0x0000000000a6543b
- (void)_handleUpdatedConstraints:(id)arg1;	// IMP=0x0000000000a64e96
- (void)_handleRemoveConstraint:(id)arg1;	// IMP=0x0000000000a64a27
- (void)_handleAddConstraint:(id)arg1;	// IMP=0x0000000000a645b8
- (void)_handleSettingUpdateValueByKeyPath:(id)arg1;	// IMP=0x0000000000a642fa
- (void)_handleSettingUpdateValue:(id)arg1;	// IMP=0x0000000000a6408e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (_Bool)_decodeUpdateValueMessagePayload:(id)arg1 outValue:(id *)arg2;	// IMP=0x0000000000a63db7
- (id)messageMapperForSetting:(id)arg1;	// IMP=0x0000000000a63d34
- (void)registerForSettingMessages:(id)arg1;	// IMP=0x0000000000a638aa
- (void)registerForMessages;	// IMP=0x0000000000a632de
- (void)unconfigureFromSetting:(id)arg1;	// IMP=0x0000000000a63217
- (void)configureForSetting:(id)arg1 allowSharedAdminEditConstraints:(_Bool)arg2;	// IMP=0x0000000000a630dd
- (void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2;	// IMP=0x0000000000a62fff
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000a62f2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
