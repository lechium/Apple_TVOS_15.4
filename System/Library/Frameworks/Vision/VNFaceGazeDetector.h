//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceGazeDetector
{
    struct shared_ptr<vision::mod::CamGazePredictor> _gazePredictor;	// 8 = 0x8
    struct shared_ptr<vision::mod::GazeFollowPredictor> _gazeFollowPredictor;	// 24 = 0x18
}

+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024b0b3
- (id).cxx_construct;	// IMP=0x0000000000249aaf
- (void).cxx_destruct;	// IMP=0x0000000000249a34
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000248a6b
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000248040

@end

