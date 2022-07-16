//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CKRecordZoneID, CPLCloudKitCoordinator, CPLCloudKitOperationsTracker, CPLCloudKitSimpleCache, CPLCloudKitTaskGroupThrottler, CPLDuetTicketProvider, NSArray, NSDate, NSDictionary, NSError, NSIndexSet, NSMutableSet, NSObject, NSOperationQueue, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface CPLCloudKitTransport : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSOperationQueue *_workOperationQueue;	// 16 = 0x10
    CPLCloudKitOperationsTracker *_operationTracker;	// 24 = 0x18
    _Bool _mightRejectVideoStreaming;	// 32 = 0x20
    NSIndexSet *_rejectedVideoStreamingIntents;	// 40 = 0x28
    _Bool _rejectVideoStreamingAtContentLevel;	// 48 = 0x30
    NSArray *_rejectedVideoStreamingIntentNames;	// 56 = 0x38
    NSDictionary *_operationGroupMapping;	// 64 = 0x40
    NSMutableSet *_invalidaOperationGroupMappingEntries;	// 72 = 0x48
    CPLCloudKitSimpleCache *_streamingURLCache;	// 80 = 0x50
    CPLCloudKitTaskGroupThrottler *_resourceDownloadGate;	// 88 = 0x58
    CPLCloudKitTaskGroupThrottler *_streamingGate;	// 96 = 0x60
    CKRecordZoneID *_overridePrimarySyncZoneID;	// 104 = 0x68
    Class _overrideZoneIdentificationClass;	// 112 = 0x70
    NSString *_overrideNormalScopeIdentifier;	// 120 = 0x78
    CKRecordZoneID *_overrideNormalZoneID;	// 128 = 0x80
    id <NSObject> _identityChangeWatcher;	// 136 = 0x88
    id <NSObject> _accountInfoWatcher;	// 144 = 0x90
    unsigned long long _accountInfoFetchGeneration;	// 152 = 0x98
    NSDate *_lastAccountInfoUpdateDate;	// 160 = 0xa0
    NSString *_lastDisablingReasonBecauseOfAccountStatus;	// 168 = 0xa8
    _Bool _opened;	// 176 = 0xb0
    CPLCloudKitCoordinator *_coordinator;	// 184 = 0xb8
    CPLDuetTicketProvider *_duetTicketProvider;	// 192 = 0xc0
    NSDate *_significantWorkBeginDate;	// 200 = 0xc8
    NSError *_errorForAllOperations;	// 208 = 0xd0
}

