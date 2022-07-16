//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol OS_dispatch_queue;

@interface _PASCoalescingTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    double _leewaySeconds;	// 16 = 0x10
    CDUnknownBlockType _coalesceData;	// 24 = 0x18
    CDUnknownBlockType _operation;	// 32 = 0x20
    _PASLock *_lock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003d593
- (void)cancelPendingOperations;	// IMP=0x000000000003d576
- (void)_replaceCoalescingTimerUsingLockWitness:(id)arg1;	// IMP=0x000000000003d38a
- (void)processData:(id)arg1 afterStrictDelaySeconds:(double)arg2;	// IMP=0x000000000003d2d3
- (void)immediatelyProcessData:(id)arg1;	// IMP=0x000000000003d2bc
- (void)processData:(id)arg1 afterDelaySeconds:(double)arg2 coalescingBehavior:(unsigned char)arg3;	// IMP=0x000000000003d1c6
- (id)initWithQueue:(id)arg1 coalesceData:(CDUnknownBlockType)arg2 operation:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d1ac
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 coalesceData:(CDUnknownBlockType)arg3 operation:(CDUnknownBlockType)arg4;	// IMP=0x000000000003d06b

@end
