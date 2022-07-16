//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSBSRemoteAlertHandleObserver-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDAddAccessoryRequestInformation, HMDHomeManager, HMDSBSRemoteAlertHandleProvider, HMDXPCClientConnection, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDFeaturesDataSource, HMDSBSRemoteAlertHandle, OS_dispatch_queue;

@interface HMDAccessorySetupManager : HMFObject <HMDSBSRemoteAlertHandleObserver, HMFMessageReceiver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDAddAccessoryRequestInformation *_pendingAddAccessoryRequestInformation;	// 16 = 0x10
    HMDXPCClientConnection *_accessorySetupHostClientConnection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDHomeManager *_homeManager;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
    HMDSBSRemoteAlertHandleProvider *_alertHandleProvider;	// 56 = 0x38
    id <HMDFeaturesDataSource> _featuresDataSource;	// 64 = 0x40
    CDUnknownBlockType _pendingAccessorySetupCompletionHandler;	// 72 = 0x48
    id <HMDSBSRemoteAlertHandle> _alertHandle;	// 80 = 0x50
}

+ (id)accessorySetupHostBundleIdentifier;	// IMP=0x000000000007f130
- (void).cxx_destruct;	// IMP=0x000000000007df32
@property(retain) id <HMDSBSRemoteAlertHandle> alertHandle; // @synthesize alertHandle=_alertHandle;
@property(copy) CDUnknownBlockType pendingAccessorySetupCompletionHandler; // @synthesize pendingAccessorySetupCompletionHandler=_pendingAccessorySetupCompletionHandler;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider; // @synthesize alertHandleProvider=_alertHandleProvider;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000000007dd58
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000000007dca7
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x000000000007dbf6
- (void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x000000000007db45
- (void)handleNFCProxSetupNotification:(id)arg1;	// IMP=0x000000000007d7f6
- (void)_handleFailAccessorySetupMessage:(id)arg1;	// IMP=0x000000000007d583
- (void)_handleFinishAccessorySetupMessage:(id)arg1;	// IMP=0x000000000007d3c8
- (void)_handleResumeAccessorySetupMessage:(id)arg1;	// IMP=0x000000000007d18e
- (void)_handleFetchPendingSetupAccessoryDescriptionMessage:(id)arg1;	// IMP=0x000000000007ce74
- (void)_handlePerformMatterEcosystemAccessorySetupMessage:(id)arg1;	// IMP=0x000000000007c7b6
- (void)_handlePerformAccessorySetupMessage:(id)arg1;	// IMP=0x000000000007c3a2
- (id)_accessorySetupResultFromCompletedInfo:(id)arg1 clientIdentifierSalt:(id)arg2;	// IMP=0x000000000007c21b
- (void)_finishAccessorySetupWithSetupCompletedInfo:(id)arg1 setupError:(id)arg2;	// IMP=0x000000000007bf58
- (void)_launchHUISWithSetupAccessoryDescription:(id)arg1 resumeSetupUserInfo:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007b8b8
- (void)_launchHUISWithRequest:(id)arg1 matterTopology:(id)arg2 connection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007aee0
- (void)_launchHUISWithNFCProxSetupURL:(id)arg1;	// IMP=0x000000000007ab22
- (id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007a96a
- (void)launchAccessorySetupHostToRequestSetupCodeForAccessoryWithUUID:(id)arg1 accessoryName:(id)arg2 homeUUID:(id)arg3 clientConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000007a802
- (void)clearPendingAddAccessoryRequestInformation;	// IMP=0x000000000007a7ee
- (void)configure;	// IMP=0x000000000007a3be
@property(retain, nonatomic) HMDXPCClientConnection *accessorySetupHostClientConnection; // @synthesize accessorySetupHostClientConnection=_accessorySetupHostClientConnection;
@property(retain, nonatomic) HMDAddAccessoryRequestInformation *pendingAddAccessoryRequestInformation; // @synthesize pendingAddAccessoryRequestInformation=_pendingAddAccessoryRequestInformation;
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 alertHandleProvider:(id)arg4 featuresDataSource:(id)arg5;	// IMP=0x000000000007a03c
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2;	// IMP=0x0000000000079f35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

