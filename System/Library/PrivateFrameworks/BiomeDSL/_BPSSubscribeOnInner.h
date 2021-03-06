//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSSubscription.h>

#import <BiomeDSL/BPSSubscriber-Protocol.h>

@class BPSSubscriptionStatus, NSString;
@protocol BPSSubscriber, BPSSubscription;

@interface _BPSSubscribeOnInner : BPSSubscription <BPSSubscriber>
{
    id <BPSSubscriber> _downstream;	// 8 = 0x8
    id <BPSSubscription> _subscription;	// 16 = 0x10
    BPSSubscriptionStatus *_status;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000004388
@property(retain, nonatomic) BPSSubscriptionStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) id <BPSSubscription> subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000004277
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000004200
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000000418e
- (void)cancel;	// IMP=0x0000000000004151
- (void)requestDemand:(long long)arg1;	// IMP=0x000000000000408f
- (id)initWithDownstream:(id)arg1;	// IMP=0x0000000000003fec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

