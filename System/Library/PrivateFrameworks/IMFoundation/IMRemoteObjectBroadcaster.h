//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)defaultBroadcaster;	// IMP=0x00000000000278d8
- (void)flushProxy:(id)arg1;	// IMP=0x0000000000027cdf
- (void)blockUntilSendQueueIsEmpty;	// IMP=0x0000000000027b29
- (id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;	// IMP=0x0000000000027aba
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000027a20
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4;	// IMP=0x00000000000279fd
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;	// IMP=0x00000000000279e8
- (id)_queue;	// IMP=0x00000000000279de
- (void)dealloc;	// IMP=0x0000000000027997
- (id)init;	// IMP=0x000000000002791d

@end

