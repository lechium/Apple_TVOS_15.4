//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CVNLPDecodingLanguageModel;

@interface CHTransliterateFrenchLigaturesStep
{
    CVNLPDecodingLanguageModel *_characterLM;	// 8 = 0x8
    const struct _LXLexicon *_staticLexicon;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000186aa0
@property(nonatomic) const struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(retain, nonatomic) CVNLPDecodingLanguageModel *characterLM; // @synthesize characterLM=_characterLM;
- (id)handleFrenchLigaturesInToken:(id)arg1;	// IMP=0x0000000000186090
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x0000000000185720
- (id)initWithCharacterLM:(id)arg1 staticLexicon:(struct _LXLexicon *)arg2;	// IMP=0x0000000000185680

@end

