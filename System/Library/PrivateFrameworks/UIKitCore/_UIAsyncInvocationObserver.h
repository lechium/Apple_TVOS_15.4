//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _UIAsyncInvocationObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_postCompletionQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_completionQueueManagementQueue;	// 16 = 0x10
    _Bool _suspendedPostCompletionQueue;	// 24 = 0x18
    _Bool _resumedPostCompletionQueue;	// 25 = 0x19
}

+ (void)whenInvocationsCompleteForObservers:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f49eb2
- (void).cxx_destruct;	// IMP=0x0000000000f4a1c8
- (void)whenCompleteDo:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f49db9
- (void)_didCompleteInvocation;	// IMP=0x0000000000f49d41
- (id)init;	// IMP=0x0000000000f49cd1

@end
