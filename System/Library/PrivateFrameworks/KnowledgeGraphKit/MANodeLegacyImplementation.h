//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/MANodeImplementationProtocol-Protocol.h>

@class MANode, NSMutableArray, NSString;

@interface MANodeLegacyImplementation : NSObject <MANodeImplementationProtocol>
{
    NSMutableArray *_edges;	// 8 = 0x8
    MANode *_node;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ca4c5
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ca3e6
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ca304
- (void)enumerateNeighborNodesMatchingFilter:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca26a
- (void)enumerateNeighborEdgesAndNodesMatchingFilter:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca0cf
- (void)enumerateEdgesOfType:(unsigned long long)arg1 withNode:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c9fdf
- (unsigned long long)memoryFootprint:(id)arg1;	// IMP=0x00000000000c9f8a
- (void)removeEdge:(id)arg1;	// IMP=0x00000000000c9f74
- (void)addEdge:(id)arg1;	// IMP=0x00000000000c9f5e
- (_Bool)hasEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;	// IMP=0x00000000000c9e44
- (void)enumerateEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c9d21
- (void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c9bab
- (_Bool)hasEdgeOfType:(unsigned long long)arg1 matchingFilter:(id)arg2;	// IMP=0x00000000000c9adc
- (unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2;	// IMP=0x00000000000c9a0d
- (id)initWithNode:(id)arg1;	// IMP=0x00000000000c998f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

