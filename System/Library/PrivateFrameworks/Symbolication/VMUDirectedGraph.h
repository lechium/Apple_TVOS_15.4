//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Symbolication/NSCopying-Protocol.h>

@class NSDictionary;

@interface VMUDirectedGraph : NSObject <NSCopying>
{
    long long _graphCompatibilityVersion;	// 8 = 0x8
    long long _graphVersion;	// 16 = 0x10
    unsigned int _nodeCount;	// 24 = 0x18
    unsigned int _edgeCount;	// 28 = 0x1c
    unsigned int _edgeCapacity;	// 32 = 0x20
    unsigned int _externalEdges;	// 36 = 0x24
    void *_deadNodes;	// 40 = 0x28
    unsigned int _nextNodeName;	// 48 = 0x30
    unsigned int _nextEdgeName;	// 52 = 0x34
    unsigned int *_nodeAdjIndex;	// 56 = 0x38
    struct _VMUDirectedGraphEdge *_edges;	// 64 = 0x40
    NSDictionary *_additionalProperties;	// 72 = 0x48
    unsigned int _indexedNodeSpace;	// 80 = 0x50
    unsigned int _indexedEdges;	// 84 = 0x54
    int _insideSearch;	// 88 = 0x58
    _Bool _inverted;	// 92 = 0x5c
    _Bool _graphIs64bit;	// 93 = 0x5d
}

+ (_Bool)encapsulateData:(id)arg1 to:(id)arg2 withSupplementalDataTag:(const char *)arg3 error:(id *)arg4 dataGeneratorBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000087171
+ (id)directedGraphWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000086bea
+ (id)_unarchivedObject:(id)arg1 ofClass:(Class)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000008659d
+ (void)setupUnarchivingClaimsForClass:(Class)arg1;	// IMP=0x00000000000863dc
+ (id)_archivedObject:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000085e1c
+ (void *)_copyUnarchived:(id)arg1 length:(unsigned long long *)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000859ab
+ (id)_archivedBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000085464
- (void).cxx_destruct;	// IMP=0x000000000008bd06
@property(readonly, nonatomic) _Bool graphIs64bit; // @synthesize graphIs64bit=_graphIs64bit;
@property(copy, nonatomic) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, nonatomic) unsigned int edgeNamespaceSize; // @synthesize edgeNamespaceSize=_nextEdgeName;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize; // @synthesize nodeNamespaceSize=_nextNodeName;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_nodeCount;
- (id)invertedGraph;	// IMP=0x000000000008bc77
- (id)renormalizedGraph;	// IMP=0x000000000008bc43
- (id)subgraphWithMarkedNodes:(void *)arg1;	// IMP=0x000000000008bb83
- (void)invertEdges;	// IMP=0x000000000008bb50
- (void)_dumpAdjacencyList;	// IMP=0x000000000008ba30
- (void)_reorderEdgesNaturally;	// IMP=0x000000000008b924
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000008b795
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000008b604
- (void)_searchMainLoop:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x000000000008b4e7
- (void)_bfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(CDUnknownBlockType)arg3 examineBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000008b195
- (void)_dfsCore:(unsigned int)arg1 colors:(char *)arg2 visitBlock:(CDUnknownBlockType)arg3 examineBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000008ad8a
- (void)withEdgeMarkingMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000008ad28
- (void)withNodeMarkingMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000008acc6
- (unsigned int)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008abf5
- (unsigned int)_internalEnumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a860
- (void)_internalAccessRawEdgesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a7f6
- (unsigned int)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a620
@property(readonly, nonatomic) unsigned int edgeCount;
- (unsigned int)parentGroupForNode:(unsigned int)arg1;	// IMP=0x000000000008a56d
- (unsigned int)enumerateMembersOfGroupNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008a412
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a31a
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;	// IMP=0x000000000008a1e7
- (void)_renormalize;	// IMP=0x0000000000089ff9
- (_Bool)_adjustAdjacencyMap;	// IMP=0x0000000000089c0e
@property(readonly, nonatomic) unsigned int pointerSize;
@property(nonatomic) _Bool inverted;
- (void)ungroupNode:(unsigned int)arg1;	// IMP=0x0000000000089a1e
- (unsigned int)addGroupNodeForNodes:(const unsigned int *)arg1 count:(unsigned int)arg2;	// IMP=0x00000000000898ff
- (_Bool)isNodePresent:(unsigned int)arg1;	// IMP=0x00000000000898b6
- (void)removeMarkedEdges:(void *)arg1;	// IMP=0x00000000000897fb
- (void)removeMarkedNodes:(void *)arg1;	// IMP=0x0000000000089527
- (void *)deadNodeMap;	// IMP=0x000000000008951d
- (void)_faultDeadNodeMap;	// IMP=0x000000000008945b
- (void)_removeEdges:(CDUnknownBlockType)arg1;	// IMP=0x000000000008934e
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;	// IMP=0x00000000000892b9
- (void)_internalAddEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2 withName:(unsigned int)arg3;	// IMP=0x00000000000891f3
- (unsigned int)addNode;	// IMP=0x00000000000891e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000890c4
- (void)dealloc;	// IMP=0x0000000000089051
- (id)plistRepresentationWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000088d3f
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000008893d
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000088368
- (id)initWithPlistRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000087b8a
- (id)initWithPlistRepresentation:(id)arg1;	// IMP=0x0000000000087b76
- (id)decapsulateIPSheaderInData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000087766
- (id)decapsulateSupplementalData:(id)arg1 forTag:(const char *)arg2;	// IMP=0x0000000000086f6c
- (id)decapsulatePlistData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000086e17
- (void)setGraphVersion:(long long)arg1;	// IMP=0x0000000000086be0
- (void)setGraphCompatibilityVersion:(long long)arg1;	// IMP=0x0000000000086bd6
- (id)initWithNodes:(unsigned int)arg1;	// IMP=0x0000000000086b78

@end

