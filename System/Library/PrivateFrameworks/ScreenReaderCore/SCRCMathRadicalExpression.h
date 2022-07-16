//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathRadicalExpression
{
    SCRCMathExpression *_radicand;	// 24 = 0x18
    SCRCMathExpression *_rootIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000162e1
@property(retain, nonatomic) SCRCMathExpression *rootIndex; // @synthesize rootIndex=_rootIndex;
@property(retain, nonatomic) SCRCMathExpression *radicand; // @synthesize radicand=_radicand;
- (id)latexMathModeDescription;	// IMP=0x00000000000161bc
- (id)mathMLString;	// IMP=0x0000000000016034
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x0000000000015bc4
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x0000000000015776
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x00000000000155a5
- (unsigned long long)fractionLevel;	// IMP=0x0000000000015593
- (_Bool)_isCubeRoot;	// IMP=0x000000000001550c
- (_Bool)_isSquareRoot;	// IMP=0x0000000000015460
- (id)subExpressions;	// IMP=0x00000000000153da
- (id)description;	// IMP=0x0000000000015310
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000151ce

@end
