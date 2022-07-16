//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNEspressoResources;

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector
{
    VNEspressoResources *_espressoResources;	// 8 = 0x8
    unsigned long long _networkRequiredInputImageWidth;	// 16 = 0x10
    unsigned long long _networkRequiredInputImageHeight;	// 24 = 0x18
    unsigned long long _inputImageAspectRatioHandling;	// 32 = 0x20
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00000000001f2f9c
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00000000001f2f94
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00000000001f2f8c
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00000000001f2f84
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f2dcb
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x00000000001f2c90
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00000000001f2c2d
- (void).cxx_destruct;	// IMP=0x00000000001f3be4
@property(readonly, nonatomic) unsigned long long inputImageAspectRatioHandling; // @synthesize inputImageAspectRatioHandling=_inputImageAspectRatioHandling;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageHeight; // @synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageWidth; // @synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth;
@property(readonly, nonatomic) VNEspressoResources *espressoResources; // @synthesize espressoResources=_espressoResources;
- (_Bool)executePlanAndReturnError:(id *)arg1;	// IMP=0x00000000001f3afc
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f39e1
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 error:(id *)arg4;	// IMP=0x00000000001f38bf
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f38a4
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f3889
- (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001f36d8
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;	// IMP=0x00000000001f3659
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f35be
- (_Bool)supportsProcessingDevice:(id)arg1;	// IMP=0x00000000001f35b6
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f30b7

@end

