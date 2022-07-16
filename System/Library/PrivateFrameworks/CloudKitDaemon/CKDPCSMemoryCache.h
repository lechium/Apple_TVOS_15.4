//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDPCSMemoryCache : NSObject
{
    unsigned long long _maxEntries;	// 8 = 0x8
    double _minAge;	// 16 = 0x10
    NSMutableDictionary *_cacheEntries;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    double _oldestCacheEntry;	// 40 = 0x28
    unsigned long long _memoryCacheRequestCount;	// 48 = 0x30
    unsigned long long _memoryCacheHitCount;	// 56 = 0x38
    unsigned long long _memoryCacheHighwaterCount;	// 64 = 0x40
    unsigned long long _memoryCacheDeleteCount;	// 72 = 0x48
    unsigned long long _memoryCacheUpdateCount;	// 80 = 0x50
    unsigned long long _memoryCacheEvictCount;	// 88 = 0x58
}

+ (void)registerEvictionTimer;	// IMP=0x0000000000047d30
+ (void)stopEvictionTimer;	// IMP=0x0000000000047c63
+ (void)startEvictionTimer;	// IMP=0x0000000000047b96
+ (void)runMemoryCacheEvictionInAllCaches;	// IMP=0x0000000000047958
+ (void)setupMemoryNotifications;	// IMP=0x00000000000478cb
+ (void)initialize;	// IMP=0x0000000000047884
- (void).cxx_destruct;	// IMP=0x000000000004977c
@property unsigned long long memoryCacheEvictCount; // @synthesize memoryCacheEvictCount=_memoryCacheEvictCount;
@property unsigned long long memoryCacheUpdateCount; // @synthesize memoryCacheUpdateCount=_memoryCacheUpdateCount;
@property unsigned long long memoryCacheDeleteCount; // @synthesize memoryCacheDeleteCount=_memoryCacheDeleteCount;
@property unsigned long long memoryCacheHighwaterCount; // @synthesize memoryCacheHighwaterCount=_memoryCacheHighwaterCount;
@property unsigned long long memoryCacheHitCount; // @synthesize memoryCacheHitCount=_memoryCacheHitCount;
@property unsigned long long memoryCacheRequestCount; // @synthesize memoryCacheRequestCount=_memoryCacheRequestCount;
@property double oldestCacheEntry; // @synthesize oldestCacheEntry=_oldestCacheEntry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSMutableDictionary *cacheEntries; // @synthesize cacheEntries=_cacheEntries;
@property(nonatomic) double minAge; // @synthesize minAge=_minAge;
@property(nonatomic) unsigned long long maxEntries; // @synthesize maxEntries=_maxEntries;
- (id)CKStatusReportArray;	// IMP=0x0000000000049403
- (_Bool)hasStatusToReport;	// IMP=0x00000000000493ea
- (unsigned long long)_cacheCount;	// IMP=0x0000000000049299
- (void)clearCache;	// IMP=0x00000000000490ff
- (void)runCacheEviction;	// IMP=0x000000000004903f
- (void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000048c20
- (void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000487d4
- (void)_lockedEvictEntriesFromCache;	// IMP=0x000000000004804a
- (id)init;	// IMP=0x0000000000047f30

@end

