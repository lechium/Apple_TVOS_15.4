//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLocale;

@interface CHRecognizerConfiguration : NSObject
{
    unsigned long long _language;	// 8 = 0x8
    unsigned long long _script;	// 16 = 0x10
    NSDictionary *_decoderWeightsOverride;	// 24 = 0x18
    _Bool _enableCachingIfAvailable;	// 32 = 0x20
    _Bool _enableGen2ModelIfAvailable;	// 33 = 0x21
    _Bool _enableGen2CharacterLMIfAvailable;	// 34 = 0x22
    int _mode;	// 36 = 0x24
    int _contentType;	// 40 = 0x28
    int _contentTypeForNoSpaceRecognition;	// 44 = 0x2c
    int _autoCapitalizationMode;	// 48 = 0x30
    int _autoCorrectionMode;	// 52 = 0x34
    NSLocale *_locale;	// 56 = 0x38
}

+ (_Bool)shouldRefinePrefixQueryMatchesForLocale:(id)arg1;	// IMP=0x0000000000107220
+ (_Bool)shouldInsertSpaceBetweenPreviousChar:(id)arg1 andNextChar:(id)arg2 inLocale:(id)arg3;	// IMP=0x0000000000106e50
+ (_Bool)shouldRemoveSpaceBetweenPreviousChar:(id)arg1 andNextChar:(id)arg2 inLocale:(id)arg3;	// IMP=0x0000000000106b10
+ (long long)drawingStrokeLimitForLocale:(id)arg1;	// IMP=0x0000000000106a80
+ (id)allNonLatinModelNames;	// IMP=0x0000000000106960
+ (id)modelNameLatin;	// IMP=0x0000000000106950
+ (id)modelNameKorean;	// IMP=0x0000000000106940
+ (id)modelNameJapanese;	// IMP=0x0000000000106930
+ (id)modelNameChinese;	// IMP=0x0000000000106920
+ (_Bool)shouldAdjustGroupingHeuristicsForVeryComplexCharacters:(id)arg1;	// IMP=0x00000000001068e0
+ (_Bool)shouldAdjustGroupingForLocale:(id)arg1;	// IMP=0x00000000001068a0
+ (id)spellCheckingLocaleForRecognitionLocale:(id)arg1 string:(id)arg2;	// IMP=0x0000000000106780
+ (_Bool)shouldPerformStrictCandidateFiltering:(id)arg1;	// IMP=0x0000000000106740
+ (_Bool)shouldSwapTopTwoResults:(id)arg1 locales:(id)arg2;	// IMP=0x0000000000106240
+ (_Bool)shouldUseFullWidthSpaceBasedOnContextForLocale:(id)arg1;	// IMP=0x0000000000106200
+ (_Bool)shouldApplyLatinSpacingForLocale:(id)arg1;	// IMP=0x00000000001061c0
+ (struct CGSize)defaultMinimumDrawingSize;	// IMP=0x0000000000106150
+ (void *)loadLanguageModelFromOptions:(id)arg1 fallbackLocale:(id)arg2;	// IMP=0x0000000000102e40
+ (id)localesByLanguageGroup:(id)arg1;	// IMP=0x0000000000100ee0
+ (id)recognitionEngineCachingKeyForRecognitionLocale:(id)arg1;	// IMP=0x0000000000100e40
+ (id)effectiveTextInputRecognitionLocales:(id)arg1 allowFallbackSecondaryLocale:(_Bool)arg2;	// IMP=0x0000000000100ac0
+ (id)forcedGen2ModelLocaleForLocale:(id)arg1;	// IMP=0x00000000001009e0
+ (_Bool)isLocaleSupported:(id)arg1 withMode:(int)arg2;	// IMP=0x0000000000100980
+ (_Bool)isLanguageSupported:(unsigned long long)arg1 withMode:(int)arg2;	// IMP=0x00000000001008e0
+ (unsigned long long)supportedScriptForLocale:(id)arg1;	// IMP=0x0000000000100760
+ (unsigned long long)supportedLanguageForLocale:(id)arg1;	// IMP=0x00000000001005a0
+ (void)_decodeLocale:(id)arg1 supportedLanguage:(unsigned long long *)arg2 supportedScript:(unsigned long long *)arg3;	// IMP=0x0000000000100420
+ (id)defaultLocaleForRecognitionType:(int)arg1 withMode:(int)arg2;	// IMP=0x0000000000100380
+ (id)_stringForRecognitionScript:(unsigned long long)arg1;	// IMP=0x0000000000100060
+ (id)_stringForRecognitionLanguage:(unsigned long long)arg1;	// IMP=0x00000000000fffb0
+ (id)stringForAutoCorrectionMode:(int)arg1;	// IMP=0x00000000000fff70
+ (id)stringForAutoCapitalizationMode:(int)arg1;	// IMP=0x00000000000fff00
+ (id)stringForRecognitionContentType:(int)arg1;	// IMP=0x00000000000ffe80
+ (id)stringForRecognitionMode:(int)arg1;	// IMP=0x00000000000ffe20
- (void).cxx_destruct;	// IMP=0x0000000000107330
@property(readonly, nonatomic) _Bool enableGen2CharacterLMIfAvailable; // @synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable;
@property(readonly, nonatomic) _Bool enableGen2ModelIfAvailable; // @synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable;
@property(readonly, nonatomic) _Bool enableCachingIfAvailable; // @synthesize enableCachingIfAvailable=_enableCachingIfAvailable;
@property(readonly, nonatomic) int autoCorrectionMode; // @synthesize autoCorrectionMode=_autoCorrectionMode;
@property(readonly, nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property(readonly, nonatomic) int contentTypeForNoSpaceRecognition; // @synthesize contentTypeForNoSpaceRecognition=_contentTypeForNoSpaceRecognition;
@property(readonly, nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (CDUnknownFunctionPointerType)lexiconStringNormalizationFunction;	// IMP=0x00000000001061a0
- (long long)engineCandidateCount;	// IMP=0x0000000000106170
- (long long)maxRecognitionResultDefaultCount;	// IMP=0x0000000000106120
- (struct CHNeuralNetwork *)newFreeFormEngine;	// IMP=0x0000000000105f70
- (id)newOVSCleanupPostProcessorWithStringChecker:(id)arg1;	// IMP=0x0000000000105df0
- (id)newPostProcessorWithStaticLexicon:(struct _LXLexicon *)arg1 customLexicon:(struct _LXLexicon *)arg2 phraseLexicon:(struct _LXLexicon *)arg3 customPhraseLexicon:(struct _LXLexicon *)arg4 characterLM:(id)arg5 textReplacements:(id)arg6 postProcessingFST:(id)arg7 languageModel:(void *)arg8 mecabraWrapper:(id)arg9 ovsStringChecker:(id)arg10 spellChecker:(id)arg11 lmVocabulary:(void *)arg12 maxResultCount:(long long)arg13;	// IMP=0x0000000000105010
- (id)newCTCRecognitionModel;	// IMP=0x0000000000104ff0
- (unsigned long long)effectiveEngineLanguage;	// IMP=0x0000000000104fd0
- (struct CHNeuralNetwork *)newRecognitionEngine;	// IMP=0x00000000001049e0
- (struct VariantMap *)newTransliterationVariantMap;	// IMP=0x0000000000104620
- (id)newMecabraWrapper;	// IMP=0x00000000001045f0
- (void *)newRadicalClusterFST;	// IMP=0x0000000000104520
- (void *)newGrammarFST;	// IMP=0x0000000000104450
- (id)newPostProcessingFST;	// IMP=0x00000000001043f0
- (id)newPatternFST;	// IMP=0x0000000000104390
- (id)newOVSStringCheckerWithStaticLexicon:(struct _LXLexicon *)arg1 customLexicon:(struct _LXLexicon *)arg2;	// IMP=0x00000000001041c0
- (void *)newCharacterLanguageModelAndMap:(void *)arg1 force:(_Bool)arg2;	// IMP=0x0000000000103650
- (id)newSpellChecker;	// IMP=0x0000000000103600
- (void *)newLanguageModelForRecognizer:(id)arg1 async:(_Bool)arg2 synchronizationQueue:(id)arg3;	// IMP=0x0000000000102f20
- (void *)newLanguageModel;	// IMP=0x0000000000102e20
- (void *)newCJKStaticLexicon;	// IMP=0x0000000000102bf0
- (const struct _LXLexicon *)newPhraseLexicon:(id *)arg1;	// IMP=0x00000000001029e0
- (const struct _LXLexicon *)postProcessorLexiconWithStaticLexicon:(const struct _LXLexicon *)arg1 secondaryLexicon:(const struct _LXLexicon *)arg2;	// IMP=0x00000000001029c0
- (const struct _LXLexicon *)newSecondaryStaticLexicon:(id *)arg1;	// IMP=0x00000000001028b0
- (const struct _LXLexicon *)newStaticLexicon:(id *)arg1;	// IMP=0x00000000001026e0
- (id)linguisticResourcesFallbackLocale;	// IMP=0x00000000001026a0
- (long long)precedingSpaceDefaultBehavior;	// IMP=0x0000000000102680
- (_Bool)shouldForwardMecabraOTAAssetsUpdate;	// IMP=0x0000000000102670
- (int)mecabraInputMethodType;	// IMP=0x0000000000102610
- (unsigned int)requiredInappropriateFilteringFlags;	// IMP=0x00000000001025b0
- (_Bool)shouldConvertKanaInPostProcessing;	// IMP=0x00000000001025a0
- (_Bool)shouldRemoveSpacesFromEnglishAndKoreanParticles;	// IMP=0x0000000000102590
- (_Bool)shouldRemoveSpacesFromHashtagsAndMentions;	// IMP=0x0000000000102580
- (_Bool)shouldMergeNoPrecedingWhiteSpaceColumns;	// IMP=0x0000000000102560
- (_Bool)shouldIdentifyChangeableColumns;	// IMP=0x0000000000102540
- (_Bool)shouldApplySemanticTokenization;	// IMP=0x0000000000102520
- (_Bool)shouldAddAlternativeWidthCandidates;	// IMP=0x0000000000102510
- (_Bool)shouldTransliterateHalfWidthPunctuations;	// IMP=0x00000000001024f0
- (_Bool)shouldTreatAllSmallStrokesAsPunctuation;	// IMP=0x00000000001024e0
- (_Bool)shouldDetectRomanPunctuation;	// IMP=0x00000000001024d0
- (_Bool)shouldDetectChinesePunctuation;	// IMP=0x00000000001024b0
- (_Bool)shouldRefineCandidates;	// IMP=0x0000000000102490
- (_Bool)shouldKeepDuplicateTokenIDs;	// IMP=0x0000000000102480
- (_Bool)shouldKeepOutOfPatternCandidates;	// IMP=0x0000000000102460
- (_Bool)shouldMarkMultiWordOVS;	// IMP=0x0000000000102440
- (_Bool)shouldPromoteCJKCommonCharacters;	// IMP=0x0000000000102420
- (_Bool)shouldTransformCharacterProbabilitiesIntoLogScores;	// IMP=0x0000000000102400
- (_Bool)shouldReplaceInvalidTokenIDs;	// IMP=0x00000000001023f0
- (_Bool)shouldUseTokenPrecedingSpaces;	// IMP=0x00000000001023d0
- (_Bool)shouldPreserveLegacyTranscriptionPaths;	// IMP=0x00000000001023b0
- (_Bool)shouldUseCaching;	// IMP=0x0000000000102370
- (_Bool)shouldReorderSCTCConfusion;	// IMP=0x0000000000102360
- (_Bool)shouldTransliterateSentences;	// IMP=0x0000000000102350
- (_Bool)shouldTransliterateAndSynthetizeCandidates;	// IMP=0x0000000000102330
- (_Bool)shouldApplyCharacterLMRescoring;	// IMP=0x0000000000102320
- (_Bool)shouldApplyLMSorting;	// IMP=0x0000000000102300
- (_Bool)shouldApplyLMRescoring;	// IMP=0x00000000001022e0
- (_Bool)shouldAutoCorrect;	// IMP=0x00000000001022b0
- (_Bool)shouldRemoveSpacesFromStrongURLs;	// IMP=0x00000000001022a0
- (_Bool)shouldAutoCapitalize;	// IMP=0x0000000000102270
- (_Bool)shouldTransliterateFrenchLigatures;	// IMP=0x0000000000102250
- (_Bool)shouldTransliterateConfusableCharacters;	// IMP=0x0000000000102230
- (_Bool)shouldFilterLowProbabilityTranscriptionPaths;	// IMP=0x0000000000102220
- (_Bool)shouldRelaxFinalCandidatesThresholding;	// IMP=0x0000000000102200
- (_Bool)shouldApplyCandidatesThresholding;	// IMP=0x00000000001021e0
- (_Bool)shouldPenalizeLetterInsertion;	// IMP=0x00000000001021c0
- (_Bool)shouldComputeStrokePenalties;	// IMP=0x00000000001021b0
- (_Bool)shouldFallbackOnSingleCharacterExpansion;	// IMP=0x00000000001021a0
- (_Bool)shouldPerformIntegratedLexiconExpansion;	// IMP=0x0000000000102190
- (_Bool)shouldPerformGlobalBestSearchWithSmallLattice;	// IMP=0x0000000000102160
- (_Bool)shouldPerformGlobalBestSearch;	// IMP=0x0000000000102150
- (_Bool)shouldPenalizePrefixes;	// IMP=0x0000000000102130
- (double)decodingWordLMLowerBoundLogProbability;	// IMP=0x0000000000102030
- (double)characterLMLowerBoundLogProbability;	// IMP=0x0000000000101f20
- (double)decodingLexiconLowerBoundLogProbability;	// IMP=0x0000000000101e20
- (double)decodingLexiconWeight;	// IMP=0x0000000000101ce0
- (double)decodingWordLMWeight;	// IMP=0x0000000000101bc0
- (double)decodingCharacterLMWeight;	// IMP=0x0000000000101aa0
- (_Bool)shouldRunNextGenCharacterLM;	// IMP=0x0000000000101a80
- (_Bool)shouldRunNextGenRecognizer;	// IMP=0x0000000000101a30
- (_Bool)shouldExpandCodePoints;	// IMP=0x0000000000101a10
- (_Bool)shouldApplyDiacriticSensitivity;	// IMP=0x00000000001019f0
- (_Bool)shouldApplyLexicalPenalty;	// IMP=0x00000000001019d0
- (_Bool)shouldExpandLexiconInNetwork;	// IMP=0x00000000001019c0
- (_Bool)shouldComposeLexiconWithNetwork;	// IMP=0x00000000001019a0
- (_Bool)shouldLoadCJKLexicons;	// IMP=0x0000000000101960
- (_Bool)shouldRefineChineseCharacterCandidates;	// IMP=0x0000000000101930
- (_Bool)shouldApplyChinesePostProcessing;	// IMP=0x0000000000101910
- (_Bool)shouldApplyRomanPostProcessing;	// IMP=0x0000000000101900
- (unsigned long long)supportedSegmentationStrategy;	// IMP=0x00000000001018e0
- (_Bool)shouldEnforceGrammarOnTransliterations;	// IMP=0x00000000001018c0
- (_Bool)shouldGenerateDigitLetterAlternatives;	// IMP=0x00000000001018b0
- (_Bool)hasSamePostProcessingAsConfiguration:(id)arg1;	// IMP=0x0000000000101700
- (_Bool)hasSameResourcesAsConfiguration:(id)arg1;	// IMP=0x0000000000101550
- (id)configurationKey;	// IMP=0x0000000000101430
- (_Bool)isEqualToRecognizerConfiguration:(id)arg1;	// IMP=0x0000000000101210
- (_Bool)isTextMode;	// IMP=0x0000000000100360
- (id)description;	// IMP=0x00000000001000d0
- (id)initWithMode:(int)arg1 locale:(id)arg2 contentType:(int)arg3 autoCapitalizationMode:(int)arg4 autoCorrectionMode:(int)arg5 enableCachingIfAvailable:(_Bool)arg6 enableGen2ModelIfAvailable:(_Bool)arg7 enableGen2CharacterLMIfAvailable:(_Bool)arg8;	// IMP=0x00000000000ffd10
- (id)initWithMode:(int)arg1 locale:(id)arg2 contentType:(int)arg3 enableCachingIfAvailable:(_Bool)arg4 enableGen2ModelIfAvailable:(_Bool)arg5 enableGen2CharacterLMIfAvailable:(_Bool)arg6;	// IMP=0x00000000000ffcd0

@end
