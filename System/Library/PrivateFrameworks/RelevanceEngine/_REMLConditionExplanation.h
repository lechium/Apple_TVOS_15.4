//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RECondition;

@interface _REMLConditionExplanation
{
    RECondition *_condition;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004948e
- (id)_hasFeatureExplanation:(id)arg1 withStyle:(unsigned long long)arg2;	// IMP=0x0000000000049394
- (id)_valueExplanation:(id)arg1 withStyle:(unsigned long long)arg2;	// IMP=0x00000000000491e4
- (id)_probabilityExplanation:(id)arg1 withStyle:(unsigned long long)arg2;	// IMP=0x0000000000048ed4
- (id)_featureRuleExplanation:(id)arg1 withStyle:(unsigned long long)arg2;	// IMP=0x0000000000048d05
- (id)_constantConditionExplanationWithStyle:(unsigned long long)arg1;	// IMP=0x0000000000048ce0
- (id)explanationWithStyle:(unsigned long long)arg1;	// IMP=0x0000000000048c17
- (long long)_rankExplanationToSimilarExplanation:(id)arg1;	// IMP=0x0000000000048b59
- (id)explanationByCombiningWithExplanation:(id)arg1;	// IMP=0x0000000000048b0f
- (id)initWithCondition:(id)arg1;	// IMP=0x00000000000489c4

@end

