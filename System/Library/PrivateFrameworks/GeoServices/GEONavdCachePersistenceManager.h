//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEONavdCacheDBReader, GEONavdCacheDBWriter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdCachePersistenceManager : NSObject
{
    GEONavdCacheDBWriter *_writer;	// 8 = 0x8
    GEONavdCacheDBReader *_reader;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000333686
- (void)_removeAllEntries;	// IMP=0x0000000000333621
- (long long)_numberOfEntries;	// IMP=0x0000000000333564
- (void)_enumerateAllForCacheEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000033341f
- (void)_enumerateAllEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003331e7
- (void)_deleteFromDiskWithKey:(id)arg1;	// IMP=0x0000000000332e43
- (void)_deleteRowWithRowId:(long long)arg1;	// IMP=0x0000000000332d3b
- (id)_readValueWithKey:(id)arg1;	// IMP=0x0000000000332a43
- (long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000332603
- (id)_entryWithRowId:(long long)arg1;	// IMP=0x0000000000332127
- (long long)_rowIdOfKey:(id)arg1;	// IMP=0x0000000000332014
- (long long)_threadUnsafeRowIdOfKey:(id)arg1;	// IMP=0x0000000000331e3a
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1;	// IMP=0x0000000000331bfa
- (double)_nextTimeStampForRefreshTimer;	// IMP=0x0000000000331a41
- (void)_removeOldFormatCacheFromPath:(id)arg1;	// IMP=0x000000000033197a
- (void)tearDown;	// IMP=0x000000000033191f
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000331602
- (id)init;	// IMP=0x00000000003315d8

@end
