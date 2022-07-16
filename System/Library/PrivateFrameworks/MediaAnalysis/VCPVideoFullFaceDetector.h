//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary, VCPCNNPoseEstimator, VCPCNNSmileDetector, VCPFrameAnalysisStats;

__attribute__((visibility("hidden")))
@interface VCPVideoFullFaceDetector
{
    int _latestTrackID;	// 56 = 0x38
    VCPCNNSmileDetector *_smileDetector;	// 64 = 0x40
    VCPCNNPoseEstimator *_poseEstimator;	// 72 = 0x48
    NSArray *_existingFaceprints;	// 80 = 0x50
    VCPFrameAnalysisStats *_frameStats;	// 88 = 0x58
    float _latestFrameArea;	// 96 = 0x60
    CDStruct_1b6d18a9 _timeLastTracking;	// 100 = 0x64
    NSMutableDictionary *_faceTrackers;	// 128 = 0x80
    NSMutableDictionary *_keyFaces;	// 136 = 0x88
    NSMutableArray *_reservedIDs;	// 144 = 0x90
    NSMutableDictionary *_facePrints;	// 152 = 0x98
    NSMutableArray *_allFaces;	// 160 = 0xa0
    NSMutableDictionary *_faceRanges;	// 168 = 0xa8
    NSMutableArray *_frameFaceResults;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000222ca5
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000221fea
- (int)updateWithExistingFaces;	// IMP=0x00000000002214e5
- (int)clusterFaces;	// IMP=0x00000000002204af
- (id)frameFaceResults;	// IMP=0x0000000000220432
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000021f49b
- (int)detectTrackFacesInFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 faces:(id)arg3;	// IMP=0x000000000021e0a0
- (_Bool)locationChange:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 landscape:(_Bool)arg3;	// IMP=0x000000000021e056
- (_Bool)compareFace:(id)arg1 withFace:(id)arg2;	// IMP=0x000000000021dedb
- (void)removeSmallestKeyFace;	// IMP=0x000000000021dc09
- (float)minProcessTimeIntervalInSecs;	// IMP=0x000000000021dbfb
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;	// IMP=0x000000000021d43b
- (void)dealloc;	// IMP=0x000000000021d374
- (id)initWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3;	// IMP=0x000000000021d009
- (id)initWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000021cf4a
- (id)faceRanges;	// IMP=0x000000000021cf35

@end

