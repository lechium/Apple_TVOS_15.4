//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphAnniversaryEventEdge
{
    float _weight;	// 8 = 0x8
}

+ (id)filter;	// IMP=0x0000000000316a27
- (float)weight;	// IMP=0x0000000000316a15
- (unsigned short)domain;	// IMP=0x0000000000316a0a
- (id)label;	// IMP=0x00000000003169eb
- (id)edgeDescription;	// IMP=0x000000000031695d
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x0000000000316945
- (id)initFromMomentNode:(id)arg1 toPersonNode:(id)arg2 weight:(float)arg3;	// IMP=0x00000000003168fb

@end
