//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, VCPFrameAnalysisStats, VCPImageBlurAnalyzer, VCPImageFaceQualityAnalyzer, VCPVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPVideoKeyFrameAnalyzer : NSObject
{
    VCPImageBlurAnalyzer *_blurAnalyzer;	// 8 = 0x8
    VCPImageFaceQualityAnalyzer *_faceQualityAnalyzer;	// 16 = 0x10
    NSDictionary *_faceRanges;	// 24 = 0x18
    NSArray *_junkResults;	// 32 = 0x20
    NSMutableArray *_keyFrames;	// 40 = 0x28
    CDStruct_e83c9415 _timeRange;	// 48 = 0x30
    VCPVideoKeyFrame *_activeKeyFrame;	// 96 = 0x60
    VCPFrameAnalysisStats *_frameStats;	// 104 = 0x68
    _Bool _isLivePhoto;	// 112 = 0x70
    NSMutableArray *_keyFrameScores;	// 120 = 0x78
    NSArray *_inputKeyFrameResults;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000022db6a
- (float)computeMinDistanceBetween:(id)arg1 withSet:(id)arg2;	// IMP=0x000000000022d97a
- (void)prepareFrameStats:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000022d792
- (void)setKeyFrameTime:(CDStruct_1b6d18a9)arg1 isHeadingFrame:(_Bool)arg2;	// IMP=0x000000000022d73c
- (void)modulateByJunk;	// IMP=0x000000000022d24d
- (void)modulateByExposure;	// IMP=0x000000000022cee1
- (void)modulateByTimeRange;	// IMP=0x000000000022cdc0
- (void)adjustScoreByFace;	// IMP=0x000000000022c4f2
- (int)finalizeKeyFrame;	// IMP=0x000000000022c41f
- (int)computeSharpnessOfFrame:(struct __CVBuffer *)arg1;	// IMP=0x000000000022c13b
- (int)computeFaceQualityOfFrame:(struct __CVBuffer *)arg1;	// IMP=0x000000000022bf6c
- (void)setBlurAnalyzerFaceResults:(id)arg1;	// IMP=0x000000000022bbda
- (id)keyFrames;	// IMP=0x000000000022bbcc
- (int)postProcess;	// IMP=0x000000000022bb90
- (void)preparePostProcessingStatsFromFaceRange:(id)arg1 junkResults:(id)arg2;	// IMP=0x000000000022bad6
- (int)loadKeyFrameResults:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000022ba06
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000022b60e
- (id)keyFrameScores;	// IMP=0x000000000022b600
- (id)initWithTransform:(struct CGAffineTransform)arg1 timeRange:(CDStruct_e83c9415)arg2 isLivePhoto:(_Bool)arg3 frameStats:(id)arg4 keyFrameResults:(id)arg5;	// IMP=0x000000000022b403

@end

