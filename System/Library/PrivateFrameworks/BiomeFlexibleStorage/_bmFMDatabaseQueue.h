//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _bmFMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _bmFMDatabase *_db;	// 16 = 0x10
    int _openFlags;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_vfsName;	// 40 = 0x28
}

+ (Class)databaseClass;	// IMP=0x00000000000117b6
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x000000000001174f
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000116f7
+ (id)databaseQueueWithURL:(id)arg1;	// IMP=0x0000000000011695
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x000000000001164c
- (void).cxx_destruct;	// IMP=0x000000000001262a
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x000000000001242b
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012406
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000123df
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012068
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000001204e
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012037
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000001201d
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012006
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011e16
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011cc4
- (id)database;	// IMP=0x0000000000011bfb
- (void)interrupt;	// IMP=0x0000000000011bbe
- (void)close;	// IMP=0x0000000000011b39
- (void)dealloc;	// IMP=0x0000000000011af1
- (id)init;	// IMP=0x0000000000011add
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000011ac3
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000011a6d
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0000000000011a0f
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000119fa
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0000000000011849
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x00000000000117c7

@end
