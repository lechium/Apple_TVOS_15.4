//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject
{
    NSArray *_orderedObjects;	// 8 = 0x8
    REDependencyGraph *_dependencyGraph;	// 16 = 0x10
    _Bool _needsUpdate;	// 24 = 0x18
    unsigned long long _batchCount;	// 32 = 0x20
    NSArray *_comparators;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008bc6b
@property(readonly, nonatomic) NSArray *comparators; // @synthesize comparators=_comparators;
- (void)_updateContentOrder;	// IMP=0x000000000008bb88
- (void)_performOrMarkUpdate;	// IMP=0x000000000008bb69
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000008bb0c
- (void)sortAllObjects;	// IMP=0x000000000008bafa
- (void)updateObject:(id)arg1;	// IMP=0x000000000008ba77
- (void)removeObject:(id)arg1;	// IMP=0x000000000008ba45
- (void)addObject:(id)arg1;	// IMP=0x000000000008b9d4
- (void)_createDependenciesForObject:(id)arg1;	// IMP=0x000000000008b83a
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000008b824
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008b80e
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000008b7f8
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000008b7e2
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithComparators:(id)arg1;	// IMP=0x000000000008b71f

@end

