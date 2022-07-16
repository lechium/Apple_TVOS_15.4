//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMXPCServerMessageHandling-Protocol.h>

@class HMDProcessInfo, HMDXPCMessageCountTracker, HMDXPCMessageSendPolicyParameters, HMDXPCRequestTracker, NSDictionary, NSObject, NSSet, NSString, NSUUID, NSXPCConnection;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDXPCClientConnection : HMFMessageTransport <HMFLogging, HMXPCServerMessageHandling>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDXPCMessageCountTracker *_counterTracker;	// 24 = 0x18
    NSString *_signature;	// 32 = 0x20
    _Bool _activated;	// 40 = 0x28
    _Bool _entitledForAPIAccess;	// 41 = 0x29
    _Bool _entitledForBackgroundMode;	// 42 = 0x2a
    _Bool _entitledForCameraClipsAccess;	// 43 = 0x2b
    _Bool _entitledForMultiUserSetupAccess;	// 44 = 0x2c
    _Bool _entitledForPersonManagerAccess;	// 45 = 0x2d
    _Bool _entitledForWalletKeyAccess;	// 46 = 0x2e
    HMDXPCMessageSendPolicyParameters *_sendPolicyParameters;	// 48 = 0x30
    NSDictionary *_userInfo;	// 56 = 0x38
    HMDProcessInfo *_processInfo;	// 64 = 0x40
    NSString *_logIdentifier;	// 72 = 0x48
    NSXPCConnection *_xpcConnection;	// 80 = 0x50
    unsigned long long _entitlements;	// 88 = 0x58
    NSString *_clientName;	// 96 = 0x60
    NSUUID *_clientUUID;	// 104 = 0x68
    HMDXPCRequestTracker *_requestTracker;	// 112 = 0x70
    NSDictionary *_privateAccessEntitlement;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x00000000002ddd30
+ (unsigned long long)entitlementsForConnection:(id)arg1;	// IMP=0x00000000002dd9bc
- (void).cxx_destruct;	// IMP=0x00000000002dc986
@property(retain, nonatomic) NSDictionary *privateAccessEntitlement; // @synthesize privateAccessEntitlement=_privateAccessEntitlement;
@property(readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(copy, nonatomic) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitledForWalletKeyAccess) _Bool entitledForWalletKeyAccess; // @synthesize entitledForWalletKeyAccess=_entitledForWalletKeyAccess;
@property(readonly, nonatomic, getter=isEntitledForPersonManagerAccess) _Bool entitledForPersonManagerAccess; // @synthesize entitledForPersonManagerAccess=_entitledForPersonManagerAccess;
@property(readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) _Bool entitledForMultiUserSetupAccess; // @synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess;
@property(readonly, nonatomic, getter=isEntitledForCameraClipsAccess) _Bool entitledForCameraClipsAccess; // @synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(copy, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dc732
- (void)updateUserInfo:(id)arg1;	// IMP=0x00000000002dc442
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dc430
- (void)handleMessage:(id)arg1;	// IMP=0x00000000002dc41c
- (void)initiateRefresh;	// IMP=0x00000000002dc382
- (void)deactivate;	// IMP=0x00000000002dc330
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002dc115
- (void)_handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002db461
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x00000000002da883
- (_Bool)shouldSendResponseForMessageIdentifier:(id)arg1;	// IMP=0x00000000002da806
@property(readonly, nonatomic) NSSet *activeRequests;
- (void)updateSendPolicyParameters:(id)arg1;	// IMP=0x00000000002da68c
@property(readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(retain, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters; // @synthesize sendPolicyParameters=_sendPolicyParameters;
- (void)__handleApplicationStateChange:(id)arg1;	// IMP=0x00000000002da3c4
@property(retain) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, getter=isPlatformBinary) _Bool platformBinary;
@property(readonly, nonatomic) int clientPid;
@property(readonly, nonatomic) NSString *name;
- (id)_displayName;	// IMP=0x00000000002d9e7e
@property(readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) _Bool entitledForHomeLocationFeedbackAccess;
@property(readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) _Bool entitledForAssistantIdentifiers;
@property(readonly, nonatomic, getter=isEntitledForStateDump) _Bool entitledForStateDump;
@property(readonly, nonatomic, getter=isEntitledForSecureAccess) _Bool entitledForSecureAccess;
@property(readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) _Bool entitledForShortcutsAutomationAccess;
@property(readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) _Bool entitledToProvideAccessorySetupPayload;
@property(readonly, nonatomic, getter=isEntitledForHomeLocationAccess) _Bool entitledForHomeLocationAccess;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
- (id)counterIdentifierForMessage:(id)arg1;	// IMP=0x00000000002d99dd
@property(readonly, nonatomic) unsigned long long homeManagerOptions;
@property(readonly) Class principalClass;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)attributeDescriptions;	// IMP=0x00000000002d96b8
- (id)shortDescription;	// IMP=0x00000000002d95cf
- (void)dealloc;	// IMP=0x00000000002d947c
- (id)initWithConnection:(id)arg1 counterTracker:(id)arg2;	// IMP=0x00000000002d91d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

