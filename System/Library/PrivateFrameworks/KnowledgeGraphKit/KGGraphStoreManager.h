//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KGDatabaseNameCache, KGDegasGraphStore, NSMutableArray, NSURL;
@protocol OS_dispatch_queue;

@interface KGGraphStoreManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    int _readRunningCount;	// 24 = 0x18
    _Bool _readFeeding;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_writeFeederQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_readFeederQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_executionQueue;	// 48 = 0x30
    char _readStoreBooking[4];	// 56 = 0x38
    KGDatabaseNameCache *_nameCache;	// 64 = 0x40
    _Bool _closed;	// 72 = 0x48
    NSMutableArray *_readOnlyStores;	// 80 = 0x50
    KGDegasGraphStore *_readWriteStore;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000119020
- (void)performExclusiveBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;	// IMP=0x000000000011900e
- (void)performWriteBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;	// IMP=0x0000000000118ffc
- (void)performReadBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;	// IMP=0x0000000000118fea
- (_Bool)checkValidState;	// IMP=0x0000000000118f7d
- (void)submitReadBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;	// IMP=0x0000000000118ddd
- (void)submitWriteBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;	// IMP=0x0000000000118cb0
- (void)submitExclusiveBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;	// IMP=0x0000000000118be7
- (void)decrementReadCount;	// IMP=0x0000000000118ba4
- (void)incrementReadCount;	// IMP=0x0000000000118b62
- (_Bool)replaceFromStore:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001189c1
- (void)asyncClose:(CDUnknownBlockType)arg1;	// IMP=0x000000000011892d
- (void)close;	// IMP=0x0000000000118899
- (void)doClose;	// IMP=0x0000000000118715
- (id)obtainReadWriteStore:(id *)arg1;	// IMP=0x0000000000118620
- (void)checkinReadOnlyStore:(id)arg1;	// IMP=0x0000000000118571
- (id)obtainReadOnlyStore:(id *)arg1;	// IMP=0x00000000001183d9
- (void)dealloc;	// IMP=0x0000000000118381
- (id)initWithURL:(id)arg1;	// IMP=0x000000000011819f

@end

