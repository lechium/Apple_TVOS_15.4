//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface KGDatabaseNameCacheManager : NSObject
{
    NSMutableDictionary *_cacheByPath;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (void)unloadNameCacheForURL:(id)arg1;	// IMP=0x00000000000ef27c
+ (void)deregisterNameCacheForURL:(id)arg1;	// IMP=0x00000000000ef202
+ (id)nameCacheForURL:(id)arg1;	// IMP=0x00000000000ef178
- (void).cxx_destruct;	// IMP=0x00000000000ee6dd
- (void)unloadCacheForURL:(id)arg1;	// IMP=0x00000000000ee63b
- (void)deregisterCacheForURL:(id)arg1;	// IMP=0x00000000000ee577
- (id)cacheForURL:(id)arg1;	// IMP=0x00000000000ee4af
- (id)init;	// IMP=0x00000000000ee434

@end

