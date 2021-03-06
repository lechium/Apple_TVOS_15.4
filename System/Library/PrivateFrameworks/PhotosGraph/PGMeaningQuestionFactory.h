//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PGMeaningQuestionFactory
{
    NSSet *_meaningLabelsForWhichToGenerateQuestions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000043b866
@property(retain, nonatomic) NSSet *meaningLabelsForWhichToGenerateQuestions; // @synthesize meaningLabelsForWhichToGenerateQuestions=_meaningLabelsForWhichToGenerateQuestions;
- (id)_dateNodesFromStartDate:(id)arg1 toEndDate:(id)arg2 inGraph:(id)arg3;	// IMP=0x000000000043b79b
- (id)_expandedDateNodesFromDateNode:(id)arg1;	// IMP=0x000000000043b532
- (id)_expandedDateNodesFromDateNodes:(id)arg1;	// IMP=0x000000000043b36e
- (id)_looseCriteriasForCriteria:(id)arg1;	// IMP=0x000000000043aa39
- (id)_looseMeaningLabelsForMomentNode:(id)arg1 fromCandidateLabels:(id)arg2 inGraph:(id)arg3;	// IMP=0x000000000043a842
- (id)_questionsToAddFromMomentNodes:(id)arg1 useCuratedAssets:(_Bool)arg2 localFactoryScore:(double)arg3 alreadyGeneratedQuestions:(id)arg4 limit:(unsigned long long)arg5 graph:(id)arg6 progressBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000004398a6
- (id)_meaningLabelsByParentMeaningLabels;	// IMP=0x00000000004396b9
- (void)_updateMeaningQuestionsIfNeededWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000438e85
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000438d60
- (long long)questionOptions;	// IMP=0x0000000000438d55
- (unsigned short)questionType;	// IMP=0x0000000000438d4a

@end

