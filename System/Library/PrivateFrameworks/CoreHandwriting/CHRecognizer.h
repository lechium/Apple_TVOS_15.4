//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognizing-Protocol.h>

@class CHCTCRecognitionModel, CHDrawing, CHMecabraWrapper, CHPatternNetwork, CHPostProcessingManager, CHRecognitionInsight, CHRecognitionInsightRequest, CHRecognizerConfiguration, CHSpellChecker, CHStringOVSChecker, CVNLPCTCTextDecoder, NSArray, NSCharacterSet, NSDictionary, NSLocale, NSMutableDictionary, NSMutableIndexSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CHRecognizer : NSObject <CHRecognizing>
{
    CHRecognitionInsightRequest *_nextRecognitionInsightRequest;	// 8 = 0x8
    CHRecognitionInsight *_activeRecognitionInsight;	// 16 = 0x10
    NSArray *_whitelistMecabraRareCharacters;	// 24 = 0x18
    int _recognitionType;	// 32 = 0x20
    unsigned long long _maxRecognitionResultCount;	// 40 = 0x28
    NSCharacterSet *_activeCharacterSet;	// 48 = 0x30
    struct CHNeuralNetwork *_engine;	// 56 = 0x38
    struct CHNeuralNetwork *_freeformEngine;	// 64 = 0x40
    CHCTCRecognitionModel *_recognitionModel;	// 72 = 0x48
    CVNLPCTCTextDecoder *_textDecoder;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_recognitionQueue;	// 88 = 0x58
    void *_radicalClusterFST;	// 96 = 0x60
    void *_formatGrammarFST;	// 104 = 0x68
    CHPatternNetwork *_patternFST;	// 112 = 0x70
    CHPatternNetwork *_postProcessingFST;	// 120 = 0x78
    CHRecognizerConfiguration *_configuration;	// 128 = 0x80
    void *_languageModel;	// 136 = 0x88
    void *_lmVocabulary;	// 144 = 0x90
    void *_characterLanguageModel;	// 152 = 0x98
    void *_cjkStaticLexicon;	// 160 = 0xa0
    void *_cjkDynamicLexicon;	// 168 = 0xa8
    struct _LXLexicon *_staticLexicon;	// 176 = 0xb0
    struct _LXLexicon *_secondaryStaticLexicon;	// 184 = 0xb8
    struct _LXLexicon *_phraseLexicon;	// 192 = 0xc0
    struct _LXLexicon *_customLexicon;	// 200 = 0xc8
    struct _LXLexicon *_customPhraseLexicon;	// 208 = 0xd0
    NSDictionary *_textReplacements;	// 216 = 0xd8
    NSMutableDictionary *_textReplacementLowercasedKeyMapping;	// 224 = 0xe0
    CHSpellChecker *_spellChecker;	// 232 = 0xe8
    CHMecabraWrapper *_mecabraWrapper;	// 240 = 0xf0
    CHStringOVSChecker *_ovsStringChecker;	// 248 = 0xf8
    NSURL *_learningDictionaryURL;	// 256 = 0x100
    CHDrawing *_cachedDrawing;	// 264 = 0x108
    struct VariantMap *_transliterationVariantMap;	// 272 = 0x110
    void **_icuTransliterator;	// 280 = 0x118
    unsigned long long _lastCharacterSegmentCount;	// 288 = 0x120
    NSMutableIndexSet *_lastCharacterSegmentIndexes;	// 296 = 0x128
    CHPostProcessingManager *_postProcessor;	// 304 = 0x130
    CHPostProcessingManager *_ovsCleanupPostProcessor;	// 312 = 0x138
    struct CGSize _minimumDrawingSize;	// 320 = 0x140
    map_f81ed60d _cachedResults;	// 336 = 0x150
    map_0bf4b13c _characterIDMap;	// 360 = 0x168
}

