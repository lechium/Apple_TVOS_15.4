//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, PGFeaturedTimePeriodMemoryConfiguration, PGGraphMomentNodeCollection, PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration;

@interface PGOverTimeMemoryGenerator
{
    PGGraphMomentNodeCollection *_interestingForMemoriesMomentNodes;	// 8 = 0x8
    NSMutableDictionary *_yearByYearNodeIdentifier;	// 16 = 0x10
    _Bool _requireSceneProcessingMeetsThresholdOverTime;	// 24 = 0x18
    _Bool _requireFaceProcessingMeetsThresholdOverTime;	// 25 = 0x19
    _Bool _intersectRelevantAssetsForFeatures;	// 26 = 0x1a
    PGMemoryMomentRequirements *_momentRequirements;	// 32 = 0x20
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;	// 40 = 0x28
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;	// 48 = 0x30
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004ff561
@property(readonly, nonatomic) _Bool intersectRelevantAssetsForFeatures; // @synthesize intersectRelevantAssetsForFeatures=_intersectRelevantAssetsForFeatures;
@property(readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration; // @synthesize featuredSeasonConfiguration=_featuredSeasonConfiguration;
@property(readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration; // @synthesize featuredYearConfiguration=_featuredYearConfiguration;
@property(readonly, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration; // @synthesize overTheYearsConfiguration=_overTheYearsConfiguration;
@property(readonly, nonatomic) PGMemoryMomentRequirements *momentRequirements; // @synthesize momentRequirements=_momentRequirements;
@property(readonly, nonatomic) _Bool requireFaceProcessingMeetsThresholdOverTime; // @synthesize requireFaceProcessingMeetsThresholdOverTime=_requireFaceProcessingMeetsThresholdOverTime;
@property(readonly, nonatomic) _Bool requireSceneProcessingMeetsThresholdOverTime; // @synthesize requireSceneProcessingMeetsThresholdOverTime=_requireSceneProcessingMeetsThresholdOverTime;
- (id)allFeatureNodesForMemoryNodeWithFeatureNodes:(id)arg1;	// IMP=0x00000000004ff4e0
- (long long)_yearForYearNodeAsCollection:(id)arg1;	// IMP=0x00000000004ff37b
- (id)_interestingForMemoriesSubsetFromMomentNodes:(id)arg1;	// IMP=0x00000000004ff28b
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)arg1 featureNodes:(id)arg2;	// IMP=0x00000000004ff0f6
- (_Bool)_shouldCreateMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x00000000004fee2e
- (_Bool)_shouldCreateFeaturedSeasonMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2;	// IMP=0x00000000004fe9f3
- (_Bool)_shouldCreateFeaturedYearMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2 inYear:(long long)arg3;	// IMP=0x00000000004fe7e0
- (_Bool)_shouldCreateFeaturedTimePeriodMemoriesForMomentNodes:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000004fe77c
- (_Bool)_shouldCreateOverTheYearsMemoryForMomentNodes:(id)arg1 featureNodes:(id)arg2;	// IMP=0x00000000004fe484
- (id)_filteredMomentNodesFromMomentNodes:(id)arg1 featureNodes:(id)arg2;	// IMP=0x00000000004fe116
- (id)generateAllPotentialMemoriesWithGraph:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004fdb7c
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004fdb2c
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;	// IMP=0x00000000004fdafa
@property(readonly, nonatomic) unsigned long long memoryCategory;

@end

