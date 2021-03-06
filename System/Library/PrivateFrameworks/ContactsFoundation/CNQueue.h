//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol CNQueueingStrategy;

@interface CNQueue : NSObject
{
    NSMutableArray *_buffer;	// 8 = 0x8
    id <CNQueueingStrategy> _strategy;	// 16 = 0x10
}

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bf92
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000000bf26
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000be9c
- (void).cxx_destruct;	// IMP=0x000000000000c37d
@property(readonly, nonatomic) id <CNQueueingStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
- (id)drain;	// IMP=0x000000000000c308
- (void)dequeueObject:(id)arg1;	// IMP=0x000000000000c2f2
- (id)dequeue;	// IMP=0x000000000000c288
- (id)peek;	// IMP=0x000000000000c272
- (void)enqueueObjectsFromArray:(id)arg1;	// IMP=0x000000000000c148
- (void)enqueue:(id)arg1;	// IMP=0x000000000000c12e
@property(readonly) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (id)initWithStrategy:(id)arg1;	// IMP=0x000000000000c062
- (id)init;	// IMP=0x000000000000c022

@end

