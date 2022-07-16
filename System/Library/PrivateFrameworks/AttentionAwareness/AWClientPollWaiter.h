//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWClientPollWaiter : NSObject
{
    AWAttentionAwarenessClient *_client;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    CDUnknownBlockType _clientBlock;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    int _pollState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000f325
- (void)invalidate;	// IMP=0x000000000000f2da
- (void)cancel;	// IMP=0x000000000000f2c1
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;	// IMP=0x000000000000f22a
- (void)invokeClientBlock:(unsigned long long)arg1 event:(id)arg2;	// IMP=0x000000000000f152
- (id)initWithClient:(id)arg1 timeout:(unsigned long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ef8c

@end

