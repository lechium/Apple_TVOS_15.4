//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class BPSSubscription, NSString;
@protocol BPSSubscriber;

@interface BPSFilterProducer <BPSSubscriber>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <BPSSubscriber> _downstream;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    BPSSubscription *_subscription;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000025c0f
@property(retain, nonatomic) BPSSubscription *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (id)upstreamSubscriptions;	// IMP=0x0000000000025aad
- (void)requestDemand:(long long)arg1;	// IMP=0x0000000000025948
- (void)cancel;	// IMP=0x000000000002584a
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000025756
- (long long)receiveInput:(id)arg1;	// IMP=0x00000000000253f8
- (void)receiveCompletion:(id)arg1;	// IMP=0x0000000000025232
- (id)receiveNewValue:(id)arg1;	// IMP=0x0000000000025195
- (id)initWithDownstream:(id)arg1;	// IMP=0x000000000002510a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

