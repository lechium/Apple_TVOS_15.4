//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_os_log, PXDisplayAssetFetchResult, PXStoryAutoEditComposabilityScorer, PXStoryComposabilityResults;

@interface PXStoryAutoEditClipComposabilityProvider : NSObject
{
    id <PXStoryComposabilityResults> _similarityScoreResults;	// 8 = 0x8
    id <PXStoryComposabilityResults> _cropScoreResults;	// 16 = 0x10
    id <PXStoryComposabilityResults> _composabilityResults;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    id <PXDisplayAssetFetchResult> _displayAssets;	// 48 = 0x30
    id <PXStoryAutoEditComposabilityScorer> _cropQualityScorer;	// 56 = 0x38
    id <PXStoryAutoEditComposabilityScorer> _similarityScorer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001ff592
@property(retain, nonatomic) id <PXStoryAutoEditComposabilityScorer> similarityScorer; // @synthesize similarityScorer=_similarityScorer;
@property(retain, nonatomic) id <PXStoryAutoEditComposabilityScorer> cropQualityScorer; // @synthesize cropQualityScorer=_cropQualityScorer;
@property(retain, nonatomic) id <PXDisplayAssetFetchResult> displayAssets; // @synthesize displayAssets=_displayAssets;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)diagnosticDescription;	// IMP=0x00000000001ff10b
@property(readonly, nonatomic) long long count;
- (CDStruct_b2fbf00d)composabilityScoresForDisplayAssetIndex:(unsigned long long)arg1;	// IMP=0x00000000001feffa
- (id)results;	// IMP=0x00000000001fefc9
- (void)_computeComposabilityScores;	// IMP=0x00000000001fea33
- (id)initWithDisplayAssets:(id)arg1;	// IMP=0x00000000001fe8ed

@end

