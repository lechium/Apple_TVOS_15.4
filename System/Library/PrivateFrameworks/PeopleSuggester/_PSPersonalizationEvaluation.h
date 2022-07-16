//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelConfiguration, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, NSUserDefaults;
@protocol _DKKnowledgeQuerying;

@interface _PSPersonalizationEvaluation : NSObject
{
    _Bool _evaluateIsInvokedOnce;	// 8 = 0x8
    NSDictionary *_recipe;	// 16 = 0x10
    NSString *_adaptableModelDeployPath;	// 24 = 0x18
    long long _adaptationStrategy;	// 32 = 0x20
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 40 = 0x28
    NSMutableDictionary *_featureNameDict;	// 48 = 0x30
    NSDictionary *_selectedFeaturesConfig;	// 56 = 0x38
    NSMutableArray *_results;	// 64 = 0x40
    MLModelConfiguration *_adaptableModelConfiguration;	// 72 = 0x48
    NSURL *_intermediateCompiledModelURL;	// 80 = 0x50
    NSNumber *_batchSize;	// 88 = 0x58
    NSNumber *_topN;	// 96 = 0x60
    NSNumber *_epoc;	// 104 = 0x68
    NSNumber *_evaluationIterationCount;	// 112 = 0x70
    NSNumber *_testSplitPercent;	// 120 = 0x78
    NSNumber *_swapOK;	// 128 = 0x80
    NSNumber *_accuracyGainThresholdForSwap;	// 136 = 0x88
    NSNumber *_engagementRateGainThresholdForSwap;	// 144 = 0x90
    NSNumber *_minimumTestDataSizeForSwap;	// 152 = 0x98
    NSNumber *_numClasses;	// 160 = 0xa0
    NSNumber *_numTrees;	// 168 = 0xa8
    NSNumber *_maxDepth;	// 176 = 0xb0
    NSNumber *_learningRate;	// 184 = 0xb8
    NSNumber *_minChildWeight;	// 192 = 0xc0
    NSNumber *_recipeID;	// 200 = 0xc8
    NSNumber *_minSampleCountForAdaptation;	// 208 = 0xd0
    NSUserDefaults *_psAdaptationDefaults;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000000696f6
@property(nonatomic) _Bool evaluateIsInvokedOnce; // @synthesize evaluateIsInvokedOnce=_evaluateIsInvokedOnce;
@property(retain, nonatomic) NSUserDefaults *psAdaptationDefaults; // @synthesize psAdaptationDefaults=_psAdaptationDefaults;
@property(retain, nonatomic) NSNumber *minSampleCountForAdaptation; // @synthesize minSampleCountForAdaptation=_minSampleCountForAdaptation;
@property(retain, nonatomic) NSNumber *recipeID; // @synthesize recipeID=_recipeID;
@property(retain, nonatomic) NSNumber *minChildWeight; // @synthesize minChildWeight=_minChildWeight;
@property(retain, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property(retain, nonatomic) NSNumber *maxDepth; // @synthesize maxDepth=_maxDepth;
@property(retain, nonatomic) NSNumber *numTrees; // @synthesize numTrees=_numTrees;
@property(retain, nonatomic) NSNumber *numClasses; // @synthesize numClasses=_numClasses;
@property(retain, nonatomic) NSNumber *minimumTestDataSizeForSwap; // @synthesize minimumTestDataSizeForSwap=_minimumTestDataSizeForSwap;
@property(retain, nonatomic) NSNumber *engagementRateGainThresholdForSwap; // @synthesize engagementRateGainThresholdForSwap=_engagementRateGainThresholdForSwap;
@property(retain, nonatomic) NSNumber *accuracyGainThresholdForSwap; // @synthesize accuracyGainThresholdForSwap=_accuracyGainThresholdForSwap;
@property(retain, nonatomic) NSNumber *swapOK; // @synthesize swapOK=_swapOK;
@property(retain, nonatomic) NSNumber *testSplitPercent; // @synthesize testSplitPercent=_testSplitPercent;
@property(retain, nonatomic) NSNumber *evaluationIterationCount; // @synthesize evaluationIterationCount=_evaluationIterationCount;
@property(retain, nonatomic) NSNumber *epoc; // @synthesize epoc=_epoc;
@property(retain, nonatomic) NSNumber *topN; // @synthesize topN=_topN;
@property(retain, nonatomic) NSNumber *batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSURL *intermediateCompiledModelURL; // @synthesize intermediateCompiledModelURL=_intermediateCompiledModelURL;
@property(retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration; // @synthesize adaptableModelConfiguration=_adaptableModelConfiguration;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSDictionary *selectedFeaturesConfig; // @synthesize selectedFeaturesConfig=_selectedFeaturesConfig;
@property(retain, nonatomic) NSMutableDictionary *featureNameDict; // @synthesize featureNameDict=_featureNameDict;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(nonatomic) long long adaptationStrategy; // @synthesize adaptationStrategy=_adaptationStrategy;
@property(retain, nonatomic) NSString *adaptableModelDeployPath; // @synthesize adaptableModelDeployPath=_adaptableModelDeployPath;
@property(readonly, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
- (void)adaptMLModel:(id)arg1 withTrainingData:(id)arg2 modelConfiguration:(id)arg3;	// IMP=0x0000000000068abf
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1 forMLModel:(id)arg2;	// IMP=0x0000000000067d70
- (id)processDataWithQuery:(id)arg1 balanceNeed:(_Bool)arg2;	// IMP=0x00000000000663cf
- (id)loadAdaptableModelUnderDirectory:(id)arg1;	// IMP=0x0000000000065f1a
- (void)updateAdaptableModelConfigWithUpdateType:(long long)arg1 numTrees:(id)arg2;	// IMP=0x000000000006578d
- (_Bool)cloneAdaptableModel:(id)arg1 toFilePath:(id)arg2 originalXgboostModelName:(id)arg3 clonedXgboostModelName:(id)arg4;	// IMP=0x000000000006545c
- (id)loadDefaultModel;	// IMP=0x000000000006520b
- (_Bool)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)arg1;	// IMP=0x000000000006503d
- (void)setParametersFromRecipe;	// IMP=0x0000000000064153
- (void)setLastDayOfAdaptation:(id)arg1;	// IMP=0x00000000000640da
- (id)initWithRecipe:(id)arg1 knowledgeStore:(id)arg2;	// IMP=0x0000000000063f97

@end

