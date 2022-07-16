//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLCache.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MPArtworkDataSourceURLCache : NSURLCache
{
    NSMapTable *_requestSizeMap;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000110b2b
- (void)setRepresentationSize:(struct CGSize)arg1 forRequest:(id)arg2;	// IMP=0x0000000000110a7b
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000110755
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;	// IMP=0x00000000001106bb

@end

