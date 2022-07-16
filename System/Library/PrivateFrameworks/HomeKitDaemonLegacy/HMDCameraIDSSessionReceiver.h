//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraRemoteStreamReceiverDestinationProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/IDSSessionDelegate-Protocol.h>

@class HMDCameraIDSSessionInviterDeviceVerifier, IDSSession, NSObject, NSString;
@protocol HMDCameraIDSSessionReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraIDSSessionReceiver <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>
{
    id <HMDCameraIDSSessionReceiverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000007834dc
- (void).cxx_destruct;	// IMP=0x000000000078345a
@property(readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDCameraIDSSessionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000007833a7
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x00000000007831c2
- (void)sessionStarted:(id)arg1;	// IMP=0x0000000000783087
- (void)_receivedIDSSession:(id)arg1;	// IMP=0x0000000000782c05
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x000000000078280d
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x0000000000782651
- (void)_callSessionSetup:(id)arg1;	// IMP=0x0000000000782495
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x000000000078248f
- (void)dealloc;	// IMP=0x00000000007823aa
@property(readonly, copy) NSString *remoteDestination;
@property(readonly) IDSSession *session;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x00000000007821f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
