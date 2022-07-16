//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MARelation;

@interface MAMultiStepRelation
{
    MARelation *_base;	// 8 = 0x8
    unsigned long long _minNumberOfSteps;	// 16 = 0x10
    unsigned long long _maxNumberOfSteps;	// 24 = 0x18
}

+ (id)scanRelationWithScanner:(id)arg1;	// IMP=0x00000000000dc9ee
- (void).cxx_destruct;	// IMP=0x00000000000dc9db
@property(readonly, nonatomic) unsigned long long maxNumberOfSteps; // @synthesize maxNumberOfSteps=_maxNumberOfSteps;
@property(readonly, nonatomic) unsigned long long minNumberOfSteps; // @synthesize minNumberOfSteps=_minNumberOfSteps;
@property(readonly, nonatomic) MARelation *base; // @synthesize base=_base;
- (unsigned long long)hash;	// IMP=0x00000000000dc934
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dc833
- (id)visualString;	// IMP=0x00000000000dc75b
- (id)adjacencyByJoiningWithAdjacency:(id)arg1 graph:(id)arg2;	// IMP=0x00000000000dc5ec
- (id)adjacencyWithStartNodeIdentifiers:(id)arg1 graph:(id)arg2;	// IMP=0x00000000000dc55a
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graph:(id)arg3;	// IMP=0x00000000000dc3a0
- (id)inverse;	// IMP=0x00000000000dc31a
- (id)initWithBase:(id)arg1 numberOfSteps:(unsigned long long)arg2;	// IMP=0x00000000000dc305
- (id)initWithBase:(id)arg1 minNumberOfSteps:(unsigned long long)arg2 maxNumberOfSteps:(unsigned long long)arg3;	// IMP=0x00000000000dc273

@end
