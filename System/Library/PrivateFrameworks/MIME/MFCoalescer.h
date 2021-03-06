//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MFCoalescer : NSObject
{
    CDUnknownBlockType _coalescerAction;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    id _coalescedValue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_coalescer;	// 40 = 0x28
}

- (void)_handleCoalesceEvent;	// IMP=0x000000000002d587
- (void)coalesceValue:(id)arg1;	// IMP=0x000000000002d514
- (void)dealloc;	// IMP=0x000000000002d4ae
- (id)init;	// IMP=0x000000000002d47b
- (id)initWithCoalescingAction:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d308

@end

