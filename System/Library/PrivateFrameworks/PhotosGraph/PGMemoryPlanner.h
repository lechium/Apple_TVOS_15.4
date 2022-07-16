//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MARelation, NSArray, NSDate, NSMutableDictionary, NSSet, PGMemoryElectorConfiguration;
@protocol OS_os_log;

@interface PGMemoryPlanner : NSObject
{
    NSArray *_pastMemories;	// 8 = 0x8
    NSArray *_memoriesToAvoid;	// 16 = 0x10
    NSArray *_futureMemoriesGroupedByTrigger;	// 24 = 0x18
    NSObject<OS_os_log> *_loggingConnection;	// 32 = 0x20
    NSDate *_currentUniversalMemoryDate;	// 40 = 0x28
    NSSet *_similarCategorySets;	// 48 = 0x30
    NSMutableDictionary *_timeDecayScoreByPastMemoryCreationDate;	// 56 = 0x38
    NSMutableDictionary *_maximumTimeDecayScoreByPastMemoryIdentifier;	// 64 = 0x40
    MARelation *_secondaryFeatureOfFeature;	// 72 = 0x48
    PGMemoryElectorConfiguration *_configuration;	// 80 = 0x50
}

+ (double)_momentCommonalityScoreComparingMomentNodes:(id)arg1 toMomentNodes:(id)arg2;	// IMP=0x0000000000256e3e
+ (id)groupFutureMemoriesPerTrigger:(id)arg1;	// IMP=0x0000000000256a41
+ (_Bool)canElectEndOfYearTriggeredMemory:(id)arg1 withAlreadyElectedMemories:(id)arg2;	// IMP=0x00000000002568a3
+ (_Bool)canElectTriggeredMemory:(id)arg1 withAlreadyElectedMemories:(id)arg2;	// IMP=0x00000000002565ff
+ (_Bool)_isFallbackMemory:(id)arg1;	// IMP=0x000000000025655a
- (void).cxx_destruct;	// IMP=0x000000000025638f
@property(readonly, nonatomic) PGMemoryElectorConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)similarCategorySets;	// IMP=0x00000000002561f6
- (double)categorySimilarityScoreBetweenMemory:(id)arg1 andMemory:(id)arg2;	// IMP=0x0000000000255d0b
- (double)_commonalityScoreComparingMemory:(id)arg1 toMemory:(id)arg2 momentWeight:(double)arg3 featureWeight:(double)arg4 memoryCategoryWeight:(double)arg5;	// IMP=0x0000000000255b12
- (double)commonalityScoreComparingMemory:(id)arg1 toAlreadyElectedMemory:(id)arg2;	// IMP=0x0000000000255aea
- (double)commonalityScoreComparingMemory:(id)arg1 toMemory:(id)arg2;	// IMP=0x0000000000255abd
- (double)featureCommonalityScoreComparingFeatureNodes:(id)arg1 toFeatureNodes:(id)arg2;	// IMP=0x00000000002558a1
- (double)avoidScoreForMemory:(id)arg1;	// IMP=0x00000000002556b2
- (double)collisionScoreForMemory:(id)arg1;	// IMP=0x0000000000254f16
- (double)timeDecayScoreForTriggeredMemory:(id)arg1 numberOfDaysToLook:(unsigned long long)arg2;	// IMP=0x0000000000254e3d
- (unsigned long long)numberOfDaysSinceMemoryUpgrade;	// IMP=0x0000000000254a17
- (id)creationDateOfLastMemory;	// IMP=0x0000000000254867
- (id)_overallDateIntervalForTriggeredMemories:(id)arg1;	// IMP=0x00000000002544c8
- (id)filterMemories:(id)arg1 forTriggerCollisionsWithTriggerHandler:(id)arg2 graph:(id)arg3 progressReporter:(id)arg4;	// IMP=0x000000000025376b
- (_Bool)tooSoonToElectMemory:(id)arg1;	// IMP=0x00000000002536a3
- (void)_computeIfNeededTimeDecayScoreForPastMemories;	// IMP=0x0000000000253338
- (id)maximumTimeDecayScoreByPastMemoryIdentifier;	// IMP=0x0000000000253313
- (id)timeDecayScoreByPastMemoryCreationDate;	// IMP=0x00000000002532ee
- (id)initWithPastSource:(id)arg1 futureSource:(id)arg2 configuration:(id)arg3 graph:(id)arg4 loggingConnection:(id)arg5 progressReporter:(id)arg6;	// IMP=0x0000000000252e75

@end
