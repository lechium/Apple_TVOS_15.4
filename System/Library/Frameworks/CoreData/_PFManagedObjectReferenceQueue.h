//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _PFManagedObjectReferenceQueue : NSObject
{
    int _cd_rc;	// 8 = 0x8
    struct os_unfair_lock_s _spinLock;	// 12 = 0xc
    int _flags;	// 16 = 0x10
    int _signalRunloop;	// 20 = 0x14
    NSManagedObjectContext *_context;	// 24 = 0x18
    struct __CFArray *_queue;	// 32 = 0x20
    struct __CFRunLoopObserver *_rlObserver;	// 40 = 0x28
    int _processing;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x00000000000d30ab
- (_Bool)_isDeallocating;	// IMP=0x00000000000d3082
- (_Bool)_tryRetain;	// IMP=0x00000000000d307a
- (unsigned long long)retainCount;	// IMP=0x00000000000d306d
- (oneway void)release;	// IMP=0x00000000000d303f
- (id)retain;	// IMP=0x00000000000d3032

@end
