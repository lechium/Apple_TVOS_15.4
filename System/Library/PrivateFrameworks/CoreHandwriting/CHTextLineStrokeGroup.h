//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CHTextLineStrokeGroup
{
    NSArray *_writingDirectionSortedSubstrokes;	// 8 = 0x8
    struct CGVector _averageWritingOrientation;	// 16 = 0x10
    struct CGVector _averageStrokeDeviation;	// 32 = 0x20
    struct vector<CGVector, std::allocator<CGVector>> _localStrokeWritingOrientations;	// 48 = 0x30
    long long _lastSubstrokeIndexBeforeMerge;	// 72 = 0x48
    NSArray *_coalescedLastSubstrokes;	// 80 = 0x50
    NSArray *_writingDirectionSortedStrokeIdentifiers;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009c3b0
- (id).cxx_construct;	// IMP=0x000000000009c440
- (void).cxx_destruct;	// IMP=0x000000000009c3e0
@property(readonly, nonatomic) NSArray *writingDirectionSortedStrokeIdentifiers; // @synthesize writingDirectionSortedStrokeIdentifiers=_writingDirectionSortedStrokeIdentifiers;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009b940
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009b4a0
- (struct CGPath *)newEstimatedBaselineForSubStrokes:(id)arg1 tokens:(id)arg2 tokenSubStrokeIndexes:(id)arg3 estimatedDescenderLocations:(id)arg4;	// IMP=0x00000000000993f0
- (const struct CGPath *)newEstimatedBaselineForStrokesWithTokens:(id)arg1 tokenStrokeIdentifiers:(id)arg2;	// IMP=0x0000000000098ae0
- (id)coalescedLastSubstrokes;	// IMP=0x0000000000098ac0
- (long long)lastSubstrokeIndexBeforeMerge;	// IMP=0x0000000000098aa0
- (struct CGVector)averageStrokeDeviation;	// IMP=0x0000000000098a80
- (struct CGVector)averageWritingOrientation;	// IMP=0x0000000000098a60
- (struct CGVector)localWritingOrientationAtStrokeIndex:(long long)arg1;	// IMP=0x0000000000098a40
- (void *)localStrokeWritingOrientations;	// IMP=0x0000000000098a30
- (id)writingDirectionSortedSubstrokes;	// IMP=0x0000000000098a10
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector)arg7 averageStrokeDeviation:(struct CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const void *)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 lastSubstrokeIndexBeforeMerge:(long long)arg13 firstStrokeOrigin:(struct CGPoint)arg14;	// IMP=0x0000000000098800
- (id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(struct CGRect)arg6 strategyIdentifier:(id)arg7 writingDirectionSortedSubstrokes:(id)arg8 averageWritingOrientation:(struct CGVector)arg9 averageStrokeDeviation:(struct CGVector)arg10 writingDirectionSortedStrokeIdentifiers:(id)arg11 localStrokeWritingOrientations:(const void *)arg12 coalescedLastSubstrokes:(id)arg13 groupingConfidence:(double)arg14 firstStrokeOrigin:(struct CGPoint)arg15;	// IMP=0x00000000000985a0
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5 strategyIdentifier:(id)arg6 writingDirectionSortedSubstrokes:(id)arg7 averageWritingOrientation:(struct CGVector)arg8 averageStrokeDeviation:(struct CGVector)arg9 writingDirectionSortedStrokeIdentifiers:(id)arg10 localStrokeWritingOrientations:(const void *)arg11 coalescedLastSubstrokes:(id)arg12 groupingConfidence:(double)arg13 firstStrokeOrigin:(struct CGPoint)arg14;	// IMP=0x0000000000098350
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4 strategyIdentifier:(id)arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector)arg7 averageStrokeDeviation:(struct CGVector)arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const void *)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 firstStrokeOrigin:(struct CGPoint)arg13;	// IMP=0x00000000000982f0

@end

