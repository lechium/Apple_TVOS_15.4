//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphNodeCollection;

@interface PGMeaningfulEventCollectionTrait
{
    PGGraphNodeCollection *_nodes;	// 16 = 0x10
    PGGraphNodeCollection *_negativeNodes;	// 24 = 0x18
    CDUnknownBlockType _additionalMatchingBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004e4aae
@property(copy, nonatomic) CDUnknownBlockType additionalMatchingBlock; // @synthesize additionalMatchingBlock=_additionalMatchingBlock;
@property(readonly, nonatomic) PGGraphNodeCollection *negativeNodes; // @synthesize negativeNodes=_negativeNodes;
@property(readonly, nonatomic) PGGraphNodeCollection *nodes; // @synthesize nodes=_nodes;
- (id)debugDescriptionWithMomentNode:(id)arg1;	// IMP=0x00000000004e48ed
- (_Bool)isActive;	// IMP=0x00000000004e489f
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;	// IMP=0x00000000004e47fd
- (id)initWithNodes:(id)arg1;	// IMP=0x00000000004e47e9

@end

