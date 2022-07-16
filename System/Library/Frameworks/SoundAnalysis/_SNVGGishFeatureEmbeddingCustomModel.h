//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLCustomModel-Protocol.h>

@class MLModel, MLModelDescription;

__attribute__((visibility("hidden")))
@interface _SNVGGishFeatureEmbeddingCustomModel : NSObject <MLCustomModel>
{
    MLModelDescription *_modelDescription;	// 8 = 0x8
    MLModel *_model;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000014ed6
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000149bb
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014886

@end

