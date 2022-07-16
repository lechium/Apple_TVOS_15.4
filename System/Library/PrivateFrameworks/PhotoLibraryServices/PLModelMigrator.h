//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSProgressReporting-Protocol.h>

@class NSDictionary, NSFileManager, NSProgress, NSString, PLCoreAnalyticsEventManager, PLDeviceRestoreMigrationPostProcessingSupport, PLDeviceRestoreMigrationSupport, PLLazyObject, PLPhotoLibraryPathManager, PLThumbnailManager, PLXPCTransaction;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLModelMigrator : NSObject <NSProgressReporting>
{
    double _startTime;	// 8 = 0x8
    PLXPCTransaction *_transaction;	// 16 = 0x10
    NSDictionary *_syncedPropertiesByUUID;	// 24 = 0x18
    PLPhotoLibraryPathManager *_pathManager;	// 32 = 0x20
    PLThumbnailManager *_thumbnailManager;	// 40 = 0x28
    PLLazyObject *_lazyCoreAnalysticsEventManager;	// 48 = 0x30
    PLLazyObject *_lazyDeviceRestoreMigrationSupport;	// 56 = 0x38
    PLLazyObject *_lazyDeviceRestoreMigrationPostProcessingSupport;	// 64 = 0x40
    PLLazyObject *_lazyMigrationLogger;	// 72 = 0x48
    _Bool _didCreateSqliteErrorFileForLightweightMigration;	// 80 = 0x50
    _Bool _isPostProcessingLightWeightMigration;	// 81 = 0x51
    NSObject<OS_dispatch_queue> *_fileSystemLoadQueue;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_fileSystemLoadGroup;	// 96 = 0x60
    struct os_unfair_lock_s _containedObjectsLock;	// 104 = 0x68
    struct os_unfair_lock_s _storeMetadataLock;	// 108 = 0x6c
    struct os_unfair_lock_s _lightweightMigrationLock;	// 112 = 0x70
    NSDictionary *_options;	// 120 = 0x78
    NSFileManager *_fileManager;	// 128 = 0x80
    NSProgress *_progress;	// 136 = 0x88
}

