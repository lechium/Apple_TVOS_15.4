//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NWURLSessionDelegateWrapper : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    NSURLSession *_session;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000083ac0

@end

