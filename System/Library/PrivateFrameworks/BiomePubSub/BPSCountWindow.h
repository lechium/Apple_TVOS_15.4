//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BPSSubscriptionStatus, NSString;

@interface BPSCountWindow
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BPSSubscriptionStatus *_status;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    _Bool _downstreamRequested;	// 32 = 0x20
    unsigned long long _capacity;	// 40 = 0x28
    unsigned long long _currentCount;	// 48 = 0x30
    id _accumulator;	// 56 = 0x38
    CDUnknownBlockType _closure;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000058ba
@property(readonly, nonatomic) CDUnknownBlockType closure; // @synthesize closure=_closure;
@property(readonly, nonatomic) id accumulator; // @synthesize accumulator=_accumulator;
@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void)requestDemand:(long long)arg1;	// IMP=0x000000000000569f
- (void)cancel;	// IMP=0x00000000000055f8
- (void)receiveSubscription:(id)arg1;	// IMP=0x00000000000054c4
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000005279
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000000509c
- (id)metadata;	// IMP=0x000000000000505e
- (id)identifier;	// IMP=0x0000000000005049
- (id)initWithCapacity:(unsigned long long)arg1 aggregator:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000000004e86

@end
