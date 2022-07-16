//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/PLPhotoLibraryPathManager.h>

@interface PLPhotoLibraryPathManager (conveniences)
+ (id)defaultDeferredRenderFileFormatTypeIdentifier;	// IMP=0x000000000047e0b9
- (id)pathToiPhotoLibraryMediaDir;	// IMP=0x000000000047c126
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1;	// IMP=0x000000000047bc5e
- (_Bool)removePartialVideoDirectory;	// IMP=0x000000000047baeb
- (id)URLForPartialVideoDirectoryWithAssetUUID:(id)arg1;	// IMP=0x000000000047b9c1
- (id)URLForPartialVideoWithResourceFingerprint:(id)arg1 assetUUID:(id)arg2 timeRange:(CDStruct_3c1748cc)arg3;	// IMP=0x000000000047b826
- (id)cloudSharingArchiveDirectory;	// IMP=0x000000000047b808
- (id)directoryPathForInFlightComments:(_Bool)arg1;	// IMP=0x000000000047b606
- (id)cloudServiceEnableLogFileURL;	// IMP=0x000000000047b56c
- (_Bool)removeCPLDataDirectory;	// IMP=0x000000000047af51
- (id)cplDownloadFinishedMarkerFilePath;	// IMP=0x000000000047aeed
- (id)cplEnableMarkerFilePath;	// IMP=0x000000000047ae89
- (id)wipeCPLOnOpenPath;	// IMP=0x000000000047ae25
- (id)forceSoftResetSyncPath;	// IMP=0x000000000047adc1
- (id)disableICloudPhotosFilePath;	// IMP=0x000000000047ad5d
- (id)pauseICloudPhotosFilePath;	// IMP=0x000000000047ad01
- (id)enableICloudPhotosFilePath;	// IMP=0x000000000047aca5
- (id)cplDataDirectoryCreateIfNeeded:(_Bool)arg1;	// IMP=0x000000000047ac83
- (id)deletedMemoryUUIDsFilePath;	// IMP=0x000000000047ac27
- (id)searchMetadataStoreFilePath;	// IMP=0x000000000047abd0
- (id)zeroKeywordStoreFilePath;	// IMP=0x000000000047ab79
- (id)searchIndexManagerDatabaseFilePath;	// IMP=0x000000000047ab22
- (id)searchIndexManagerDatabaseDirectory;	// IMP=0x000000000047ab0b
- (id)photoStreamsDataDirectory;	// IMP=0x000000000047aab1
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;	// IMP=0x000000000047a8dc
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;	// IMP=0x000000000047a763
- (_Bool)isSystemPhotoLibraryPathManager;	// IMP=0x000000000047a5bd
- (id)recordRebuildReason;	// IMP=0x000000000047db75
- (long long)lastRebuildReason;	// IMP=0x000000000047d970
- (void)setSqliteErrorForReason:(long long)arg1 allowsExit:(_Bool)arg2;	// IMP=0x000000000047d33a
- (void)_abortWithRebuildReasonPLRebuildReasonBackgroundMigration;	// IMP=0x000000000047d2b4
- (void)_abortWithRebuildReasonPLRebuildReasonExcessivePersistentHistorySize;	// IMP=0x000000000047d22e
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumUUIDCorruption;	// IMP=0x000000000047d1a8
- (void)_abortWithRebuildReasonPLRebuildReasonMPSUUIDCorruption;	// IMP=0x000000000047d122
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumPathCorruption;	// IMP=0x000000000047d09c
- (void)_abortWithRebuildReasonPLRebuildReasonMPSPathCorruption;	// IMP=0x000000000047d016
- (void)_abortWithRebuildReasonPLRebuildReasonUpgradeForceRebuild;	// IMP=0x000000000047cf90
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyThumbnailRebuilds;	// IMP=0x000000000047cf0a
- (void)_abortWithRebuildReasonPLRebuildReasonDatabaseCorruption;	// IMP=0x000000000047ce84
- (void)_abortWithRebuildReasonPLRebuildReasonPathCorruption;	// IMP=0x000000000047cdfe
- (void)_abortWithRebuildReasonPLRebuildReasonUUIDCorruption;	// IMP=0x000000000047cd78
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyOrphanedRecords;	// IMP=0x000000000047ccf2
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveRecoveryAttempts;	// IMP=0x000000000047cc6c
- (void)_abortWithRebuildReasonPLRebuildReasonCorruption;	// IMP=0x000000000047cbe6
- (void)_abortWithRebuildReasonPLRebuildReasonUnknown;	// IMP=0x000000000047cb60
- (void)_abortWithRebuildReasonPLRebuildReasonLightweightMigration;	// IMP=0x000000000047cada
- (void)_abortWithRebuildReasonPLRebuildReasonStagedDemoContentInstallation;	// IMP=0x000000000047ca54
- (void)_abortWithRebuildReasonPLRebuildReasonSimulatedCorruption;	// IMP=0x000000000047c9ce
- (void)removeSqliteErrorIndicatorFile;	// IMP=0x000000000047c7b3
- (_Bool)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1;	// IMP=0x000000000047c3de
- (id)_rebuildDateFormatter;	// IMP=0x000000000047c35c
- (_Bool)sqliteErrorIndicatorFileExists;	// IMP=0x000000000047c2e7
@end

