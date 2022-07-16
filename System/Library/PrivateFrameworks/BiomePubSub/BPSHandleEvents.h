//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol BPSPublisher;

@interface BPSHandleEvents
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <BPSPublisher> _upstream;	// 16 = 0x10
    CDUnknownBlockType _receiveSubscription;	// 24 = 0x18
    CDUnknownBlockType _receiveOutput;	// 32 = 0x20
    CDUnknownBlockType _receiveCompletion;	// 40 = 0x28
    CDUnknownBlockType _receiveCancel;	// 48 = 0x30
    CDUnknownBlockType _receiveRequest;	// 56 = 0x38
}

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;	// IMP=0x000000000000e72b
- (void).cxx_destruct;	// IMP=0x000000000000e976
@property(readonly, nonatomic) CDUnknownBlockType receiveRequest; // @synthesize receiveRequest=_receiveRequest;
@property(readonly, nonatomic) CDUnknownBlockType receiveCancel; // @synthesize receiveCancel=_receiveCancel;
@property(readonly, nonatomic) CDUnknownBlockType receiveCompletion; // @synthesize receiveCompletion=_receiveCompletion;
@property(readonly, nonatomic) CDUnknownBlockType receiveOutput; // @synthesize receiveOutput=_receiveOutput;
@property(readonly, nonatomic) CDUnknownBlockType receiveSubscription; // @synthesize receiveSubscription=_receiveSubscription;
@property(readonly, nonatomic) id <BPSPublisher> upstream; // @synthesize upstream=_upstream;
- (id)bookmarkableUpstreams;	// IMP=0x000000000000e885
- (void)subscribe:(id)arg1;	// IMP=0x000000000000e6a4
- (void)connect;	// IMP=0x000000000000e69e
- (id)initWithUpstream:(id)arg1 receiveSubscription:(CDUnknownBlockType)arg2 receiveOutput:(CDUnknownBlockType)arg3 receiveCompletion:(CDUnknownBlockType)arg4 receiveCancel:(CDUnknownBlockType)arg5 receiveRequest:(CDUnknownBlockType)arg6;	// IMP=0x000000000000e509

@end

