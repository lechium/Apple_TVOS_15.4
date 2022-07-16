//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNAutoplay
{
    NSMutableDictionary *_summaryResults;	// 8 = 0x8
    VCPCNNModelEspresso *_modelEspresso;	// 16 = 0x10
    NSArray *_inputNames;	// 24 = 0x18
    vector_aebc2d99 _inputsData;	// 32 = 0x20
    float *_analysisInput;	// 56 = 0x38
    _Bool _skip;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x000000000016fc50
- (void).cxx_destruct;	// IMP=0x000000000016fbf4
- (id)results;	// IMP=0x000000000016fb14
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x000000000016fb0c
- (int)run:(id)arg1;	// IMP=0x000000000016f912
- (int)loadAnalysisResults:(id)arg1 audioResults:(id)arg2;	// IMP=0x000000000016ead2
- (void)dealloc;	// IMP=0x000000000016ea8c
- (id)init;	// IMP=0x000000000016e7f8

@end
