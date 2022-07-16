//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPSegment;

__attribute__((visibility("hidden")))
@interface VCPActionAnalyzer : NSObject
{
    NSMutableArray *_internalResults;	// 8 = 0x8
    VCPSegment *_activeSegment;	// 16 = 0x10
    struct HinkleyDetector *_activeHinkleyDetector;	// 24 = 0x18
    float _activeThreshold;	// 32 = 0x20
    _Bool _firstFrame;	// 36 = 0x24
    _Bool _verbose;	// 37 = 0x25
    int _postProcessStart;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015ffee
- (int)prepareTrimmingWithTrimStart:(CDStruct_1b6d18a9)arg1 andTrimEnd:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000015fb42
- (void)printSegments:(id)arg1;	// IMP=0x000000000015f993
- (id)activeSegment;	// IMP=0x000000000015f985
- (id)segments;	// IMP=0x000000000015f977
- (int)postProcessSegmentsWithCaptureTime:(CDStruct_1b6d18a9)arg1 trimStart:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000015f69d
- (int)finalizeWithDestructiveTrimStart:(CDStruct_1b6d18a9)arg1 trimEnd:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000015f577
- (int)mergeSparseShortSegments;	// IMP=0x000000000015f392
- (int)mergeSameTypeSegments;	// IMP=0x000000000015f1f8
- (int)mergeConsecutiveShortSegments;	// IMP=0x000000000015f000
- (_Bool)decideSegmentPointUsingHinkleyDetector:(float)arg1;	// IMP=0x000000000015ef40
- (_Bool)decideSegmentPointBasedOnActionScore:(float)arg1;	// IMP=0x000000000015eeb0
- (_Bool)isScoreValid:(float)arg1;	// IMP=0x000000000015eea1
- (_Bool)isActive:(float)arg1;	// IMP=0x000000000015ee94
- (void)updateActiveThreshold;	// IMP=0x000000000015ed98
- (int)analyzeFrameWithTimeRange:(CDStruct_e83c9415)arg1 andActionScore:(float)arg2;	// IMP=0x000000000015ebf6
- (void)dealloc;	// IMP=0x000000000015eba8
- (id)init;	// IMP=0x000000000015ea8c

@end

