//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSNumber, VCPCNNData, VCPCNNModel, VCPFrameAnalysisStats, VCPVideoActivityDescriptor;

__attribute__((visibility("hidden")))
@interface VCPVideoActivityAnalyzer
{
    VCPFrameAnalysisStats *_frameStats;	// 8 = 0x8
    VCPVideoActivityDescriptor *_activityDescriptor;	// 16 = 0x10
    NSMutableArray *_activityScores;	// 24 = 0x18
    NSMutableArray *_validActivityScores;	// 32 = 0x20
    NSMutableArray *_qualityResults;	// 40 = 0x28
    NSMutableArray *_interestingnessResults;	// 48 = 0x30
    NSMutableArray *_obstructionResults;	// 56 = 0x38
    NSMutableArray *_classificationResults;	// 64 = 0x40
    NSMutableArray *_fineActionResults;	// 72 = 0x48
    NSMutableArray *_faceResults;	// 80 = 0x50
    NSMutableArray *_results;	// 88 = 0x58
    float _sceneSwitchFrequency;	// 96 = 0x60
    long long _numOfFrames;	// 104 = 0x68
    CDStruct_1b6d18a9 _lastProcessTime;	// 112 = 0x70
    float _overallActivityLevel;	// 136 = 0x88
    VCPCNNModel *_model;	// 144 = 0x90
    VCPCNNData *_input;	// 152 = 0x98
    NSNumber *_sportsSceneId;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000002142ac
- (id)results;	// IMP=0x0000000000214225
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1 fpsRate:(float)arg2;	// IMP=0x0000000000213c2d
- (void)addSceneClassificationContributionToActivityLevel:(float *)arg1;	// IMP=0x0000000000213985
- (float)actionScoreInTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000213568
- (void)addSceneSwitchFrequencyConstributionToActivityLevel:(float *)arg1;	// IMP=0x000000000021351c
- (float)scaleBasedOnFaceForTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000021302a
- (void)validateActivityScores;	// IMP=0x0000000000212b59
- (float)validationScoreOfTimeRange:(CDStruct_e83c9415)arg1 fromResult:(id)arg2 startIdx:(int *)arg3;	// IMP=0x000000000021281b
- (int)extractRequiredClassificationInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x000000000021248d
- (int)extractRequiredFaceInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000000212173
- (int)extractRequiredInfoFrom:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000000211ec1
- (int)preProcessQualityResults:(id)arg1 interestingnessResults:(id)arg2 obstructionResults:(id)arg3 classificationResults:(id)arg4 fineActionResults:(id)arg5 faceResults:(id)arg6 sceneSwitchFrequency:(float)arg7;	// IMP=0x0000000000211cfa
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x0000000000211c08
- (int)computeActivityScoreAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000002118b1
- (void)resetActivityStatsAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000021186d
- (void)normalizeActivityDescriptor;	// IMP=0x00000000002117ec
- (void)generateActivityDescriptor;	// IMP=0x000000000021171c
- (int)prepareActivityStats;	// IMP=0x0000000000211657
- (id)initWithFrameStats:(id)arg1;	// IMP=0x0000000000210e6b

@end

