//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FidesPHSEvaluatorDataSource : NSObject
{
    NSArray *_inputVectors;	// 8 = 0x8
    NSArray *_targetVector;	// 16 = 0x10
    NSDictionary *_recipe;	// 24 = 0x18
    NSArray *_records;	// 32 = 0x20
    NSArray *_recordInfos;	// 40 = 0x28
    NSArray *_recordDatas;	// 48 = 0x30
}

+ (id)defaultRecipeParams;	// IMP=0x000000000003d60a
+ (void)initialize;	// IMP=0x000000000003d5bc
- (void).cxx_destruct;	// IMP=0x000000000003e377
@property(retain, nonatomic) NSArray *recordDatas; // @synthesize recordDatas=_recordDatas;
@property(retain, nonatomic) NSArray *recordInfos; // @synthesize recordInfos=_recordInfos;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(copy, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
@property(readonly, nonatomic) NSArray *targetVector; // @synthesize targetVector=_targetVector;
@property(readonly, nonatomic) NSArray *inputVectors; // @synthesize inputVectors=_inputVectors;
@property(readonly, nonatomic) NSArray *translateVector;
@property(readonly, nonatomic) NSArray *weightVector;
@property(readonly, nonatomic) _Bool reportPerNodeResultDifference;
@property(readonly, nonatomic) _Bool reportPerFeatureResultDifference;
@property(readonly, nonatomic) _Bool reportNodeSumGradients;
@property(readonly, nonatomic) _Bool reportGradientsBothSidesOfSplit;
@property(readonly, nonatomic) _Bool computeSecondOrderGradients;
@property(readonly, nonatomic) _Bool computeFirstOrderGradients;
@property(readonly, nonatomic) NSArray *GBDTQuestions;
- (int)classThreshold;	// IMP=0x000000000003dec1
- (id)freezeComponents;	// IMP=0x000000000003de6a
- (id)objectiveFunction;	// IMP=0x000000000003de13
- (id)gradNormType;	// IMP=0x000000000003ddbc
- (float)l2NormBound;	// IMP=0x000000000003dd42
- (int)batchSize;	// IMP=0x000000000003dccd
- (float)gradNormFactor;	// IMP=0x000000000003dc53
- (id)classLearningRates;	// IMP=0x000000000003dbfc
- (id)inputSplice;	// IMP=0x000000000003dba5
- (id)labelMap;	// IMP=0x000000000003db4e
- (id)layersToTrain;	// IMP=0x000000000003daf7
- (float)learningRateDecay;	// IMP=0x000000000003da7d
- (float)learningRate;	// IMP=0x000000000003da03
- (int)numLocalIterations;	// IMP=0x000000000003d98e
- (id)initWithRecipe:(id)arg1 inputVectors:(id)arg2 targetVector:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003d85b

@end

