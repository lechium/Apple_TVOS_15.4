//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KGStoredGraph;

@interface KnowledgeGraphTestEnvironment : NSObject
{
    KGStoredGraph *_graph;	// 8 = 0x8
}

+ (id)testEnvironmentsForOnDiskExistingStores;	// IMP=0x000000000013cb39
+ (id)testEnvironmentsForExistingStores;	// IMP=0x000000000013ca10
+ (id)matisseGraphs;	// IMP=0x000000000013c942
+ (id)environmentWithTestDBWithStoreType:(Class)arg1;	// IMP=0x000000000013c785
+ (id)temporaryURLWithFileExtension:(id)arg1;	// IMP=0x000000000013c665
- (void).cxx_destruct;	// IMP=0x000000000013c655
@property(readonly, nonatomic) KGStoredGraph *graph; // @synthesize graph=_graph;
- (unsigned long long)edgeCount;	// IMP=0x000000000013c5cf
- (unsigned long long)nodeCount;	// IMP=0x000000000013c553
- (void)populateGraph;	// IMP=0x000000000013c0d7
- (_Bool)deleteEdge:(id)arg1;	// IMP=0x000000000013c056
- (_Bool)deleteNode:(id)arg1;	// IMP=0x000000000013bfd5
- (id)refetchEdge:(id)arg1;	// IMP=0x000000000013bfa0
- (id)refetchNode:(id)arg1;	// IMP=0x000000000013bf6b
- (id)addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;	// IMP=0x000000000013be59
- (id)addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3;	// IMP=0x000000000013bd89
- (id)placeholderEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;	// IMP=0x000000000013bc7f
- (id)placeholderNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3;	// IMP=0x000000000013bbb9
- (void)closeAndDeleteEnvironment;	// IMP=0x000000000013bab4
- (id)initWithKGGraph:(id)arg1;	// IMP=0x000000000013ba36

@end
