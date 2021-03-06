//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SSPersistentCache, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface SSDatabaseCache : NSObject
{
    unsigned long long _maximumInlineBlobSize;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_cacheName;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    SSPersistentCache *_persistentCache;	// 48 = 0x30
    SSSQLiteDatabase *_database;	// 56 = 0x38
    Class _cacheEntryClass;	// 64 = 0x40
}

@property(nonatomic) unsigned long long maximumInlineBlobSize; // @synthesize maximumInlineBlobSize=_maximumInlineBlobSize;
- (id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2;	// IMP=0x000000000014ff52
- (id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5;	// IMP=0x000000000014f9ae
- (id)cacheEntryForLookupKey:(id)arg1;	// IMP=0x000000000014f951
- (int)clearRetiredData;	// IMP=0x000000000014f20b
- (void)clearCacheForLookupKey:(id)arg1;	// IMP=0x000000000014f19a
- (void)clear;	// IMP=0x000000000014f091
- (id)statistics;	// IMP=0x000000000014e992
- (_Bool)_setupDatabase;	// IMP=0x000000000014e7b5
- (id)description;	// IMP=0x000000000014e763
- (void)dealloc;	// IMP=0x000000000014e6fd
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;	// IMP=0x000000000014e6b8
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4;	// IMP=0x000000000014def9

@end

