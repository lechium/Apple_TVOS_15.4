//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIContext, VNCIContrastFromAverageColorFilter, VNCIContrastWithPivotColorFilter;

__attribute__((visibility("hidden")))
@interface VNContoursDetector
{
    CIContext *_ciContext;	// 8 = 0x8
    VNCIContrastFromAverageColorFilter *_ciContrastFromAvgFilter;	// 16 = 0x10
    VNCIContrastWithPivotColorFilter *_ciContrastWithPivotFilter;	// 24 = 0x18
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x000000000015ac27
- (void).cxx_destruct;	// IMP=0x000000000015bfe0
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000015afd5
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015ad4a

@end
