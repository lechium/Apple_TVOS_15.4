//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionSampler, NSMutableArray;
@protocol AWSchedulerObserver, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    AWAttentionSampler *_attentionSampler;	// 32 = 0x20
    id <AWSchedulerObserver> _observer;	// 40 = 0x28
}

+ (id)sharedUnitTestScheduler;	// IMP=0x00000000000025ae
+ (id)sharedScheduler;	// IMP=0x000000000000257e
- (void).cxx_destruct;	// IMP=0x0000000000002224
@property(readonly, nonatomic) AWAttentionSampler *attentionSampler; // @synthesize attentionSampler=_attentionSampler;
@property(nonatomic) __weak id <AWSchedulerObserver> observer; // @synthesize observer=_observer;
- (void)reevaluate;	// IMP=0x00000000000020ba
- (void)armEvents;	// IMP=0x0000000000001ab2
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000001a84
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000190f
- (void)removeInvalidClients;	// IMP=0x00000000000018fb
- (void)removeInvalidClientsWithConnection:(id)arg1;	// IMP=0x000000000000162c
- (void)addClient:(id)arg1;	// IMP=0x0000000000001408
- (id)description;	// IMP=0x0000000000001372
- (id)initForUnitTest:(_Bool)arg1;	// IMP=0x0000000000001180

@end

