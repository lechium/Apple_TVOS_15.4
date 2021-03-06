//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MABaseGraph, NSMutableDictionary;

@interface MASubGraph : NSObject
{
    MABaseGraph *_graph;	// 8 = 0x8
    NSMutableDictionary *_nodesByIdentifier;	// 16 = 0x10
    NSMutableDictionary *_nodesByLabel;	// 24 = 0x18
    NSMutableDictionary *_nodesByName;	// 32 = 0x20
    NSMutableDictionary *_edgesByIdentifier;	// 40 = 0x28
    NSMutableDictionary *_edgesByLabel;	// 48 = 0x30
    NSMutableDictionary *_edgesByName;	// 56 = 0x38
    NSMutableDictionary *_nodesByNameGroupByNodes;	// 64 = 0x40
}

+ (id)subGraphIntersectionsWithSubGraphs:(id)arg1;	// IMP=0x0000000000128523
+ (id)subGraphWithGraph:(id)arg1;	// IMP=0x00000000001284e0
- (void).cxx_destruct;	// IMP=0x000000000012835a
@property(readonly, nonatomic) MABaseGraph *graph; // @synthesize graph=_graph;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000012833e
- (id)graphRepresentation;	// IMP=0x0000000000127a7b
- (void)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001277d2
- (void)enumerateEdgesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000127646
- (void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000127460
- (void)enumerateEdgesByNameUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001273cc
- (id)allNamedEdges;	// IMP=0x000000000012719d
- (id)allEdges;	// IMP=0x00000000001270de
- (id)edgesNames;	// IMP=0x0000000000126f12
- (id)edgesLabels;	// IMP=0x0000000000126eab
- (unsigned long long)edgesCountForName:(id)arg1;	// IMP=0x0000000000126e63
- (unsigned long long)edgesCountForLabel:(id)arg1;	// IMP=0x0000000000126e1b
- (unsigned long long)edgesCount;	// IMP=0x0000000000126e05
- (id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;	// IMP=0x0000000000126b94
- (id)edgesForName:(id)arg1;	// IMP=0x0000000000126b40
- (id)edgesForLabel:(id)arg1;	// IMP=0x0000000000126aec
- (id)edgeForIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000126a85
- (void)_addEdge:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000126871
- (void)addEdges:(id)arg1 withName:(id)arg2;	// IMP=0x00000000001266cc
- (void)enumerateNodesWithName:(id)arg1 fromNode:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000126612
- (void)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126360
- (void)enumerateNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001261c8
- (void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000125fd6
- (void)enumerateNodesByNameUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000125f47
- (id)allNamedNodes;	// IMP=0x0000000000125d18
- (id)allNodes;	// IMP=0x0000000000125c59
- (id)nodesNames;	// IMP=0x0000000000125a8d
- (id)nodesLabels;	// IMP=0x0000000000125a26
- (unsigned long long)nodesCount;	// IMP=0x0000000000125a10
- (id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;	// IMP=0x000000000012579f
- (unsigned long long)nodesCountForName:(id)arg1 fromNode:(id)arg2;	// IMP=0x0000000000125707
- (unsigned long long)nodesCountForName:(id)arg1;	// IMP=0x00000000001256bf
- (unsigned long long)nodesCountForLabel:(id)arg1;	// IMP=0x0000000000125677
- (id)nodesForName:(id)arg1 fromNode:(id)arg2;	// IMP=0x00000000001255cc
- (id)nodesForNames:(id)arg1;	// IMP=0x00000000001253c8
- (id)nodesForName:(id)arg1;	// IMP=0x0000000000125374
- (id)nodesForLabel:(id)arg1;	// IMP=0x0000000000125320
- (id)nodeForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000001252b9
- (void)_addNode:(id)arg1 withName:(id)arg2 forKeyNode:(id)arg3;	// IMP=0x0000000000125139
- (void)_addNode:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000124f25
- (void)addNodes:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000124d80
- (void)mergeWithSubGraph:(id)arg1;	// IMP=0x00000000001247f1
- (id)description;	// IMP=0x0000000000123f7c
- (id)init;	// IMP=0x0000000000123e81

@end

