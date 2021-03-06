//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLModel, NLModelConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface NLModelImplML
{
    MLModel *_mlModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NSString *_inputName;	// 24 = 0x18
    NSString *_outputName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000477c
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000004670
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000004459
- (id)configuration;	// IMP=0x0000000000004444
- (id)modelData;	// IMP=0x000000000000443c
- (id)initWithMLModel:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000000420c
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000041fe
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000041f0

@end

