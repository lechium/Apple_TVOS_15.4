//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/ETDataProvider-Protocol.h>

@class MLNeuralNetworkEngine, NSString;
@protocol MLBatchProvider;

@interface _MLBatchDataSource : NSObject <ETDataProvider>
{
    _Bool _useForPrediction;	// 8 = 0x8
    id <MLBatchProvider> _batchProvider;	// 16 = 0x10
    MLNeuralNetworkEngine *_nnEngine;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000de483
@property(readonly, nonatomic) _Bool useForPrediction; // @synthesize useForPrediction=_useForPrediction;
@property(readonly, nonatomic) MLNeuralNetworkEngine *nnEngine; // @synthesize nnEngine=_nnEngine;
@property(readonly, nonatomic) id <MLBatchProvider> batchProvider; // @synthesize batchProvider=_batchProvider;
- (unsigned long long)numberOfDataPoints;	// IMP=0x00000000000de40e
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000de2b9
- (id)initWithMLBatchProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000de1f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

