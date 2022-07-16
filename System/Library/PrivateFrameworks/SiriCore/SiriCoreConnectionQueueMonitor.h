//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SiriCoreConnectionQueueMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_watcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e2b9
- (void)signalWatcher;	// IMP=0x000000000000e258
- (void)startWatcher;	// IMP=0x000000000000e1f7
- (void)_signalWatcher;	// IMP=0x000000000000e1e9
- (void)_startWatcher;	// IMP=0x000000000000e192
- (void)dealloc;	// IMP=0x000000000000e14f
- (id)init;	// IMP=0x000000000000e141

@end

