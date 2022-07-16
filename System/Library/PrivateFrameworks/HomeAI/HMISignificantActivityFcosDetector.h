//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMINMSConfiguration, NSArray, NSString;

@interface HMISignificantActivityFcosDetector : HMFObject <HMFLogging>
{
    float _confidenceThresholds[7];	// 8 = 0x8
    struct CGSize _anchorStrides[5];	// 40 = 0x28
    NSString *_inputFeatureValueName;	// 120 = 0x78
    NSArray *_offsetsZeroFeatureValueNames;	// 128 = 0x80
    NSArray *_offsetsOneFeatureValueNames;	// 136 = 0x88
    NSArray *_scoresFeatureValueNames;	// 144 = 0x90
    NSArray *_yawsFeatureValueNames;	// 152 = 0x98
    NSArray *_rollsFeatureValueNames;	// 160 = 0xa0
    HMINMSConfiguration *_nmsConfiguration;	// 168 = 0xa8
    struct CGSize _inputDimensions;	// 176 = 0xb0
}

+ (id)logCategory;	// IMP=0x0000000000017b67
+ (id)defaultAssetPath;	// IMP=0x0000000000017af0
+ (id)defaultNMSConfiguration;	// IMP=0x0000000000017a13
+ (id)sharedModel;	// IMP=0x0000000000015fe8
- (void).cxx_destruct;	// IMP=0x0000000000017c47
@property(readonly) HMINMSConfiguration *nmsConfiguration; // @synthesize nmsConfiguration=_nmsConfiguration;
@property(readonly) NSArray *rollsFeatureValueNames; // @synthesize rollsFeatureValueNames=_rollsFeatureValueNames;
@property(readonly) NSArray *yawsFeatureValueNames; // @synthesize yawsFeatureValueNames=_yawsFeatureValueNames;
@property(readonly) NSArray *scoresFeatureValueNames; // @synthesize scoresFeatureValueNames=_scoresFeatureValueNames;
@property(readonly) NSArray *offsetsOneFeatureValueNames; // @synthesize offsetsOneFeatureValueNames=_offsetsOneFeatureValueNames;
@property(readonly) NSArray *offsetsZeroFeatureValueNames; // @synthesize offsetsZeroFeatureValueNames=_offsetsZeroFeatureValueNames;
@property(readonly) NSString *inputFeatureValueName; // @synthesize inputFeatureValueName=_inputFeatureValueName;
@property(readonly) struct CGSize inputDimensions; // @synthesize inputDimensions=_inputDimensions;
- (void)_postProcessOffsetsZero:(id)arg1 offsetsOne:(id)arg2 scores:(id)arg3 yaws:(id)arg4 rolls:(id)arg5 outputPredictions:(id)arg6;	// IMP=0x0000000000016dad
- (_Bool)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer *)arg1 offsetsZero:(id)arg2 offsetsOne:(id)arg3 scores:(id)arg4 yaws:(id)arg5 rolls:(id)arg6 error:(id *)arg7;	// IMP=0x0000000000016451
- (_Bool)predict:(struct __CVBuffer *)arg1 detectedObjects:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000016296
- (id)initWithConfidenceThresholds:(id)arg1 nmsConfiguration:(id)arg2 assetPath:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000015cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

