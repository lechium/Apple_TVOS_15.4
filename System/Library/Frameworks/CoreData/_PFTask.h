//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFTask : NSObject
{
    int _cd_rc;	// 8 = 0x8
    void *_task;	// 16 = 0x10
    void *arguments;	// 24 = 0x18
    struct _opaque_pthread_mutex_t lock;	// 32 = 0x20
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } condition;	// 96 = 0x60
    int isFinishedFlag;	// 144 = 0x90
}

- (_Bool)_isDeallocating;	// IMP=0x000000000005fca3
- (_Bool)_tryRetain;	// IMP=0x000000000005fc9b
- (unsigned long long)retainCount;	// IMP=0x000000000005fc8e
- (oneway void)release;	// IMP=0x000000000005fc65
- (id)retain;	// IMP=0x000000000005fc58
- (void)dealloc;	// IMP=0x000000000005fbe7
- (id)initWithFunction:(CDUnknownFunctionPointerType)arg1 withArgument:(void *)arg2 andPriority:(int)arg3;	// IMP=0x000000000005f9a3

@end
