//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetector
{
    struct shared_ptr<vision::mod::FaceFrontalizer> _mFaceFrontalizerImpl;	// 24 = 0x18
    struct vImage_Buffer _faceVImageBuffer;	// 40 = 0x28
    NSMutableData *_mFaceFrontalizerWorkingBuffer;	// 72 = 0x48
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00000000000e7000
+ (float)faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)arg1;	// IMP=0x00000000000e6fb0
- (id).cxx_construct;	// IMP=0x00000000000e6f0a
- (void).cxx_destruct;	// IMP=0x00000000000e6eaf
- (_Bool)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;	// IMP=0x00000000000e6dd1
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e575f
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e542d

@end
