//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLTableThumbnailMigrator : NSObject
{
    struct os_unfair_lock_s _pendingAssetObjectIDsLock;	// 8 = 0x8
    NSMutableSet *_pendingAssetObjectIDs;	// 16 = 0x10
}

+ (unsigned long long)countOfAssetsPendingTableThumbRebuildInLibrary:(id)arg1;	// IMP=0x000000000049343d
+ (id)_nextBatchOfItemsPendingTableRebuildInLibrary:(id)arg1 excludingAssetIDs:(id)arg2 sourceObjects:(id *)arg3;	// IMP=0x0000000000493212
+ (id)_workItemForAsset:(id)arg1 library:(id)arg2 thumbnailManager:(id)arg3;	// IMP=0x00000000004930f6
+ (_Bool)_writeCompressedTableThumbsFromMasterThumb:(struct CGImageSource *)arg1 uuid:(id)arg2 formats:(id)arg3 toIndex:(unsigned long long)arg4 thumbnailManager:(id)arg5;	// IMP=0x0000000000492b00
+ (id)_fetchRequstForAssetsPendingTableRebuildWithLimit:(long long)arg1 excludingAssetIDs:(id)arg2;	// IMP=0x0000000000492880
+ (id)_predicateForAssetsPendingTableRebuild;	// IMP=0x0000000000492851
- (void).cxx_destruct;	// IMP=0x0000000000491b9a
- (void)migrateAllAssetsPendingTableThumbRebuildInLibrary:(id)arg1 toTableFormats:(id)arg2 limit:(unsigned long long)arg3;	// IMP=0x0000000000491930
- (void)rebuildTableThumbForAsset:(id)arg1 inLibrary:(id)arg2 toTableFormats:(id)arg3;	// IMP=0x000000000049141c
- (void)_rebuildTablesForBatch:(id)arg1 inLibrary:(id)arg2 toFormats:(id)arg3;	// IMP=0x0000000000491038
- (id)_bulkMigratorQueue;	// IMP=0x0000000000491008
- (id)init;	// IMP=0x0000000000490f9b

@end

