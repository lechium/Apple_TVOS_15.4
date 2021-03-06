//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDAppleMediaAccessoryLocalMessageHandler, HMDAppleMediaAccessoryMessageRouter, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAppleMediaAccessoryMessenger : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSUUID *_identifier;	// 8 = 0x8
    HMFMessageDispatcher *_messageDispatcher;	// 16 = 0x10
    HMDAppleMediaAccessoryMessageRouter *_router;	// 24 = 0x18
    HMDAppleMediaAccessoryLocalMessageHandler *_localHandler;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000004400a0
- (void).cxx_destruct;	// IMP=0x000000000043fed1
@property(readonly) HMDAppleMediaAccessoryLocalMessageHandler *localHandler; // @synthesize localHandler=_localHandler;
@property(readonly) HMDAppleMediaAccessoryMessageRouter *router; // @synthesize router=_router;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000043fe17
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)arg1;	// IMP=0x000000000043fcbe
- (void)sendDeleteSiriHistoryRequestForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000043fa3b
- (void)registerForMessagesWithHome:(id)arg1;	// IMP=0x000000000043f828
- (id)initWithIdentifier:(id)arg1 messageDispatcher:(id)arg2 router:(id)arg3 localHandler:(id)arg4;	// IMP=0x000000000043f6d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

