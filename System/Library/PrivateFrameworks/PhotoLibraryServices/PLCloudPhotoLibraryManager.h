//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/CPLLibraryManagerDelegate-Protocol.h>
#import <PhotoLibraryServices/CPLResourceProgressDelegate-Protocol.h>
#import <PhotoLibraryServices/PLBackgroundJobWorkerCoordinatorDelegate-Protocol.h>
#import <PhotoLibraryServices/PLCloudPersistentHistoryChangeTrackerDelegate-Protocol.h>
#import <PhotoLibraryServices/PLCloudPersistentHistoryMigratorContext-Protocol.h>
#import <PhotoLibraryServices/PLCloudUserSessionHandling-Protocol.h>
#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class CPLConfiguration, CPLLibraryManager, CPLStatus, NSMutableArray, NSNumber, NSString, PFCoalescer, PLBackgroundJobWorkerCoordinator, PLCloudBatchDownloader, PLCloudBatchUploader, PLCloudInMemoryTaskManager, PLCloudPersistentHistoryChangeTracker, PLCloudPhotoLibraryUploadTracker, PLCloudTaskManager, PLForegroundMonitor, PLLazyObject, PLLibraryServicesManager, PLPhotoLibraryPathManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLCloudPhotoLibraryManager : NSObject <PLCloudPersistentHistoryChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, PLBackgroundJobWorkerCoordinatorDelegate, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling>
{
    PLCloudBatchUploader *_uploader;	// 8 = 0x8
    PLCloudBatchDownloader *_downloader;	// 16 = 0x10
    PLCloudPersistentHistoryChangeTracker *_syncChangeTracker;	// 24 = 0x18
    _Bool _wasRebuild;	// 32 = 0x20
    _Bool _hasAttemptedMigration;	// 33 = 0x21
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 40 = 0x28
    PLForegroundMonitor *_foregroundMonitor;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    _Bool _checkEnableStateOnIdle;	// 64 = 0x40
    _Bool _icplEnabled;	// 65 = 0x41
    _Bool _pushOnIdle;	// 66 = 0x42
    _Bool _pullOnIdle;	// 67 = 0x43
    _Bool _stateChangePending;	// 68 = 0x44
    _Bool _hasSettledInitialBatch;	// 69 = 0x45
    long long _libraryMode;	// 72 = 0x48
    CPLLibraryManager *_unsafe_cplLibrary;	// 80 = 0x50
    CPLStatus *_unsafe_cplStatus;	// 88 = 0x58
    CPLConfiguration *_cplConfiguration;	// 96 = 0x60
    int _pauseRequest;	// 104 = 0x68
    short _pauseReason;	// 108 = 0x6c
    PLCloudTaskManager *_taskManager;	// 112 = 0x70
    PLLazyObject *_lazyResourceManager;	// 120 = 0x78
    PLLazyObject *_lazyRecoveryManager;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_unpauseDispatchTimer;	// 136 = 0x88
    NSObject<OS_dispatch_source> *_userUnpauseDispatchTimer;	// 144 = 0x90
    long long _pendingResetSyncType;	// 152 = 0x98
    _Bool _initializedMaster;	// 160 = 0xa0
    PFCoalescer *_coalescer;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_uploadDownloadCountQueue;	// 176 = 0xb0
    unsigned long long _boundForUploadingPhotos;	// 184 = 0xb8
    unsigned long long _boundForUploadingVideos;	// 192 = 0xc0
    unsigned long long _boundForUploadingOtherItems;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_workInProgressTimer;	// 208 = 0xd0
    _Bool _significantWork;	// 216 = 0xd8
    PLCloudInMemoryTaskManager *_inMemoryTaskManager;	// 224 = 0xe0
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 240 = 0xf0
    PLLazyObject *_lazyCacheDeleteSupport;	// 248 = 0xf8
    NSMutableArray *_pushAllChangesCompletionHandlers;	// 256 = 0x100
    PLBackgroundJobWorkerCoordinator *_backgroundJobWorkerCoordinator;	// 264 = 0x108
    _Bool _pushingAllChanges;	// 272 = 0x110
    _Bool _didCallBlocksWaitingForLibraryOpen;	// 273 = 0x111
    NSMutableArray *_blocksWaitingForLibraryOpen;	// 280 = 0x118
    struct os_unfair_lock_s _waitForLibraryOpenLock;	// 288 = 0x120
    struct os_unfair_lock_s _cplLibraryLock;	// 292 = 0x124
    _Bool _willBecomeNonSPL;	// 296 = 0x128
    _Bool _isHandlingStatusChangesNotification;	// 297 = 0x129
    unsigned long long _statusChangesNotificationGeneration;	// 304 = 0x130
    _Bool _unsafe_readyForAnalysis;	// 312 = 0x138
    struct os_unfair_lock_s _numbersOfItemsLock;	// 316 = 0x13c
    NSNumber *_numberOfPhotosToPush;	// 320 = 0x140
    NSNumber *_numberOfVideosToPush;	// 328 = 0x148
    NSNumber *_numberOfOtherItemsToPush;	// 336 = 0x150
    NSNumber *_numberOfPhotosDownloaded;	// 344 = 0x158
    NSNumber *_numberOfVideosDownloaded;	// 352 = 0x160
    NSNumber *_numberOfOtherItemsDownloaded;	// 360 = 0x168
    PLLibraryServicesManager *_libraryServicesManager;	// 368 = 0x170
    CDUnknownBlockType __idleStateTransitionOneTimeAction;	// 376 = 0x178
}

