//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class CIMCandidateData, NSOperationQueue, NSString, TIMathSymbolPunctuationController, TIWordSearch;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja
{
    TIWordSearch *_wordSearch;	// 40 = 0x28
    _Bool _isInCompletionMode;	// 48 = 0x30
    _Bool _shouldLearnAcceptedCandidate;	// 49 = 0x31
    _Bool _isAlphabeticPlane;	// 50 = 0x32
    _Bool _duringDeleteFromInputWithContext;	// 51 = 0x33
    NSString *_language;	// 56 = 0x38
    NSString *_modeName;	// 64 = 0x40
    CIMCandidateData *_candidateData;	// 72 = 0x48
    NSOperationQueue *_operationQueue;	// 80 = 0x50
    NSString *_pairedPunctuationOpenQuote;	// 88 = 0x58
    NSString *_pairedPunctuationSelectedText;	// 96 = 0x60
    NSString *_currentKeyHint;	// 104 = 0x68
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;	// 112 = 0x70
}

+ (id)pairedPunctuationDictionary;	// IMP=0x000000000000526f
+ (Class)wordSearchClass;	// IMP=0x0000000000005267
+ (_Bool)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2;	// IMP=0x0000000000005014
+ (id)unicodeCandidateFromString:(id)arg1;	// IMP=0x0000000000004ed9
+ (id)GB18030CandidateFromString:(id)arg1;	// IMP=0x0000000000004d8f
+ (id)punctuationPredictionsForString:(id)arg1;	// IMP=0x0000000000004c6a
- (void).cxx_destruct;	// IMP=0x0000000000004380
@property _Bool duringDeleteFromInputWithContext; // @synthesize duringDeleteFromInputWithContext=_duringDeleteFromInputWithContext;
@property(readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController; // @synthesize mathSymbolPunctuationController=_mathSymbolPunctuationController;
@property(copy, nonatomic) NSString *currentKeyHint; // @synthesize currentKeyHint=_currentKeyHint;
@property(copy, nonatomic) NSString *pairedPunctuationSelectedText; // @synthesize pairedPunctuationSelectedText=_pairedPunctuationSelectedText;
@property(copy, nonatomic) NSString *pairedPunctuationOpenQuote; // @synthesize pairedPunctuationOpenQuote=_pairedPunctuationOpenQuote;
@property(nonatomic) _Bool isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;
@property(nonatomic) _Bool shouldLearnAcceptedCandidate; // @synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate;
@property(nonatomic) _Bool isInCompletionMode; // @synthesize isInCompletionMode=_isInCompletionMode;
@property(copy, nonatomic) NSString *modeName; // @synthesize modeName=_modeName;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)wordSearch;	// IMP=0x000000000000422d
- (id)searchStringForMarkedText;	// IMP=0x000000000000421b
- (_Bool)handlePairedPunctuationInput:(id)arg1 context:(id)arg2;	// IMP=0x0000000000003b0f
- (_Bool)supportsPairedPunctutationInput;	// IMP=0x0000000000003b07
- (void)acceptFirstCandidateWithContext:(id)arg1;	// IMP=0x0000000000003918
- (id)firstCandidate;	// IMP=0x0000000000003882
- (void)setLearnsCorrection:(_Bool)arg1;	// IMP=0x00000000000037fb
- (id)outputByConvertingDecimalPointForInput:(id)arg1;	// IMP=0x0000000000003621
- (_Bool)shouldSearchCompletionForSubstrings;	// IMP=0x0000000000003619
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) CIMCandidateData *candidateData; // @synthesize candidateData=_candidateData;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000033b9
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;	// IMP=0x00000000000032d6
- (id)sortMethodsGroupsForCandidates:(id)arg1;	// IMP=0x0000000000003232
- (id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2;	// IMP=0x000000000000315e
- (id)titleForSortingMethod:(id)arg1;	// IMP=0x0000000000003127
- (_Bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;	// IMP=0x000000000000311f
- (id)sortingMethods;	// IMP=0x0000000000003117
- (unsigned long long)initialSelectedIndex;	// IMP=0x000000000000302f
- (id)completionCandidateResultSetForKeyHint:(id)arg1;	// IMP=0x0000000000002bc2
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;	// IMP=0x0000000000002897
- (_Bool)updateCompletionCandidatesIfAppropriate;	// IMP=0x00000000000026fd
- (id)generateCompletions;	// IMP=0x00000000000023bd
@property(readonly, nonatomic) unsigned long long predictionOptions;
- (void *)mecabraCandidateRefFromPointerValue:(id)arg1;	// IMP=0x0000000000002248
- (_Bool)hasIdeographicCandidates;	// IMP=0x0000000000002082
- (_Bool)showingFacemarkCandidates;	// IMP=0x0000000000001ec5
- (_Bool)isFacemarkInput:(id)arg1;	// IMP=0x0000000000001e05
- (id)candidateResultSetUsedForCompletionQuery;	// IMP=0x0000000000001dfd
- (void)willExitCompletionMode;	// IMP=0x0000000000001df7
- (_Bool)shouldEnableHalfWidthPunctuationForCurrentInputContext;	// IMP=0x0000000000001d1a
- (id)wordCharacters;	// IMP=0x0000000000001c9c
- (id)replacementForDoubleSpace;	// IMP=0x0000000000001c71
- (void)deleteFromInputWithContext:(id)arg1;	// IMP=0x0000000000001bcd
- (id)deleteFromInput:(unsigned long long *)arg1;	// IMP=0x0000000000001b74
- (void)setInput:(id)arg1;	// IMP=0x0000000000001b0e
- (void)clearInput;	// IMP=0x0000000000001ace
- (void)inputLocationChanged;	// IMP=0x0000000000001a5d
- (id)didAcceptCandidate:(id)arg1;	// IMP=0x00000000000018a3
- (void)loadFavoniusTypingModel;	// IMP=0x000000000000189d
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;	// IMP=0x0000000000001772
- (void)syncToLayoutState:(id)arg1;	// IMP=0x00000000000016bc
- (void *)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2;	// IMP=0x00000000000015cf
- (void)resetCommitHistory;	// IMP=0x000000000000154e
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;	// IMP=0x0000000000001434

@end

