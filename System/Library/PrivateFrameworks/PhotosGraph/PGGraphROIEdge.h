//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphROIEdge
{
    float _weight;	// 8 = 0x8
}

+ (id)filter;	// IMP=0x000000000040f0d3
- (float)weight;	// IMP=0x000000000040f0c1
- (unsigned short)domain;	// IMP=0x000000000040f0b6
- (id)label;	// IMP=0x000000000040f097
- (id)edgeDescription;	// IMP=0x000000000040f009
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x000000000040eff1
- (id)initFromMomentNode:(id)arg1 toROINode:(id)arg2 weight:(float)arg3;	// IMP=0x000000000040efa7

@end
