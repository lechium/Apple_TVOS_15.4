//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, VMUGraphEnumerator;

@interface VMUDominatorGraph : NSObject
{
    VMUGraphEnumerator *_reverseGraphEnumerator;	// 8 = 0x8
    unsigned int _nodeNamespaceSize;	// 16 = 0x10
    NSData *_dominators_data;	// 24 = 0x18
    NSData *_firstDominates_data;	// 32 = 0x20
    NSData *_nextDominates_data;	// 40 = 0x28
    unsigned int *_dominators;	// 48 = 0x30
    unsigned int *_firstDominates;	// 56 = 0x38
    unsigned int *_nextDominates;	// 64 = 0x40
}

+ (id)callTreeWithGraph:(id)arg1 groupByType:(_Bool)arg2 showRegionVirtualSize:(_Bool)arg3 desiredClassesPattern:(id)arg4 debugTimer:(id)arg5;	// IMP=0x0000000000082a69
+ (id)callTreeWithGraph:(id)arg1 groupByType:(_Bool)arg2 showRegionVirtualSize:(_Bool)arg3 desiredAddress:(id)arg4 debugTimer:(id)arg5;	// IMP=0x000000000008299e
+ (id)consolidate:(id)arg1;	// IMP=0x00000000000805ba
- (void).cxx_destruct;	// IMP=0x0000000000082bd3
@property(nonatomic) unsigned int *nextDominates; // @synthesize nextDominates=_nextDominates;
@property(nonatomic) unsigned int *firstDominates; // @synthesize firstDominates=_firstDominates;
@property(nonatomic) unsigned int *dominators; // @synthesize dominators=_dominators;
@property(nonatomic) unsigned int nodeNamespaceSize; // @synthesize nodeNamespaceSize=_nodeNamespaceSize;
@property(retain, nonatomic) NSData *nextDominates_data; // @synthesize nextDominates_data=_nextDominates_data;
@property(retain, nonatomic) NSData *firstDominates_data; // @synthesize firstDominates_data=_firstDominates_data;
@property(retain, nonatomic) NSData *dominators_data; // @synthesize dominators_data=_dominators_data;
- (id)iterDirectDomineesForNodeName:(unsigned int)arg1;	// IMP=0x0000000000082963
- (id)iterDominatorRoots;	// IMP=0x000000000008292d
- (void)enumerateDominatorRootsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000828d2
- (void)enumerateDirectDomineesForNodeName:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082892
- (_Bool)hasAnyDirectDomineesForNodeName:(unsigned int)arg1;	// IMP=0x000000000008287f
- (void)enumerateDomineesForNodeName:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000827a5
- (unsigned int)dominator:(unsigned int)arg1;	// IMP=0x0000000000082796
- (void)_computeDominees:(id)arg1;	// IMP=0x00000000000825e6
- (id)_computeDominators:(id)arg1 roots:(void *)arg2 reversePostOrder:(unsigned int *)arg3 debugTimer:(id)arg4;	// IMP=0x0000000000081fb6
- (id)initWithGraph:(id)arg1 debugTimer:(id)arg2;	// IMP=0x0000000000081dcc
- (id)initWithGraph:(id)arg1;	// IMP=0x0000000000081db8
- (id)fastDFS:(CDUnknownBlockType)arg1 graph:(id)arg2;	// IMP=0x00000000000817cf
- (id)export:(id)arg1;	// IMP=0x00000000000810f6
- (id)copyDict;	// IMP=0x0000000000080528
- (id)initWithDict:(id)arg1;	// IMP=0x00000000000803ff

@end

