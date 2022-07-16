//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplLC
{
    const void *_maxEntModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NSDictionary *_labelMap;	// 24 = 0x18
    NSDictionary *_vocabularyMap;	// 32 = 0x20
    NSDictionary *_documentFrequencyMap;	// 40 = 0x28
    unsigned long long _numberOfTrainingInstances;	// 48 = 0x30
    NSData *_modelData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001d36d
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x000000000001d259
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x000000000001d148
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x000000000001d03c
- (id)predictedLabelForString:(id)arg1;	// IMP=0x000000000001cf50
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x000000000001cf3f
- (id)documentFrequencyMap;	// IMP=0x000000000001cf2a
- (id)vocabularyMap;	// IMP=0x000000000001cf15
- (id)labelMap;	// IMP=0x000000000001cf00
- (id)configuration;	// IMP=0x000000000001ceeb
- (id)modelData;	// IMP=0x000000000001ced6
- (void)dealloc;	// IMP=0x000000000001ce90
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001cb8d
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x000000000001c8db

@end

