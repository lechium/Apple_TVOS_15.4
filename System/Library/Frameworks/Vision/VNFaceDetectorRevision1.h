//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNFaceDetectorRevision1
{
    unsigned long long _metalContextPriority;	// 8 = 0x8
    _Bool _useLowPriorityMode;	// 16 = 0x10
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> _faceDetector;	// 24 = 0x18
    VNFaceBBoxAligner *_faceBBoxAligner;	// 40 = 0x28
}

+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x000000000009dc78
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x000000000009dc15
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009db27
- (id).cxx_construct;	// IMP=0x000000000009ec63
- (void).cxx_destruct;	// IMP=0x000000000009ec08
- (void)purgeIntermediates;	// IMP=0x000000000009eadc
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000009e45e
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009df04
- (_Bool)supportsProcessingDevice:(id)arg1;	// IMP=0x000000000009dea5

@end

