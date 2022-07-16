//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMFMessageDispatcher, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol HMDCameraSignificantEventListenerDelegate, OS_dispatch_queue;

@interface HMDCameraSignificantEventListener : HMFObject <HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayReceiverDelegate>
{
    NSUUID *_messageTargetUUID;	// 8 = 0x8
    id <HMDCameraSignificantEventListenerDelegate> _delegate;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSMutableDictionary *_fetchHeroFrameContextBySessionUUID;	// 40 = 0x28
    NSString *_logIdentifier;	// 48 = 0x30
    CDUnknownBlockType _idsRelayReceiverFactory;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0000000000252d1f
- (void).cxx_destruct;	// IMP=0x00000000002528f5
@property(copy) CDUnknownBlockType idsRelayReceiverFactory; // @synthesize idsRelayReceiverFactory=_idsRelayReceiverFactory;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSMutableDictionary *fetchHeroFrameContextBySessionUUID; // @synthesize fetchHeroFrameContextBySessionUUID=_fetchHeroFrameContextBySessionUUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak id <HMDCameraSignificantEventListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (void)relayReceiver:(id)arg1 didReceiveData:(id)arg2 error:(id)arg3;	// IMP=0x000000000025258e
- (void)relayReceiverIDSSessionDidStart:(id)arg1;	// IMP=0x0000000000252443
- (void)relayReceiverDidAcceptIDSInvitation:(id)arg1;	// IMP=0x00000000002522f8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)handleCameraSignificantEventDidOccurMessage:(id)arg1;	// IMP=0x0000000000251a45
- (void)start;	// IMP=0x000000000025193f
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x00000000002517ef
- (id)initWithCamera:(id)arg1;	// IMP=0x0000000000251706

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

