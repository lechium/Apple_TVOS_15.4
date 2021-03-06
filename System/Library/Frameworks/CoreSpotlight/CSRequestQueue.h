//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRequestQueue : NSObject
{
    _Atomic unsigned int _suspended;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_workSource;	// 24 = 0x18
    struct os_unfair_lock_s _workItemsLock;	// 32 = 0x20
    unsigned int _workItemsQoS;	// 36 = 0x24
    CDUnknownBlockType _startBlock;	// 40 = 0x28
    NSMutableArray *_workItems;	// 48 = 0x30
}

+ (id)_requestQueueAttribute;	// IMP=0x00000000000524b5
- (void).cxx_destruct;	// IMP=0x000000000005290e
- (const char *)label;	// IMP=0x0000000000052900
- (void)sync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000528bc
- (void)async:(CDUnknownBlockType)arg1;	// IMP=0x00000000000528ab
- (void)resume;	// IMP=0x0000000000052890
- (void)suspend;	// IMP=0x0000000000052886
- (void)validate;	// IMP=0x0000000000052878
- (void)enqueue:(id)arg1;	// IMP=0x0000000000052805
- (id)initWithLabel:(char *)arg1 target:(id)arg2 startBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000525f2
- (void)handleEvent;	// IMP=0x0000000000052502

@end

