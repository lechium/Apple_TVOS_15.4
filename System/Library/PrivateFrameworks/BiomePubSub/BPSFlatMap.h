//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol BPSPublisher;

@interface BPSFlatMap
{
    long long _maxPublishers;	// 8 = 0x8
    CDUnknownBlockType _transform;	// 16 = 0x10
    id <BPSPublisher> _upstream;	// 24 = 0x18
}

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;	// IMP=0x0000000000017fab
- (void).cxx_destruct;	// IMP=0x0000000000017f7a
@property(readonly, nonatomic) id <BPSPublisher> upstream; // @synthesize upstream=_upstream;
@property(readonly, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) long long maxPublishers; // @synthesize maxPublishers=_maxPublishers;
- (void)subscribe:(id)arg1;	// IMP=0x0000000000017e61
- (id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017d9c
- (_Bool)canStoreInternalStateInBookmark;	// IMP=0x0000000000018145
- (id)bookmarkableUpstreams;	// IMP=0x000000000001807e

@end

