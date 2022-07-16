//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CalAccumulatingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_tags;	// 16 = 0x10
    NSMutableDictionary *_context;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    float _delay;	// 40 = 0x28
    _Bool _executionPending;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000002c734
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000000abad
- (void)updateTagsAndExecuteBlock:(id)arg1;	// IMP=0x000000000000fee5
- (void)updateTags:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000002c36c
- (void)updateTags:(id)arg1;	// IMP=0x000000000002c358
- (void)executeBlock;	// IMP=0x000000000002c123
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2 delay:(float)arg3;	// IMP=0x00000000000041a2
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005ca2

@end
