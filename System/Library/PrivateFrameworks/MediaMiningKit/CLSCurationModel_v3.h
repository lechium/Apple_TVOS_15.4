//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLSNSFWModel, CLSPotentialLandmarkModel, CLSSDModel, CLSTabooEventModel;

@interface CLSCurationModel_v3
{
    _Bool _r14j9IsAvailable;	// 8 = 0x8
    CLSNSFWModel *_nsfwModel;	// 16 = 0x10
    CLSTabooEventModel *_tabooEventModel;	// 24 = 0x18
    CLSPotentialLandmarkModel *_potentialLandmarkModel;	// 32 = 0x20
    CLSSDModel *_sdModel;	// 40 = 0x28
}

+ (unsigned long long)minimumRequiredSceneAnalysisVersion;	// IMP=0x00000000000385ec
- (void).cxx_destruct;	// IMP=0x00000000000384c3
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038359
- (void)enumerateSignalModelsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000381ef
- (_Bool)isShowcasingFoodWithSceneClassification:(id)arg1;	// IMP=0x0000000000038171
- (id)newProcessedSignals;	// IMP=0x0000000000038160
- (_Bool)filterForFoodieWithClassification:(id)arg1;	// IMP=0x0000000000038003
- (_Bool)isJunkWithJunkClassification:(id)arg1;	// IMP=0x0000000000037ebf
- (_Bool)isUtilityForMemoriesWithAsset:(id)arg1 curationContext:(id)arg2;	// IMP=0x0000000000037e24
- (_Bool)isUtilityForMemoriesWithProcessedSignals:(id)arg1;	// IMP=0x0000000000037e0f
- (_Bool)hasPoorResolutionWithAsset:(id)arg1;	// IMP=0x0000000000037d75
- (_Bool)avoidIfPossibleForKeyAssetWithAsset:(id)arg1;	// IMP=0x0000000000037c68
- (_Bool)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)arg1;	// IMP=0x0000000000037c53
- (_Bool)avoidIfPossibleForKeyAssetWithSignals:(id)arg1;	// IMP=0x0000000000037859
- (_Bool)isTragicFailureWithImageAsset:(id)arg1;	// IMP=0x00000000000375dc
- (id)initWithCurationModelSpecification:(id)arg1;	// IMP=0x0000000000037431

@end

