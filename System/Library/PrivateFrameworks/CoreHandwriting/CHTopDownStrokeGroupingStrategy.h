//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CHTopDownStrokeGroupingStrategy
{
    NSString *_strategyIdentifier;	// 8 = 0x8
    double _minimumDrawingSize;	// 16 = 0x10
    double _splitCostThreshold;	// 24 = 0x18
    double _transitionTimeWeight;	// 32 = 0x20
    double _transitionTimeUpperBound;	// 40 = 0x28
    double _verticalDistanceWeight;	// 48 = 0x30
    double _leftTransitionWeight;	// 56 = 0x38
    double _leftTransitionUpperBound;	// 64 = 0x40
    double _horizontalDistanceBarrier;	// 72 = 0x48
    double _horizontalDistanceWeight;	// 80 = 0x50
    double _aspectRatioWeight;	// 88 = 0x58
    double _writingDirectionWeight;	// 96 = 0x60
    double _writingDirectionUpperBound;	// 104 = 0x68
    double _writingDirectionMinCoeff;	// 112 = 0x70
    double _minLineHeightScore;	// 120 = 0x78
    double _minArcLengthScore;	// 128 = 0x80
    double _expectedSubstrokesPerLine;	// 136 = 0x88
    double _minSubstrokesForSplit;	// 144 = 0x90
    double _targetFitnessWeight;	// 152 = 0x98
    _Bool _reorderStrokes;	// 160 = 0xa0
    NSArray *_textInputTargets;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000d8c90
@property(readonly, nonatomic) NSArray *textInputTargets; // @synthesize textInputTargets=_textInputTargets;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;	// IMP=0x00000000000d83a0
- (_Bool)_isSplitAcceptable:(id)arg1 arcLengthsByStrokeIdentifier:(id)arg2 outRejectionReason:(id *)arg3;	// IMP=0x00000000000d74a0
- (id)_findMostProbableTextInputTarget:(id)arg1 forGroupBounds:(struct CGRect)arg2 outOverlap:(double *)arg3 outDistance:(double *)arg4;	// IMP=0x00000000000d7160
- (double)_accumulatedTimeDifferences:(id)arg1;	// IMP=0x00000000000d6f50
- (double)_estimateSplitScore:(id)arg1 withTextInputTargets:(id)arg2 arcLengthsByStrokeIdentifier:(id)arg3;	// IMP=0x00000000000d4f60
- (id)_strokeGroupWithStrokes:(id)arg1 orderedStrokeIdentifiers:(id)arg2 previousGroups:(id)arg3 shouldSearchForStableIdentifier:(_Bool)arg4;	// IMP=0x00000000000d41a0
- (id)_strokeIdentifersFromStrokes:(id)arg1;	// IMP=0x00000000000d3f80
- (id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d32a0
- (id)strategyIdentifier;	// IMP=0x00000000000d3280
- (id)initWithStrokeProvider:(id)arg1 locale:(id)arg2 textInputTargets:(id)arg3;	// IMP=0x00000000000d2ff0

@end

