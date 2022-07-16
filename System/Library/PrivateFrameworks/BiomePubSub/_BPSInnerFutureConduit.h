//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BPSFuture;
@protocol BPSSubscriber;

@interface _BPSInnerFutureConduit
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct os_unfair_recursive_lock_s _downstreamLock;	// 12 = 0xc
    _Bool _hasAnyDemand;	// 20 = 0x14
    _Bool _released;	// 21 = 0x15
    BPSFuture *_parent;	// 24 = 0x18
    id <BPSSubscriber> _downstream;	// 32 = 0x20
    long long _identifity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002e4b2
@property(nonatomic) _Bool released; // @synthesize released=_released;
@property(nonatomic) long long identifity; // @synthesize identifity=_identifity;
@property(nonatomic) _Bool hasAnyDemand; // @synthesize hasAnyDemand=_hasAnyDemand;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
@property(retain, nonatomic) BPSFuture *parent; // @synthesize parent=_parent;
- (id)upstreamSubscriptions;	// IMP=0x000000000002e3fe
- (void)cancel;	// IMP=0x000000000002e363
- (void)fulfill:(id)arg1;	// IMP=0x000000000002e1a8
- (void)requestDemand:(long long)arg1;	// IMP=0x000000000002df3d
- (void)assignIdentity:(long long)arg1;	// IMP=0x000000000002df2b
- (id)initWithParent:(id)arg1 downstream:(id)arg2;	// IMP=0x000000000002de56

@end

