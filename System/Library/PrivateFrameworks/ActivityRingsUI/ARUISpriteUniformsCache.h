//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface ARUISpriteUniformsCache : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)cacheWithLimit:(unsigned long long)arg1;	// IMP=0x000000000000f2f5
+ (id)defaultCache;	// IMP=0x000000000000f2c7
- (void).cxx_destruct;	// IMP=0x000000000000f495
- (void)clearCache;	// IMP=0x000000000000f47f
- (id)uniformsForSprite:(id)arg1 renderedInContext:(id)arg2;	// IMP=0x000000000000f39c
- (id)initWithLimit:(unsigned long long)arg1;	// IMP=0x000000000000f32b

@end

