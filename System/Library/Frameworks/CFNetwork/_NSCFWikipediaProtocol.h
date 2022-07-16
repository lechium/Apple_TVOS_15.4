//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _NSCFWikipediaProtocol
{
    const void *_instance;	// 16 = 0x10
    const struct CFURLProtocolInstanceCallbacks *_callbacks;	// 24 = 0x18
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x000000000005ff2e
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x000000000005ff25
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x000000000005ff0a
- (void)stopLoading;	// IMP=0x000000000005fee9
- (void)startLoading;	// IMP=0x000000000005fec8
- (void)dealloc;	// IMP=0x000000000005fe71
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x000000000005fdba

@end
