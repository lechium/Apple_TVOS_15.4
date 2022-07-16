//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface MSASModelEnumerator : NSEnumerator
{
    struct sqlite3 *_db;	// 8 = 0x8
    struct sqlite3_stmt *_stmt;	// 16 = 0x10
    CDUnknownBlockType _stepBlock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)enumeratorWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009bac8
- (void).cxx_destruct;	// IMP=0x000000000009b897
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType stepBlock; // @synthesize stepBlock=_stepBlock;
@property(nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (id)nextObject;	// IMP=0x000000000009b6f5
- (void)dealloc;	// IMP=0x000000000009b64f
- (id)initWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009b4bf
- (id)init;	// IMP=0x000000000009b49c

@end

