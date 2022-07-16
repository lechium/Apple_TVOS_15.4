//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLCloudPhotoLibraryManager, PLLibraryServicesManager;

@interface PLCloudBatchDownloader : NSObject
{
    PLCloudPhotoLibraryManager *_manager;	// 8 = 0x8
    PLLibraryServicesManager *_lsm;	// 16 = 0x10
}

+ (id)_adjustmentStateDictionaryForComparingIncomingFaceRecordForAsset:(id)arg1;	// IMP=0x00000000002b38c0
- (void).cxx_destruct;	// IMP=0x00000000002b1d59
- (void)_triggerBackgroundDownloadFailureForResources:(id)arg1;	// IMP=0x00000000002b1b0e
- (id)handleIncomingBatch:(id)arg1;	// IMP=0x00000000002b18ed
- (id)deletedRecordsFromBatch:(id)arg1;	// IMP=0x00000000002b1711
- (void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002b13f1
- (void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002aff08
- (id)_debugPrintAlbumOrderForAssets:(id)arg1;	// IMP=0x00000000002af9f7
- (void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002af5bc
- (void)_deleteMasterIfNecessary:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002af398
- (void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002add9d
- (void)_handleFaceCropRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002ada9e
- (void)_dedupePersonsInSyncContext:(id)arg1;	// IMP=0x00000000002ad878
- (void)_mergeUpdatedPersons:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002ad6dc
- (void)_processNotificationUpdatesForMemories:(id)arg1;	// IMP=0x00000000002ad42b
- (void)_processNotificationUpdatesForSuggestions:(id)arg1;	// IMP=0x00000000002ad17a
- (id)_handleSuggestionRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002ac4ac
- (_Bool)_shouldHandleNotificationChangeForMemory:(id)arg1 memoryRecord:(id)arg2 wasPersisted:(_Bool)arg3;	// IMP=0x00000000002abfaa
- (id)_handleMemoryRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002ab753
- (id)_handleAssetRecords:(id)arg1 inSyncContext:(id)arg2 withChangeBatch:(id)arg3 dedupeGraphPersons:(id *)arg4;	// IMP=0x00000000002a9825
- (void)_assetsAndCloudMastersFromAssetRecords:(id)arg1 assetsByScopedIdentifier:(id *)arg2 mastersByScopedIdentifier:(id *)arg3 inLibrary:(id)arg4;	// IMP=0x00000000002a9407
- (id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3;	// IMP=0x00000000002a92ab
- (id)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002a880d
- (void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002a7fd2
- (void)_handleScopeChanges:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000002a7d00
- (id)_mergeTargetFromPersons:(id)arg1;	// IMP=0x00000000002a7b5f
- (void)_mergeExistingPersonsWithPerson:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x00000000002a7548
- (void)_dropDeferredRebuildFacesInPhotoLibrary:(id)arg1;	// IMP=0x00000000002a7222
- (id)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2 includesTiboSchema:(_Bool *)arg3;	// IMP=0x00000000002a65f0
- (void)_saveIfNeeded:(id)arg1;	// IMP=0x00000000002a6499
- (id)initWithLibraryServicesManager:(id)arg1 manager:(id)arg2;	// IMP=0x00000000002a6400

@end

