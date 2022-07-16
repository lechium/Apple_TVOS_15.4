//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary;

@interface PGAssetComposabilityScoreComputer : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    _Bool _computeDiptychScores;	// 16 = 0x10
    _Bool _computeTriptychScores;	// 17 = 0x11
    double _identicalSimilarityThreshold;	// 24 = 0x18
    double _semanticalSimilarityThreshold;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000542148
@property(readonly) double semanticalSimilarityThreshold; // @synthesize semanticalSimilarityThreshold=_semanticalSimilarityThreshold;
@property(readonly) double identicalSimilarityThreshold; // @synthesize identicalSimilarityThreshold=_identicalSimilarityThreshold;
- (id)composabilityScoresOfAssetsForLocalIdentifiers:(id)arg1;	// IMP=0x00000000005419ae
- (id)sceneprintWithAsset:(id)arg1;	// IMP=0x00000000005417f2
- (double)composabilityScoreWithAssetDistance:(double)arg1 andDistance:(double)arg2 andDistance:(double)arg3;	// IMP=0x0000000000541779
- (double)composabilityScoreWithAssetDistance:(double)arg1;	// IMP=0x00000000005416e1
- (double)_distanceBetweenSceneprint:(id)arg1 andSceneprint:(id)arg2;	// IMP=0x00000000005413d8
@property(readonly) double bestDistance;
- (id)initForTesting;	// IMP=0x0000000000541399
- (id)initWithPhotoLibrary:(id)arg1 options:(id)arg2;	// IMP=0x0000000000541191

@end
