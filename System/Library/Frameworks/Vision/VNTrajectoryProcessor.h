//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext, CIFilter, CIImage, ParabolaDetection, VNDetectContoursRequest, VNImageBuffer;

__attribute__((visibility("hidden")))
@interface VNTrajectoryProcessor : NSObject
{
    CIContext *_ciContext;	// 8 = 0x8
    CIFilter *_absoluteDiffFilter;	// 16 = 0x10
    CIFilter *_thresholdFilter;	// 24 = 0x18
    CIFilter *_dilateFilter;	// 32 = 0x20
    CIFilter *_contrastFilter;	// 40 = 0x28
    VNDetectContoursRequest *_detectContoursRequest;	// 48 = 0x30
    VNImageBuffer *_previousFrameBuffer;	// 56 = 0x38
    CIImage *_previousFrameImage;	// 64 = 0x40
    unsigned long long _maximumImageDimension;	// 72 = 0x48
    float _preScaleFactor;	// 80 = 0x50
    float _dilateRadius;	// 84 = 0x54
    CDStruct_1b6d18a9 _frameAnalysisSpacing;	// 88 = 0x58
    CDStruct_1b6d18a9 _lastAnalyzedFramePTS;	// 112 = 0x70
    CDStruct_1b6d18a9 _nextFrameToBeAnalyzedPTS;	// 136 = 0x88
    _Bool _processAllFrames;	// 160 = 0xa0
    struct CGColorSpace *_sRGB;	// 168 = 0xa8
    ParabolaDetection *_parabolaDetector;	// 176 = 0xb0
    unsigned long long _currentImageWidth;	// 184 = 0xb8
    unsigned long long _currentImageHeight;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000136949
- (id)processVNImageBuffer:(id)arg1 regionOfInterest:(struct CGRect)arg2 withOptions:(id)arg3 warningRecorder:(id)arg4 requestUUID:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000134324
- (id)_VNPointsFromCGPoints:(const void *)arg1;	// IMP=0x00000000001341c4
- (struct __CVBuffer *)_createCroppedAndScaledBufferFromVNImageBuffer:(id)arg1 regionOfInterest:(struct CGRect)arg2 withOptions:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000133f89
- (void)dealloc;	// IMP=0x0000000000133f17
- (id)initWithFrameAnalysisSpacing:(CDStruct_1b6d18a9)arg1 trajectoryLength:(long long)arg2;	// IMP=0x000000000013359b

@end

