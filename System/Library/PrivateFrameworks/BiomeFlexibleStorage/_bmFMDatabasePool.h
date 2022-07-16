//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _bmFMDatabasePool : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    NSMutableArray *_databaseInPool;	// 16 = 0x10
    NSMutableArray *_databaseOutPool;	// 24 = 0x18
    int _openFlags;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
    unsigned long long _maximumNumberOfDatabasesToCreate;	// 56 = 0x38
    NSString *_vfsName;	// 64 = 0x40
}

+ (Class)databaseClass;	// IMP=0x00000000000109a1
+ (id)databasePoolWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0000000000010634
+ (id)databasePoolWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000105dc
+ (id)databasePoolWithURL:(id)arg1;	// IMP=0x0000000000010559
+ (id)databasePoolWithPath:(id)arg1;	// IMP=0x0000000000010510
- (void).cxx_destruct;	// IMP=0x0000000000011603
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property unsigned long long maximumNumberOfDatabasesToCreate; // @synthesize maximumNumberOfDatabasesToCreate=_maximumNumberOfDatabasesToCreate;
@property id delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *path; // @synthesize path=_path;
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x00000000000113fd
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000000113e3
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000000113cc
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000000113b2
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000001139b
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000112d6
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x000000000001125b
- (void)releaseAllDatabases;	// IMP=0x00000000000111cc
@property(readonly, nonatomic) unsigned long long countOfOpenDatabases;
@property(readonly, nonatomic) unsigned long long countOfCheckedOutDatabases;
@property(readonly, nonatomic) unsigned long long countOfCheckedInDatabases;
- (id)db;	// IMP=0x0000000000010b56
- (void)pushDatabaseBackInPool:(id)arg1;	// IMP=0x0000000000010a13
- (void)executeLocked:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010a02
- (void)dealloc;	// IMP=0x00000000000109b2
- (id)init;	// IMP=0x000000000001098d
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000010937
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000010920
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000108c2
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x00000000000108ad
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0000000000010741
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x00000000000106bf

@end

