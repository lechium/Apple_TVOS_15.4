//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GVRank : NSObject
{
    NSMutableArray *nodes;	// 8 = 0x8
    double separation;	// 16 = 0x10
    GVRank *prev;	// 24 = 0x18
    GVRank *next;	// 32 = 0x20
}

@property(nonatomic) GVRank *next; // @synthesize next;
@property(nonatomic) GVRank *prev; // @synthesize prev;
- (void)centerNode:(id)arg1 at:(double)arg2;	// IMP=0x00000000000049fa
- (void)centerNodesWithRespectoTo:(id)arg1;	// IMP=0x00000000000049f4
- (struct CGSize)sizeForDummy;	// IMP=0x00000000000049de
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (unsigned long long)outCrossings;	// IMP=0x0000000000004607
- (unsigned long long)inCrossings;	// IMP=0x0000000000004242
- (void)buildNodeIterators;	// IMP=0x0000000000004182
- (void)exchangeNodeAtIndex:(unsigned long long)arg1 withNodeAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000040dc
- (void)sortByIndex;	// IMP=0x000000000000404e
- (id)neighborsOfNode:(id)arg1;	// IMP=0x0000000000003ea3
- (void)removeNode:(id)arg1;	// IMP=0x0000000000003d75
- (void)addNode:(id)arg1;	// IMP=0x0000000000003cc1
- (id)nodes;	// IMP=0x0000000000003cb7
- (void)dealloc;	// IMP=0x0000000000003c72
- (id)initWithSeparation:(struct CGSize)arg1;	// IMP=0x0000000000003c1f

@end
