//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REBayesianMLModelProperties-Protocol.h>

@class REExportedTable;

@interface REBayesianMLModel <REBayesianMLModelProperties>
{
    struct BayesianModel _model;	// 8 = 0x8
    unsigned long long _numberOfFeatures;	// 504 = 0x1f8
}

+ (unsigned long long)maxFeatureCount;	// IMP=0x00000000000eb553
+ (unsigned long long)featureBitWidth;	// IMP=0x00000000000eb548
- (id).cxx_construct;	// IMP=0x00000000000eb75c
- (void).cxx_destruct;	// IMP=0x00000000000eb74b
@property(readonly, nonatomic) REExportedTable *content;
- (void)logCoreAnalyticsMetrics;	// IMP=0x00000000000eb55e
- (unsigned long long)_getTotalPositiveCount;	// IMP=0x00000000000eb533
- (unsigned long long)_getTotalExampleCount;	// IMP=0x00000000000eb51e
- (float)_getNormalizedEntropy;	// IMP=0x00000000000eb508
- (float)_getAveragePrediction;	// IMP=0x00000000000eb4f2
- (long long)_getNumberOfCoordinates;	// IMP=0x00000000000eb4b2
- (void)_clearModel;	// IMP=0x00000000000eb42b
- (_Bool)_loadModelFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000eb2a0
- (_Bool)_saveDebugModelToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000eb285
- (_Bool)_saveModelToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000eb26d
- (_Bool)_saveModelToURL:(id)arg1 includeDebugData:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000eb0ba
- (void)_loadFeatureVector:(void *)arg1 fromFeatureMap:(id)arg2;	// IMP=0x00000000000eae63
- (id)_predictWithFeatures:(id)arg1;	// IMP=0x00000000000ea3e1
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;	// IMP=0x00000000000ea241
- (unsigned long long)_maxFeatureCoordinates;	// IMP=0x00000000000ea22f
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;	// IMP=0x00000000000ea104

@end
