//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary, VCPImageSaliencyAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoSaliencyAnalyzer
{
    NSMutableArray *_detections;	// 8 = 0x8
    NSMutableArray *_latestRegions;	// 16 = 0x10
    CDStruct_1b6d18a9 _timeLastDetection;	// 24 = 0x18
    CDStruct_1b6d18a9 _timeLastTracking;	// 48 = 0x30
    CDStruct_1b6d18a9 _start;	// 72 = 0x48
    VCPImageSaliencyAnalyzer *_saliencyAnalyer;	// 96 = 0x60
    NSMutableDictionary *_trackers;	// 104 = 0x68
    NSMutableDictionary *_confidences;	// 112 = 0x70
    NSArray *_activeRegions;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000239829
- (id)results;	// IMP=0x0000000000239788
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x00000000002391f3
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x0000000000237879
- (float)boundDistance:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 landscape:(_Bool)arg3;	// IMP=0x0000000000237836
- (id)pruneRegions:(id)arg1 withOverlapRatio:(float)arg2;	// IMP=0x0000000000237155
- (_Bool)isOutOfBoundary:(struct CGRect)arg1;	// IMP=0x0000000000237110
- (float)updateConfidence:(float)arg1 prevBound:(struct CGRect)arg2 newBound:(struct CGRect)arg3 width:(int)arg4 height:(int)arg5;	// IMP=0x0000000000237040
- (id)initWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000236e41

@end

