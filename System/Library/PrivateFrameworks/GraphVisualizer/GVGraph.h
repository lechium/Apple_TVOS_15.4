//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface GVGraph : NSObject
{
    NSMutableOrderedSet *nodes;	// 8 = 0x8
    NSMutableOrderedSet *edges;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableOrderedSet *edges; // @synthesize edges;
@property(retain, nonatomic) NSMutableOrderedSet *nodes; // @synthesize nodes;
- (id)description;	// IMP=0x0000000000003960
- (void)iterateOverAllNodes:(CDUnknownBlockType)arg1;	// IMP=0x000000000000394a
- (void)iterateOverAllEdges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003934
- (_Bool)render:(id)arg1;	// IMP=0x000000000000386d
@property(readonly, nonatomic) struct CGRect bounds;
- (id)connectedSubgraphs;	// IMP=0x00000000000035c1
- (void)undoReverseEdge:(id)arg1;	// IMP=0x0000000000003539
- (void)reverseEdge:(id)arg1;	// IMP=0x00000000000034ae
- (void)addEdgeFrom:(id)arg1 to:(id)arg2 reversed:(_Bool)arg3;	// IMP=0x00000000000033e4
- (void)removeEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000003371
- (void)addEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000032c2
- (_Bool)hasEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000000325c
- (id)edgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000003091
- (id)allEdges;	// IMP=0x000000000000307b
- (void)removeNode:(id)arg1;	// IMP=0x0000000000003065
- (void)addNode:(id)arg1;	// IMP=0x000000000000304f
- (_Bool)hasNode:(id)arg1;	// IMP=0x0000000000003039
- (id)allNodes;	// IMP=0x0000000000003023
- (void)dealloc;	// IMP=0x0000000000002fd9
- (id)init;	// IMP=0x0000000000002f7d

@end

