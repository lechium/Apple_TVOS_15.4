//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision3
{
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x000000000018fee3
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x000000000018fed6
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x000000000018fe57
+ (unsigned char)landmarkDetectorDNNVersion;	// IMP=0x000000000018fe4c
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000190009
- (struct CGRect)normalizedFaceBBoxForLandmarks:(id)arg1;	// IMP=0x000000000018fef0

@end
