//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _NSCFTranslatedFileURLProtocol
{
    const struct CFURLProtocolInstanceCallbacks *_callbacks;	// 16 = 0x10
    struct CFURLProtocolClient _cfurlClient;	// 24 = 0x18
    const void *_info;	// 120 = 0x78
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x000000000005fd4a
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x000000000005fd41
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x000000000005fcde
+ (const struct CFURLProtocolImplementation *)pimpl;	// IMP=0x000000000005fcd6
- (void)stopLoading;	// IMP=0x000000000005fb9b
- (void)startLoading;	// IMP=0x000000000005fb6e
- (void)dealloc;	// IMP=0x000000000005fb06
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x000000000005f9ea

@end