+ (_Bool)needResetSyncErrorType:(id)arg1;	// IMP=0x000000000010ce9a
+ (id)descriptionForResourceType:(unsigned long long)arg1;	// IMP=0x000000000010ce81
- (void).cxx_destruct;	// IMP=0x00000000000f4bc2
@property(copy, nonatomic, setter=_setIdleStateTransitionOneTimeAction:) CDUnknownBlockType _idleStateTransitionOneTimeAction; // @synthesize _idleStateTransitionOneTimeAction=__idleStateTransitionOneTimeAction;
@property(readonly, nonatomic) __weak PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;
- (id)_inMemoryTrackerStateForDebug;	// IMP=0x00000000000f4aa8
- (id)_debugNameForState:(unsigned long long)arg1;	// IMP=0x00000000000f4955
- (void)getUUIDsForCloudIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f484e
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f4747
- (void)forceSyncMomentSharesWithScopeIdentifiers:(id)arg1;	// IMP=0x00000000000f466c
- (void)boostPriorityForMomentShareWithScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f4565
- (void)acceptCPLShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f445e
- (void)fetchShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f4357
- (void)publishCPLScopeChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f4250
- (void)deactivateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f4149
- (void)activateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f4042
- (void)configurationDidChange:(id)arg1;	// IMP=0x00000000000f3fb3
- (void)statusDidChange:(id)arg1;	// IMP=0x00000000000f3deb
- (void)_setToDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;	// IMP=0x00000000000f3c2b
- (_Bool)_hasIncomingWorkFileMarker;	// IMP=0x00000000000f3b1a
- (_Bool)_hasAvalancheIncomingWork;	// IMP=0x00000000000f39e5
- (void)_checkForWorkInProgress;	// IMP=0x00000000000f36fd
- (void)_stopWorkInProgressTimer;	// IMP=0x00000000000f36be
- (void)_startWorkInProgressTimer;	// IMP=0x00000000000f349c
- (void)endUserSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f33c7
@property(readonly, nonatomic) long long currentResetSyncType;
@property(readonly, nonatomic) unsigned long long totalNumberOfDeferredAssets;
@property(readonly, nonatomic) unsigned long long totalUploadedOriginalSize;
@property(readonly, nonatomic) unsigned long long totalSizeOfUnpushedOriginals;
@property(readonly, nonatomic) unsigned long long totalNumberOfUploadedMasters;
@property(readonly, nonatomic) unsigned long long totalNumberOfUnpushedMasters;
- (unsigned long long)_inq_numberOfOtherItemsToDownloadInLibrary:(id)arg1;	// IMP=0x00000000000f304c
- (unsigned long long)_inq_numberOfVideosToDownloadInLibrary:(id)arg1;	// IMP=0x00000000000f2d86
- (unsigned long long)_inq_numberOfPhotosToDownloadInLibrary:(id)arg1;	// IMP=0x00000000000f2ac0
- (unsigned long long)_inq_numberOfVideosToUploadInLibrary:(id)arg1;	// IMP=0x00000000000f28a1
- (unsigned long long)_inq_numberOfPhotosToUploadInLibrary:(id)arg1;	// IMP=0x00000000000f2682
- (unsigned long long)_inq_numberOfOtherItemsToUploadInLibrary:(id)arg1;	// IMP=0x00000000000f2463
- (void)_updateTransferCountsInLibrary:(id)arg1;	// IMP=0x00000000000f239a
- (void)clearPrefetchState;	// IMP=0x00000000000f234c
- (void)_setReadyForAnalysisWithCPLStatus:(id)arg1;	// IMP=0x00000000000f2295
- (void)getReadyForAnalysisWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f2201
- (void)setCPLConfiguration:(id)arg1;	// IMP=0x00000000000f20e0
- (id)cplConfiguration;	// IMP=0x00000000000f1ff6
- (void)setCPLStatus:(id)arg1;	// IMP=0x00000000000f1ed5
- (id)cplStatus;	// IMP=0x00000000000f1deb
- (void)getCPLStateForDebug:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f1d50
- (_Bool)_isPausedForDownloadRequestHighPriority:(_Bool)arg1;	// IMP=0x00000000000f1d3b
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x00000000000f1c6b
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;	// IMP=0x00000000000f1828
- (void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2;	// IMP=0x00000000000f14e5
- (short)_placeHolderKindFromCPLResourceType:(unsigned long long)arg1;	// IMP=0x00000000000f13ab
- (void)_updateWithCPLResource:(id)arg1 isHighPriority:(_Bool)arg2 inLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000f12de
- (void)_updateLocalStaleResourceWithCPLResource:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000f1220
- (struct CGSize)_targetSizeForInputSize:(struct CGSize)arg1 maxPixelSize:(unsigned long long)arg2;	// IMP=0x00000000000f1197
- (void)_linkFileFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000f0e0b
- (_Bool)_isAssetsdNotReadyToAnswer;	// IMP=0x00000000000f0ded
- (void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;	// IMP=0x00000000000f0cb6
- (void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;	// IMP=0x00000000000f0bd7
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000f0acf
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;	// IMP=0x00000000000f0aaf
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;	// IMP=0x00000000000f0922
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;	// IMP=0x00000000000f0720
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 finalResource:(id)arg3 withError:(id)arg4;	// IMP=0x00000000000efe4d
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;	// IMP=0x00000000000efccf
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;	// IMP=0x00000000000efb35
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;	// IMP=0x00000000000efa6c
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1;	// IMP=0x00000000000ef9a3
- (void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ef8da
- (void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ef6b7
- (void)_getStatusChanges:(id)arg1 transaction:(id)arg2 notificationGeneration:(unsigned long long)arg3 inLibrary:(id)arg4;	// IMP=0x00000000000ef5c2
- (void)libraryManagerHasStatusChanges:(id)arg1;	// IMP=0x00000000000ef439
- (void)libraryManagerHasChangesToPull:(id)arg1;	// IMP=0x00000000000ef257
- (void)libraryManagerDidStartSynchronization:(id)arg1;	// IMP=0x00000000000ef251
- (void)libraryManagerDidChangeConfiguration:(id)arg1;	// IMP=0x00000000000ef205
- (void)libraryManagerStatusDidChange:(id)arg1;	// IMP=0x00000000000ef1b9
- (void)_markResourceObjectIDsAsPurgeable:(id)arg1 urgency:(long long)arg2 inLibrary:(id)arg3;	// IMP=0x00000000000eefe8
- (void)_processDownloadBatchWithSession:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000eec9a
- (void)_downloadFromCloudInLibrary:(id)arg1;	// IMP=0x00000000000eeabd
- (_Bool)overrideSystemBudgetsForSyncSession:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x00000000000ee9ed
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee924
- (void)startAutomaticPrefetchOrPrune;	// IMP=0x00000000000ee8d6
- (id)lastKnownCloudVersionFromDisk;	// IMP=0x00000000000ee867
- (void)_processUploadBatchWithStartupFailureCount:(unsigned long long)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000ee378
- (void)_finishUploadWithNoBatchesToUploadInLibrary:(id)arg1;	// IMP=0x00000000000ee23d
- (void)_handleFinalizeSessionError:(id)arg1 commitError:(id)arg2 uploadBatchContainer:(id)arg3 needResetSync:(_Bool)arg4 forTransaction:(id)arg5 inLibrary:(id)arg6;	// IMP=0x00000000000ee000
- (void)_processUploadBatchInLibrary:(id)arg1;	// IMP=0x00000000000edfe9
- (void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2 inLibrary:(id)arg3;	// IMP=0x00000000000edf4b
- (void)_uploadToCloudForEventsResult:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000edb85
- (void)_uploadFullPhotoLibraryToCloud:(id)arg1;	// IMP=0x00000000000ed953
- (void)_checkForPushedMastersInLibrary:(id)arg1;	// IMP=0x00000000000ed877
- (void)_fixMasterStatusIn:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000ed770
- (_Bool)isConnectedToCloudChangeTracker;	// IMP=0x00000000000ed75a
- (id)_fetchEventsFromCloudChangeTrackerInLibrary:(id)arg1;	// IMP=0x00000000000ed6f7
- (void)_fetchNewEventsFromCloudChangeTrackerInLibrary:(id)arg1;	// IMP=0x00000000000ecc90
- (void)dumpStatusIncludingDaemon:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ecba7
- (void)resetSyncDueToMigrationMarker;	// IMP=0x00000000000ecaeb
- (id)readLocalVersion;	// IMP=0x00000000000eca3b
- (void)setLocalVersion:(id)arg1;	// IMP=0x00000000000ec9b3
- (void)setMigratedLocalVersion:(id)arg1;	// IMP=0x00000000000ec92b
- (void)setMigrationMarker:(id)arg1;	// IMP=0x00000000000ec8a3
- (id)readMigrationMarker;	// IMP=0x00000000000ec834
- (void)startAssetRecoveryWithTransaction:(id)arg1;	// IMP=0x00000000000ec7b4
- (void)_doResetSync:(long long)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000ec3ae
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ec2af
- (void)downloadResourceInMemoryForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000ec0f6
- (void)downloadAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 highPriority:(_Bool)arg4 clientBundleID:(id)arg5 proposedTaskIdentifier:(id)arg6 taskDidBeginHandler:(CDUnknownBlockType)arg7 progressBlock:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000000000ebd9e
- (id)_assetResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 isPhoto:(_Bool *)arg4;	// IMP=0x00000000000ebbe4
- (void)downloadResource:(id)arg1 options:(id)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000eb977
- (void)downloadResource:(id)arg1 highPriority:(_Bool)arg2 clientBundleID:(id)arg3 proposedTaskIdentifier:(id)arg4 taskDidBeginHandler:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000eb857
- (id)_identifierForResource:(id)arg1;	// IMP=0x00000000000eb78b
- (void)getStreamingURLForAsset:(id)arg1 resourceType:(unsigned long long)arg2 intent:(unsigned long long)arg3 hints:(id)arg4 timeRange:(CDStruct_3c1748cc)arg5 clientBundleID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000eb5f8
- (void)fetchResourcesForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb502
- (void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb40c
- (_Bool)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1;	// IMP=0x00000000000eb3d5
- (void)cancelResourceTransferTaskWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb3bf
- (void)sync;	// IMP=0x00000000000eb330
- (void)cloudChangeTrackerDidReceiveChangesWithTransaction:(id)arg1;	// IMP=0x00000000000eb2e4
- (_Bool)connectToCloudChangeTracker;	// IMP=0x00000000000eb2ce
- (void)saveCloudTrackerTokenObject:(id)arg1;	// IMP=0x00000000000eb246
- (id)readCloudTrackerTokenObject;	// IMP=0x00000000000eb1cd
- (void)saveLastKnownCloudChangeTrackerTokenToDisk;	// IMP=0x00000000000eb106
- (void)_callPushAllChangesCompletionHandlersIfNecessary;	// IMP=0x00000000000eaf1d
- (void)_setupPLCPLPlistInLibrary:(id)arg1;	// IMP=0x00000000000ea7a3
- (void)_checkEnableState;	// IMP=0x00000000000ea3a2
@property(readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
- (void)_processNextTransaction;	// IMP=0x00000000000ea250
- (void)_checkAndMarkPurgeableResourcesIfSafe:(id)arg1 checkServerIfNecessary:(_Bool)arg2 urgency:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e9fe7
- (void)markPurgeableResourcesMatchingPredicate:(id)arg1 urgency:(long long)arg2 inLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e9ead
- (void)clearPurgeableResourcesMatchingPredicate:(id)arg1 inLibrary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e9d1d
- (void)_repushAssetsWithImportedByBundleIdentifier;	// IMP=0x00000000000e9c72
- (void)_repushMasterWithMissingMediaMetadata;	// IMP=0x00000000000e9bc7
- (void)_repushVideoAssetsMetadata;	// IMP=0x00000000000e9b1c
- (void)_handleOptimizeSettingChangeInLibrary:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e9a26
- (void)_handleOptimizeSettingChange;	// IMP=0x00000000000e9997
- (void)_reportOptimizeSettingChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e98ce
- (void)reportMiscInformation:(id)arg1;	// IMP=0x00000000000e9805
- (void)_updatePendingResetSyncDate;	// IMP=0x00000000000e93c9
- (_Bool)_setupTimerForUnpause;	// IMP=0x00000000000e9248
- (void)_constructUnpauseTimerFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000e9002
- (id)_calculateUnpauseTimeForPauseTime:(id)arg1;	// IMP=0x00000000000e8ed8
- (void)_stopUnpauseTimer;	// IMP=0x00000000000e8e99
- (void)_transitionToState:(unsigned long long)arg1;	// IMP=0x00000000000e8b6b
- (_Bool)_canExternallyTransitionToNewLibraryStateIgnoringPause:(_Bool)arg1;	// IMP=0x00000000000e8b2d
- (void)_resetDidCallBlocksWaitingForLibraryOpen;	// IMP=0x00000000000e8ae2
- (void)_callBlocksWaitingForLibraryOpen;	// IMP=0x00000000000e8913
- (void)_runOnLibraryOpenWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e87fb
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e862b
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e8575
- (void)_runSyncOnIsolationQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e84f2
- (void)_handleStateTransistionAfterDisableiCPL;	// IMP=0x00000000000e816e
- (void)_disableiCPLWillBecomeNonSystemPhotoLibrary:(_Bool)arg1;	// IMP=0x00000000000e6e31
- (void)disableiCPLSyncWillBecomeNonSystemPhotoLibrary;	// IMP=0x00000000000e6cad
- (void)disableiCPLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6b3f
- (void)_pause;	// IMP=0x00000000000e6ab0
- (void)_doPause;	// IMP=0x00000000000e6a55
- (void)_unpause;	// IMP=0x00000000000e69c6
- (void)setPause:(_Bool)arg1 reason:(short)arg2;	// IMP=0x00000000000e6920
- (void)_doUnpause;	// IMP=0x00000000000e673c
- (void)dealloc;	// IMP=0x00000000000e66fa
- (void)_resetCPLLibrary;	// IMP=0x00000000000e6610
- (void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6547
- (void)endsSignificantWork;	// IMP=0x00000000000e629f
- (void)beginsSignificantWorkWithResourcesSize:(unsigned long long)arg1;	// IMP=0x00000000000e6146
- (void)_migrateFromChangeHubToCoreDataIfNecessary;	// IMP=0x00000000000e5fa4
- (void)_createDeletionRecordsIfNecessary;	// IMP=0x00000000000e5e8e
- (void)_runOneTimeMigrationStepsIfNecessaryInLibrary:(id)arg1;	// IMP=0x00000000000e5ca8
- (void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;	// IMP=0x00000000000e5ad8
- (void)_initializeMasterAndSizeCalculationinLibrary:(id)arg1;	// IMP=0x00000000000e599d
- (void)_promptForCameraCaptureSettingChangeWithReason:(int)arg1;	// IMP=0x00000000000e548f
- (void)_handleAccountFlagsChangeIfNecessary;	// IMP=0x00000000000e509f
- (void)_openCPLLibrary;	// IMP=0x00000000000e4569
- (void)_enableiCPL;	// IMP=0x00000000000e38c7
- (_Bool)_hasItemToDownload;	// IMP=0x00000000000e3834
- (id)recoveryManager;	// IMP=0x00000000000e381b
- (void)_initCPLLibraryMode;	// IMP=0x00000000000e3798
- (void)_initRecoveryManager;	// IMP=0x00000000000e3628
- (void)_resetResourceManager;	// IMP=0x00000000000e355d
- (id)resourceManager;	// IMP=0x00000000000e3547
- (void)_initResourceManager;	// IMP=0x00000000000e332e
- (void)_resetCacheDeleteSupport;	// IMP=0x00000000000e3263
- (id)cacheDeleteSupport;	// IMP=0x00000000000e314e
- (void)_initCacheDeleteSupport;	// IMP=0x00000000000e2fa4
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
- (void)enableiCPLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e2dee
- (long long)sizeOfResourcesToUploadByCPL:(id *)arg1;	// IMP=0x00000000000e2cac
- (void)setCPLLibrary:(id)arg1;	// IMP=0x00000000000e2c20
- (id)cplLibrary;	// IMP=0x00000000000e2bc6
- (void)invalidateRecoveryManager;	// IMP=0x00000000000e2bad
- (void)invalidateCacheDeleteSupport;	// IMP=0x00000000000e2b8d
- (void)invalidateResourceManager;	// IMP=0x00000000000e2b70
- (void)invalidate;	// IMP=0x00000000000e2a91
- (id)initWithLibraryServicesManager:(id)arg1;	// IMP=0x00000000000e271f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
