//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SSPersistentCache;

@interface SSDatabaseCacheEntry
{
    SSPersistentCache *_persistentCache;	// 8 = 0x8
}

+ (id)allPropertyKeys;	// IMP=0x000000000015445a
+ (id)databaseTable;	// IMP=0x000000000015444d
+ (unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000000154280
- (id)description;	// IMP=0x0000000000154225
- (id)dataBlob:(_Bool *)arg1;	// IMP=0x00000000001540ca
- (void)setPersistentCache:(id)arg1;	// IMP=0x000000000015408c
- (void)dealloc;	// IMP=0x000000000015404a
- (id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000000153fe1

@end

