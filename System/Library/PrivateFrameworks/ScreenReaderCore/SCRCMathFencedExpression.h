//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathFencedExpression
{
    NSString *_openString;	// 32 = 0x20
    NSString *_closeString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000012dfa
@property(copy, nonatomic) NSString *closeString; // @synthesize closeString=_closeString;
@property(copy, nonatomic) NSString *openString; // @synthesize openString=_openString;
- (id)latexDescriptionInMathMode:(_Bool)arg1;	// IMP=0x0000000000012c5d
- (id)mathMLAttributes;	// IMP=0x0000000000012b72
- (id)mathMLTag;	// IMP=0x0000000000012b65
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x00000000000128f3
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x000000000001263c
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x00000000000123d0
- (unsigned long long)fractionLevel;	// IMP=0x0000000000012343
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;	// IMP=0x000000000001232c
- (id)_binomialCoefficientContent;	// IMP=0x00000000000122dc
- (_Bool)_isBinomialCoefficient;	// IMP=0x00000000000121ab
- (id)description;	// IMP=0x00000000000120e1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000011fb8

@end