+ (void)_updatePrecedingAndTrailingSeparatorsForTopCandidate:(id)arg1 history:(id)arg2 textAfter:(id)arg3 locale:(id)arg4 outTrailingSeparator:(id *)arg5 inFirstTokenHasPrecedingSpace:(_Bool)arg6 outFirstTokenHasPrecedingSpace:(_Bool *)arg7;	// IMP=0x0000000000036f10
+ (id)spellCheckerCorrectionsForToken:(id)arg1 spellChecker:(id)arg2 languageModel:(void *)arg3 locale:(id)arg4;	// IMP=0x000000000002a3a0
+ (_Bool)isLocaleSupported:(id)arg1 withMode:(int)arg2;	// IMP=0x000000000001d570
- (id).cxx_construct;	// IMP=0x000000000003f6f0
- (void).cxx_destruct;	// IMP=0x000000000003f5b0
@property(retain, nonatomic) CHPostProcessingManager *ovsCleanupPostProcessor; // @synthesize ovsCleanupPostProcessor=_ovsCleanupPostProcessor;
@property(retain, nonatomic) CHPostProcessingManager *postProcessor; // @synthesize postProcessor=_postProcessor;
@property(retain, nonatomic) NSMutableIndexSet *lastCharacterSegmentIndexes; // @synthesize lastCharacterSegmentIndexes=_lastCharacterSegmentIndexes;
@property(nonatomic) unsigned long long lastCharacterSegmentCount; // @synthesize lastCharacterSegmentCount=_lastCharacterSegmentCount;
@property(nonatomic) void **icuTransliterator; // @synthesize icuTransliterator=_icuTransliterator;
@property(nonatomic) struct VariantMap *transliterationVariantMap; // @synthesize transliterationVariantMap=_transliterationVariantMap;
@property(nonatomic) map_0bf4b13c characterIDMap; // @synthesize characterIDMap=_characterIDMap;
@property(nonatomic) map_f81ed60d cachedResults; // @synthesize cachedResults=_cachedResults;
@property(copy, nonatomic) CHDrawing *cachedDrawing; // @synthesize cachedDrawing=_cachedDrawing;
@property(retain, nonatomic) NSURL *learningDictionaryURL; // @synthesize learningDictionaryURL=_learningDictionaryURL;
@property(retain, nonatomic) CHStringOVSChecker *ovsStringChecker; // @synthesize ovsStringChecker=_ovsStringChecker;
@property(retain, nonatomic) CHMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
@property(retain, nonatomic) CHSpellChecker *spellChecker; // @synthesize spellChecker=_spellChecker;
@property(retain, nonatomic) NSMutableDictionary *textReplacementLowercasedKeyMapping; // @synthesize textReplacementLowercasedKeyMapping=_textReplacementLowercasedKeyMapping;
@property(retain, nonatomic) NSDictionary *textReplacements; // @synthesize textReplacements=_textReplacements;
@property(nonatomic) struct _LXLexicon *customPhraseLexicon; // @synthesize customPhraseLexicon=_customPhraseLexicon;
@property(nonatomic) struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property(nonatomic) struct _LXLexicon *phraseLexicon; // @synthesize phraseLexicon=_phraseLexicon;
@property(nonatomic) struct _LXLexicon *secondaryStaticLexicon; // @synthesize secondaryStaticLexicon=_secondaryStaticLexicon;
@property(nonatomic) struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(nonatomic) void *cjkDynamicLexicon; // @synthesize cjkDynamicLexicon=_cjkDynamicLexicon;
@property(nonatomic) void *cjkStaticLexicon; // @synthesize cjkStaticLexicon=_cjkStaticLexicon;
@property(nonatomic) void *characterLanguageModel; // @synthesize characterLanguageModel=_characterLanguageModel;
@property(nonatomic) void *lmVocabulary; // @synthesize lmVocabulary=_lmVocabulary;
@property(nonatomic) void *languageModel; // @synthesize languageModel=_languageModel;
@property(retain, nonatomic, setter=_setConfiguration:) CHRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CHPatternNetwork *postProcessingFST; // @synthesize postProcessingFST=_postProcessingFST;
@property(retain, nonatomic) CHPatternNetwork *patternFST; // @synthesize patternFST=_patternFST;
@property(nonatomic) void *formatGrammarFST; // @synthesize formatGrammarFST=_formatGrammarFST;
@property(nonatomic) void *radicalClusterFST; // @synthesize radicalClusterFST=_radicalClusterFST;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // @synthesize recognitionQueue=_recognitionQueue;
@property(retain, nonatomic) CVNLPCTCTextDecoder *textDecoder; // @synthesize textDecoder=_textDecoder;
@property(retain, nonatomic) CHCTCRecognitionModel *recognitionModel; // @synthesize recognitionModel=_recognitionModel;
@property(nonatomic) struct CHNeuralNetwork *freeformEngine; // @synthesize freeformEngine=_freeformEngine;
@property(nonatomic) struct CHNeuralNetwork *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet; // @synthesize activeCharacterSet=_activeCharacterSet;
@property(nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property(nonatomic) int recognitionType; // @synthesize recognitionType=_recognitionType;
- (void)_setupRecognitionInsightRecording;	// IMP=0x000000000003ef70
@property(nonatomic) _Bool enableGen2CharacterLMIfAvailable;
@property(nonatomic) _Bool enableGen2ModelIfAvailable;
@property(nonatomic) _Bool enableCachingIfAvailable;
@property(nonatomic) int autoCorrectionMode;
@property(nonatomic) int autoCapitalizationMode;
@property(nonatomic) int contentType;
@property(copy, nonatomic) NSLocale *locale;
@property(nonatomic) int recognitionMode;
@property(nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
- (unsigned long long)_effectiveMaxRecognitionResultCount;	// IMP=0x000000000003ce70
- (struct CGPoint)_drawingAnchorPointFromRecognizerOptions:(id)arg1;	// IMP=0x000000000003cd30
- (struct CGRect)_initialContextRectFromRecognizerOptions:(id)arg1;	// IMP=0x000000000003cc60
- (long long)_precedingSpaceBehaviorFromRecognizerOptions:(id)arg1;	// IMP=0x000000000003cb90
- (id)_textAfterFromRecognizerOptions:(id)arg1;	// IMP=0x000000000003cad0
- (id)_historyStringFromRecognizerOptions:(id)arg1;	// IMP=0x000000000003ca10
- (void)_rescoreCandidatesWithLanguageModel:(void *)arg1 history:(id)arg2;	// IMP=0x000000000003c070
- (unsigned int)_tokenIDForUNKCharacterString:(id)arg1;	// IMP=0x000000000003be90
- (void)_applyTransliterationAndSyntheticCandidates:(void *)arg1;	// IMP=0x000000000003b2e0
- (id)_applySentenceTransliterationCandidates:(unsigned short *)arg1 codesLen:(int)arg2 codesMax:(int)arg3;	// IMP=0x000000000003b180
- (void)_adjustCandidatesForConfusableCharacters:(void *)arg1;	// IMP=0x000000000003aef0
- (void)_adjustCandidatesForRomanPunctuation:(void *)arg1 segmentDrawing:(id)arg2;	// IMP=0x000000000003a1d0
- (void)_penalizeCandidatesForRomanPunctuation:(void *)arg1 punctuationStrokeCount:(long long)arg2;	// IMP=0x0000000000039d90
- (void)_adjustCandidatesForChinesePunctuation:(void *)arg1 segmentDrawing:(id)arg2 completeDrawing:(id)arg3;	// IMP=0x0000000000039670
- (void)_refineChineseCharacterCandidates:(void *)arg1 drawing:(id)arg2;	// IMP=0x0000000000039470
- (void)_refineCandidates:(void *)arg1 withAllowedCandidateCodes:(const void *)arg2;	// IMP=0x00000000000389c0
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2;	// IMP=0x0000000000038990
- (id)_legacyTextRecognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038920
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038530
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000000381b0
- (_Bool)_shouldReturnDefaultResultsForDrawing:(id)arg1;	// IMP=0x00000000000380f0
- (id)_ovsCleanupRecognitionResult:(id)arg1 options:(id)arg2;	// IMP=0x0000000000037f40
- (id)_tokenizedTextRecognitionResultForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000037700
- (id)_resultUsingSegmentAndDecodePipelineWithDrawing:(id)arg1 insight:(id)arg2 options:(id)arg3 shouldCancel:(CDUnknownBlockType)arg4;	// IMP=0x00000000000373e0
- (id)recognitionEngineCachingKey;	// IMP=0x0000000000036ed0
- (id)_resultUsingNextGenerationPipelineWithDrawing:(id)arg1 options:(id)arg2;	// IMP=0x0000000000036e30
- (id)_tokenizedTextResultFromResults:(id)arg1 segmentGroup:(id)arg2 offsetSegment:(long long)arg3 decodedStrokeSets:(_Bool)arg4 spaceBehavior:(long long)arg5;	// IMP=0x00000000000363c0
- (id)_resolvedStrokeIndexes:(id)arg1 segmentGroup:(id)arg2 segmentOffset:(long long)arg3 substrokeCount:(long long *)arg4;	// IMP=0x0000000000036030
- (id)_contextTokenIDsFromHistory:(id)arg1 maxCharacterLength:(unsigned long long)arg2 maxTokenCount:(unsigned long long)arg3;	// IMP=0x0000000000035db0
- (void)_calculateBestTranscriptionPaths:(id *)arg1 scores:(id *)arg2 fromTokenizedResult:(id)arg3 pathCount:(long long)arg4 history:(id)arg5 skipLMRescoring:(_Bool)arg6;	// IMP=0x0000000000033ab0
- (id)bestTranscriptionPathsForTokenizedResult:(id)arg1 scores:(id *)arg2 history:(id)arg3;	// IMP=0x0000000000033950
- (double)_lmRescoringWeightForPath:(id)arg1;	// IMP=0x0000000000033920
- (id)_tokenFromLegacyResult:(id)arg1 wordIndex:(unsigned long long)arg2 strokeSet:(id)arg3 substrokeCount:(long long)arg4;	// IMP=0x0000000000033390
- (unsigned long long)_mininmumPathCount;	// IMP=0x0000000000033330
- (basic_string_5886a005)_stringForCode:(unsigned int)arg1;	// IMP=0x0000000000032e60
- (void)_addEdgesFromCandidates:(vector_c76aa67f)arg1 toEdges:(void *)arg2 referenceEdge:(const struct NetworkEdge *)arg3 network:(void *)arg4 consumedSegmentCount:(long long)arg5 numSubstrokes:(long long)arg6;	// IMP=0x0000000000032c00
- (double)_candidateLatticePruningThresholdForEdgeType:(_Bool)arg1;	// IMP=0x0000000000032bb0
- (struct CGRect)_computeLocalFrameWithLeftBounds:(struct CGRect)arg1 rightBounds:(struct CGRect)arg2;	// IMP=0x0000000000032ad0
- (void *)_createCandidateNetworkFromSegmentationNetwork:(void *)arg1 segmentGroup:(id)arg2 drawing:(id)arg3 boundsAtNode:(void *)arg4 matchingStrokeRange:(struct _NSRange)arg5 sortedSegmentIndexes:(vector_7697e86b)arg6 shouldCancel:(CDUnknownBlockType)arg7;	// IMP=0x0000000000031620
- (long long)_classifyEdgeDrawingsFromContexts:(id)arg1 allEdges:(void *)arg2 segmentationNetwork:(void *)arg3 candidateNetwork:(void *)arg4 cachedEdgeSet:(void *)arg5 completeDrawing:(id)arg6 allowSmallerFinalBatch:(_Bool)arg7 shouldCancel:(CDUnknownBlockType)arg8;	// IMP=0x0000000000030c60
- (id)_textResultWithNetworkComposeFromCandidateNetwork:(void *)arg1 segmentGroup:(id)arg2 drawing:(id)arg3 maxRecognitionResultCount:(unsigned long long)arg4 history:(id)arg5 totalStrokeCount:(long long)arg6 totalSubstrokeCount:(long long)arg7;	// IMP=0x00000000000306a0
- (id)_textResultWithLexiconExpansionFromCandidateNetwork:(void *)arg1 history:(id)arg2 prefix:(id)arg3 activeHistoryRange:(struct _NSRange)arg4 rootStaticCursor:(struct _LXCursor *)arg5 rootCustomCursor:(struct _LXCursor *)arg6 rootPatternCursor:(id)arg7 segmentGroup:(id)arg8 maxRecognitionResultCount:(unsigned long long)arg9 precedingSpaceBehavior:(long long)arg10 shouldPerformNoSpaceRecognition:(_Bool)arg11 totalStrokeCount:(long long)arg12 totalSubstrokeCount:(long long)arg13 shouldCancel:(CDUnknownBlockType)arg14;	// IMP=0x0000000000030290
- (id)_recognitionResultsForMultipleCharacterDrawing:(id)arg1 segmentGroup:(id)arg2 options:(id)arg3 shouldCancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000002eb30
- (vector_7697e86b)_sortedIndexesForSegmentGroup:(id)arg1 drawing:(id)arg2;	// IMP=0x000000000002e8b0
- (void)_cachingWithMatchingStrokeRange:(struct _NSRange)arg1 drawing:(id)arg2;	// IMP=0x000000000002e6c0
- (unsigned int *)_createNetworkTruncatedPrefixStringUsingPrefix:(id)arg1 fullHistoryStringLength:(long long)arg2 hasLexiconCursor:(_Bool)arg3 prefixStringLength:(unsigned long long *)arg4 hasComplexChars:(_Bool *)arg5 activeHistoryRange:(struct _NSRange *)arg6;	// IMP=0x000000000002e5d0
- (void)_filterNonHumanFriendlyCandidates:(id)arg1;	// IMP=0x000000000002e070
- (void)_adjustResultsForConfusableCharacters:(id)arg1;	// IMP=0x000000000002dc20
- (id)tokenizedTextResultForRomanSingleWordLatticePaths:(const void *)arg1 history:(id)arg2 activeHistoryRange:(struct _NSRange)arg3 startNode:(long long)arg4 segmentGroup:(id)arg5;	// IMP=0x000000000002b980
- (id)_addAlternativeCandidatesForTokenizedResult:(id)arg1;	// IMP=0x000000000002ace0
- (id)tokenizedTextResultForChineseLatticePaths:(const void *)arg1 maximumPathCount:(unsigned long long)arg2 network:(void *)arg3 mecabraIDs:(void *)arg4 startNode:(long long)arg5 endNode:(long long)arg6 segmentGroup:(id)arg7;	// IMP=0x0000000000028000
- (id)tokenizedTextResultForRomanLatticePaths:(const void *)arg1 history:(id)arg2 activeHistoryRange:(struct _NSRange)arg3 startNode:(long long)arg4 segmentGroup:(id)arg5;	// IMP=0x0000000000027fc0
- (_Bool)_updateResults:(id)arg1 string:(id)arg2 score:(double)arg3 recognitionScore:(double)arg4 lexicalEntry:(_Bool)arg5 patternEntry:(_Bool)arg6 isInappropriateWord:(_Bool)arg7 wordID:(unsigned int)arg8 wordStrokeSet:(id)arg9;	// IMP=0x0000000000027800
- (id)bestPathsFromNetwork:(void *)arg1 pathCount:(unsigned long long)arg2 staticLexiconCursor:(struct _LXCursor *)arg3 customLexiconCursor:(struct _LXCursor *)arg4 patternCursor:(id)arg5 history:(id)arg6 activeHistoryRange:(struct _NSRange)arg7 mecabraIDs:(void *)arg8 segmentGroup:(id)arg9 precedingSpaceBehavior:(long long)arg10 effectiveContentType:(int)arg11 totalStrokeCount:(long long)arg12 totalSubstrokeCount:(long long)arg13;	// IMP=0x0000000000027110
- (id)_tokensUsingLMTokenizerForString:(id)arg1 wordRanges:(id)arg2 nonWordPatterns:(id)arg3 outTokenIDs:(id *)arg4;	// IMP=0x0000000000025e40
- (double)_calculateJointWordLMScoreForString:(id)arg1 wordRanges:(id)arg2 wordIDs:(id)arg3 patternEntries:(id)arg4 history:(unsigned int *)arg5 historyLength:(unsigned long long)arg6;	// IMP=0x0000000000025430
- (double)_calculateJointWordLMScoreForTokenPath:(id)arg1 tokenizedResult:(id)arg2 history:(unsigned int *)arg3 historyLength:(unsigned long long)arg4 pathTranscription:(id *)arg5;	// IMP=0x0000000000024fb0
- (id)_textReplacementResultForLegacyRecognitionResult:(id)arg1;	// IMP=0x0000000000024870
- (id)recognitionResultsForSingleCharacterDrawing:(id)arg1 segmentGroup:(id)arg2 options:(id)arg3 history:(id)arg4;	// IMP=0x0000000000023b30
- (void)_removeOVSResults:(id)arg1 withHistory:(id)arg2;	// IMP=0x00000000000234f0
- (id)recognitionResultsForSketchDrawing:(id)arg1 options:(id)arg2;	// IMP=0x00000000000227f0
- (id)heartCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000022610
- (id)cloudCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;	// IMP=0x0000000000022430
- (id)manhattanLineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;	// IMP=0x0000000000021860
- (id)lineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000021410
- (id)outlineArrowCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000021190
- (id)rectangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000020d50
- (id)pentagonCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000020b90
- (id)ellipseCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000020840
- (id)chatBubbleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;	// IMP=0x00000000000205a0
- (id)triangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000020290
- (id)starCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;	// IMP=0x0000000000020130
- (void)endpointsForDrawing:(id)arg1 startLocation:(struct CGPoint *)arg2 endLocation:(struct CGPoint *)arg3;	// IMP=0x000000000001f8d0
- (id)characterSetForStrings:(id)arg1;	// IMP=0x000000000001f680
- (id)supportedStrings;	// IMP=0x000000000001f500
- (id)supportedCharacterSet;	// IMP=0x000000000001f420
- (id)sketchCodeForDescription:(id)arg1;	// IMP=0x000000000001f3f0
- (id)sketchDescriptionForCode:(int)arg1;	// IMP=0x000000000001f1c0
- (void)dealloc;	// IMP=0x000000000001f110
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale *)arg3;	// IMP=0x000000000001f0f0
- (id)initWithType:(int)arg1 mode:(int)arg2;	// IMP=0x000000000001f0d0
- (id)strokeIndexesForLastCharacter;	// IMP=0x000000000001efc0
- (id)mecabraRareWordIndexes:(id)arg1 wordRanges:(id)arg2;	// IMP=0x000000000001edd0
- (_Bool)isRareChineseEntry:(id)arg1;	// IMP=0x000000000001ed20
- (id)whitelistMecabraRareCharacters;	// IMP=0x000000000001ea10
- (vector_ce83c556)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long long)arg4;	// IMP=0x000000000001e4d0
- (vector_ce83c556)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long long)arg3;	// IMP=0x000000000001e4a0
- (void)candidateAccepted:(void *)arg1;	// IMP=0x000000000001e380
- (void)candidatesCleared;	// IMP=0x000000000001e370
- (void)_updateLanguageModel:(void *)arg1;	// IMP=0x000000000001e300
- (void)setCustomLexicon:(struct _LXLexicon *)arg1 customVocabulary:(void *)arg2;	// IMP=0x000000000001de10
- (void)updateMecabraWithRegionalOTAAssets:(id)arg1 nonRegionalOTAAssets:(id)arg2;	// IMP=0x000000000001dbb0
- (void)updateUserDictionaryLexicon:(id)arg1;	// IMP=0x000000000001d9b0
- (void)updateAddressBookLexicon:(id)arg1;	// IMP=0x000000000001d750
- (void)_unloadEngineAndResources;	// IMP=0x000000000001d590
- (_Bool)_isLocaleSupported:(id)arg1;	// IMP=0x000000000001d4f0
- (void)_initializeTextDecoder;	// IMP=0x000000000001d4d0
- (void)_initializeOVSCleanupPostProcessor;	// IMP=0x000000000001d4b0
- (void)_initializePostProcessor;	// IMP=0x000000000001d490
- (void)_reloadEngineAndResources;	// IMP=0x000000000001cf80
- (void)_loadMecabraIfNeeded;	// IMP=0x000000000001cf30
- (id)_alternativeInterpretationsForString:(id)arg1;	// IMP=0x000000000001cb80
- (id)_transliterationVariantsForString:(id)arg1;	// IMP=0x000000000001c0f0
- (id)transliterationVariantsForString:(id)arg1;	// IMP=0x000000000001bf70
- (_Bool)isOVSString:(id)arg1;	// IMP=0x000000000001bdd0
- (id)_defaultPunctuationResultWithStrokeCount:(unsigned long long)arg1;	// IMP=0x000000000001b7e0
- (id)_defaultLegacyPunctuationResultsWithStrokeCount:(unsigned long long)arg1;	// IMP=0x000000000001b010
- (id)_defaultPunctuationStringsOutputScores:(id *)arg1 maxCandidateCount:(long long)arg2;	// IMP=0x000000000001ada0
- (id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3;	// IMP=0x000000000001ad80
- (id)initWithMode:(int)arg1 locale:(id)arg2 learningDictionaryURL:(id)arg3 recognizerOptions:(id)arg4;	// IMP=0x000000000001a900
- (id)initWithMode:(int)arg1 locale:(id)arg2 learningDictionaryURL:(id)arg3;	// IMP=0x000000000001a8e0
- (id)initWithMode:(int)arg1 locale:(id)arg2 recognizerOptions:(id)arg3;	// IMP=0x000000000001a8c0
- (id)initWithMode:(int)arg1 locale:(id)arg2;	// IMP=0x000000000001a8a0
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale *)arg3 learningDictionaryURL:(id)arg4;	// IMP=0x000000000001a7d0
@property(readonly, nonatomic) CHRecognitionInsight *recordedInsightFromLastRequest;
- (void)recordInsightWithRequest:(id)arg1;	// IMP=0x000000000003f730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

