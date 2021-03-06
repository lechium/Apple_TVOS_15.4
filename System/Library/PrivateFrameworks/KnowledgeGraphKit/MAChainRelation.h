//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MAChainRelation
{
    NSArray *_steps;	// 8 = 0x8
}

+ (id)scanRelationWithScanner:(id)arg1;	// IMP=0x00000000001393e0
- (void).cxx_destruct;	// IMP=0x00000000001393cd
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
- (unsigned long long)hash;	// IMP=0x0000000000139261
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001391ca
- (id)visualString;	// IMP=0x000000000013901e
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;	// IMP=0x0000000000138e86
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;	// IMP=0x0000000000138c5f
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;	// IMP=0x0000000000138a55
- (id)inverse;	// IMP=0x000000000013887b
- (id)initWithSteps:(id)arg1;	// IMP=0x000000000013880d

@end