+ (id)schemaIncompatibilityDetailsForStoreMetadata:(id)arg1 model:(id)arg2;	// IMP=0x00000000001ff09d
+ (_Bool)shouldImportAssetsFromDCIMSubDirectoryAtURL:(id)arg1 assetsKind:(int *)arg2;	// IMP=0x00000000001fee4a
+ (id)extractPathToAssetUUIDRecoveryMappingFromDatabasePath:(id)arg1;	// IMP=0x00000000001fea25
+ (_Bool)_writeNumber:(id)arg1 forKey:(id)arg2 pathManager:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001fe6a8
+ (_Bool)_readBooleanFlagWithKey:(id)arg1 fromMetadataWithMOC:(id)arg2 pathManager:(id)arg3;	// IMP=0x00000000001fe661
+ (id)_readNumberWithKey:(id)arg1 fromMetadataWithMOC:(id)arg2 pathManager:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001fe3f7
+ (_Bool)waitForDataMigratorToExit;	// IMP=0x00000000001fe350
+ (_Bool)shouldPromptUserForLibrarySchemaMismatch;	// IMP=0x00000000001fe348
+ (_Bool)markAssetsWithThumbsForTableRebuildInContext:(id)arg1;	// IMP=0x00000000001fe225
+ (_Bool)resetThumbnailIndexesAndInitiateThumbnailRebuildRequestIfSuccessfulForForThumbnailManager:(id)arg1 deferHintChanges:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00000000001fe0ae
+ (int)currentModelVersion;	// IMP=0x00000000001fe095
+ (_Bool)performFaceAnalysisResetWithResetLevel:(long long)arg1 pathManager:(id)arg2 context:(id)arg3;	// IMP=0x000000000006df53
+ (_Bool)enumerateObjectsWithIncrementalSaveDefaultBatchSizeFetchRequest:(id)arg1 managedObjectContext:(id)arg2 count:(unsigned long long *)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000000286245
+ (_Bool)executeBatchUpdateWithEntityName:(id)arg1 predicate:(id)arg2 propertiesToUpdate:(id)arg3 managedObjectContext:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000285fab
+ (_Bool)executeBatchDeleteWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000285d4e
- (void).cxx_destruct;	// IMP=0x00000000001de4b9
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) struct os_unfair_lock_s lightweightMigrationLock; // @synthesize lightweightMigrationLock=_lightweightMigrationLock;
@property(nonatomic) struct os_unfair_lock_s storeMetadataLock; // @synthesize storeMetadataLock=_storeMetadataLock;
@property(nonatomic) struct os_unfair_lock_s containedObjectsLock; // @synthesize containedObjectsLock=_containedObjectsLock;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
- (_Bool)_migrateResourceUTIAndCodecInStagedStore:(id)arg1;	// IMP=0x00000000001ddf84
- (_Bool)_discardUnusedCustomRenderedValuesInStore:(id)arg1;	// IMP=0x00000000001ddf61
- (_Bool)_deleteLocalVideoKeyFrameResourcesForNonVideosInStore:(id)arg1 deferHintChanges:(_Bool)arg2;	// IMP=0x00000000001ddf08
- (_Bool)_deleteEmptyFolderWithProjectRootCloudGUIDOfWrongKindInStore:(id)arg1;	// IMP=0x00000000001ddeae
- (_Bool)_repairDuplicateSingletonFetchingAlbumsInStore:(id)arg1;	// IMP=0x00000000001dde8b
- (_Bool)_resetLimitedLibraryFilterDataInStore:(id)arg1;	// IMP=0x00000000001dde68
- (_Bool)_unQuarantineAssetsIfPossibleInStore:(id)arg1;	// IMP=0x00000000001dde45
- (void)_convertImplicitDownloadAndKeepOriginalsEnabledToExplicit;	// IMP=0x00000000001ddd8e
- (_Bool)_convertAssetDepthStatesToDepthTypeInStore:(id)arg1;	// IMP=0x00000000001ddd6b
- (_Bool)_updateMogulSubtypeAndSetHighFrameRateStateOnAssetsInStore:(id)arg1;	// IMP=0x00000000001ddd15
- (id)_loadOriginalVideoMetadataFromAsset:(id)arg1 timeZoneLookup:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001dda4b
- (_Bool)_resetAssetLocationShiftingAndRevGeoInStore:(id)arg1;	// IMP=0x00000000001dda28
- (_Bool)_resetDeferredRepairAdjustmentFailureAndCloudRecoveryStateInStore:(id)arg1;	// IMP=0x00000000001dd9d2
- (_Bool)_invalidateZeroHDRGainInStore:(id)arg1;	// IMP=0x00000000001dd96d
- (_Bool)_fixOriginalAlternateImageOrientationForResourcesInStore:(id)arg1;	// IMP=0x00000000001dd917
- (_Bool)_removeDuplicatedCloudSharedComments:(id)arg1;	// IMP=0x00000000001dd8f4
- (_Bool)_refactorLargeVideoRecipeResourcesInStore:(id)arg1;	// IMP=0x00000000001dd89e
- (_Bool)_repairCTMOriginalVideosWithoutAdjustmentsInStore:(id)arg1;	// IMP=0x00000000001dd848
- (_Bool)_addLocalVideoKeyFrameResourceInStore:(id)arg1 deferHintChanges:(_Bool)arg2;	// IMP=0x00000000001dd7eb
- (_Bool)_addRAWPackedBadgeAttributeForAllRAWAssetsInStore:(id)arg1;	// IMP=0x00000000001dd795
- (_Bool)_persistResourceTypeAttributeOnAlternateImageResourcesInStore:(id)arg1;	// IMP=0x00000000001dd73f
- (_Bool)_repairCTMOriginalVideosWithSOCAvailableBitInStore:(id)arg1;	// IMP=0x00000000001dd6e9
- (_Bool)_removeResourceModelManualIdentityConstraintInStore:(id)arg1;	// IMP=0x00000000001dd693
- (_Bool)_removeAllLocalVideoKeyFrameResourcesRevert14037InStore:(id)arg1;	// IMP=0x00000000001dd63d
- (_Bool)_copyAssetDescriptionToAccessibilityDescription:(id)arg1;	// IMP=0x00000000001dd5e7
- (_Bool)_clearAvalancheUUIDOnCloudSharedAssetsWithStore:(id)arg1;	// IMP=0x00000000001dd5c4
- (_Bool)_repairReframedAssetsWithoutSOCAvailableBitWithStore:(id)arg1;	// IMP=0x00000000001dd56e
- (_Bool)_migrateMetadataAndMigrationHistoryWithStore:(id)arg1;	// IMP=0x00000000001dd4cc
- (_Bool)_moveGpsHorizontalAccuracyToNewAttribute:(id)arg1;	// IMP=0x00000000001dd476
- (_Bool)_migrateCandidateBitsToDeferredProcessingCandidateOptions:(id)arg1;	// IMP=0x00000000001dd411
- (_Bool)_repairLegacyMigrationDuplicateVersionCloudResources:(id)arg1;	// IMP=0x00000000001dd409
- (_Bool)_repairTableThumbFragmentation;	// IMP=0x00000000001dd401
- (_Bool)_repushAllUserSmartAlbum:(id)arg1;	// IMP=0x00000000001dd3f9
- (_Bool)_repairOrphanedProjectAlbumsInStore:(id)arg1;	// IMP=0x00000000001dd3f1
- (_Bool)_runPairingForAssetsInStore:(id)arg1;	// IMP=0x00000000001dd39b
- (_Bool)_scavengeCameraProcessingAdjustmentMetadataForAssetsInStore:(id)arg1;	// IMP=0x00000000001dd1fd
- (_Bool)_fixInvalidPostMigrationFileSystemImportedAssets:(id)arg1;	// IMP=0x00000000001dd1f5
- (_Bool)_updateQualitySortForResourcesWithCPLResourceTypeVideoFullSizeInStore:(id)arg1;	// IMP=0x00000000001dd039
- (_Bool)_fixAdjustedFingerprintsInStore:(id)arg1;	// IMP=0x00000000001dd031
- (_Bool)_fixUnpushedVideoComplementResourcesInStore:(id)arg1;	// IMP=0x00000000001dcfdb
- (_Bool)_fixUploadedButNotRemotelyAvailalbeCPLResourcesInStore:(id)arg1;	// IMP=0x00000000001dcf85
- (_Bool)_fixSharedStreamVideoResourcesInStore:(id)arg1;	// IMP=0x00000000001dcf2f
- (_Bool)_removeAllSharedAssetDCIMFilesInStore:(id)arg1;	// IMP=0x00000000001dcf27
- (_Bool)_removeCloudSharedFileAtPath:(id)arg1 withFileManager:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001dcd1b
- (_Bool)relocateOriginalUBFPaths:(id)arg1;	// IMP=0x00000000001dcd13
- (_Bool)_cleanupLegacyFiles;	// IMP=0x00000000001dcd0b
- (_Bool)_relocateCPLMarkerFiles;	// IMP=0x00000000001dcd03
- (_Bool)_verifyAndFixBrokenLocalAvailabilityForResourceWithFileIDsInStore:(id)arg1;	// IMP=0x00000000001dccfb
- (_Bool)_move1kResourcesOutOfMastersDir:(id)arg1;	// IMP=0x00000000001dccf3
- (_Bool)_requestAvailabilityChangeForAssetsMissing1kResourcesInStore:(id)arg1;	// IMP=0x00000000001dcc9d
- (_Bool)_regenerateReferenceKeyDataInStore:(id)arg1;	// IMP=0x00000000001dcaa9
- (_Bool)_fixupResourceTypeUnknownInStore:(id)arg1;	// IMP=0x00000000001dca86
- (_Bool)_migrateVersionSpecific1kResourcesInStore:(id)arg1 deferHintChanges:(_Bool)arg2;	// IMP=0x00000000001dca7e
- (_Bool)_renumberLocalAvailabilityAndLocalAvailabilityTargetsInStore:(id)arg1;	// IMP=0x00000000001dca5b
- (_Bool)migratePurgeableResources;	// IMP=0x00000000001dc8c6
- (_Bool)_migrateVideoKeyFrameTimeValuesInStagedStore:(id)arg1;	// IMP=0x00000000001dc5aa
- (_Bool)_emptyResourceTablesInStagedStore:(id)arg1;	// IMP=0x00000000001dc510
- (_Bool)_invalidateReverseGeocodingDataInStore:(id)arg1;	// IMP=0x00000000001dc3e5
- (_Bool)_fixLocationValuesInStore:(id)arg1;	// IMP=0x00000000001dc3dd
- (_Bool)_regenerateSharedStreamsDataStoreKeysDataInStore:(id)arg1 deferHintChanges:(_Bool)arg2;	// IMP=0x00000000001dc1e8
- (_Bool)_fixUTIForRDMigrationInStore:(id)arg1;	// IMP=0x00000000001dc1e0
- (_Bool)_fixSidecarUTIsAndDataStoreSubtype:(id)arg1;	// IMP=0x00000000001dc0a0
- (_Bool)_removeUnneededAnalysisStateTableEntries:(id)arg1;	// IMP=0x00000000001dbe68
- (_Bool)_reconstructImageExtendedAttributes:(id)arg1;	// IMP=0x00000000001dbcaa
- (_Bool)_fixHasLocationSmartAlbum:(id)arg1;	// IMP=0x00000000001dbca2
- (_Bool)_fixWhiteBalanceValuesInStore:(id)arg1;	// IMP=0x00000000001dbc9a
- (_Bool)_fixKindSubtypeForLoopingVideoLivePhotosInStore:(id)arg1;	// IMP=0x00000000001dbc92
- (_Bool)_updateAlbumDatesInStore:(id)arg1;	// IMP=0x00000000001dbb54
- (_Bool)_updateCPLMarkerFiles;	// IMP=0x00000000001db5fb
- (_Bool)_updateMissingFileSystemVolumeUuidInStore:(id)arg1;	// IMP=0x00000000001db4d9
- (_Bool)_deleteExtraneousAdjustedFullSizeResourcesForSloMoAssetsWithStore:(id)arg1;	// IMP=0x00000000001db1f0
- (_Bool)_fixImportedAssetsFromCMMSavedInDCIMWithWrongSavedAssetType:(id)arg1;	// IMP=0x00000000001daba8
- (_Bool)_resetAnalysisStateForVideosInStore:(id)arg1;	// IMP=0x00000000001dab52
- (_Bool)_deleteVideoThumbsMadeFromPreferredFrameInStore:(id)arg1;	// IMP=0x00000000001daab0
- (_Bool)_filterSceneClassificationsInStore:(id)arg1;	// IMP=0x00000000001da4e9
- (_Bool)_ensureAllUserVerifiedPersonsHaveFaceCropsInStore:(id)arg1;	// IMP=0x00000000001da3c7
- (_Bool)_removeUntrackedPersonMetadataInStore:(id)arg1;	// IMP=0x00000000001d996d
- (_Bool)_populateCloudVerifiedTypeOnPersonsInStore:(id)arg1;	// IMP=0x00000000001d9649
- (_Bool)_populateCloudNameSourceOnFacesInStore:(id)arg1;	// IMP=0x00000000001d9325
- (_Bool)_markMigrationVerifiedTypePersonsInStore:(id)arg1;	// IMP=0x00000000001d8c9f
- (_Bool)_storeContainsFaceCrops:(id)arg1 success:(_Bool *)arg2;	// IMP=0x00000000001d8a2c
- (_Bool)_removeAutoloopCacheIfExists;	// IMP=0x00000000001d88e9
- (_Bool)_fixUTIforSlowMoInStore:(id)arg1;	// IMP=0x00000000001d857e
- (_Bool)_unquarantineClass:(Class)arg1 inManagedObject:(id)arg2;	// IMP=0x00000000001d82e5
- (_Bool)_unquarantinedQuarantinedItems:(id)arg1;	// IMP=0x00000000001d807a
- (_Bool)_retryQuarantinedAssetsAndFixResourceRelation:(id)arg1;	// IMP=0x00000000001d7da9
- (_Bool)_deletePersonsMissingUUIDInStore:(id)arg1;	// IMP=0x00000000001d7cb7
- (_Bool)_repushPersonsWithMergeTargetInStore:(id)arg1;	// IMP=0x00000000001d79c6
- (_Bool)_persistStoreUUIDToMobileCPLPlist:(id)arg1;	// IMP=0x00000000001d77ec
- (_Bool)_fixNilCloudMasterGUID:(id)arg1;	// IMP=0x00000000001d7445
- (_Bool)_fixAssetMasterResources:(id)arg1;	// IMP=0x00000000001d6f6f
- (_Bool)_repushAssetsWithAnyUserConfirmedFaceInStore:(id)arg1;	// IMP=0x00000000001d6edd
- (_Bool)_repushAssetsMatchingPredicate:(id)arg1 inStore:(id)arg2 withMaster:(_Bool)arg3;	// IMP=0x00000000001d692d
- (id)_predicateForInconsistentHeifAssets;	// IMP=0x00000000001d67da
- (void)_fixIncorrectHeifMetadataForAsset:(id)arg1;	// IMP=0x00000000001d5e54
- (_Bool)_fixIncorrectHeifMetadataInStore:(id)arg1;	// IMP=0x00000000001d5b42
- (_Bool)_fixRawWithZeroDimensions:(id)arg1;	// IMP=0x00000000001d5931
- (_Bool)_populateCloudResourceLocalStateInStor:(id)arg1;	// IMP=0x00000000001d5532
- (_Bool)_fixZeroTrashedDateForEntityName:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000000001d519d
- (_Bool)_fixTrashedDate:(id)arg1;	// IMP=0x00000000001d506b
- (_Bool)_fixMasterCloudLocalStateEnum:(id)arg1;	// IMP=0x00000000001d4d82
- (_Bool)_tryToPromoteUnknownAssetsInStore:(id)arg1;	// IMP=0x00000000001d4a59
- (_Bool)_rebuildWideCaptureThumbsInStore:(id)arg1;	// IMP=0x00000000001d46a0
- (id)_dateForWideGamutCapture;	// IMP=0x00000000001d45e5
- (_Bool)_removeUntrackedCloudResourceImageDerivativesInStore:(id)arg1;	// IMP=0x00000000001d4308
- (_Bool)_fixCustomKeyAssetForAlbum:(id)arg1;	// IMP=0x00000000001d3e3b
- (_Bool)_fixupCroppedUnadjustedAssets:(id)arg1;	// IMP=0x00000000001d3b4a
- (_Bool)_trimInvalidAlbumAssetsMappingRecords;	// IMP=0x00000000001d3932
- (_Bool)_fixRejectedKeyFace:(id)arg1;	// IMP=0x00000000001d363c
- (_Bool)_fixMergedPeopleThatShouldBeVerified:(id)arg1;	// IMP=0x00000000001d33a2
- (_Bool)_refreshTriggerValues:(id)arg1;	// IMP=0x00000000001d323a
- (_Bool)_setUserTypeOnKeyFace:(id)arg1;	// IMP=0x00000000001d2cdc
- (_Bool)_recoverSingleBurstPhotos:(id)arg1;	// IMP=0x00000000001d261a
- (void)_repairMetadataAndSingletonsForMigrationType:(long long)arg1 forceRebuildReason:(id)arg2 journalRebuildRequired:(_Bool)arg3;	// IMP=0x00000000001d24d1
- (void)_failed_recordCurrentVersionMetadata;	// IMP=0x00000000001d2474
- (void)_failed_repairSingletonObjectsWithRepairError:(id)arg1;	// IMP=0x00000000001d23eb
- (void)_failed_repairSingletonObjectsInNewDatabaseWithRepairError:(id)arg1;	// IMP=0x00000000001d2362
- (void)_failed_repairSingletonObjectsInNewDatabaseWithNilContextError:(id)arg1;	// IMP=0x00000000001d22d9
- (void)_failed_repairSingletonObjectsWithNilContextError:(id)arg1;	// IMP=0x00000000001d2250
- (void)_failed_repairSingletonObjectsWithError:(id)arg1;	// IMP=0x00000000001d1f2c
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherCoreDataError;	// IMP=0x00000000001d1ea6
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreTimeoutError;	// IMP=0x00000000001d1e20
- (void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreOpenError;	// IMP=0x00000000001d1d9a
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherSQLiteError;	// IMP=0x00000000001d1d14
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_LOCKED;	// IMP=0x00000000001d1c8e
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_ERROR;	// IMP=0x00000000001d1c08
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CANTOPEN;	// IMP=0x00000000001d1b82
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_PERM;	// IMP=0x00000000001d1afc
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_FULL;	// IMP=0x00000000001d1a76
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_NOTADB;	// IMP=0x00000000001d19f0
- (void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CORRUPT;	// IMP=0x00000000001d196a
- (void)_failed_repairSingletonObjectsWithErrorTypeOtherPhotosError;	// IMP=0x00000000001d18e4
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryTooNew;	// IMP=0x00000000001d185e
- (void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryRequiresMigration;	// IMP=0x00000000001d17d8
- (void)_failed_repairSingletonObjectsInNewDatabaseWithNoPersistentStores;	// IMP=0x00000000001d176e
- (void)_failed_repairSingletonObjectsWithNoPersistentStores;	// IMP=0x00000000001d15af
- (void)_failed_repairSingletonObjectsWithInvalidDatabaseFile;	// IMP=0x00000000001d1552
- (void)_failed_repairSingletonObjectsWithMissingDatabaseFile;	// IMP=0x00000000001d14f5
- (void)_failed_repairSingletonObjectsWithInvalidFileTypeLibraryDirectory;	// IMP=0x00000000001d1498
- (void)_failed_repairSingletonObjectsWithMissingLibraryDirectory;	// IMP=0x00000000001d143b
- (void)repairSingletonObjectsInDatabase;	// IMP=0x00000000001d1422
- (_Bool)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d0dd4
- (_Bool)_deletePhotoStreamAssetReferencesInStore:(id)arg1;	// IMP=0x00000000001d0a0f
- (_Bool)_deleteCloudSharedAndSynced:(_Bool)arg1 assetReferencesInStore:(id)arg2;	// IMP=0x00000000001d03fe
- (_Bool)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001cfe7f
- (_Bool)_deleteOrphanedExtendedAttributes:(id)arg1;	// IMP=0x00000000001cfe5c
- (_Bool)_updateSuggestionStartAndEndDatesInStore:(id)arg1;	// IMP=0x00000000001cfe06
- (_Bool)_addUUIDsToExistingKeywordsInStore:(id)arg1;	// IMP=0x00000000001cfbee
- (_Bool)_deletePersistentHistoryInStore:(id)arg1;	// IMP=0x00000000001cfb98
- (_Bool)_nukeWallpaperRemnantsInStore:(id)arg1;	// IMP=0x00000000001cf629
- (_Bool)_identifyVariationsAndDepthAdjustmentsIncludingBakedInLongExposure:(_Bool)arg1 inStore:(id)arg2;	// IMP=0x00000000001cf3ed
- (id)_fetchRequestToIdentifyAdjustedDepthAndVariationsCandidates;	// IMP=0x00000000001cf1d4
- (id)_fetchRequestToIdentifyBakedInVariationsCandidatesIncludingLongExposure:(_Bool)arg1;	// IMP=0x00000000001cef8e
- (_Bool)_identifyVariationsAndDepthAdjustmentsForAsset:(id)arg1;	// IMP=0x00000000001ce918
- (id)_dateForVariations;	// IMP=0x00000000001ce85d
- (_Bool)_runMigrationStepWithName:(id)arg1 fetchRequest:(id)arg2 store:(id)arg3 migrationHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ce612
- (_Bool)_runMigrationStepWithPrettyFunction:(const char *)arg1 store:(id)arg2 migrationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ce492
- (_Bool)_updatePlaybackStylesAndVariationsInStore:(id)arg1;	// IMP=0x00000000001cdaa0
- (_Bool)_updatePlaybackWithBatchUpdateRequest:(id)arg1 targetDescription:(id)arg2 inContext:(id)arg3;	// IMP=0x00000000001cd8d2
- (_Bool)_fixMovieAttributesInStore:(id)arg1;	// IMP=0x00000000001cd690
- (_Bool)_setPlaybackStyleForAnimatedGIFsInStore:(id)arg1;	// IMP=0x00000000001cd436
- (_Bool)_removeAutoloopWorkerStatesInStore:(id)arg1;	// IMP=0x00000000001cd199
- (_Bool)_fixInitialSyncMarker;	// IMP=0x00000000001cd026
- (_Bool)_removingDuplicatedCloudAssetGuid:(id)arg1;	// IMP=0x00000000001cccdf
- (_Bool)_convertNameSourceFromBoolToIntForDeferredRebuildFaceInStore:(id)arg1;	// IMP=0x00000000001cc932
- (_Bool)_populateUserKeyFacePickSourceForPersonInStore:(id)arg1;	// IMP=0x00000000001cc532
- (_Bool)_populateAdjustmentTimestampsOnAssets:(id)arg1;	// IMP=0x00000000001cc2b8
- (_Bool)_migrateCloudResourcesRelationshipsInStagedStore:(id)arg1;	// IMP=0x00000000001cbf57
- (_Bool)_revalidateImportSessionDates:(id)arg1;	// IMP=0x00000000001cbd42
- (_Bool)_setImportedByInPLCloudMaster:(id)arg1;	// IMP=0x00000000001cbb2d
- (_Bool)_persistImportSessionAlbumType:(id)arg1;	// IMP=0x00000000001cb953
- (_Bool)_createImportSessionAlbums:(id)arg1;	// IMP=0x00000000001cb48b
- (_Bool)_removeInvalidImportSessionAlbums:(id)arg1;	// IMP=0x00000000001cb431
- (_Bool)_migrateDetectedFacesGroupInStagedStore:(id)arg1;	// IMP=0x00000000001cb038
- (_Bool)_migrateRejectedFacesGroupInStagedStore:(id)arg1;	// IMP=0x00000000001cac27
- (_Bool)_migrateOriginalColorSpaceInStagedStore:(id)arg1;	// IMP=0x00000000001ca95a
- (_Bool)_performMigrationCacheDateCreatedOnResources:(_Bool)arg1 cacheItemIdentifierOnResources:(_Bool)arg2 store:(id)arg3;	// IMP=0x00000000001ca633
- (void)_forceDupeAnalysis;	// IMP=0x00000000001ca56f
- (_Bool)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;	// IMP=0x00000000001ca14f
- (_Bool)_fixupAssetPersistence:(id)arg1;	// IMP=0x00000000001c9ee5
- (_Bool)_persistVideoComplPropertiesInStore:(id)arg1;	// IMP=0x00000000001c9ab0
- (_Bool)_persistPlaceAnnotationData:(id)arg1;	// IMP=0x00000000001c98f4
- (_Bool)_fixVideoDimensionsInStore:(id)arg1;	// IMP=0x00000000001c953d
- (_Bool)_fixVideoDimensionsForAsset:(id)arg1;	// IMP=0x00000000001c9252
- (_Bool)_populateHasAdjustmentsForAssetsInStore:(id)arg1;	// IMP=0x00000000001c8f95
- (_Bool)_fixEmptyVideoResourcePathsInStore:(id)arg1;	// IMP=0x00000000001c8bf4
- (_Bool)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1;	// IMP=0x00000000001c87e9
- (_Bool)_fixItemIdentifierForVideoCmplInStore:(id)arg1;	// IMP=0x00000000001c8430
- (_Bool)_markPhotoIrisVideoOrphansInStore:(id)arg1;	// IMP=0x00000000001c80e5
- (_Bool)_fixZeroDurationPhotoIrisWithLocalResourcesInStore:(id)arg1 assumeAdjustedIrisIsVisible:(_Bool)arg2;	// IMP=0x00000000001c7ed6
- (_Bool)_repushMemoriesWithNewFeaturesInStore:(id)arg1;	// IMP=0x00000000001c7ae4
- (_Bool)_fixWhitelistOwnerForPendingInvitationsInStore:(id)arg1;	// IMP=0x00000000001c7853
- (_Bool)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1;	// IMP=0x00000000001c7672
- (_Bool)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1;	// IMP=0x00000000001c7491
- (_Bool)_saveChangesToPhotoIrisInStore:(id)arg1 matchingPredicate:(id)arg2 countChanged:(unsigned long long *)arg3 error:(id *)arg4 changeBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c7125
- (_Bool)_moveCloudSharedDerivativesInStore:(id)arg1;	// IMP=0x00000000001c6ce6
- (_Bool)_purgeCloudSharedResourcesInStore:(id)arg1;	// IMP=0x00000000001c69b5
- (_Bool)_fixOriginalPropertiesForCloudSharedAssetsInStore:(id)arg1;	// IMP=0x00000000001c64b3
- (_Bool)_fixCloudSharedGIFsInStore:(id)arg1;	// IMP=0x00000000001c60a5
- (_Bool)_fixCloudSharedVideosInStore:(id)arg1;	// IMP=0x00000000001c59be
- (_Bool)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1;	// IMP=0x00000000001c55e5
- (_Bool)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1;	// IMP=0x00000000001c5247
- (_Bool)_tagScreenshotsForAssetsInStore:(id)arg1;	// IMP=0x00000000001c4d33
- (_Bool)_addCameraCaptureDeviceForAssetsInStore:(id)arg1;	// IMP=0x00000000001c49cc
- (_Bool)_fixIncorrectAddedDateForAssetsInStore:(id)arg1;	// IMP=0x00000000001c45c5
- (_Bool)fixPossiblyIncorrectAddedDateForAsset:(id)arg1;	// IMP=0x00000000001c4274
- (_Bool)_isReasonableCreationDate:(id)arg1;	// IMP=0x00000000001c41af
- (_Bool)_generateAddedDateForAssetsInStore:(id)arg1;	// IMP=0x00000000001c3e6d
- (_Bool)_repersistDuplicatedAssets:(id)arg1;	// IMP=0x00000000001c2c78
- (_Bool)_fixKeywordsInStagedStore:(id)arg1;	// IMP=0x00000000001c220a
- (_Bool)_fixFaceAlgorithmVersion:(id)arg1;	// IMP=0x00000000001c1f75
- (_Bool)_fixAlbumAndFolderSortAscending:(id)arg1;	// IMP=0x00000000001c1b80
- (void)_handleCreateOptionsUsingContext:(id)arg1;	// IMP=0x00000000001c1a0f
- (_Bool)_deleteOrphanedUnverifiedPeople:(id)arg1;	// IMP=0x00000000001c1762
- (_Bool)_processDeletesForUUIDs:(id)arg1;	// IMP=0x00000000001c1565
- (_Bool)_fixMemoriesWithAssetLists:(id)arg1;	// IMP=0x00000000001c05be
- (_Bool)_updateKeyAssetInMemory:(id)arg1;	// IMP=0x00000000001c017d
- (_Bool)_fixLocallyAvailableFlagForThumbnailsInStore:(id)arg1;	// IMP=0x00000000001bfd88
- (_Bool)_fixLastPrefetchDateInStore:(id)arg1;	// IMP=0x00000000001bfa88
- (_Bool)_removeCameraRollInStore:(id)arg1;	// IMP=0x00000000001bf7fb
- (_Bool)_applyDataProtectionToDCIMFromClassBToClassC;	// IMP=0x00000000001bf7f3
- (_Bool)_deleteAllMemoriesInStore:(id)arg1;	// IMP=0x00000000001bf32b
- (_Bool)_fixCustomRenderedValues:(id)arg1;	// IMP=0x00000000001befc6
- (id)_dateForFirstCRVSPhoto;	// IMP=0x00000000001bef15
- (_Bool)_flattenUnknownCustomRenderedValues:(id)arg1;	// IMP=0x00000000001bec33
- (_Bool)_fixPersonAndFaceGroup:(id)arg1;	// IMP=0x00000000001beb6c
- (_Bool)_fixFaceGroupUnverifiedPerson:(id)arg1;	// IMP=0x00000000001be855
- (_Bool)_fixSingletonFaceFaceGroup:(id)arg1;	// IMP=0x00000000001be588
- (_Bool)_populateNilOriginalFilename:(id)arg1;	// IMP=0x00000000001be23f
- (_Bool)_populateNilOriginalFilenameOnMaster:(id)arg1;	// IMP=0x00000000001bdfaf
- (_Bool)_removeOldPersonMetadataInStore:(id)arg1;	// IMP=0x00000000001bdec5
- (_Bool)_persistPersonsInStore:(id)arg1;	// IMP=0x00000000001bdd6a
- (_Bool)_persistMemoriesInStore:(id)arg1;	// IMP=0x00000000001bdb75
- (_Bool)_populateLatLongInAsset:(id)arg1;	// IMP=0x00000000001bd92e
- (_Bool)_populateRepresentativeAssets:(id)arg1;	// IMP=0x00000000001bd6ba
- (_Bool)_fixCloudMasterCloudLocalState:(id)arg1;	// IMP=0x00000000001bd459
- (_Bool)_resetUploadAttempts:(id)arg1;	// IMP=0x00000000001bd127
- (_Bool)_resetFailedCloudMasters:(id)arg1;	// IMP=0x00000000001bcec3
- (_Bool)_resetFailedAssets:(id)arg1;	// IMP=0x00000000001bcb8b
- (_Bool)_fixVideoJPGPath:(id)arg1;	// IMP=0x00000000001bc16c
- (void)_fixPathForResource:(id)arg1 withPath:(id)arg2;	// IMP=0x00000000001bbf0c
- (_Bool)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2;	// IMP=0x00000000001bbd2d
- (void)_removeFileAt:(id)arg1 forResource:(id)arg2;	// IMP=0x00000000001bbb75
- (_Bool)_fixNonDuplicatedAssets:(id)arg1 adjusted:(_Bool)arg2;	// IMP=0x00000000001bb34c
- (_Bool)_fixDuplicatedAssets:(id)arg1;	// IMP=0x00000000001bab3e
- (_Bool)_fixVisibleBurstAsset:(id)arg1;	// IMP=0x00000000001ba529
- (_Bool)_fixAdjustedAssets:(id)arg1;	// IMP=0x00000000001ba1df
- (_Bool)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(_Bool)arg2;	// IMP=0x00000000001b994d
- (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;	// IMP=0x00000000001b98fa
- (_Bool)_performChangesOnBatchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x00000000001b96f7
- (_Bool)_fixCorruptedOrientationsInStore:(id)arg1;	// IMP=0x00000000001b93e2
- (_Bool)_persistMetadataToFileSystemForAlbum:(id)arg1;	// IMP=0x00000000001b9311
- (_Bool)_forceAlbumMetadataToDiskInStore:(id)arg1;	// IMP=0x00000000001b8eea
- (_Bool)_setupRootFolderInStore:(id)arg1;	// IMP=0x00000000001b8c41
- (_Bool)_fixDuplicatedRootFolderAndOrphanedAlbumsInStore:(id)arg1;	// IMP=0x00000000001b8049
- (_Bool)_removeInvalidAdjustmentResourceDataInStore:(id)arg1;	// IMP=0x00000000001b7e07
- (_Bool)_migrateAssetLocationData:(id)arg1;	// IMP=0x00000000001b7a17
- (_Bool)_addLocationHashesToAssets:(id)arg1;	// IMP=0x00000000001b7761
- (_Bool)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(_Bool)arg2;	// IMP=0x00000000001b70f9
- (_Bool)_regenerateMonthHighlightTitlesWithStore:(id)arg1;	// IMP=0x00000000001b6f4c
- (_Bool)rebuildAllMomentsInStore:(id)arg1;	// IMP=0x00000000001b6c82
- (_Bool)deleteAllMomentsFromStore:(id)arg1;	// IMP=0x00000000001b6b54
- (_Bool)_fixupSyncedAssetAttributesInStore:(id)arg1;	// IMP=0x00000000001b6823
- (_Bool)_resetDupesAnalysisInStore:(id)arg1;	// IMP=0x00000000001b67a6
- (_Bool)_cleanupInvalidAlbumsAndFoldersInStore:(id)arg1;	// IMP=0x00000000001b66fb
- (_Bool)_fixupKeyAssetsForAlbumsInStore:(id)arg1;	// IMP=0x00000000001b62e4
- (_Bool)_fixupCloudResourcesInStore:(id)arg1;	// IMP=0x00000000001b5f80
- (_Bool)_fixupSharedStreamOrientationsInStore:(id)arg1;	// IMP=0x00000000001b5b6f
- (_Bool)_populateFaceRegionsInStore:(id)arg1;	// IMP=0x00000000001b5778
- (void)_populateFaceRegionsForAsset:(id)arg1;	// IMP=0x00000000001b55d3
- (_Bool)_populateVideoCpFieldsInStagedStore:(id)arg1;	// IMP=0x00000000001b527e
- (_Bool)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1;	// IMP=0x00000000001b35a4
- (_Bool)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1;	// IMP=0x00000000001b31e3
- (_Bool)_fixupAlbumOrderInAlbumListInStore:(id)arg1;	// IMP=0x00000000001b2d76
- (_Bool)_fixupImportedAssetsInStore:(id)arg1;	// IMP=0x00000000001b26a5
- (_Bool)_fixupImportedEventsInStore:(id)arg1;	// IMP=0x00000000001b2246
- (_Bool)_updateKindSubtypeForPanoramaPhotosNeedsReset:(_Bool)arg1 inStore:(id)arg2;	// IMP=0x00000000001b1dc8
- (_Bool)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;	// IMP=0x00000000001b19d3
- (_Bool)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001affe8
- (_Bool)_postProcessFromVersion6006Store:(id)arg1;	// IMP=0x00000000001afc2e
- (void)applyDataProtectionToAllPhotosFilesOnce;	// IMP=0x00000000001afaa3
- (_Bool)skipDataProtectionForFilePath:(id)arg1;	// IMP=0x00000000001af998
- (_Bool)_fixupBrokenBurstPicksInStore:(id)arg1;	// IMP=0x00000000001af51a
- (_Bool)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStagedStore:(id)arg1;	// IMP=0x00000000001aef19
- (_Bool)_migrateTransformableUUIDsToStringsInStore:(id)arg1;	// IMP=0x00000000001aedb6
- (_Bool)isPostProcessingLightweightMigration;	// IMP=0x00000000001aedad
- (_Bool)processWelterweightMigrationStageOnStore:(id)arg1 migrationUUID:(id)arg2 fromVersion:(int)arg3 toVersion:(int)arg4 migrationContext:(id)arg5 progress:(id)arg6 progressUnitCount:(unsigned long long)arg7;	// IMP=0x00000000001ae08f
- (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1 fixAddedDate:(_Bool)arg2 shouldGenerateThumbnails:(_Bool)arg3;	// IMP=0x00000000001ad8eb
- (_Bool)_shouldTriggerLightweightMigrationFailureForInternalTesting;	// IMP=0x00000000001ad522
- (_Bool)postProcessMigratedStore:(id)arg1 migrationUUID:(id)arg2 fromVersion:(int)arg3 progress:(id)arg4 progressUnitCount:(unsigned long long)arg5;	// IMP=0x00000000001a59b3
- (_Bool)validateModelEntityNames:(out id *)arg1;	// IMP=0x00000000001a5708
- (void)_setIsPostProcessingLightWeightMigration:(_Bool)arg1;	// IMP=0x00000000001a56ff
- (long long)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6 migrationPolicy:(unsigned int)arg7 error:(id *)arg8;	// IMP=0x00000000001a5343
- (id)_importFileSystemImportAssets:(id)arg1 intoLibrary:(id)arg2 forceUpdate:(_Bool)arg3 progress:(id)arg4;	// IMP=0x00000000001a38d5
- (void)_prepareForImportDeleteCorruptAssetsWithImporter:(id)arg1 context:(id)arg2;	// IMP=0x00000000001a2896
- (id)_syncedPropertiesForAssetUUID:(id)arg1;	// IMP=0x00000000001a2823
- (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;	// IMP=0x00000000001a24c8
- (id)_newSyncedPropertiesByAssetUUIDs:(_Bool)arg1;	// IMP=0x00000000001a1f93
- (id)_dateWithiTunesTimeInterval:(double)arg1;	// IMP=0x00000000001a1f6f
- (void)_importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a1c8d
- (void)_importAllDCIMAssetsInLibrary:(id)arg1 progress:(id)arg2 progressFraction:(id)arg3 rebuildComplete:(_Bool)arg4;	// IMP=0x00000000001a159b
- (void)_rebuildAssetsFromJournal:(id)arg1 inLibrary:(id)arg2 progress:(id)arg3 progressFraction:(id)arg4;	// IMP=0x00000000001a12c4
- (id)_orderedAssetsToImportInLibrary:(id)arg1 cameraRollOnly:(_Bool)arg2;	// IMP=0x00000000001a0b78
- (id)_orderedAssetsToImportInLibrary:(id)arg1;	// IMP=0x00000000001a08d9
- (void)resumePhotoStreams;	// IMP=0x00000000001a08d3
- (void)pausePhotoStreams;	// IMP=0x00000000001a08cd
- (void)forceImportFileSystemDataIntoDatabaseWithPhotoLibrary:(id)arg1;	// IMP=0x00000000001a088b
- (void)dontImportFileSystemDataIntoDatabaseWithPhotoLibrary:(id)arg1;	// IMP=0x00000000001a07f8
- (void)_repairPotentialModelCorruptionInLibrary:(id)arg1;	// IMP=0x00000000001a06e8
- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1;	// IMP=0x00000000001a03c9
- (void)handleGreenChanges:(id)arg1;	// IMP=0x00000000001a02fd
- (void)_migratePersonContactInfo;	// IMP=0x00000000001a02ba
- (void)_loadFacesFileSystemDataIntoDatabase;	// IMP=0x00000000001a01a1
- (void)setLoadingFacesFromFileSystem:(_Bool)arg1;	// IMP=0x00000000001a0177
- (_Bool)isLoadingFacesFromFileSystem;	// IMP=0x00000000001a014c
- (void)_loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1 progress:(id)arg2;	// IMP=0x000000000019fbe4
- (id)_eventNameFromDate:(id)arg1;	// IMP=0x000000000019fb64
- (void)_generateAlbumMetadataFromLastiTunesSyncedPlist;	// IMP=0x000000000019ef52
- (id)_iTunesPhotosLastSyncMetadata;	// IMP=0x000000000019ee01
- (id)generatePathToAssetUUIDRecoveryMapping;	// IMP=0x000000000019ec8d
- (void)archiveAssetUUIDForPathPlist:(id)arg1;	// IMP=0x000000000019e7af
- (id)archivedAssetUUIDForURL:(id)arg1;	// IMP=0x000000000019e1b9
- (_Bool)isPhotoLibraryDatabaseReadyForOpen:(id *)arg1;	// IMP=0x000000000019dfaa
- (_Bool)updateCompletedMigrationStateWithError:(id *)arg1;	// IMP=0x000000000019df11
- (long long)legacyMigrationState;	// IMP=0x000000000019dcee
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000019dc61
- (void)migratePersonContactInfo;	// IMP=0x000000000019dc33
- (void)loadFacesFileSystemDataIntoDatabase;	// IMP=0x000000000019dc05
- (void)loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019da43
- (void)loadFileSystemAssetsNotifyCompleted:(CDUnknownBlockType)arg1;	// IMP=0x000000000019d9b5
- (void)loadFileSystemAssetsNotifyLeave;	// IMP=0x000000000019d9a7
- (void)loadFileSystemAssetsNotifyEnter;	// IMP=0x000000000019d999
- (_Bool)_recordCurrentVersionMetadataInPersistentStore:(id)arg1 migrationType:(long long)arg2 forceRebuildReason:(id)arg3 sourceModelVersion:(id)arg4 updateLegacyMigrationState:(_Bool)arg5 journalRebuildRequred:(_Bool)arg6;	// IMP=0x000000000019d69c
- (long long)createNewDatabaseWithMigrationType:(long long)arg1 forceRebuildReason:(id)arg2 coordinator:(id)arg3 error:(id *)arg4;	// IMP=0x000000000019bbaa
- (long long)promptUserIfNeededForRebuildReason:(id)arg1 migrationError:(id)arg2;	// IMP=0x000000000019b698
- (_Bool)_createPhotoDataDirectoryIfNecessary;	// IMP=0x000000000019b1dd
- (void)_writeToPhotoDataDirectoryFailedWithNoPermission:(id)arg1;	// IMP=0x000000000019b194
- (void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1;	// IMP=0x000000000019b14b
- (_Bool)shouldCreateDatabase;	// IMP=0x000000000019aebb
- (long long)migrateOrCreateDatabaseIfNecessaryWithPersistentContainer:(id)arg1 migrationPolicy:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000019a871
- (long long)checkForceRebuildIndicatorFile;	// IMP=0x000000000019a812
- (_Bool)debug_resetThumbnailsAndInitiateRebuildRequestInStore:(id)arg1;	// IMP=0x000000000019a75e
- (_Bool)_removeEvents:(id)arg1;	// IMP=0x000000000019a332
- (_Bool)_forceSoftResetSync;	// IMP=0x000000000019a1c0
- (_Bool)_disableICloudPhoto;	// IMP=0x000000000019a092
- (_Bool)_verifyCloudAssetsLocalAvailability:(id)arg1;	// IMP=0x0000000000199bba
- (id)managedObjectContextForMigrationInStore:(id)arg1 name:(const char *)arg2 concurrencyType:(unsigned long long)arg3;	// IMP=0x0000000000199b44
- (id)managedObjectContextForMigrationWithName:(const char *)arg1 persistentStoreCoordinator:(id)arg2 concurrencyType:(unsigned long long)arg3;	// IMP=0x0000000000199915
- (_Bool)_fixIncorrectThumbnailTablesInStore:(id)arg1 deferHintChanges:(_Bool)arg2;	// IMP=0x0000000000199811
- (_Bool)postProcessThumbnailsOnlyIfVersionMismatchOrMissing:(_Bool *)arg1 coordinator:(id)arg2;	// IMP=0x000000000019964f
- (unsigned long long)_assetCountForContext:(id)arg1;	// IMP=0x000000000019956d
- (unsigned long long)_assetCountForLibrary:(id)arg1;	// IMP=0x0000000000199517
- (unsigned long long)_assetCountForStore:(id)arg1;	// IMP=0x00000000001994b7
- (void)validateCurrentModelVersion;	// IMP=0x00000000001994a3
- (void)_validateCurrentModelVersionAttempt:(long long)arg1;	// IMP=0x00000000001992e5
- (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(long long)arg1;	// IMP=0x000000000019923c
- (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;	// IMP=0x000000000019911b
@property(readonly, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
- (id)newShortLivedLibraryWithName:(const char *)arg1;	// IMP=0x0000000000198f25
- (id)migrationLogger;	// IMP=0x0000000000198f0f
@property(readonly, nonatomic) PLDeviceRestoreMigrationPostProcessingSupport *postProcessingToken;
- (id)newDeviceRestoreMigrationSupport;	// IMP=0x0000000000198e0b
@property(readonly) PLDeviceRestoreMigrationSupport *deviceRestoreMigrationSupport;
- (id)_migrationThumbnailManagerWithStore:(id)arg1;	// IMP=0x0000000000198d41
@property(readonly) PLCoreAnalyticsEventManager *analyticsEventManager;
- (id)initWithPathManager:(id)arg1;	// IMP=0x0000000000198974
- (_Bool)reconsiderAllowedForAnalysisOnAssetsMarkedNotAllowedInStore:(id)arg1;	// IMP=0x000000000006d9b6
- (_Bool)resetAnalysisStateForVideosWithMoc:(id)arg1;	// IMP=0x000000000006d6b0
- (_Bool)markUserConfirmedFacesAndCorrespondingFaceAnalysisStatesDirtyInStore:(id)arg1;	// IMP=0x000000000006d320
- (_Bool)markAllDirtyFaceAnalysisStatesWithFaceDetectionWorkerFlagsInStore:(id)arg1;	// IMP=0x000000000006d205
- (_Bool)resetRejectedFacesOnAllPersonsInStore:(id)arg1;	// IMP=0x000000000006cf84
- (_Bool)clearVisionWorkerCache;	// IMP=0x000000000006cd44
- (_Bool)touchAnalysisStateSortTokensInStoreInStore:(id)arg1;	// IMP=0x000000000006cc05
- (_Bool)fixupStatesWithUnreachableAssetUUIDsInStore:(id)arg1;	// IMP=0x000000000006ca8b
- (_Bool)fixupUnknownAnalysisStatesInStore:(id)arg1;	// IMP=0x000000000006c81e
- (_Bool)deleteAnalysisStatesInStore:(id)arg1 forWorkerType:(short)arg2;	// IMP=0x000000000006c70e
- (_Bool)deleteAllAssetAnalysisStatesInStore:(id)arg1;	// IMP=0x000000000006c4e3
- (_Bool)_markAllProcessedAnalysisStatesDirtyForWorkerType:(short)arg1 withStartingWorkerFlags:(int)arg2 inStore:(id)arg3;	// IMP=0x000000000006c314
- (_Bool)resetFaceQualityInStore:(id)arg1;	// IMP=0x000000000006c195
- (_Bool)faceQualityResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;	// IMP=0x000000000006c185
- (_Bool)resetManualOrderForNonFavoritePeopleInStore:(id)arg1;	// IMP=0x000000000006c121
- (_Bool)resetManualOrderForNonFavoritePeopleInManagedObjectContext:(id)arg1;	// IMP=0x000000000006b996
- (_Bool)resetGraphPersonsInStore:(id)arg1;	// IMP=0x000000000006b659
- (_Bool)markAllSceneAnalysisStatesDirtyAndClearDistanceIdentitiesInStoreAndClearSceneprints:(id)arg1;	// IMP=0x000000000006b0ba
- (_Bool)graphPersonResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;	// IMP=0x000000000006b0aa
- (_Bool)sceneStepRequiredForPreviousStoreVersion:(unsigned long long)arg1;	// IMP=0x000000000006b09a
- (void)filesystemImportResultsUpdateKeywordWithImportedAssets:(id)arg1;	// IMP=0x0000000000215112

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
