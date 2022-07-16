//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMultiuserSettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver>
{
    HMFMessageDispatcher *_messageDispatcher;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000762887
- (void).cxx_destruct;	// IMP=0x0000000000762858
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
- (id)logIdentifier;	// IMP=0x00000000007627d9
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleFetchMultiuserSettingsRequest:(id)arg1;	// IMP=0x00000000007625b6
- (void)registerForMessages;	// IMP=0x00000000007623e1
- (id)initWithHome:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000762322

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

