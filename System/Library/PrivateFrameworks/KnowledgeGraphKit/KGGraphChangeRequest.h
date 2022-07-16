//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KGMutableElementIdentifierSet, NSMutableArray;

@interface KGGraphChangeRequest : NSObject
{
    NSMutableArray *_nodesToInsert;	// 8 = 0x8
    NSMutableArray *_edgesToInsert;	// 16 = 0x10
    NSMutableArray *_nodeUpdates;	// 24 = 0x18
    NSMutableArray *_edgeUpdates;	// 32 = 0x20
    KGMutableElementIdentifierSet *_nodeIdentifiersToRemove;	// 40 = 0x28
    KGMutableElementIdentifierSet *_edgeIdentifiersToRemove;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000131e2c
@property(retain, nonatomic) KGMutableElementIdentifierSet *edgeIdentifiersToRemove; // @synthesize edgeIdentifiersToRemove=_edgeIdentifiersToRemove;
@property(retain, nonatomic) KGMutableElementIdentifierSet *nodeIdentifiersToRemove; // @synthesize nodeIdentifiersToRemove=_nodeIdentifiersToRemove;
@property(retain, nonatomic) NSMutableArray *edgeUpdates; // @synthesize edgeUpdates=_edgeUpdates;
@property(retain, nonatomic) NSMutableArray *nodeUpdates; // @synthesize nodeUpdates=_nodeUpdates;
@property(retain, nonatomic) NSMutableArray *edgesToInsert; // @synthesize edgesToInsert=_edgesToInsert;
@property(retain, nonatomic) NSMutableArray *nodesToInsert; // @synthesize nodesToInsert=_nodesToInsert;
- (void)removeEdgesForIdentifiers:(id)arg1;	// IMP=0x0000000000131d74
- (void)removeEdge:(id)arg1;	// IMP=0x0000000000131d3f
- (void)updateEdge:(id)arg1 newProperties:(id)arg2;	// IMP=0x0000000000131cad
- (void)updateEdge:(id)arg1 newWeight:(float)arg2;	// IMP=0x0000000000131bf6
- (void)updateEdge:(id)arg1 newWeight:(float)arg2 newProperties:(id)arg3;	// IMP=0x0000000000131b26
- (void)insertEdge:(id)arg1;	// IMP=0x0000000000131b10
- (void)removeNodesForIdentifiers:(id)arg1;	// IMP=0x0000000000131afa
- (void)removeNode:(id)arg1;	// IMP=0x0000000000131ac5
- (void)updateNode:(id)arg1 newProperties:(id)arg2;	// IMP=0x0000000000131a33
- (void)updateNode:(id)arg1 newWeight:(float)arg2;	// IMP=0x000000000013197c
- (void)updateNode:(id)arg1 newWeight:(float)arg2 newProperties:(id)arg3;	// IMP=0x00000000001318ac
- (void)insertNode:(id)arg1;	// IMP=0x0000000000131896
- (void)setResolved;	// IMP=0x000000000013182c
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x00000000001316ca

@end
