//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLMultiLabelClassifierProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString, PMLGradientSolver;

@interface PMLLogisticRegressionModel : NSObject <PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol>
{
    PMLGradientSolver *_solver;	// 8 = 0x8
}

+ (id)withWeights:(id)arg1 andIntercept:(_Bool)arg2;	// IMP=0x0000000000016c1e
+ (id)withWeights:(id)arg1;	// IMP=0x0000000000016c0a
+ (id)solverWithWeights:(id)arg1 andIntercept:(_Bool)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5 regularizationStrategy:(unsigned long long)arg6 regularizationRate:(float)arg7 l1Ratio:(float)arg8;	// IMP=0x0000000000016b24
+ (id)solverWithWeights:(id)arg1 andIntercept:(_Bool)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5 l2RegularizationRate:(float)arg6;	// IMP=0x0000000000016b06
+ (id)solverWithWeights:(id)arg1 andIntercept:(_Bool)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5;	// IMP=0x0000000000016ae8
+ (id)solverWithWeights:(id)arg1 andIntercept:(_Bool)arg2;	// IMP=0x0000000000016abd
+ (id)solverWithWeights:(id)arg1;	// IMP=0x0000000000016aa9
- (void).cxx_destruct;	// IMP=0x0000000000016a99
- (id)serialize;	// IMP=0x0000000000016a8f
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x0000000000016915
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x00000000000167d9
- (id)weights;	// IMP=0x00000000000167c3
- (id)predict:(id)arg1;	// IMP=0x00000000000166d8
- (unsigned long long)outputDimension;	// IMP=0x00000000000166cd
- (id)initWithSolver:(id)arg1;	// IMP=0x0000000000016662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

