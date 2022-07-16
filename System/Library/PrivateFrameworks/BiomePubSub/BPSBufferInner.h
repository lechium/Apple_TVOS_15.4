//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class BPSCompletion, BPSSubscriptionStatus, NSMutableArray, NSString;
@protocol BPSSubscriber;

@interface BPSBufferInner <BPSSubscriber>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _recursion;	// 12 = 0xc
    id <BPSSubscriber> _downstream;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    unsigned long long _prefetch;	// 32 = 0x20
    unsigned long long _whenFull;	// 40 = 0x28
    long long _downstreamDemand;	// 48 = 0x30
    BPSSubscriptionStatus *_status;	// 56 = 0x38
    BPSCompletion *_terminal;	// 64 = 0x40
    NSMutableArray *_values;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000007489
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) BPSCompletion *terminal; // @synthesize terminal=_terminal;
@property(nonatomic) _Bool recursion; // @synthesize recursion=_recursion;
@property(retain, nonatomic) BPSSubscriptionStatus *status; // @synthesize status=_status;
@property(nonatomic) long long downstreamDemand; // @synthesize downstreamDemand=_downstreamDemand;
@property(nonatomic) unsigned long long whenFull; // @synthesize whenFull=_whenFull;
@property(nonatomic) unsigned long long prefetch; // @synthesize prefetch=_prefetch;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (id)upstreamSubscriptions;	// IMP=0x000000000000726e
- (id)newBookmark;	// IMP=0x0000000000006f7d
- (id)_lockedPopWithDemand:(long long)arg1;	// IMP=0x0000000000006e98
- (long long)_drain;	// IMP=0x000000000000697e
- (void)receiveCompletion:(id)arg1;	// IMP=0x00000000000068a5
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000000675d
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000006652
- (void)cancel;	// IMP=0x0000000000006563
- (void)requestDemand:(long long)arg1;	// IMP=0x000000000000649a
- (id)initWithDownstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4;	// IMP=0x000000000000637b
- (id)init;	// IMP=0x0000000000006375

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

