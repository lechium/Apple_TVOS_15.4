//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSXPCMessage : NSObject
{
    CDUnknownBlockType _replyHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    int _invalidated;	// 24 = 0x18
    int _replied;	// 28 = 0x1c
    NSObject<OS_xpc_object> *_message;	// 32 = 0x20
}

+ (id)messageWithPacker:(CDUnknownBlockType)arg1 replyHandler:(CDUnknownBlockType)arg2 replyQueue:(id)arg3;	// IMP=0x000000000003c8b2
+ (id)message:(long long)arg1 withPacker:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3 replyQueue:(id)arg4;	// IMP=0x000000000003c7ff
+ (id)message:(long long)arg1 withPacker:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c7d0
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(CDUnknownBlockType)arg3 replyHandler:(CDUnknownBlockType)arg4 replyQueue:(id)arg5;	// IMP=0x000000000003c6d1
+ (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 toConnection:(id)arg2 replyHandler:(CDUnknownBlockType)arg3 replyQueue:(id)arg4;	// IMP=0x000000000003c46d
+ (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 toConnection:(id)arg2;	// IMP=0x000000000003c455
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c42f
+ (const char *)messageTypeKey;	// IMP=0x000000000003c422
+ (id)messageWithPayload:(id)arg1;	// IMP=0x000000000003c3d2
+ (id)messageWithPacker:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c337
- (void).cxx_destruct;	// IMP=0x000000000003d49e
@property(readonly, nonatomic) NSObject<OS_xpc_object> *payload; // @synthesize payload=_message;
- (void)forcefullyInvokeReplyHandler:(id)arg1;	// IMP=0x000000000003d42e
- (id)sendSynchronouslyToConnection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003d32f
- (_Bool)sendToConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ce3e
- (_Bool)sendToConnection:(id)arg1;	// IMP=0x000000000003cd1f
- (id)description;	// IMP=0x000000000003cc82
- (id)initWithMessage:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3 replyQueue:(id)arg4;	// IMP=0x000000000003cafa

@end

