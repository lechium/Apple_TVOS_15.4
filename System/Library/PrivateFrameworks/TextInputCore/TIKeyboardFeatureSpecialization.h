//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject
{
    NSString *m_softwareLayout;	// 8 = 0x8
    struct USet *m_precomposedCharacterSet;	// 16 = 0x10
    struct USet *m_acceptableCharacterSet;	// 24 = 0x18
    NSMutableDictionary *m_compositionMaps;	// 32 = 0x20
    NSMutableDictionary *m_reverseCompositionMaps;	// 40 = 0x28
    _Bool _useRelaxedOVSPolicy;	// 48 = 0x30
    _Bool _skipCandidateQualityFilter;	// 49 = 0x31
    TIInputMode *_inputMode;	// 56 = 0x38
    long long _currentUserInterfaceIdiom;	// 64 = 0x40
}

+ (id)createSpecializationForInputMode:(id)arg1;	// IMP=0x000000000005fe98
+ (struct USet *)createAcceptableCharacterSetForKeyboardLocale:(id)arg1;	// IMP=0x0000000000061dfb
+ (id)findPrefixMatchesFor:(id)arg1 fromIndex:(unsigned long long)arg2 usingCompositionMap:(id)arg3 matchesInputAsPrefix:(_Bool)arg4;	// IMP=0x0000000000061b65
- (void).cxx_destruct;	// IMP=0x000000000005fdc8
@property(nonatomic) _Bool skipCandidateQualityFilter; // @synthesize skipCandidateQualityFilter=_skipCandidateQualityFilter;
@property(nonatomic) _Bool useRelaxedOVSPolicy; // @synthesize useRelaxedOVSPolicy=_useRelaxedOVSPolicy;
@property(nonatomic) long long currentUserInterfaceIdiom; // @synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (_Bool)shouldConvertEagerly;	// IMP=0x000000000005fd88
- (id)replacementForDoubleSpace;	// IMP=0x000000000005fd16
- (id)accentKeyStringForKeyboardState:(id)arg1;	// IMP=0x000000000005fd0e
- (id)layoutTags;	// IMP=0x000000000005fcbe
- (id)allAccentKeyStrings;	// IMP=0x000000000005fc6e
- (id)wordSeparator;	// IMP=0x000000000005fc61
- (_Bool)shouldLearnLowercaseAtBeginningOfSentence;	// IMP=0x000000000005fc59
- (_Bool)shouldAddModifierSymbolsToWordCharacters;	// IMP=0x000000000005fc51
- (_Bool)supportsLearning;	// IMP=0x000000000005fc49
- (_Bool)shouldExtendPriorWord;	// IMP=0x000000000005fc41
- (id)keyboardBehaviors;	// IMP=0x000000000005fc39
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;	// IMP=0x000000000005fb40
- (void)dealloc;	// IMP=0x000000000005fad5
- (id)initWithInputMode:(id)arg1;	// IMP=0x000000000005fa6a
- (_Bool)shouldConvertAutocorrectionCandidatesToFullWidth;	// IMP=0x0000000000061a1c
- (id)dictionaryInputMode;	// IMP=0x0000000000061a0a
- (_Bool)allowsAutocorrectionOfValidWords;	// IMP=0x0000000000061a02
- (_Bool)shouldConvertCandidateToExternal;	// IMP=0x00000000000619fa
- (const struct USet *)precomposedCharacterSet;	// IMP=0x00000000000619bd
- (_Bool)canHandleKeyHitTest;	// IMP=0x00000000000619b5
- (_Bool)dictionaryUsesExternalEncoding;	// IMP=0x00000000000619ad
- (struct USet *)createAcceptableCharacterSet;	// IMP=0x0000000000061935
- (_Bool)acceptsCharacter:(unsigned int)arg1;	// IMP=0x00000000000618f6
- (unsigned long long)maxPriorWordTokensAfterTrimming;	// IMP=0x00000000000618eb
- (id)terminatorsDeletingAutospace;	// IMP=0x00000000000618bb
- (id)wordCharacters;	// IMP=0x0000000000061844
- (id)sentenceTrailingCharacters;	// IMP=0x00000000000617d2
- (id)sentenceDelimitingCharacters;	// IMP=0x0000000000061760
- (id)sentencePrefixingCharacters;	// IMP=0x00000000000616ee
- (id)nonstopPunctuationCharacters;	// IMP=0x000000000006167c
- (id)internalStringToExternal:(id)arg1;	// IMP=0x000000000006151a
- (id)externalStringToInternal:(id)arg1;	// IMP=0x000000000006111c
- (_Bool)shouldClearInput:(id)arg1;	// IMP=0x0000000000060e80
- (id)findPrefixMatchesFor:(id)arg1 fromIndex:(unsigned long long)arg2 usingCompositionMap:(id)arg3 matchesInputAsPrefix:(_Bool)arg4;	// IMP=0x0000000000060c0f
- (id)getComposedStringFor:(id)arg1 usingMap:(id)arg2 byConvertingEagerly:(_Bool)arg3;	// IMP=0x0000000000060928
- (id)getComposedStringFor:(id)arg1 usingMap:(id)arg2;	// IMP=0x0000000000060899
- (id)compositionMapForLayout:(id)arg1 reverse:(_Bool)arg2;	// IMP=0x0000000000060356
- (_Bool)doesComposeText;	// IMP=0x0000000000060312
- (void)specializeInputManager:(void *)arg1 forLayoutState:(id)arg2;	// IMP=0x00000000000602dd
- (void *)createInputManager;	// IMP=0x00000000000601e2

@end

