//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNBrightnessDetector
{
}

+ (_Bool)isReentrant;	// IMP=0x00000000000af2c8
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000af4a3
- (struct __CVBuffer *)_createPixelBufferFromImageBuffer:(id)arg1 regionOfInterest:(struct CGRect)arg2 maximumIntermediateSideLength:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000af2d0

@end

