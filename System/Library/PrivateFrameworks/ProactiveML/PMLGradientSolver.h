//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PMLModelRegressor, PMLModelWeights, PMLSparseMatrix;

@interface PMLGradientSolver : NSObject
{
    float _learningRate;	// 8 = 0x8
    float _stoppingThreshold;	// 12 = 0xc
    unsigned long long _minIterations;	// 16 = 0x10
    CDUnknownBlockType _gradientCalculator;	// 24 = 0x18
    CDUnknownBlockType _predictionCalculator;	// 32 = 0x20
    CDUnknownBlockType _batchPredictionCalculator;	// 40 = 0x28
    _Bool _intercept;	// 48 = 0x30
    PMLModelWeights *_weights;	// 56 = 0x38
    PMLSparseMatrix *_covariates;	// 64 = 0x40
    PMLModelRegressor *_objective;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000005b0e
@property(nonatomic) _Bool intercept; // @synthesize intercept=_intercept;
@property(retain, nonatomic) PMLModelRegressor *objective; // @synthesize objective=_objective;
@property(retain, nonatomic) PMLSparseMatrix *covariates; // @synthesize covariates=_covariates;
@property(retain, nonatomic) PMLModelWeights *weights; // @synthesize weights=_weights;
- (void)solveForCovariates:(id)arg1 objectives:(id)arg2;	// IMP=0x0000000000005a4c
- (id)batchPredict:(id)arg1;	// IMP=0x0000000000005900
- (float)predict:(id)arg1;	// IMP=0x00000000000057c1
- (id)solveWithAvgGradient:(float *)arg1 maxNumberOfIterations:(unsigned long long)arg2;	// IMP=0x0000000000004ffd
- (id)computeAvgGradientWithIterations:(unsigned long long)arg1;	// IMP=0x0000000000004ec3
- (void)solve;	// IMP=0x0000000000004ea1
- (id)init;	// IMP=0x0000000000004e9b
- (id)initWithLearningRate:(float)arg1 minIterations:(unsigned long long)arg2 stoppingThreshold:(float)arg3 weights:(id)arg4 intercept:(_Bool)arg5 gradientCalculator:(CDUnknownBlockType)arg6 predictionCalculator:(CDUnknownBlockType)arg7 batchPredictionCalculator:(CDUnknownBlockType)arg8;	// IMP=0x0000000000004b96

@end