+ (id)_errorsByTaskForTasksByRecordId:(id)arg1 fromUnderlyingError:(id)arg2;	// IMP=0x00200000000c0943
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x00100000000c0763
+ (_Bool)allowsUserInitiatedOperationsOverExpensiveNetwork;	// IMP=0x00100000000bfa83
+ (_Bool)allowsSyncOverCellular;	// IMP=0x00100000000bf9cf
- (void).cxx_destruct;	// IMP=0x00200000000c4b05
@property(retain) NSError *errorForAllOperations; // @synthesize errorForAllOperations=_errorForAllOperations;
@property(retain, nonatomic) NSDate *significantWorkBeginDate; // @synthesize significantWorkBeginDate=_significantWorkBeginDate;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) CPLDuetTicketProvider *duetTicketProvider; // @synthesize duetTicketProvider=_duetTicketProvider;
@property(readonly) CPLCloudKitCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property _Bool opened; // @synthesize opened=_opened;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker; // @synthesize operationTracker=_operationTracker;
@property(readonly) NSString *cloudKitClientIdentifier;
- (id)filteredUserRecordIDFromRealRecordID:(id)arg1;	// IMP=0x00100000000c48c5
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x00100000000c4876
- (void)processTaskErrorIfNeeded:(id)arg1 forTask:(id)arg2;	// IMP=0x00100000000c45e4
- (void)_noteContainerHasBeenWiped;	// IMP=0x00100000000c448c
- (void)_failAllFutureOperationsWithContainerHasBeenWipedError;	// IMP=0x00100000000c42df
@property(readonly, nonatomic) _Bool canBoostBackgroundOperations;
@property(readonly, nonatomic) _Bool canBoostOperations;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected;
- (void)associateMetric:(id)arg1;	// IMP=0x00100000000c4107
- (void)launchOperation:(id)arg1 type:(long long)arg2;	// IMP=0x00100000000c3fdf
- (id)zoneIdentificationForCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x00100000000c3ec6
- (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3;	// IMP=0x00100000000c3db2
- (id)recordsToFetchToIdentifyCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2;	// IMP=0x00100000000c3c96
- (id)defaultZoneIDForMainScope;	// IMP=0x00100000000c3c26
- (id)mainScopeZoneIDFromZoneIDs:(id)arg1;	// IMP=0x00100000000c3b3c
- (_Bool)isZoneIDForMainScopeIdentifier:(id)arg1;	// IMP=0x00100000000c3a94
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000c3962
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000c384b
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000c37c4
- (void)coordinator:(id)arg1 receivedPushNotification:(id)arg2;	// IMP=0x00100000000c3648
- (void)coordinator:(id)arg1 provideCKAssetWithRecordID:(id)arg2 fieldName:(id)arg3 recordType:(id)arg4 signature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000c1f91
- (void)_withTempCKAssetForData:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c1e11
- (id)_tempDestinationURLForRecoveredDataWithError:(id *)arg1;	// IMP=0x00100000000c1cbd
- (void)_cleanTempRecoveredDataURL:(id)arg1;	// IMP=0x00100000000c1aa3
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c180f
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c161f
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c0c6d
- (id)componentName;	// IMP=0x00100000000c0c60
- (id)tempCKAssetURL;	// IMP=0x00100000000c0bda
- (void)_disableSchedulerBecauseAccountIsUnavailableWithReason:(id)arg1;	// IMP=0x00100000000c043f
- (void)_enableSchedulerBecauseAccountIsAvailable;	// IMP=0x00100000000c029c
- (void)_updateStateWithAccountStatus:(long long)arg1;	// IMP=0x00100000000c0168
- (void)_updateAccountInfo;	// IMP=0x00100000000bfde3
- (void)_forceUpdateAccountInfoWithReason:(id)arg1;	// IMP=0x00000000000bfce6
- (void)_stopWatchingAccountInfoChanges;	// IMP=0x00100000000bfcc5
- (void)_startWatchingAccountInfoChanges;	// IMP=0x00100000000bfb37
- (id)createReschedulerForSession:(id)arg1;	// IMP=0x00100000000bf90d
- (void)dropPersistedInitialSyncSession;	// IMP=0x00100000000bf8e1
- (void)findPersistedInitialSyncSession:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bf70e
- (id)createGroupForQueryUserIdentities;	// IMP=0x00100000000bf64b
- (id)createGroupForAcceptingMomentShare;	// IMP=0x00100000000bf588
- (id)createGroupForFetchingMomentShare;	// IMP=0x00100000000bf4c5
- (id)createGroupForPublishingMomentShare;	// IMP=0x00100000000bf402
- (id)createGroupForPruningCheck;	// IMP=0x00100000000bf352
- (id)createGroupForAnalysisDownload;	// IMP=0x00100000000bf298
- (id)createGroupForMovieStreamingWithIntent:(unsigned long long)arg1;	// IMP=0x00100000000bf008
- (id)createGroupForDownloadWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;	// IMP=0x00100000000bed4b
- (id)createGroupForWidgetResourcesDownload;	// IMP=0x00100000000bed32
- (id)createGroupForResourcesDownload;	// IMP=0x00100000000bed1c
- (id)createGroupForThumbnailsDownload;	// IMP=0x00100000000bec5f
- (id)createGroupForChangeDownload;	// IMP=0x00100000000beba2
- (id)createGroupForChangeUpload;	// IMP=0x00100000000beae2
- (id)createGroupForLibraryStateCheck;	// IMP=0x00100000000bea25
- (id)createGroupForFetchScopeListChanges;	// IMP=0x00100000000be968
- (id)createGroupForTransportScopeUpdate;	// IMP=0x00100000000be8ab
- (id)createGroupForTransportScopeDelete;	// IMP=0x00100000000be7ee
- (id)createGroupForFeedback;	// IMP=0x00100000000be744
- (id)createGroupForSetup;	// IMP=0x00100000000be697
- (id)createGroupForWidgetPrefetch;	// IMP=0x00100000000be67b
- (id)createGroupForRecoveryDownload;	// IMP=0x00100000000be65f
- (id)createGroupForMemoriesPrefetch;	// IMP=0x00100000000be643
- (id)createGroupForKeepOriginalsPrefetch;	// IMP=0x00100000000be627
- (id)createGroupForNonDerivativePrefetch;	// IMP=0x00100000000be60b
- (id)createGroupForThumbnailPrefetch;	// IMP=0x00100000000be551
- (id)createGroupForPrefetch;	// IMP=0x00100000000be535
- (id)createGroupForInitialDownload;	// IMP=0x00100000000be478
- (id)createGroupForResetSync;	// IMP=0x00100000000be3b8
- (id)createGroupForInitialUpload;	// IMP=0x00100000000be2f8
- (id)createGroupAllowsCellular:(_Bool)arg1 foreground:(_Bool)arg2 upload:(_Bool)arg3 metadata:(_Bool)arg4;	// IMP=0x00100000000be277
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;	// IMP=0x00100000000be1ea
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;	// IMP=0x00100000000be148
- (id)scopeNameForTransportScope:(id)arg1;	// IMP=0x00100000000be0c7
- (id)descriptionForTransportScope:(id)arg1;	// IMP=0x00100000000bdfea
- (id)tentativeTransportScopeForScope:(id)arg1;	// IMP=0x00100000000bdea4
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x00100000000bde87
- (void)noteClientIsInBackground;	// IMP=0x00100000000bde65
- (void)noteClientIsInForeground;	// IMP=0x00100000000bde40
- (void)noteClientIsEndingSignificantWork;	// IMP=0x00100000000bde2c
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x00100000000bde15
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x00100000000bddc4
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bdc6b
- (void)setIsSignificantWorkPending:(_Bool)arg1;	// IMP=0x00100000000bd918
- (id)simpleDescriptionForScopeListSyncAnchor:(id)arg1;	// IMP=0x00100000000bd8ff
- (id)simpleDescriptionForSyncAnchor:(id)arg1;	// IMP=0x00100000000bd722
- (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x00100000000bd709
- (_Bool)isResourceDynamic:(id)arg1;	// IMP=0x00100000000bd6bc
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd606
- (id)queryUserDetailsTaskForParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd550
- (id)acceptTaskForSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd49a
- (id)fetchTaskForScopeWithShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd3e4
- (id)updateShareTaskForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bd307
- (id)createScopeTaskForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd21c
- (id)inMemoryDownloadTaskForResource:(id)arg1 record:(id)arg2 transportScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000bd108
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bd091
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bcfeb
- (id)resourceCheckTaskForResources:(id)arg1 transportScopes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bceff
- (id)getStreamingURLTaskForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 transportScope:(id)arg5 clientBundleID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000bcd90
- (id)fetchScopeListChangesForScopeListSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bccf0
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 currentScopeChange:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000bcbbe
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 transportScope:(id)arg3 scope:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000bcaa2
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bc9af
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bc8e1
- (id)getScopeInfoWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bc813
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 scopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000bc6f8
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bc5fd
- (id)uploadBatchTaskForBatch:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000bc3f5
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 transportScope:(id)arg3 scope:(id)arg4 additionalTransportScopes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000bc2ac
- (id)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bc20c
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bbf85
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bb0fc
- (id)duetIdentifier;	// IMP=0x00100000000bb0ea
- (void)duetTicketProviderBlockedStatusDidChange;	// IMP=0x00100000000bafe2
- (void)_updateBudgets;	// IMP=0x00100000000bad33
- (id)engineLibrary;	// IMP=0x00100000000bace3
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000bab20
@property(readonly) _Bool isSystemLibrary;
- (id)_operationGroupNameForName:(id)arg1;	// IMP=0x00100000000ba93c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

