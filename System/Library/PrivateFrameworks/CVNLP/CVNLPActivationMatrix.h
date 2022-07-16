//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSOrderedSet;

@interface CVNLPActivationMatrix : NSObject
{
    _Bool __isDoubleDataType;	// 8 = 0x8
    _Bool __usingIndexes;	// 9 = 0x9
    NSOrderedSet *_characterObservations;	// 16 = 0x10
    long long _blankIndex;	// 24 = 0x18
    long long _domainType;	// 32 = 0x20
    double *__doubleScoreMatrix;	// 40 = 0x28
    MLMultiArray *__multiArray;	// 48 = 0x30
    MLMultiArray *__indexArray;	// 56 = 0x38
    long long __timestepCount;	// 64 = 0x40
    long long __observationCount;	// 72 = 0x48
    long long __timeStride;	// 80 = 0x50
    long long __observationStride;	// 88 = 0x58
    long long __type;	// 96 = 0x60
    long long __cachedPriorityQueueTimestep;	// 104 = 0x68
    void *__cachedTimesample;	// 112 = 0x70
    long long __cachedBlankIndexTimestep;	// 120 = 0x78
    long long __cachedBlankIndex;	// 128 = 0x80
    struct CVNLPTextDecodingPruningPolicy __pruningPolicy;	// 136 = 0x88
    CDStruct_0a65202a __espressoBuffer;	// 160 = 0xa0
    CDStruct_0a65202a __indexBuffer;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x0000000000019ad0
@property(readonly, nonatomic) long long _cachedBlankIndex; // @synthesize _cachedBlankIndex=__cachedBlankIndex;
@property(readonly, nonatomic) long long _cachedBlankIndexTimestep; // @synthesize _cachedBlankIndexTimestep=__cachedBlankIndexTimestep;
@property(nonatomic) _Bool _usingIndexes; // @synthesize _usingIndexes=__usingIndexes;
@property(nonatomic) _Bool _isDoubleDataType; // @synthesize _isDoubleDataType=__isDoubleDataType;
@property void *_cachedTimesample; // @synthesize _cachedTimesample=__cachedTimesample;
@property long long _cachedPriorityQueueTimestep; // @synthesize _cachedPriorityQueueTimestep=__cachedPriorityQueueTimestep;
@property(nonatomic) struct CVNLPTextDecodingPruningPolicy _pruningPolicy; // @synthesize _pruningPolicy=__pruningPolicy;
@property(nonatomic) long long _type; // @synthesize _type=__type;
@property(nonatomic) long long _observationStride; // @synthesize _observationStride=__observationStride;
@property(nonatomic) long long _timeStride; // @synthesize _timeStride=__timeStride;
@property(nonatomic) long long _observationCount; // @synthesize _observationCount=__observationCount;
@property(nonatomic) long long _timestepCount; // @synthesize _timestepCount=__timestepCount;
@property(retain, nonatomic) MLMultiArray *_indexArray; // @synthesize _indexArray=__indexArray;
@property(retain, nonatomic) MLMultiArray *_multiArray; // @synthesize _multiArray=__multiArray;
@property(nonatomic) double *_doubleScoreMatrix; // @synthesize _doubleScoreMatrix=__doubleScoreMatrix;
@property(nonatomic) CDStruct_0a65202a _indexBuffer; // @synthesize _indexBuffer=__indexBuffer;
@property(nonatomic) CDStruct_0a65202a _espressoBuffer; // @synthesize _espressoBuffer=__espressoBuffer;
@property(readonly, nonatomic) long long domainType; // @synthesize domainType=_domainType;
@property(nonatomic) long long blankIndex; // @synthesize blankIndex=_blankIndex;
@property(retain, nonatomic) NSOrderedSet *characterObservations; // @synthesize characterObservations=_characterObservations;
- (id)debugDescription;	// IMP=0x0000000000019620
- (id)topCandidateForTimestep:(long long)arg1 outputProbability:(double *)arg2 outputIndex:(long long *)arg3;	// IMP=0x00000000000195d0
- (id)topCandidateForTimestep:(long long)arg1 outputLogProbability:(double *)arg2 outputIndex:(long long *)arg3;	// IMP=0x00000000000192e0
- (id)topCandidateForTimestep:(long long)arg1 outputLogProbability:(double *)arg2;	// IMP=0x00000000000192c0
- (void)_sortNonBlankCandidatesForTimestep:(long long)arg1;	// IMP=0x0000000000019140
- (void)_enumerateNonBlankCandidatesInTimestep:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018c10
- (id)_candidateSymbolAtIndex:(long long)arg1 forTimestep:(long long)arg2 outputScore:(double *)arg3;	// IMP=0x00000000000186c0
- (void)enumerateNonBlankCandidatesInTimestep:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018630
- (long long)characterIndexForObservationIndex:(long long)arg1 timestep:(long long)arg2;	// IMP=0x00000000000185c0
- (double)logProbabilityForBlankAtTimestep:(long long)arg1;	// IMP=0x0000000000018570
- (double)probabilityForBlankAtTimestep:(long long)arg1;	// IMP=0x0000000000018520
- (long long)blankIndexForTimestep:(long long)arg1;	// IMP=0x0000000000018480
- (double)_valueForObservationIndex:(long long)arg1 timestep:(long long)arg2;	// IMP=0x0000000000018420
- (double)logProbabilityForObservationIndex:(long long)arg1 timestep:(long long)arg2;	// IMP=0x00000000000183f0
- (double)_logProbabilityForRawProbability:(double)arg1;	// IMP=0x00000000000183c0
- (double)probabilityForObservationIndex:(long long)arg1 timestep:(long long)arg2;	// IMP=0x0000000000018390
- (long long)observationCount;	// IMP=0x0000000000018380
- (long long)timestepCount;	// IMP=0x0000000000018370
- (void)dealloc;	// IMP=0x00000000000182a0
- (id)initWithMultiArray:(id)arg1 indexArray:(id)arg2 domainType:(long long)arg3 characterObservations:(id)arg4 blankIndex:(long long)arg5 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy)arg6;	// IMP=0x00000000000181f0
- (id)initWithMultiArray:(id)arg1 characterObservations:(id)arg2 blankIndex:(long long)arg3 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy)arg4;	// IMP=0x00000000000181b0
- (id)initWithMultiArray:(id)arg1 domainType:(long long)arg2 characterObservations:(id)arg3 blankIndex:(long long)arg4 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy)arg5;	// IMP=0x0000000000017e40
- (id)initWithBuffer:(CDStruct_0a65202a)arg1 indexBuffer:(CDStruct_0a65202a)arg2 domainType:(long long)arg3 characterObservations:(id)arg4 blankIndex:(long long)arg5 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy)arg6;	// IMP=0x0000000000017da0
- (id)initWithBuffer:(CDStruct_0a65202a)arg1 domainType:(long long)arg2 characterObservations:(id)arg3 blankIndex:(long long)arg4 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy)arg5;	// IMP=0x0000000000017c50

@end

