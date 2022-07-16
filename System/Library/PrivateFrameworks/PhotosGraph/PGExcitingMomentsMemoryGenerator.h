//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGFeaturedTimePeriodMemoryConfiguration, PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration;

@interface PGExcitingMomentsMemoryGenerator
{
    _Bool _requireSceneProcessingMeetsThresholdOverTime;	// 8 = 0x8
    _Bool _requireFaceProcessingMeetsThresholdOverTime;	// 9 = 0x9
    _Bool _intersectRelevantAssetsForFeatures;	// 10 = 0xa
    PGMemoryMomentRequirements *_momentRequirements;	// 16 = 0x10
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;	// 24 = 0x18
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004c52f4
- (_Bool)intersectRelevantAssetsForFeatures;	// IMP=0x00000000004c52e4
- (id)featuredYearConfiguration;	// IMP=0x00000000004c52d3
- (id)overTheYearsConfiguration;	// IMP=0x00000000004c52c2
- (id)momentRequirements;	// IMP=0x00000000004c52b1
- (_Bool)requireFaceProcessingMeetsThresholdOverTime;	// IMP=0x00000000004c52a1
- (_Bool)requireSceneProcessingMeetsThresholdOverTime;	// IMP=0x00000000004c5291
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x00000000004c503b
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x00000000004c4749
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000004c463e
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;	// IMP=0x00000000004c45cc
- (unsigned long long)durationForExtendedCuration;	// IMP=0x00000000004c45c1
- (unsigned long long)durationForCuration;	// IMP=0x00000000004c45b6
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c433d
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;	// IMP=0x00000000004c424a
- (unsigned long long)memoryCategory;	// IMP=0x00000000004c423f
- (id)initWithMemoryGenerationContext:(id)arg1;	// IMP=0x00000000004c40f1

@end
