//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLEngineComponent-Protocol.h"
#import "CPLPlatformImplementation-Protocol.h"

@class CPLChangeBatch, CPLEngineScope, CPLEngineScopeFlagsUpdate, CPLPlaceholderRecord, CPLResource, CPLScopeChange, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL;
@protocol CPLEngineTransportAcceptSharedScopeTask, CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportCreateScopeTask, CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportDownloadBatchTask, CPLEngineTransportFetchScopeListChangesTask, CPLEngineTransportFetchSharedScopeTask, CPLEngineTransportFetchTransportScopeTask, CPLEngineTransportGetCurrentSyncAnchorTask, CPLEngineTransportGetScopeInfoTask, CPLEngineTransportGetStreamingURLTask, CPLEngineTransportGroup, CPLEngineTransportInMemoryResourceDownloadTask, CPLEngineTransportQueryTask, CPLEngineTransportQueryUserDetailsTask, CPLEngineTransportRampingRequestTask, CPLEngineTransportResourcesCheckTask, CPLEngineTransportResourcesDownloadTask, CPLEngineTransportSendFeedbackTask, CPLEngineTransportSetupTask, CPLEngineTransportUpdateShareTask, CPLEngineTransportUpdateTransportScopeTask, CPLEngineTransportUploadBatchTask;

