//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VUIConcurrentEvaluator : NSObject
{
    NSMutableArray *_orderedKeys;	// 8 = 0x8
    NSMutableDictionary *_fetchers;	// 16 = 0x10
    NSMutableDictionary *_getters;	// 24 = 0x18
    long long _activeFetchCount;	// 32 = 0x20
    long long _numberOfSchedulingLocksAcquired;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_schedulingLock;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    long long _concurrencyCount;	// 64 = 0x40
}

+ (id)idleEvaluator;	// IMP=0x0000000000118665
- (void).cxx_destruct;	// IMP=0x0000000000119240
@property(readonly, nonatomic) long long concurrencyCount; // @synthesize concurrencyCount=_concurrencyCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_scheduleFetchRelayed:(_Bool)arg1;	// IMP=0x0000000000118ff0
- (CDUnknownBlockType)_getterForKey:(id)arg1;	// IMP=0x0000000000118f6b
- (CDUnknownBlockType)_removeFetcherForKey:(id)arg1;	// IMP=0x0000000000118e94
- (void)_insertFetcher:(CDUnknownBlockType)arg1 getter:(CDUnknownBlockType)arg2 forKey:(id)arg3;	// IMP=0x0000000000118d0c
- (void)lockSchedulingForEvaluation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000118c60
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000118baf
- (void)addEvaluationBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x00000000001187e2
- (id)initWithQueue:(id)arg1 concurrencyCount:(long long)arg2;	// IMP=0x0000000000118747
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000118730

@end

