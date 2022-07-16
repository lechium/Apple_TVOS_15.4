//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSCancellable-Protocol.h>
#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class BPSSubscriptionStatus, NSString;
@protocol BPSSubscriber;

@interface _BPSHandleEventsInner <BPSSubscriber, BPSCancellable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BPSSubscriptionStatus *_status;	// 16 = 0x10
    CDUnknownBlockType _receiveSubscription;	// 24 = 0x18
    CDUnknownBlockType _receiveOutput;	// 32 = 0x20
    CDUnknownBlockType _receiveCompletion;	// 40 = 0x28
    CDUnknownBlockType _receiveCancel;	// 48 = 0x30
    CDUnknownBlockType _receiveRequest;	// 56 = 0x38
    id <BPSSubscriber> _downstream;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000e483
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (id)upstreamSubscriptions;	// IMP=0x000000000000e358
- (void)requestDemand:(long long)arg1;	// IMP=0x000000000000e27e
- (void)receiveSubscription:(id)arg1;	// IMP=0x000000000000e176
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000000e0a8
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000000dead
- (void)cancel;	// IMP=0x000000000000dcfc
- (id)initWithDownstream:(id)arg1 handleEvents:(id)arg2;	// IMP=0x000000000000daea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
