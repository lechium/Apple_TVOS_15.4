//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSIndexingQueue : NSObject
{
    long long _mode;	// 8 = 0x8
    double _idleTime;	// 16 = 0x10
    double _idleTimeLeeway;	// 24 = 0x18
    unsigned long long _maximumBatchSize;	// 32 = 0x20
    NSMutableDictionary *_queuedItems;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_coalescingQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_coalescingTimer;	// 56 = 0x38
    CDUnknownBlockType _notifyBlock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000204ac
@property(copy) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
@property(retain) NSObject<OS_dispatch_source> *coalescingTimer; // @synthesize coalescingTimer=_coalescingTimer;
@property(retain) NSObject<OS_dispatch_queue> *coalescingQueue; // @synthesize coalescingQueue=_coalescingQueue;
@property(retain) NSMutableDictionary *queuedItems; // @synthesize queuedItems=_queuedItems;
@property unsigned long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property double idleTimeLeeway; // @synthesize idleTimeLeeway=_idleTimeLeeway;
@property double idleTime; // @synthesize idleTime=_idleTime;
@property long long mode; // @synthesize mode=_mode;
- (void)flush;	// IMP=0x0000000000020359
- (void)_flushWithAppResigned:(_Bool)arg1 forced:(_Bool)arg2;	// IMP=0x00000000000201fb
- (void)queueItem:(id)arg1;	// IMP=0x000000000002014c
- (void)queueItems:(id)arg1;	// IMP=0x00000000000200a4
- (void)_queueItems:(id)arg1;	// IMP=0x000000000001f53f
- (void)_applicationWillResign:(id)arg1;	// IMP=0x000000000001f4d0
- (void)dealloc;	// IMP=0x000000000001f44a
- (id)initWithIdleTime:(double)arg1 idleTimeLeeway:(double)arg2 maximumBatchSize:(unsigned long long)arg3 mode:(long long)arg4 notifyBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f2b2
- (id)initWithMode:(long long)arg1 notifyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f282

@end
