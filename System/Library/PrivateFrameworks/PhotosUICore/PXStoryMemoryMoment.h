//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult, PXStoryMemoryMomentClusteringDistanceCalculator;

@interface PXStoryMemoryMoment : NSObject
{
    id <PXDisplayAssetFetchResult> _displayAssets;	// 8 = 0x8
    NSIndexSet *_indices;	// 16 = 0x10
    _Bool _diagnosticsCalculated;	// 24 = 0x18
    double _totalWeightedClusteringDistance;	// 32 = 0x20
    double _locationClusteringDistance;	// 40 = 0x28
    double _timeClusteringDistance;	// 48 = 0x30
    double _faceClusteringDistance;	// 56 = 0x38
    id <PXStoryMemoryMomentClusteringDistanceCalculator> _diagnosticDistanceCalculator;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004fe2de
@property(readonly, nonatomic) id <PXStoryMemoryMomentClusteringDistanceCalculator> diagnosticDistanceCalculator; // @synthesize diagnosticDistanceCalculator=_diagnosticDistanceCalculator;
@property(readonly, nonatomic) double faceClusteringDistance;
@property(readonly, nonatomic) double timeClusteringDistance;
@property(readonly, nonatomic) double locationClusteringDistance;
@property(readonly, nonatomic) double totalWeightedClusteringDistance;
- (void)_calculateDiagnostics;	// IMP=0x00000000004fe191
@property(readonly, nonatomic) unsigned long long lastGlobalIndex;
@property(readonly, nonatomic) unsigned long long firstGlobalIndex;
@property(readonly, nonatomic) struct _NSRange assetIndexRange;
@property(readonly, nonatomic) id <PXDisplayAsset> lastAsset;
@property(readonly, nonatomic) id <PXDisplayAsset> firstAsset;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004fe029
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000004fe017
- (id)assetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004fdf37
- (id)description;	// IMP=0x00000000004fdebf
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> displayAssets;
- (id)initWithDisplayAssets:(id)arg1 indexSet:(id)arg2 diagnosticDistanceCalculator:(id)arg3;	// IMP=0x00000000004fdd2c
- (id)initWithDisplayAssets:(id)arg1 indexSet:(id)arg2;	// IMP=0x00000000004fdd17
- (id)initWithDisplayAssets:(id)arg1 indicesArray:(id)arg2 diagnosticDistanceCalculator:(id)arg3;	// IMP=0x00000000004fdb1f

@end

