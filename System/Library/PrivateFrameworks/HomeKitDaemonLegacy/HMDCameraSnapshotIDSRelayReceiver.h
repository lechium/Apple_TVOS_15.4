//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/IDSServiceDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/IDSSessionDelegate-Protocol.h>

@class HMDCameraIDSSessionInviterDeviceVerifier, HMFActivity, IDSSession, NSMutableData, NSObject, NSString, NSUUID;
@protocol HMDCameraSnapshotIDSRelayReceiverDelegate, OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayReceiver <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>
{
    HMFActivity *_activity;	// 8 = 0x8
    IDSSession *_idsSession;	// 16 = 0x10
    id <HMDCameraSnapshotIDSRelayReceiverDelegate> _delegate;	// 24 = 0x18
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;	// 32 = 0x20
    NSUUID *_machOUUID;	// 40 = 0x28
    NSMutableData *_relayData;	// 48 = 0x30
    NSMutableData *_expectedByteCountData;	// 56 = 0x38
    unsigned long long _expectedByteCount;	// 64 = 0x40
    unsigned long long _receivedByteCount;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_socketSource;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00000000009c4800
- (void).cxx_destruct;	// IMP=0x00000000009c4500
@property(retain) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property unsigned long long receivedByteCount; // @synthesize receivedByteCount=_receivedByteCount;
@property unsigned long long expectedByteCount; // @synthesize expectedByteCount=_expectedByteCount;
@property(readonly) NSMutableData *expectedByteCountData; // @synthesize expectedByteCountData=_expectedByteCountData;
@property(readonly) NSMutableData *relayData; // @synthesize relayData=_relayData;
@property(readonly) NSUUID *machOUUID; // @synthesize machOUUID=_machOUUID;
@property(readonly) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property(readonly) __weak id <HMDCameraSnapshotIDSRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x00000000009c427a
- (void)sessionStarted:(id)arg1;	// IMP=0x00000000009c40fa
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x00000000009c3a60
- (void)_didReceiveData:(id)arg1 error:(id)arg2;	// IMP=0x00000000009c3916
- (void)dealloc;	// IMP=0x00000000009c37a9
- (void)_handleDataFromSocket:(id)arg1;	// IMP=0x00000000009c3087
- (void)_startDataReceive;	// IMP=0x00000000009c2ee1
- (id)logIdentifier;	// IMP=0x00000000009c2e91
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 machOUUID:(id)arg3 workQueue:(id)arg4 sessionInviterDeviceVerifier:(id)arg5 delegate:(id)arg6;	// IMP=0x00000000009c2c82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

