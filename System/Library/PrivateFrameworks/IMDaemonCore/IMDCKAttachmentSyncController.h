//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMDCKAttachmentSyncCKOperationFactory, IMDRecordZoneManager, NSMutableArray, NSMutableDictionary, NSObject;
@protocol IMDCKSyncTokenStore, OS_dispatch_queue;

@interface IMDCKAttachmentSyncController
{
    _Bool _isDoingDeleteRecoverySync;	// 8 = 0x8
    _Bool _assetDownloadInProgress;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_ckQueue;	// 16 = 0x10
    IMDRecordZoneManager *_recordZoneManager;	// 24 = 0x18
    IMDCKAttachmentSyncCKOperationFactory *_CKOperationFactory;	// 32 = 0x20
    id <IMDCKSyncTokenStore> _syncTokenStore;	// 40 = 0x28
    NSMutableDictionary *_completionBlocksForAssetFetchOperations;	// 48 = 0x30
    NSMutableDictionary *_recordIDToTransferMap;	// 56 = 0x38
    CDUnknownBlockType _perTransferProgress;	// 64 = 0x40
    NSMutableArray *_downloadAssetsForTransferGUIDs;	// 72 = 0x48
    unsigned long long _deviceConditionsToCheck;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x0000000000027e00
@property(nonatomic) unsigned long long deviceConditionsToCheck; // @synthesize deviceConditionsToCheck=_deviceConditionsToCheck;
@property(retain, nonatomic) NSMutableArray *downloadAssetsForTransferGUIDs; // @synthesize downloadAssetsForTransferGUIDs=_downloadAssetsForTransferGUIDs;
@property(nonatomic) _Bool assetDownloadInProgress; // @synthesize assetDownloadInProgress=_assetDownloadInProgress;
@property(copy, nonatomic) CDUnknownBlockType perTransferProgress; // @synthesize perTransferProgress=_perTransferProgress;
@property(retain, nonatomic) NSMutableDictionary *recordIDToTransferMap; // @synthesize recordIDToTransferMap=_recordIDToTransferMap;
@property(retain, nonatomic) NSMutableDictionary *completionBlocksForAssetFetchOperations; // @synthesize completionBlocksForAssetFetchOperations=_completionBlocksForAssetFetchOperations;
@property(retain, nonatomic) id <IMDCKSyncTokenStore> syncTokenStore; // @synthesize syncTokenStore=_syncTokenStore;
@property(retain, nonatomic) IMDCKAttachmentSyncCKOperationFactory *CKOperationFactory; // @synthesize CKOperationFactory=_CKOperationFactory;
@property(retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property(nonatomic) _Bool isDoingDeleteRecoverySync; // @synthesize isDoingDeleteRecoverySync=_isDoingDeleteRecoverySync;
- (void)syncAttachmentDeletesToCloudKitWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031c3a
- (void)_deleteAttachmentsWithRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031942
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;	// IMP=0x0000000000031656
- (void)_setNextDeleteAfterRow:(unsigned long long)arg1;	// IMP=0x00000000000315ed
- (unsigned long long)_readNextDeleteAfterRow;	// IMP=0x000000000003157d
- (unsigned long long)_attachmentDeleteBatchSize;	// IMP=0x0000000000031572
- (id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg1;	// IMP=0x00000000000314ee
- (_Bool)__shouldOptimizeAttachmentDefault;	// IMP=0x00000000000314e6
- (id)fileTransferCenter;	// IMP=0x00000000000314cd
- (void)_fetchAndValidateFileTransfersFromCloudKit:(id)arg1 capturedWithABC:(_Bool)arg2 activity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000030c49
- (void)_processAndValidateAttachmentRecordsEligibleForPurge:(id)arg1 recordIDsToTransfers:(id)arg2 capturedWithABC:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000030230
- (void)_validateTransferFromCloudKit:(id)arg1 localTransfer:(id)arg2 validateCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000301cf
- (void)clearLocalSyncState:(unsigned long long)arg1;	// IMP=0x0000000000030137
- (void)deleteAttachmentZone;	// IMP=0x0000000000030099
- (id)latestSyncTokenForSyncType:(long long)arg1;	// IMP=0x000000000003004a
- (void)setLatestSyncToken:(id)arg1 forSyncType:(long long)arg2;	// IMP=0x000000000002ffec
- (id)_changeTokenKeyForSyncType:(long long)arg1;	// IMP=0x000000000002ffd0
- (void)_migrateSyncToken;	// IMP=0x000000000002ff97
- (void)_resetAttachmentSyncStateForRecord:(id)arg1 toState:(long long)arg2;	// IMP=0x000000000002ff0b
- (void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg1;	// IMP=0x000000000002fe6e
- (void)_markTransferAsNotBeingAbleToSync:(id)arg1;	// IMP=0x000000000002fdea
- (void)_markAttachmentWithROWIDAsFailedToUploadToCloudKit:(id)arg1;	// IMP=0x000000000002fdcd
- (void)_markAttachmentWithROWIDAsSyncedWithCloudKit:(long long)arg1;	// IMP=0x000000000002fdc0
- (void)_kickOffAssetFetchForTransfersIfNeededWithActivity:(id)arg1;	// IMP=0x000000000002fa62
- (void)_updateTransferUsingCKRecord:(id)arg1 wasFetched:(_Bool)arg2;	// IMP=0x000000000002f742
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;	// IMP=0x000000000002f643
- (id)_recordsToProcessWithError:(id)arg1 error:(id)arg2;	// IMP=0x000000000002f400
- (void)_processAssetFetchOperationCompletionBlock:(id)arg1 removeTombstones:(_Bool)arg2 operationID:(id)arg3 error:(id)arg4;	// IMP=0x000000000002e9e4
- (void)_processAssetFetchPerRecordCompletionBlock:(id)arg1 recordID:(id)arg2 error:(id)arg3;	// IMP=0x000000000002e81a
- (void)_processAssetFetchPerRecordProgressBlock:(id)arg1 progress:(double)arg2;	// IMP=0x000000000002e74a
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e61e
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;	// IMP=0x000000000002e55a
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3 syncType:(long long)arg4;	// IMP=0x000000000002e489
- (void)_processRecordChanged:(id)arg1;	// IMP=0x000000000002e34e
- (void)_processRecordDeletion:(id)arg1;	// IMP=0x000000000002e30e
- (void)_processFetchRecordChangesCompleted:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e228
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2;	// IMP=0x000000000002db2b
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(_Bool)arg4 shouldWriteBackChanges:(_Bool)arg5 desiredKeys:(long long)arg6 syncType:(long long)arg7 error:(id)arg8 currentBatchCount:(long long)arg9 maxBatchCount:(long long)arg10 activity:(id)arg11 completionBlock:(CDUnknownBlockType)arg12;	// IMP=0x000000000002d2cc
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d1a2
- (void)_kickOffWriteOnCKQueueWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d08c
- (void)deleteAttachmentSyncToken;	// IMP=0x000000000002cf95
- (_Bool)_attachmentZoneCreated;	// IMP=0x000000000002cd9b
- (void)_writeCKRecordsToAttachmentZone:(id)arg1 activity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cbba
- (void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(_Bool)arg1 desiredKeys:(long long)arg2 syncType:(long long)arg3 currentBatchCount:(long long)arg4 maxBatchCount:(long long)arg5 syncToken:(id)arg6 activity:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x000000000002c58a
- (void)_markResyncForDeleteRecoveryAs:(int)arg1;	// IMP=0x000000000002c520
- (void)_initResyncForDeleteRecovery;	// IMP=0x000000000002c41c
- (_Bool)_hasCompletedRecoveryResync;	// IMP=0x000000000002c403
- (int)_resyncForDeleteRecoveryState;	// IMP=0x000000000002c3b1
- (_Bool)_fetchedAllChangesFromCloudKit;	// IMP=0x000000000002c393
- (void)_fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 ognSuffix:(id)arg3 removeTombstones:(_Bool)arg4 activity:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000002c05f
- (void)_writeAttachmentsToCloudKitWithActivity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b34b
- (id)_updateAttachmentGUIDIfNeededAndReturnTransfersToForceMarkAsSync:(id)arg1 transfersToSyncRowIDs:(id)arg2;	// IMP=0x000000000002b07e
- (unsigned long long)_numberOfAttachmentsToWriteUp;	// IMP=0x000000000002b073
- (unsigned long long)_numberOfAttachmentsToDownload;	// IMP=0x000000000002b068
- (void)_scheduleOperation:(id)arg1;	// IMP=0x000000000002b025
- (id)_attachmentZoneSalt;	// IMP=0x000000000002affa
- (id)_recordKeyManagerSharedInstance;	// IMP=0x000000000002afe1
- (id)_attachmentZoneID;	// IMP=0x000000000002afb6
- (_Bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(_Bool)arg1 activity:(id)arg2;	// IMP=0x000000000002add9
- (_Bool)_deviceConditionsAllowsMessageSyncWithActivity:(id)arg1;	// IMP=0x000000000002adc2
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 activity:(id)arg3;	// IMP=0x000000000002ad85
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;	// IMP=0x000000000002ac93
- (id)_ckUtilitiesInstance;	// IMP=0x000000000002ac7a
- (id)__databaseRequestForAttachmentsWithAssets;	// IMP=0x000000000002ab43
- (void)downloadAttachmentAssetsForChatIDs:(id)arg1 services:(id)arg2 style:(unsigned char)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002a828
- (unsigned long long)purgedAttachmentsCountForChatsWithChatIdentifiers:(id)arg1 services:(id)arg2;	// IMP=0x000000000002a75c
- (id)purgedAttachmentsForChat:(id)arg1 services:(id)arg2 limit:(long long)arg3;	// IMP=0x000000000002a5ad
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2;	// IMP=0x000000000002a598
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a4b4
- (void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2 retryCount:(unsigned long long)arg3 numAttachmentsDownloaded:(unsigned long long)arg4 transfers:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000296bc
- (void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2 retryCount:(unsigned long long)arg3 numAttachmentsDownloaded:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000296a0
- (_Bool)_attachmentDownloadCanStart:(_Bool)arg1 withActivity:(id)arg2;	// IMP=0x00000000000295a5
- (void)acceptFileTransfers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000294f1
- (void)acceptFileTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029269
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(_Bool)arg2 perTransferProgress:(CDUnknownBlockType)arg3 activity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000028c39
- (void)syncAttachmentsWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000284bc
- (long long)_numberOfMetadataBatchesOfAttachmentsToFetchInInitialSync;	// IMP=0x00000000000283a6
- (void)_markAllFailedAttachmentsAsNeedingSync;	// IMP=0x00000000000282bb
- (_Bool)_shouldMarkAttachmentsAsNeedingReupload;	// IMP=0x000000000002823e
- (long long)_numberOfBatchesOfAttachmentsToFetchInInitialSync;	// IMP=0x0000000000028155
- (void)_hasMarkedAllAttachmentsAsNeedingSync;	// IMP=0x000000000002810a
- (_Bool)_shouldMarkAllAttachmentsAsNeedingSync;	// IMP=0x000000000002805c
- (void)_needsToMarkAllAttachmentsAsNeedingSync;	// IMP=0x0000000000028014
- (long long)syncControllerRecordType;	// IMP=0x0000000000028009
- (id)init;	// IMP=0x0000000000027fd3
- (id)initWithSyncTokenStore:(id)arg1;	// IMP=0x0000000000027ef7
- (void)dealloc;	// IMP=0x0000000000027e45

@end

