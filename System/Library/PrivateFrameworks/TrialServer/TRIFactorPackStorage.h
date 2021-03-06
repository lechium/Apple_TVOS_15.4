//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TRIAssetExtracting, TRIPaths;

@interface TRIFactorPackStorage : NSObject
{
    id <TRIPaths> _paths;	// 8 = 0x8
    id <TRIAssetExtracting> _extractor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000092a5f
- (void)_reportFactorPackDiskUsagesWithNamespaceName:(id)arg1 namespaceDirName:(id)arg2 context:(id)arg3;	// IMP=0x00000000000925ff
- (void)reportFactorPackDiskUsagesUsingContext:(id)arg1;	// IMP=0x00000000000921e1
- (_Bool)_removeUnreferencedFactorPackSetsWithParentDir:(id)arg1 removedCount:(unsigned int *)arg2;	// IMP=0x0000000000091f9d
- (id)_collectChildrenOfParentDir:(id)arg1;	// IMP=0x0000000000091d32
- (_Bool)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)arg1 removedCount:(unsigned int *)arg2;	// IMP=0x00000000000919d9
- (_Bool)removeUnreferencedFactorPacksWithRemovedCount:(unsigned int *)arg1;	// IMP=0x0000000000091659
- (id)_legacyParentDirForFactorPackWithNamespaceName:(id)arg1;	// IMP=0x00000000000914fe
- (id)_legacyPathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000009144c
- (id)legacyPathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x00000000000913b8
- (id)_parentDirForFactorPackWithNamespaceName:(id)arg1;	// IMP=0x00000000000912a2
- (id)_pathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x00000000000911f0
- (id)pathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000091123
- (id)_removeAssetsWithFactorNames:(id)arg1 copyingModifiedFactorPackWithPath:(id)arg2 appendingToPathsToRemove:(id)arg3 tempDirRef:(id)arg4;	// IMP=0x0000000000090d06
- (_Bool)updateSavedFactorPackWithId:(id)arg1 namespaceName:(id)arg2 deletingAssetsWithFactorNames:(id)arg3 inUseAssetBehavior:(unsigned char)arg4;	// IMP=0x000000000009080d
- (id)_linkAssetWithId:(id)arg1 assetStore:(id)arg2 forFactorName:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;	// IMP=0x00000000000905c3
- (id)_linkAssetsWithIds:(id)arg1 copyingModifiedFactorPackWithPath:(id)arg2 tempDirRef:(id)arg3;	// IMP=0x000000000008ff34
- (_Bool)_linkAssetsUpdatingFactorLevel:(id)arg1 fromFactorPackWithId:(id)arg2 usingAssetStore:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;	// IMP=0x000000000008f866
- (_Bool)updateSavedFactorPackWithId:(id)arg1 namespaceName:(id)arg2 linkingNewAssetIds:(id)arg3;	// IMP=0x000000000008f4b3
- (id)loadFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000008f3fc
- (id)loadParsedFactorPackWithDir:(id)arg1;	// IMP=0x000000000008f255
- (id)loadFactorPackWithDir:(id)arg1;	// IMP=0x000000000008f0ac
- (id)loadParsedFactorPackWithId:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000008f04d
- (_Bool)saveFactorPack:(id)arg1 factorPackByNamePath:(id *)arg2 factorPackByIdPath:(id *)arg3;	// IMP=0x000000000008e310
- (id)initWithPaths:(id)arg1;	// IMP=0x000000000008e299
- (id)initWithPaths:(id)arg1 extractor:(id)arg2;	// IMP=0x000000000008e200
- (id)init;	// IMP=0x000000000008e1fa

@end

