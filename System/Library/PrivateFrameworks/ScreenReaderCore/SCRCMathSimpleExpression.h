//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathSimpleExpression
{
    NSString *_content;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001863c
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)latexMathModeDescription;	// IMP=0x00000000000185bb
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x000000000001852e
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x000000000001848f
- (_Bool)canBeUsedWithBase;	// IMP=0x00000000000183f8
- (_Bool)isFunctionName;	// IMP=0x0000000000018384
- (id)_functionNames;	// IMP=0x0000000000018318
- (_Bool)isWordOrAbbreviation;	// IMP=0x00000000000182ad
- (long long)integerValue;	// IMP=0x0000000000018269
- (_Bool)isInteger;	// IMP=0x00000000000181af
- (id)description;	// IMP=0x000000000001810a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001804a

@end

