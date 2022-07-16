//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceQualityGenerator
{
    struct shared_ptr<vision::mod::FaceQualityPredictor> _mFaceQualityPredictor;	// 8 = 0x8
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00000000000155a3
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x0000000000015598
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0000000000015535
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x000000000001543e
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x0000000000015431
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x000000000001536e
- (id).cxx_construct;	// IMP=0x0000000000016722
- (void).cxx_destruct;	// IMP=0x00000000000166db
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000015cd4
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001566b

@end
