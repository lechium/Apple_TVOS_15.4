//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol FMQueueingStrategy;

@interface FMQueue : NSObject
{
    NSMutableArray *_buffer;	// 8 = 0x8
    id <FMQueueingStrategy> _strategy;	// 16 = 0x10
}

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000378a
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000000371e
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003694
- (void).cxx_destruct;	// IMP=0x0000000000003a37
- (id)drain;	// IMP=0x00000000000039d6
- (void)dequeueObject:(id)arg1;	// IMP=0x00000000000039c0
- (id)dequeue;	// IMP=0x0000000000003956
- (id)peek;	// IMP=0x0000000000003940
- (void)enqueue:(id)arg1;	// IMP=0x0000000000003926
@property(readonly) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (id)initWithStrategy:(id)arg1;	// IMP=0x000000000000385a
- (id)init;	// IMP=0x000000000000381a

@end

