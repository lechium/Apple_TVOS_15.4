//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDRemoteLoginMessageSender, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAnisetteDataProviderBridge : HMFObject <HMFLogging, HMDHomeMessageReceiver, NSSecureCoding>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000066e7a9
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x000000000066e7a1
+ (id)logCategory;	// IMP=0x000000000066e771
- (void).cxx_destruct;	// IMP=0x000000000066e3ba
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000066e2c1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000066e23f
- (void)registerForMessages;	// IMP=0x000000000066e1bd
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 remoteMessageSender:(id)arg3;	// IMP=0x000000000066e111
- (id)logIdentifier;	// IMP=0x000000000066e0c1
- (id)initWithUUID:(id)arg1;	// IMP=0x000000000066e053

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
