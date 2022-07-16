//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCPAudioAnalyzer, VCPFullVideoAnalyzer, VCPHomeKitMotionAnalyzer, VCPImageBlurAnalyzer, VCPLightMotionAnalyzer, VCPSceneChangeAnalyzer, VCPTrimAnalyzer, VCPVideoFaceMeshAnalyzer, VCPVideoFacePoseAnalyzer, VCPVideoFullFaceDetector;
@protocol OS_dispatch_queue;

@interface VCPCaptureAnalysisSession : NSObject
{
    unsigned long long _analysisTypes;	// 8 = 0x8
    VCPVideoFacePoseAnalyzer *_poseAnalyzer;	// 16 = 0x10
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;	// 24 = 0x18
    VCPFullVideoAnalyzer *_videoAnalysis;	// 32 = 0x20
    VCPImageBlurAnalyzer *_blurAnalyzer;	// 40 = 0x28
    VCPAudioAnalyzer *_audioAnalyzer;	// 48 = 0x30
    VCPVideoFullFaceDetector *_faceDetector;	// 56 = 0x38
    VCPSceneChangeAnalyzer *_sceneChangeAnalyzer;	// 64 = 0x40
    VCPLightMotionAnalyzer *_lightMotionAnalyzer;	// 72 = 0x48
    VCPTrimAnalyzer *_trimAnalyzer;	// 80 = 0x50
    VCPHomeKitMotionAnalyzer *_homeKitMotionAnalyzer;	// 88 = 0x58
    struct Rotator *_rotator;	// 96 = 0x60
    struct Rotator *_rotatorForFacePose;	// 104 = 0x68
    struct CGAffineTransform _preferredTransform;	// 112 = 0x70
    float _focalLengthInPixels;	// 160 = 0xa0
    NSMutableDictionary *_aggregatedResults;	// 168 = 0xa8
    int _rotationAngleForFacePose;	// 176 = 0xb0
    int _preferredAngle;	// 180 = 0xb4
    NSObject<OS_dispatch_queue> *_analysisQueue;	// 184 = 0xb8
    _Bool _preWarmed;	// 192 = 0xc0
}

+ (id)aggregateAnalysisForTypes:(unsigned long long)arg1 withFramesMeta:(id)arg2 properties:(id)arg3;	// IMP=0x00000000001615f5
+ (id)analyzerForAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 properties:(id)arg3;	// IMP=0x00000000001612df
- (void).cxx_destruct;	// IMP=0x00000000001635f8
- (_Bool)shouldCutAt:(CDStruct_1b6d18a9)arg1 stillPTS:(CDStruct_1b6d18a9)arg2 withCut:(_Bool)arg3;	// IMP=0x00000000001635b1
- (int)analyzeFrameWithTimeRange:(CDStruct_e83c9415)arg1 analysisData:(id)arg2;	// IMP=0x0000000000163533
@property(readonly) NSDictionary *aggregatedResults;
- (_Bool)finalizeAnalysis;	// IMP=0x00000000001633af
- (int)analyzeAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000016329d
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 properties:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000016302c
- (id)analyzePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 properties:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000161a76
- (CDStruct_14d5dc5e)rotateTransform:(CDStruct_14d5dc5e)arg1 byAngle:(int)arg2;	// IMP=0x0000000000161914
- (struct CGAffineTransform)transformForAngle:(int)arg1 pixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x0000000000161804
- (struct CGAffineTransform)flipTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000016175b
- (void)dealloc;	// IMP=0x00000000001616f4
- (_Bool)updatePreferredTransform:(const struct CGAffineTransform *)arg1 properties:(id)arg2;	// IMP=0x00000000001614b5
- (int)prewarmWithProperties:(id)arg1;	// IMP=0x0000000000161148
- (id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform)arg2 withFocalLengthInPixels:(float)arg3 withAnalysisQueue:(id)arg4 withTurbo:(_Bool)arg5;	// IMP=0x0000000000160ced
- (id)init;	// IMP=0x0000000000160cdf

@end
