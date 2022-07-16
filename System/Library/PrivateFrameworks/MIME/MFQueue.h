//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol MFQueueingStrategy;

@interface MFQueue : NSObject
{
    NSMutableArray *_buffer;	// 8 = 0x8
    id <MFQueueingStrategy> _strategy;	// 16 = 0x10
}

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000000546d
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000053fe
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000539e
@property(readonly, nonatomic) id <MFQueueingStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) NSArray *allObjects;
- (id)drain;	// IMP=0x0000000000005775
- (void)dequeueObject:(id)arg1;	// IMP=0x000000000000575b
- (id)dequeue;	// IMP=0x0000000000005721
- (id)peek;	// IMP=0x00000000000056fa
- (void)enqueue:(id)arg1;	// IMP=0x00000000000056e0
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000005652
- (id)debugDescription;	// IMP=0x00000000000055af
- (void)dealloc;	// IMP=0x0000000000005565
- (id)initWithStrategy:(id)arg1;	// IMP=0x0000000000005505
- (id)init;	// IMP=0x00000000000054cf

@end

