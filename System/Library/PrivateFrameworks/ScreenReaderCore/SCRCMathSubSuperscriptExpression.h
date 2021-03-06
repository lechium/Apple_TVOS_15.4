//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathSubSuperscriptExpression
{
    SCRCMathExpression *_base;	// 24 = 0x18
    SCRCMathExpression *_subscript;	// 32 = 0x20
    SCRCMathExpression *_superscript;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001aa9a
@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
@property(retain, nonatomic) SCRCMathExpression *superscript; // @synthesize superscript=_superscript;
@property(retain, nonatomic) SCRCMathExpression *subscript; // @synthesize subscript=_subscript;
- (id)latexMathModeDescription;	// IMP=0x000000000001a92c
- (id)mathMLString;	// IMP=0x000000000001a5b2
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x000000000001a238
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x000000000001967f
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000018fbf
- (id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id *)arg3;	// IMP=0x0000000000018c21
- (id)subExpressions;	// IMP=0x0000000000018b77
- (unsigned long long)fractionLevel;	// IMP=0x0000000000018b33
- (_Bool)isNumber;	// IMP=0x0000000000018aef
- (_Bool)isBaseSubSuperscript;	// IMP=0x0000000000018a0d
- (_Bool)isRangeSubSuperscript;	// IMP=0x0000000000018965
- (id)description;	// IMP=0x0000000000018875
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000186bb

@end

