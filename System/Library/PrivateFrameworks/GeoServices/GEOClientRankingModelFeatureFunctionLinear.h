//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GEOClientRankingModelFeatureFunctionLinear
{
    float _weight;	// 8 = 0x8
    float _maxRelativeValue;	// 12 = 0xc
    float _meanValue;	// 16 = 0x10
}

@property(readonly, nonatomic) float meanValue; // @synthesize meanValue=_meanValue;
@property(readonly, nonatomic) float maxRelativeValue; // @synthesize maxRelativeValue=_maxRelativeValue;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
- (long long)functionType;	// IMP=0x00000000011c82e1
- (id)initWithWeight:(float)arg1 maxRelativeValue:(float)arg2 meanValue:(float)arg3;	// IMP=0x00000000011c826b
- (id)init;	// IMP=0x00000000011c8241

@end

