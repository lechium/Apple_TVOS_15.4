//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelSession
{
    struct CoreLanguageModelWithState *_model;	// 16 = 0x10
}

- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021aa8
- (id)predictionInitialCharacterSet;	// IMP=0x0000000000021a43
- (id)predictionOptionsForMaximumPredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2;	// IMP=0x0000000000021924
- (id)stateWithOptions:(id)arg1;	// IMP=0x000000000002189c
- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021796
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021484
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;	// IMP=0x00000000000212d7
- (id)description;	// IMP=0x00000000000211bc
- (void)dealloc;	// IMP=0x0000000000021176
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;	// IMP=0x0000000000021022

@end
