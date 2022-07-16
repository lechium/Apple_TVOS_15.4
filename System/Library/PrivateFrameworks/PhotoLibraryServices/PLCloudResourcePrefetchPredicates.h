//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLCloudResourcePrefetchPredicates : NSObject
{
}

+ (id)predicateForOriginalResourcesForPrefetchLocallyAvailableOnly:(_Bool)arg1;	// IMP=0x00000000004a335b
+ (id)predicatesForWidget:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000004a318b
+ (id)predicatesForMemories:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000004a3054
+ (id)predicatesForNonThumbnails:(id)arg1 lastCompletePrefetchDate:(id)arg2;	// IMP=0x00000000004a2fb0
+ (id)predicatesForOriginalResources:(id)arg1 additionalResourcePredicates:(id)arg2;	// IMP=0x00000000004a2bd3
+ (id)predicatesForThumbnails:(id)arg1;	// IMP=0x00000000004a2a04
+ (id)predicateToPrefetchHighlightWithUUIDs:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000004a28cc
+ (id)predicateToPrefetchMemories:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;	// IMP=0x00000000004a2760
+ (id)_predicateToPrefetchMemoryKeyAssets:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;	// IMP=0x00000000004a25fa
+ (id)_predicateToPrefetchSuggestions:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;	// IMP=0x00000000004a2494
+ (id)_resourcesToPrefetchForAsset:(id)arg1 options:(id)arg2;	// IMP=0x00000000004a2258
+ (id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2 options:(id)arg3;	// IMP=0x00000000004a1c95
+ (double)_resourceLastPrunedPrefetchTimeInterval;	// IMP=0x00000000004a1c3f
+ (id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetPredicates:(id)arg2 additionalResourcePredicates:(id)arg3 options:(id)arg4;	// IMP=0x00000000004a19b3
+ (id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetPredicates:(id)arg2 additionalResourcePredicates:(id)arg3 options:(id)arg4;	// IMP=0x00000000004a17ae
+ (id)_assetIsUnadjustedPredicate;	// IMP=0x00000000004a1785
+ (id)_excludeMomentShareAssetsPredicate;	// IMP=0x00000000004a1741
+ (id)_irisConditionPredicate;	// IMP=0x00000000004a1712
+ (id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1;	// IMP=0x00000000004a16f9
+ (id)_predicateForResourceCreatedAfterDate:(id)arg1;	// IMP=0x00000000004a16e0
+ (id)_predicateForMaxFilesize:(unsigned long long)arg1;	// IMP=0x00000000004a16c7
+ (id)_missingThumbnailPredicate;	// IMP=0x00000000004a1698

@end

