//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphPartOfDayEdge
{
    float _weight;	// 8 = 0x8
}

+ (id)filter;	// IMP=0x0000000000162341
- (float)weight;	// IMP=0x000000000016232f
- (unsigned short)domain;	// IMP=0x0000000000162324
- (id)label;	// IMP=0x0000000000162305
- (id)edgeDescription;	// IMP=0x0000000000162277
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x000000000016225f
- (id)initFromMomentNode:(id)arg1 toPartOfDayNode:(id)arg2 weight:(float)arg3;	// IMP=0x0000000000162215

@end

