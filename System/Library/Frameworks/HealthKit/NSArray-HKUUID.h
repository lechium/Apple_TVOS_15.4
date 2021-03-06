//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <HealthKit/HKCodedObject-Protocol.h>
#import <HealthKit/HKUUIDCollection-Protocol.h>

@class NSString;

@interface NSArray (HKUUID) <HKUUIDCollection, HKCodedObject>
+ (_Bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e8025
+ (id)hk_arrayWithCount:(long long)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e64e2
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x0000000000172c37
- (id)hk_dataForAllUUIDs;	// IMP=0x0000000000066aa0
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006681a
- (id)hk_splitWithBucketCount:(long long)arg1;	// IMP=0x00000000000e86d1
- (id)hk_mutableSubarrayWithRange:(struct _NSRange)arg1;	// IMP=0x00000000000e8624
- (_Bool)_permutationsWithCount:(long long)arg1 permutation:(id)arg2 depth:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e8319
- (void)hk_enumeratePermutationsOfSubsetsOfLength:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e814d
- (id)hk_shuffled;	// IMP=0x00000000000e7fd8
- (id)hk_reversed;	// IMP=0x00000000000e7f88
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7d6c
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7b34
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e78bf
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e785c
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e75cc
- (_Bool)hk_allElementsEqual;	// IMP=0x00000000000e755b
- (_Bool)hk_allElementsUnique;	// IMP=0x00000000000e74e6
- (_Bool)hk_containsObjectsInArray:(id)arg1;	// IMP=0x00000000000e7443
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e72b8
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7105
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6f5a
- (double)hk_sumUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6df4
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6c17
- (_Bool)hk_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6ade
- (_Bool)hk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6aab
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018477
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6905
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017798
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000000e6618
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f8fe
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000173281
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000172cb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

