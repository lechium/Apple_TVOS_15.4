//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPLightVideoAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;	// 8 = 0x8
    AVAsset *_avAsset;	// 16 = 0x10
    struct CGAffineTransform _transform;	// 24 = 0x18
    NSArray *_metaTracks;	// 72 = 0x48
    NSMutableDictionary *_publicMutableResults;	// 80 = 0x50
    NSMutableDictionary *_privateMutableResults;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000c6f3c
@property(readonly, nonatomic) NSDictionary *privateResults;
@property(readonly, nonatomic) NSDictionary *publicResults;
- (int)analyzeAsset:(CDUnknownBlockType)arg1 flags:(unsigned long long *)arg2;	// IMP=0x00000000000c6d56
- (int)postProcessOrientationResults;	// IMP=0x00000000000c68e8
- (int)checkTimeRangeConsistency;	// IMP=0x00000000000c666d
- (int)processMetaTrackForType:(id)arg1 cancel:(CDUnknownBlockType)arg2 flags:(unsigned long long *)arg3;	// IMP=0x00000000000c6057
- (id)findMetaTrackforType:(id)arg1;	// IMP=0x00000000000c5d14
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;	// IMP=0x00000000000c5b5d

@end

