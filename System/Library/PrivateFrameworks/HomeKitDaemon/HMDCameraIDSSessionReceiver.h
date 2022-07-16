//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraRemoteStreamReceiverDestinationProtocol-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class HMDCameraIDSSessionInviterDeviceVerifier, IDSSession, NSObject, NSString;
@protocol HMDCameraIDSSessionReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraIDSSessionReceiver <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>
{
    id <HMDCameraIDSSessionReceiverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000826733
- (void).cxx_destruct;	// IMP=0x00000000008266b1
@property(readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDCameraIDSSessionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000008265fe
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000000826419
- (void)sessionStarted:(id)arg1;	// IMP=0x00000000008262de
- (void)_receivedIDSSession:(id)arg1;	// IMP=0x0000000000825e5c
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x0000000000825a64
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x00000000008258a8
- (void)_callSessionSetup:(id)arg1;	// IMP=0x00000000008256ec
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000008256e6
- (void)dealloc;	// IMP=0x0000000000825601
@property(readonly, copy) NSString *remoteDestination;
@property(readonly) IDSSession *session;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x000000000082544b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
