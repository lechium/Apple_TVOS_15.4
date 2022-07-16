//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLRegressor-Protocol.h>

@class MLModelDescription, MLModelMetadata, MLPredictionEvent;

@interface MLRegressor <MLRegressor>
{
}

+ (id)predictionFromFeatures:(id)arg1 regressor:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003cc0b
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f0caa
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f0bf6
- (id)initWithDescription:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f0b4a
- (id)regressorResultFromOutputFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003c329
- (id)initDescriptionOnlyWithSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007af0a

// Remaining properties
@property(readonly) MLModelMetadata *metadata;
@property(retain, nonatomic) MLModelDescription *modelDescription;
@property(retain, nonatomic) MLPredictionEvent *predictionEvent;

@end
