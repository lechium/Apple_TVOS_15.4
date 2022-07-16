//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathFractionExpression
{
    SCRCMathExpression *_numerator;	// 24 = 0x18
    SCRCMathExpression *_denominator;	// 32 = 0x20
    SCRCMathExpression *_operator;	// 40 = 0x28
    double _lineThickness;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000014019
@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property(retain, nonatomic) SCRCMathExpression *operator; // @synthesize operator=_operator;
@property(retain, nonatomic) SCRCMathExpression *denominator; // @synthesize denominator=_denominator;
@property(retain, nonatomic) SCRCMathExpression *numerator; // @synthesize numerator=_numerator;
- (id)latexMathModeDescription;	// IMP=0x0000000000013ece
- (id)mathMLString;	// IMP=0x0000000000013d27
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(_Bool)arg1 orMixedNumberFraction:(_Bool)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4;	// IMP=0x0000000000013a23
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;	// IMP=0x0000000000013a04
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;	// IMP=0x00000000000139e5
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x00000000000139c9
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x00000000000139b1
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x000000000001399c
- (id)_speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(_Bool)arg4;	// IMP=0x000000000001352a
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)arg1;	// IMP=0x0000000000013510
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x00000000000134ca
- (id)_speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2 asBinomialCoefficient:(_Bool)arg3;	// IMP=0x0000000000013371
- (_Bool)isSimpleNumericalFraction;	// IMP=0x00000000000132e6
- (unsigned long long)fractionLevel;	// IMP=0x00000000000132d0
- (_Bool)isUnlinedFraction;	// IMP=0x00000000000132ac
- (id)subExpressions;	// IMP=0x0000000000013226
- (id)description;	// IMP=0x000000000001312c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000012e2b

@end
