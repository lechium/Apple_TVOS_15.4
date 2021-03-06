//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

@interface TITypologyStatisticRankCandidatesAccepted
{
    NSMutableDictionary *_histogram;	// 8 = 0x8
    long long _lengthOfSelectedCandidates;	// 16 = 0x10
    long long _lengthOfSelectedPredictions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003a3ab
@property(readonly, nonatomic) long long lengthOfSelectedPredictions; // @synthesize lengthOfSelectedPredictions=_lengthOfSelectedPredictions;
@property(readonly, nonatomic) long long lengthOfSelectedCandidates; // @synthesize lengthOfSelectedCandidates=_lengthOfSelectedCandidates;
@property(readonly, nonatomic) NSDictionary *histogram; // @synthesize histogram=_histogram;
- (void)visitRecordKeyboardInput:(id)arg1;	// IMP=0x000000000003a2ab
- (void)rankAndCountSelectedCandidate:(id)arg1;	// IMP=0x000000000003a04c
- (void)countSelectedCandidate:(id)arg1 withRank:(unsigned long long)arg2;	// IMP=0x0000000000039e8d
- (void)countSelectedPrediction:(id)arg1 withRank:(unsigned long long)arg2;	// IMP=0x0000000000039d79
- (_Bool)isCandidatePrediction:(id)arg1;	// IMP=0x0000000000039c91
- (void)countSelectedInputStringToRejectAutocorrection;	// IMP=0x0000000000039ba7
- (void)countSelectedInputString;	// IMP=0x0000000000039abd
- (void)countSelectedAutocorrection:(id)arg1;	// IMP=0x00000000000399af
- (void)addLengthOfSelectedPrediction:(id)arg1;	// IMP=0x0000000000039958
- (void)addLengthOfSelectedCandidate:(id)arg1;	// IMP=0x0000000000039901
- (unsigned long long)rankOfCandidate:(id)arg1;	// IMP=0x0000000000039766
- (id)structuredReport;	// IMP=0x000000000003961d
- (id)init;	// IMP=0x00000000000395c0

@end