@protocol CPLEngineTransportImplementation <CPLPlatformImplementation, CPLEngineComponent>
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
- (void)dropPersistedInitialSyncSession;
- (void)findPersistedInitialSyncSession:(void (^)(CPLSyncSession *))arg1 completionHandler:(void (^)(CPLSyncSession *))arg2;
- (void)upgradeFlags:(CPLEngineScopeFlagsUpdate *)arg1 fromTransportScope:(NSData *)arg2;
- (NSData *)transportScopeForUpgradeFromScopeName:(NSString *)arg1;
- (NSString *)scopeNameForTransportScope:(NSData *)arg1;
- (NSString *)descriptionForTransportScope:(NSData *)arg1;
- (NSData *)tentativeTransportScopeForScope:(CPLEngineScope *)arg1;
- (id <CPLEngineTransportGroup>)createGroupForQueryUserIdentities;
- (id <CPLEngineTransportGroup>)createGroupForAcceptingMomentShare;
- (id <CPLEngineTransportGroup>)createGroupForFetchingMomentShare;
- (id <CPLEngineTransportGroup>)createGroupForPublishingMomentShare;
- (id <CPLEngineTransportGroup>)createGroupForPruningCheck;
- (id <CPLEngineTransportGroup>)createGroupForAnalysisDownload;
- (id <CPLEngineTransportGroup>)createGroupForMovieStreamingWithIntent:(unsigned long long)arg1;
- (id <CPLEngineTransportGroup>)createGroupForDownloadWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;
- (id <CPLEngineTransportGroup>)createGroupForWidgetResourcesDownload;
- (id <CPLEngineTransportGroup>)createGroupForResourcesDownload;
- (id <CPLEngineTransportGroup>)createGroupForThumbnailsDownload;
- (id <CPLEngineTransportGroup>)createGroupForChangeDownload;
- (id <CPLEngineTransportGroup>)createGroupForChangeUpload;
- (id <CPLEngineTransportGroup>)createGroupForLibraryStateCheck;
- (id <CPLEngineTransportGroup>)createGroupForFeedback;
- (id <CPLEngineTransportGroup>)createGroupForFetchScopeListChanges;
- (id <CPLEngineTransportGroup>)createGroupForTransportScopeUpdate;
- (id <CPLEngineTransportGroup>)createGroupForTransportScopeDelete;
- (id <CPLEngineTransportGroup>)createGroupForSetup;
- (id <CPLEngineTransportGroup>)createGroupForWidgetPrefetch;
- (id <CPLEngineTransportGroup>)createGroupForRecoveryDownload;
- (id <CPLEngineTransportGroup>)createGroupForMemoriesPrefetch;
- (id <CPLEngineTransportGroup>)createGroupForKeepOriginalsPrefetch;
- (id <CPLEngineTransportGroup>)createGroupForNonDerivativePrefetch;
- (id <CPLEngineTransportGroup>)createGroupForThumbnailPrefetch;
- (id <CPLEngineTransportGroup>)createGroupForPrefetch;
- (id <CPLEngineTransportGroup>)createGroupForInitialDownload;
- (id <CPLEngineTransportGroup>)createGroupForResetSync;
- (id <CPLEngineTransportGroup>)createGroupForInitialUpload;
- (_Bool)isResourceDynamic:(CPLResource *)arg1;
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)getSystemBudgetsWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (NSString *)simpleDescriptionForScopeListSyncAnchor:(NSData *)arg1;
- (NSString *)simpleDescriptionForSyncAnchor:(NSData *)arg1;
- (NSError *)bestErrorForUnderlyingError:(NSError *)arg1;
- (id <CPLEngineTransportFetchTransportScopeTask>)fetchTransportScopeForScope:(CPLEngineScope *)arg1 transportScope:(NSData *)arg2 completionHandler:(void (^)(NSData *, CPLEngineScopeFlagsUpdate *, NSError *))arg3;
- (id <CPLEngineTransportGetCurrentSyncAnchorTask>)getCurrentSyncAnchorWithTransportScope:(NSData *)arg1 scope:(CPLEngineScope *)arg2 completionHandler:(void (^)(NSData *, CPLScopeChange *, NSError *))arg3;
- (id <CPLEngineTransportGetScopeInfoTask>)getScopeInfoWithTransportScope:(NSData *)arg1 scope:(CPLEngineScope *)arg2 completionHandler:(void (^)(long long, CPLScopeChange *, CPLEngineScopeFlagsUpdate *, NSError *))arg3;
- (id <CPLEngineTransportUpdateTransportScopeTask>)updateTransportScope:(NSData *)arg1 scope:(CPLEngineScope *)arg2 scopeChange:(CPLScopeChange *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (id <CPLEngineTransportDeleteTransportScopeTask>)deleteTransportScope:(NSData *)arg1 scope:(CPLEngineScope *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (id <CPLEngineTransportSendFeedbackTask>)sendFeedbackTaskForMessages:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (id <CPLEngineTransportQueryUserDetailsTask>)queryUserDetailsTaskForParticipants:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (id <CPLEngineTransportAcceptSharedScopeTask>)acceptTaskForSharedScope:(CPLScopeChange *)arg1 completionHandler:(void (^)(CPLScopeChange *, NSData *, CPLEngineScopeFlagsUpdate *, NSError *))arg2;
- (id <CPLEngineTransportFetchSharedScopeTask>)fetchTaskForScopeWithShareURL:(NSURL *)arg1 completionHandler:(void (^)(CPLScopeChange *, NSError *))arg2;
- (id <CPLEngineTransportUpdateShareTask>)updateShareTaskForScope:(CPLScopeChange *)arg1 transportScope:(NSData *)arg2 completionHandler:(void (^)(CPLScopeChange *, NSError *))arg3;
- (id <CPLEngineTransportCreateScopeTask>)createScopeTaskForScope:(CPLScopeChange *)arg1 completionHandler:(void (^)(CPLScopeChange *, NSData *, NSError *))arg2;
- (id <CPLEngineTransportInMemoryResourceDownloadTask>)inMemoryDownloadTaskForResource:(CPLResource *)arg1 record:(CPLPlaceholderRecord *)arg2 transportScope:(NSData *)arg3 completionHandler:(void (^)(NSData *, NSError *))arg4;
- (id <CPLEngineTransportResourcesDownloadTask>)resourcesDownloadTaskWithCompletionHandler:(void (^)(id <CPLEngineTransportResourcesDownloadTask>))arg1;
- (id <CPLEngineTransportRampingRequestTask>)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (id <CPLEngineTransportResourcesCheckTask>)resourceCheckTaskForResources:(NSArray *)arg1 transportScopes:(NSDictionary *)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *, NSError *))arg3;
- (id <CPLEngineTransportGetStreamingURLTask>)getStreamingURLTaskForResource:(CPLResource *)arg1 intent:(unsigned long long)arg2 hints:(NSDictionary *)arg3 timeRange:(CDStruct_e83c9415)arg4 transportScope:(NSData *)arg5 clientBundleID:(NSString *)arg6 completionHandler:(void (^)(NSURL *, NSDate *, NSError *))arg7;
- (id <CPLEngineTransportFetchScopeListChangesTask>)fetchScopeListChangesForScopeListSyncAnchor:(NSData *)arg1 progressHandler:(void (^)(NSDictionary *, NSArray *, NSData *))arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (id <CPLEngineTransportDownloadBatchTask>)downloadBatchTaskForSyncAnchor:(NSData *)arg1 transportScope:(NSData *)arg2 scope:(CPLEngineScope *)arg3 currentScopeChange:(CPLScopeChange *)arg4 progressHandler:(void (^)(CPLChangeBatch *, CPLEngineScopeFlagsUpdate *, NSData *))arg5 completionHandler:(void (^)(NSData *, _Bool, NSError *))arg6;
- (id <CPLEngineTransportQueryTask>)queryTaskForCursor:(NSData *)arg1 class:(Class)arg2 transportScope:(NSData *)arg3 scope:(CPLEngineScope *)arg4 progressHandler:(void (^)(CPLChangeBatch *, NSData *))arg5 completionHandler:(void (^)(NSError *))arg6;
- (id <CPLEngineTransportUploadBatchTask>)uploadBatchTaskForBatch:(CPLChangeBatch *)arg1 transportScope:(NSData *)arg2 scope:(CPLEngineScope *)arg3 additionalTransportScopes:(NSDictionary *)arg4 progressHandler:(void (^)(CPLScopedIdentifier *, float))arg5 completionHandler:(void (^)(NSError *))arg6;
- (id <CPLEngineTransportCheckRecordsExistenceTask>)checkRecordsExistenceTaskForRecords:(NSArray *)arg1 fetchRecordProperties:(NSSet *)arg2 transportScope:(NSData *)arg3 scope:(CPLEngineScope *)arg4 additionalTransportScopes:(NSDictionary *)arg5 completionHandler:(void (^)(NSDictionary *, NSError *))arg6;
- (id <CPLEngineTransportSetupTask>)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(void (^)(id <CPLEngineStoreUserIdentifier>, NSArray *, CPLDerivativesFilter *, NSError *))arg2;
@end

