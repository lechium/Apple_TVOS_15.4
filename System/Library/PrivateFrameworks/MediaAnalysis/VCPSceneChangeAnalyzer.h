//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCPSceneChangeSegment;

__attribute__((visibility("hidden")))
@interface VCPSceneChangeAnalyzer
{
    float _sceneDeltaBuffer[10];	// 8 = 0x8
    struct FrameBuffer _frameBuffer;	// 48 = 0x30
    VCPSceneChangeSegment *_activeSegment;	// 12656 = 0x3170
    NSMutableArray *_sceneSegments;	// 12664 = 0x3178
    _Bool _verbose;	// 12672 = 0x3180
    _Bool _firstFrame;	// 12673 = 0x3181
    CDStruct_e83c9415 _frameTimeRange;	// 12676 = 0x3184
    _Bool _currentStatus;	// 12724 = 0x31b4
    _Bool _isSegmentPoint;	// 12725 = 0x31b5
}

- (id).cxx_construct;	// IMP=0x0000000000152fe4
- (void).cxx_destruct;	// IMP=0x0000000000152f77
- (_Bool)isSegmentPoint;	// IMP=0x0000000000152f67
- (id)results;	// IMP=0x0000000000152ec6
- (int)finalizeAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000152c69
- (_Bool)decideLensSwitchPoint:(void *)arg1;	// IMP=0x0000000000152bd7
- (void)PrintSegments;	// IMP=0x00000000001529d2
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000015264b
- (void)ComputeSceneDelta:(void *)arg1;	// IMP=0x0000000000152574
- (id)init;	// IMP=0x0000000000152440

@end

