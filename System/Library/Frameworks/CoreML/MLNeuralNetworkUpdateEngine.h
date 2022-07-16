//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLUpdatable-Protocol.h>

@class ETTaskDefinition, ETTaskState, MLParameterContainer, MLShufflingBatchProvider, MLUpdateProgressHandlers, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MLNeuralNetworkUpdateEngine <MLUpdatable>
{
    _Bool _continueWithUpdate;	// 8 = 0x8
    ETTaskState *_snapshot;	// 16 = 0x10
    ETTaskDefinition *_task;	// 24 = 0x18
    NSString *_lossTargetName;	// 32 = 0x20
    NSDictionary *_classLabelToIndexMap;	// 40 = 0x28
    MLUpdateProgressHandlers *_progressHandlers;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_progressHandlersDispatchQueue;	// 56 = 0x38
    NSDictionary *_coreMLToEspressoParamsMap;	// 64 = 0x40
    NSString *_lossOutputName;	// 72 = 0x48
    MLShufflingBatchProvider *_shuffableTrainingData;	// 80 = 0x50
    MLParameterContainer *_parameterContainer;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b0cc3
+ (id)createCoreMLToEspressoParamsMap;	// IMP=0x00000000000b0a6f
+ (id)loadModelFromCompiledArchive:(void *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000b0997
- (void).cxx_destruct;	// IMP=0x00000000000afa0b
@property(retain, nonatomic) MLParameterContainer *parameterContainer; // @synthesize parameterContainer=_parameterContainer;
@property(retain, nonatomic) MLShufflingBatchProvider *shuffableTrainingData; // @synthesize shuffableTrainingData=_shuffableTrainingData;
@property(nonatomic) _Bool continueWithUpdate; // @synthesize continueWithUpdate=_continueWithUpdate;
@property(retain, nonatomic) NSString *lossOutputName; // @synthesize lossOutputName=_lossOutputName;
@property(retain, nonatomic) NSDictionary *coreMLToEspressoParamsMap; // @synthesize coreMLToEspressoParamsMap=_coreMLToEspressoParamsMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue; // @synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue;
@property(retain, nonatomic) MLUpdateProgressHandlers *progressHandlers; // @synthesize progressHandlers=_progressHandlers;
@property(readonly, nonatomic) NSDictionary *classLabelToIndexMap; // @synthesize classLabelToIndexMap=_classLabelToIndexMap;
@property(retain, nonatomic) NSString *lossTargetName; // @synthesize lossTargetName=_lossTargetName;
@property(retain, nonatomic) ETTaskDefinition *task; // @synthesize task=_task;
@property(retain, nonatomic) ETTaskState *snapshot; // @synthesize snapshot=_snapshot;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000af87f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000af879
- (id)biasForLayer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000af84f
- (id)weightsForLayer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000af825
- (id)paramsForLayer:(id)arg1 parameterType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000af3df
- (id)parameterValueForKey:(id)arg1;	// IMP=0x00000000000af3bb
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000af157
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aea4e
- (id)collectMetricsFromTaskContext:(id)arg1 isInCallBack:(_Bool)arg2;	// IMP=0x00000000000ae854
- (_Bool)updateLearningRateWithTaskContext:(id)arg1 isInCallBack:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000ae388
- (void)resumeUpdateWithParameters:(id)arg1;	// IMP=0x00000000000ae16d
- (void)cancelUpdate;	// IMP=0x00000000000ae159
- (void)resumeUpdate;	// IMP=0x00000000000ae142
- (id)updateParameters;	// IMP=0x00000000000ae0dc
- (void)updateModelWithData:(id)arg1;	// IMP=0x00000000000ad791
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x00000000000ad707
- (_Bool)setWeightsOrBiasesForLayer:(id)arg1 layerType:(unsigned long long)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ad339
- (_Bool)updateWeightsAndBiasesFromConfigParams:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000acf84
- (id)stringForDataType:(unsigned long long)arg1;	// IMP=0x00000000000acf20
- (id)predictionsFromBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ace7b
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000acd31
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000acc8c
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000acb42
- (id)initWithCompiledArchive:(void *)arg1 nnContainer:(id)arg2 configuration:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ac227
- (void)loadLossTargetName:(id *)arg1 lossOutputName:(id *)arg2 fromUpdateParameters:(void *)arg3;	// IMP=0x00000000000abf94
- (void)loadLossInputName:(id *)arg1 updatableLayerNames:(id *)arg2 fromCompiledArchive:(void *)arg3;	// IMP=0x00000000000abcf2
- (id)createEspressoTaskFrom:(id)arg1 updateParameters:(void *)arg2 lossInputName:(id)arg3 lossTargetName:(id)arg4 lossOutputName:(id)arg5 updatableLayerNames:(id)arg6 configuration:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000ab169

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

