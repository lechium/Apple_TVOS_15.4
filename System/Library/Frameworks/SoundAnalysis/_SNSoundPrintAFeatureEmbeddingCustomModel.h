//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/MLCustomModel-Protocol.h>

@class MLModelDescription, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _SNSoundPrintAFeatureEmbeddingCustomModel <MLCustomModel>
{
    MLModelDescription *_modelDescription;	// 40 = 0x28
    NSString *_inputFeatureName;	// 48 = 0x30
    NSString *_outputFeatureName;	// 56 = 0x38
    NSArray *_outputShape;	// 64 = 0x40
}

+ (_Bool)validateModelDescription:(id)arg1 underlyingModelDescription:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000068ba3
- (void).cxx_destruct;	// IMP=0x000000000006a61a
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000069b9c
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006980c

@end

