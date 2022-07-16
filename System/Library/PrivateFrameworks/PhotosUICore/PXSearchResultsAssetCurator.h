//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXSearchResultsAssetCurator : NSObject
{
}

+ (id)_fetchResultForCuratedAssets:(id)arg1;	// IMP=0x00000000008f241e
+ (id)_fetchAssetsForAssetUUIDs:(id)arg1;	// IMP=0x00000000008f21c8
+ (id)_momentUUIDsByAssetUUIDsFromAssetCurationObjects:(id)arg1;	// IMP=0x00000000008f2017
+ (void)_curationObjectsFromAssets:(id)arg1 scenesMap:(id)arg2 sceneIdentifiers:(id)arg3 sceneTaxonomy:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000008f1cd6
+ (id)_assetsCuratedForDominancyFromCuratedObjects:(id)arg1 momentUUIDsByAssetUUIDs:(id)arg2 curatedAssetLimit:(unsigned long long)arg3;	// IMP=0x00000000008f195a
+ (id)_sortedCuratedAssetsFromCurationObjects:(id)arg1 priorityAssetUUID:(id)arg2 curatedAssetLimit:(unsigned long long)arg3 shouldPrioritizeDominantObjectResults:(_Bool)arg4;	// IMP=0x00000000008f0ce0
+ (id)_sampledAssetUUIDsFromAssetResults:(id)arg1 curatedAssetLimit:(unsigned long long)arg2 priorityAssetUUID:(id)arg3 maxNumberToSample:(unsigned long long)arg4 rangeToSample:(unsigned long long)arg5;	// IMP=0x00000000008f0975
+ (void)performCurationForAssetResults:(id)arg1 sceneIdentifiers:(id)arg2 searchQuery:(id)arg3 sceneTaxonomy:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000008efb7c

@end
