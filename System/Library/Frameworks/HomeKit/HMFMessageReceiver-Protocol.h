//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMFMessage, NSObject, NSUUID;
@protocol HMFDispatchExecutor, OS_dispatch_queue;

@protocol HMFMessageReceiver <NSObject>
@property(readonly, nonatomic) NSUUID *messageTargetUUID;

@optional
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id <HMFDispatchExecutor>)dispatchContextForMessage:(HMFMessage *)arg1;
@end

