//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLFrequentLocationProcessor : NSObject
{
}

+ (id)_coarseClustersForItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000048cb8b
+ (id)_finalClustersFromCoarseClusters:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000048c695
+ (id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id *)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000048c009
+ (double)_computeWeekendFrequencyForMoments:(id)arg1;	// IMP=0x000000000048bdfc
+ (id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000048b428

@end

