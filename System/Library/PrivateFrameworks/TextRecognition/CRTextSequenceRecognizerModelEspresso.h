//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRNeuralRecognizerConfiguration, NSArray, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface CRTextSequenceRecognizerModelEspresso
{
    int _engine;	// 8 = 0x8
    int _precision;	// 12 = 0xc
    CRNeuralRecognizerConfiguration *_configuration;	// 16 = 0x10
    CRNeuralRecognizerConfiguration *_recognizerConfiguration;	// 24 = 0x18
    void *_context;	// 32 = 0x20
    void *_plan;	// 40 = 0x28
    NSString *_currentConfigurationHash;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_predictionQueue;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_predictionGroup;	// 64 = 0x40
    NSObject<OS_dispatch_semaphore> *_submissionSemaphore;	// 72 = 0x48
    CDStruct_2bc666a5 _network;	// 80 = 0x50
    vector_67869b74 _names;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x000000000001e72e
- (void).cxx_destruct;	// IMP=0x000000000001e69f
@property(retain) NSObject<OS_dispatch_semaphore> *submissionSemaphore; // @synthesize submissionSemaphore=_submissionSemaphore;
@property(retain) NSObject<OS_dispatch_group> *predictionGroup; // @synthesize predictionGroup=_predictionGroup;
@property(retain) NSObject<OS_dispatch_queue> *predictionQueue; // @synthesize predictionQueue=_predictionQueue;
@property(retain) NSString *currentConfigurationHash; // @synthesize currentConfigurationHash=_currentConfigurationHash;
@property vector_67869b74 names; // @synthesize names=_names;
@property int precision; // @synthesize precision=_precision;
@property int engine; // @synthesize engine=_engine;
@property CDStruct_2bc666a5 network; // @synthesize network=_network;
@property void *plan; // @synthesize plan=_plan;
@property void *context; // @synthesize context=_context;
@property(retain) CRNeuralRecognizerConfiguration *recognizerConfiguration; // @synthesize recognizerConfiguration=_recognizerConfiguration;
- (id)configuration;	// IMP=0x000000000001e470
- (void)_resetEspressoState;	// IMP=0x000000000001e427
- (void)_configurePlanForInput:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001def2
- (_Bool)preheatWithError:(id *)arg1;	// IMP=0x000000000001dc81
- (_Bool)_shouldReconfigurePlanForInput:(id)arg1;	// IMP=0x000000000001db52
- (struct vImage_Buffer)_createBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 channels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 sequenceLength:(unsigned long long)arg5;	// IMP=0x000000000001db08
- (void *)_createContextForEngine:(int)arg1 configuration:(id)arg2;	// IMP=0x000000000001da3d
- (void)_setupContextAndPlanForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d71f
- (id)_configurationHashForInput:(id)arg1 batchSize:(unsigned long long)arg2;	// IMP=0x000000000001d5f7
- (id)_configurationHashForInput:(id)arg1;	// IMP=0x000000000001d587
- (id)_modelConfigurationNameForInput:(id)arg1;	// IMP=0x000000000001d4dc
- (void)dealloc;	// IMP=0x000000000001d469
- (id)outputFromOutputBuffers:(vector_93d217ea)arg1 featureInfo:(id)arg2;	// IMP=0x000000000001d389
- (id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4;	// IMP=0x000000000001d1b9
- (id)predictFromInputs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001c31e
@property(readonly) NSArray *outputNames;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001c046
- (id)modelFilePath;	// IMP=0x000000000001bfa2

@end

