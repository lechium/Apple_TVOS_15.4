//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ETImageDescriptorExtractor, ETModelDef, ETOptimizerDef;

@interface ETTask : NSObject
{
    shared_ptr_d082c67d network;	// 8 = 0x8
    _Bool _dumpData;	// 24 = 0x18
    ETModelDef *_model;	// 32 = 0x20
    ETOptimizerDef *_optimizer;	// 40 = 0x28
    ETImageDescriptorExtractor *_extractor;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000047525d
- (void).cxx_destruct;	// IMP=0x0000000000475221
@property(nonatomic) _Bool dumpData; // @synthesize dumpData=_dumpData;
@property(retain, nonatomic) ETImageDescriptorExtractor *extractor; // @synthesize extractor=_extractor;
@property(retain, nonatomic) ETOptimizerDef *optimizer; // @synthesize optimizer=_optimizer;
@property(retain, nonatomic) ETModelDef *model; // @synthesize model=_model;
- (_Bool)moveToGPU:(int)arg1 error:(id *)arg2;	// IMP=0x00000000004751b6
- (void)saveNetwork:(id)arg1 revertToInferenceMode:(_Bool)arg2;	// IMP=0x000000000047502d
- (void)saveNetwork:(id)arg1;	// IMP=0x0000000000475019
- (_Bool)runInference:(id)arg1 outputNames:(id)arg2 batchCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000474e50
- (_Bool)fit:(id)arg1 numberOfEpochs:(int)arg2 outputNames:(id)arg3 batchCallback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000474c7b
- (_Bool)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 outputNames:(id)arg3 batchCallback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000474b08
- (_Bool)runBatches:(id)arg1 numberOfBatches:(unsigned int)arg2 outputNames:(id)arg3 batchCallback:(CDUnknownBlockType)arg4;	// IMP=0x00000000004742fe
- (id)evaluate:(id)arg1;	// IMP=0x0000000000473940
- (float)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 withProgress:(CDUnknownBlockType)arg3;	// IMP=0x0000000000472fa3
- (float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(CDUnknownBlockType)arg3;	// IMP=0x0000000000472da3
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3 extractor:(id)arg4;	// IMP=0x0000000000471042
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3;	// IMP=0x000000000047102d
- (vector_bfe5b09a)reinitializeVariables;	// IMP=0x0000000000470590
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(_Bool)arg4;	// IMP=0x0000000000470274
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;	// IMP=0x000000000047025c
- (id)init;	// IMP=0x00000000004701f5

@end
