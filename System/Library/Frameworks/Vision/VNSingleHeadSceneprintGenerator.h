//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSingleHeadSceneprintGenerator
{
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00000000000eca9d
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00000000000eca92
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00000000000eca85
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00000000000eca78
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00000000000eca15
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x00000000000ec9e6
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00000000000ec9b7
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ed1ff
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ed1d0
- (id)_observationsForSceneprintOutput:(const CDStruct_0a65202a *)arg1 originatingRequestSpecifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ecf9c
- (_Bool)_analyzeRegionOfInterest:(struct CGRect)arg1 sceneprintOutputBuffer:(CDStruct_0a65202a *)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000ecd21
- (_Bool)_analyzePixelBuffer:(struct __CVBuffer *)arg1 sceneprintOutputBuffer:(CDStruct_0a65202a *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ecb65

@end

