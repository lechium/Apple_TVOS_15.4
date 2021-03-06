//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGMemoryMomentRequirements;

@interface PGPersonTrendsMemoryGenerator
{
    _Bool _requireFaceProcessingMeetsThresholdOverTime;	// 8 = 0x8
    _Bool _intersectRelevantAssetsForFeatures;	// 9 = 0x9
    PGMemoryMomentRequirements *_momentRequirements;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003f6545
- (id)momentRequirements;	// IMP=0x00000000003f6534
- (_Bool)intersectRelevantAssetsForFeatures;	// IMP=0x00000000003f6524
- (_Bool)requireFaceProcessingMeetsThresholdOverTime;	// IMP=0x00000000003f6514
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f6263
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;	// IMP=0x00000000003f6170
- (id)initWithMemoryGenerationContext:(id)arg1;	// IMP=0x00000000003f60c8

@end

