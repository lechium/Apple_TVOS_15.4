//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MARelation;

@interface MATransitiveClosureRelation
{
    MARelation *_base;	// 8 = 0x8
}

+ (id)scanRelationWithScanner:(id)arg1;	// IMP=0x0000000000139b3e
- (void).cxx_destruct;	// IMP=0x0000000000139b2b
@property(readonly, nonatomic) MARelation *base; // @synthesize base=_base;
- (unsigned long long)hash;	// IMP=0x0000000000139afd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000139a65
- (id)transitiveClosure;	// IMP=0x0000000000139a5c
- (id)visualString;	// IMP=0x00000000001399d7
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;	// IMP=0x000000000013989f
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;	// IMP=0x0000000000139767
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;	// IMP=0x00000000001395e7
- (id)inverse;	// IMP=0x0000000000139576
- (id)initWithBase:(id)arg1;	// IMP=0x0000000000139508

@end
