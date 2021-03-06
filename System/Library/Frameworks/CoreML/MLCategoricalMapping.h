//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLFeatureValue, NSDictionary, NSString;

@interface MLCategoricalMapping <MLModelSpecificationLoader>
{
    NSDictionary *_mapping;	// 8 = 0x8
    MLFeatureValue *_valueOnUnknown;	// 16 = 0x10
}

+ (id)loadModelFromSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001531ee
- (void).cxx_destruct;	// IMP=0x00000000001531bd
@property(readonly, nonatomic) MLFeatureValue *valueOnUnknown; // @synthesize valueOnUnknown=_valueOnUnknown;
@property(readonly, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001529f4
- (id)mapFeature:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015294e
- (id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;	// IMP=0x00000000001526b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

