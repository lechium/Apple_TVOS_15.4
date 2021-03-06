//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PHAPrivateFederatedLearningModelValidator : NSObject
{
    NSURL *_espressoModelURL;	// 8 = 0x8
    NSURL *_espressoModelShapeURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001118c
@property(readonly, nonatomic) NSURL *espressoModelShapeURL; // @synthesize espressoModelShapeURL=_espressoModelShapeURL;
@property(readonly, nonatomic) NSURL *espressoModelURL; // @synthesize espressoModelURL=_espressoModelURL;
- (_Bool)_generateError:(id *)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000000001108b
- (_Bool)_isFingerprintVersionSupported:(long long)arg1;	// IMP=0x0000000000011041
- (id)_sizeForLayerName:(id)arg1 modelShape:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010eb3
- (id)_layerConfigForName:(id)arg1 modelConfig:(id)arg2 attributeName:(id)arg3 useEquality:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000010b90
- (id)_layerConfigForLayerName:(id)arg1 modelConfig:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010a9d
- (id)_layerConfigForLabelName:(id)arg1 modelConfig:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010a74
- (id)_layerConfigForModelOutputName:(id)arg1 modelConfig:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010a48
- (id)_layerConfigForModelInputName:(id)arg1 modelConfig:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010a1c
- (id)_dictionaryForJSONFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010849
- (long long)_featureVectorSizeForFingerprintVersionName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001061b
- (_Bool)isValidWithFingerprintVersionName:(id)arg1 modelInputName:(id)arg2 modelOutputName:(id)arg3 labelName:(id)arg4 labelPolicyName:(id)arg5 lossName:(id)arg6 layersToTrain:(id)arg7 error:(id *)arg8;	// IMP=0x000000000000fc3b
- (id)initWithEspressoModelURL:(id)arg1 espressoModelShapeURL:(id)arg2;	// IMP=0x000000000000fba2

@end

