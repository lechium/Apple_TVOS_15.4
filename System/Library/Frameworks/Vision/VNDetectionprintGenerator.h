//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNDetectionprintGenerator
{
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x0000000000254925
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x000000000025491a
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x000000000025490d
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x0000000000254900
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x0000000000254864
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000254f27
- (id)_analyzePixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000254a74
- (id)_detectionprintTensorForOutputBuffer:(const CDStruct_0a65202a *)arg1 originatingRequestSpecifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000025492d

@end
