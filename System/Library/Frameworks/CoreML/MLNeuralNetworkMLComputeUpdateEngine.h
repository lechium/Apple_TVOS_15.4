//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLUpdatable-Protocol.h>

@class NSDictionary, NSString;

@interface MLNeuralNetworkMLComputeUpdateEngine <MLUpdatable>
{
    _Bool _classifierOutputIsSigmoidOutput;	// 8 = 0x8
    NSDictionary *_classLabelToIndexMap;	// 16 = 0x10
    NSString *_lossTargetName;	// 24 = 0x18
}

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;	// IMP=0x000000000007b00a
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007b002
- (void).cxx_destruct;	// IMP=0x000000000007b07a
@property(readonly, nonatomic) NSString *lossTargetName; // @synthesize lossTargetName=_lossTargetName;
@property(nonatomic) _Bool classifierOutputIsSigmoidOutput; // @synthesize classifierOutputIsSigmoidOutput=_classifierOutputIsSigmoidOutput;
@property(readonly, nonatomic) NSDictionary *classLabelToIndexMap; // @synthesize classLabelToIndexMap=_classLabelToIndexMap;
- (void)updateModelWithData:(id)arg1;	// IMP=0x000000000007b032
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x000000000007b02c
- (void)resumeUpdateWithParameters:(id)arg1;	// IMP=0x000000000007b026
- (void)resumeUpdate;	// IMP=0x000000000007b020
- (void)cancelUpdate;	// IMP=0x000000000007b01a
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007b012

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

