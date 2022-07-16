//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/PFDispatchQueueMethods-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface PFDispatchQueueBaseClass <PFDispatchQueueMethods>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000267a2
- (id)description;	// IMP=0x000000000002671e
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000266b0
- (id)extensionMatching:(CDUnknownBlockType)arg1;	// IMP=0x00000000000266a8
- (id)_extensionManager;	// IMP=0x00000000000266a0
- (id)_extensionsForTargetingQueue;	// IMP=0x0000000000026698
- (id)dispatchCancellableGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026608
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000265cc
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026551
- (id)dispatchCancellable:(CDUnknownBlockType)arg1;	// IMP=0x00000000000264e5
- (void)dispatchAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002648c
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002643d
- (_Bool)assertNotOnQueue;	// IMP=0x0000000000026425
- (_Bool)assertQueueBarrier;	// IMP=0x000000000002640d
- (_Bool)assertOnQueue;	// IMP=0x00000000000263f5
- (void)setTargetQueue:(id)arg1;	// IMP=0x00000000000263b0
- (id)_dispatchQueueForSetTargetQueue;	// IMP=0x000000000002639b
- (unsigned int)qualityOfService;	// IMP=0x0000000000026384
- (void *)getSpecific:(void *)arg1;	// IMP=0x000000000002636c
- (void)setSpecific:(void *)arg1 forKey:(void *)arg2;	// IMP=0x0000000000026352
- (void)resume;	// IMP=0x000000000002633d
- (void)suspend;	// IMP=0x0000000000026328
- (const char *)label;	// IMP=0x0000000000026313
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;	// IMP=0x00000000000262f8
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;	// IMP=0x00000000000262dd
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000262c2
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000262aa
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026292
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000002627a
- (void)dispatchSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026262

@end
