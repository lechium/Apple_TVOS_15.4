//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/KGNode-Protocol.h>
#import <KnowledgeGraphKit/MAElement-Protocol.h>
#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class MAGraphReference, NSArray, NSDictionary, NSString;
@protocol MAGraphProxy, MANodeImplementationProtocol;

@interface MANode : NSObject <MAElement, NSCopying, KGNode>
{
    unsigned long long _identifier;	// 8 = 0x8
    MAGraphReference *_graphReference;	// 16 = 0x10
    id <MANodeImplementationProtocol> _implementation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000105227
@property(retain, nonatomic) id <MANodeImplementationProtocol> implementation; // @synthesize implementation=_implementation;
@property(retain, nonatomic) MAGraphReference *graphReference; // @synthesize graphReference=_graphReference;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (unsigned long long)memoryFootprint:(id)arg1;	// IMP=0x0000000000105127
- (id)associatedNodesForRemoval;	// IMP=0x000000000010510e
- (id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2;	// IMP=0x0000000000104eec
- (id)visualStringWithName:(id)arg1;	// IMP=0x0000000000104ed8
- (id)visualString;	// IMP=0x0000000000104ec4
- (id)resolvedNode;	// IMP=0x0000000000104ebb
- (void)setShouldStoreResolvedNode;	// IMP=0x0000000000104eb5
- (id)shortestPathToNode:(id)arg1 directed:(_Bool)arg2;	// IMP=0x0000000000104e29
- (void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000104d18
- (void)enumerateSiblingNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000104c59
- (void)enumerateNeighborEdgesAndNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000104bbb
- (void)enumerateNeighborNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000104b1d
- (id)siblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x0000000000104a6a
- (id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x0000000000104a4d
- (id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x0000000000104a30
- (id)neighborNodesThroughInEdges;	// IMP=0x0000000000104a14
- (id)neighborNodesThroughOutEdges;	// IMP=0x00000000001049f8
- (id)neighborNodes;	// IMP=0x00000000001049e2
- (id)anyNeighborNodeThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3;	// IMP=0x00000000001048b0
- (id)neighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3;	// IMP=0x00000000001047c7
- (id)neighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x00000000001046e6
- (_Bool)hasEdge:(id)arg1 isIn:(_Bool *)arg2;	// IMP=0x00000000001044b8
- (void)enumerateNeighborNodesThroughInEdgesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000104436
- (void)enumerateNeighborEdgesAndNodesThroughInEdgesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001043b4
- (void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000104332
- (void)enumerateNeighborEdgesAndNodesThroughOutEdgesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001042b0
- (void)enumerateEdgesInDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000104084
- (void)enumerateNeighborEdgesAndNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103fe1
- (void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103f3e
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000103e95
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 matchingFilter:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103e7f
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 inDomain:(unsigned short)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000103dd6
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000103d59
- (void)enumerateNeighborEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000103cdc
- (void)enumerateNeighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103c3e
- (void)enumerateEdgesWithDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000103a12
- (void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000010396f
- (void)enumerateOutEdgesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001038ed
- (void)enumerateInEdgesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010386b
- (void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001037e9
- (void)enumerateEdgesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000103767
- (_Bool)hasEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x00000000001036df
- (id)anyEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x00000000001036c2
- (unsigned long long)countOfEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x0000000000103638
- (id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2;	// IMP=0x000000000010361b
- (id)allEdges;	// IMP=0x00000000001035ff
- (id)anyEdgeOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3;	// IMP=0x00000000001034fb
- (id)edgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3;	// IMP=0x0000000000103440
- (void)enumerateEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000103397
- (id)anyEdgeWithNode:(id)arg1;	// IMP=0x000000000010337d
- (id)anyEdgeFromNode:(id)arg1;	// IMP=0x0000000000103363
- (id)anyEdgeTowardNode:(id)arg1;	// IMP=0x0000000000103349
- (id)edgesWithNode:(id)arg1;	// IMP=0x000000000010332f
- (id)edgesFromNode:(id)arg1;	// IMP=0x0000000000103315
- (id)edgesTowardNode:(id)arg1;	// IMP=0x00000000001032fb
- (id)anyEdgeOfType:(unsigned long long)arg1 withNode:(id)arg2;	// IMP=0x00000000001031fd
- (id)edgesOfType:(unsigned long long)arg1 withNode:(id)arg2;	// IMP=0x000000000010314a
- (void)enumerateEdgesOfType:(unsigned long long)arg1 withNode:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103134
- (_Bool)hasEdgeWithNode:(id)arg1;	// IMP=0x0000000000103116
- (_Bool)hasEdgeFromNode:(id)arg1;	// IMP=0x00000000001030f8
- (_Bool)hasEdgeTowardNode:(id)arg1;	// IMP=0x00000000001030da
- (unsigned long long)outEdgesCount;	// IMP=0x000000000010307a
- (unsigned long long)inEdgesCount;	// IMP=0x000000000010301a
- (unsigned long long)edgesCount;	// IMP=0x0000000000102fba
- (_Bool)isUnique;	// IMP=0x0000000000102ec4
- (_Bool)isOrphan;	// IMP=0x0000000000102eab
- (id)changingPropertiesWithProperties:(id)arg1;	// IMP=0x0000000000102d3b
- (id)propertyDictionary;	// IMP=0x0000000000102d09
- (id)propertyKeys;	// IMP=0x0000000000102cd7
- (unsigned long long)propertiesCount;	// IMP=0x0000000000102ca5
- (_Bool)hasProperties;	// IMP=0x0000000000102c73
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000102c01
- (_Bool)isIdentifiedByProperties:(id)arg1;	// IMP=0x0000000000102bef
- (id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;	// IMP=0x0000000000102b98
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000102ad9
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000001029b7
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000001029a5
- (_Bool)matchesNode:(id)arg1 includingProperties:(_Bool)arg2;	// IMP=0x0000000000102867
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x0000000000102756
- (_Bool)isSameNodeAsNode:(id)arg1;	// IMP=0x000000000010269f
- (_Bool)hasEqualPropertiesToNode:(id)arg1;	// IMP=0x000000000010260e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010248d
- (void)resolveIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000102483
@property(readonly, copy, nonatomic) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSArray *labels;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x0000000000102300
- (id)shortDescription;	// IMP=0x00000000001021b6
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MAGraphProxy> graph;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000102102
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x0000000000102007
- (id)init;	// IMP=0x0000000000101fd8
- (_Bool)conformsToNodeSchema:(id)arg1;	// IMP=0x0000000000105c14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned short domain; // @dynamic domain;
@property(readonly, copy, nonatomic) NSString *label; // @dynamic label;
@property(readonly) Class superclass;
@property(readonly, nonatomic) float weight; // @dynamic weight;

@end

