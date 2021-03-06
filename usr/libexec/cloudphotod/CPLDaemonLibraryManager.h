//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLDirectLibraryManager, CPLEngineWrapper, CPLLibraryManager, MISSING_TYPE, NSMutableDictionary, NSString, NSXPCConnection, Protocol;
@protocol CPLDaemonLibraryManagerDelegate, OS_dispatch_queue;

@interface CPLDaemonLibraryManager : NSObject
{
    CPLLibraryManager *_manager;	// 8 = 0x8
    CPLDirectLibraryManager *_platformManager;	// 16 = 0x10
    NSMutableDictionary *_downloadTasksPerIdentifier;	// 24 = 0x18
    NSMutableDictionary *_uploadTasksPerIdentifier;	// 32 = 0x20
    NSMutableDictionary *_forceSyncTasksPerIdentifier;	// 40 = 0x28
    NSMutableDictionary *_vouchersPerTaskIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    Protocol *_allowedProtocol;	// 64 = 0x40
    NSString *_protocolDescription;	// 72 = 0x48
    int _processIdentifier;	// 80 = 0x50
    _Bool _killed;	// 84 = 0x54
    _Bool _isLibraryManager;	// 85 = 0x55
    _Bool _isManagement;	// 86 = 0x56
    NSXPCConnection *_connection;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    CPLEngineWrapper *_engineWrapper;	// 104 = 0x68
    id <CPLDaemonLibraryManagerDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000199b9
@property(nonatomic) __weak id <CPLDaemonLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CPLEngineWrapper *engineWrapper; // @synthesize engineWrapper=_engineWrapper;
@property(readonly, nonatomic) _Bool isManagement; // @synthesize isManagement=_isManagement;
@property(readonly, nonatomic) _Bool isLibraryManager; // @synthesize isLibraryManager=_isLibraryManager;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)displayableNameForLibraryManager:(id)arg1;	// IMP=0x0010000000019954
- (void)_dropVoucherForTaskWithIdentifier:(id)arg1;	// IMP=0x001000000001993e
- (void)_storeVoucher:(id)arg1 forTaskWithIdentifier:(id)arg2;	// IMP=0x0010000000019921
- (void)_withVoucherForTaskWithIdentifier:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x001000000001988d
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0010000000019583
- (void)libraryManager:(id)arg1 didFinishForceSyncTask:(id)arg2 withErrors:(id)arg3;	// IMP=0x0010000000019081
- (_Bool)isManagementLibraryManager:(id)arg1;	// IMP=0x0010000000019078
- (_Bool)isLibraryManager:(id)arg1;	// IMP=0x001000000001906f
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;	// IMP=0x0010000000018e99
- (void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;	// IMP=0x0010000000018c0e
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;	// IMP=0x001000000001891d
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;	// IMP=0x00100000000186be
- (void)_storeUploadTransferTask:(id)arg1;	// IMP=0x001000000001862a
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;	// IMP=0x001000000001843b
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;	// IMP=0x001000000001824c
- (void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;	// IMP=0x0010000000017e81
- (MISSING_TYPE *)libraryManager:downloadDidFinishForResourceTransferTask:finalResource:withError: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000017a9f
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;	// IMP=0x0010000000017794
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;	// IMP=0x00100000000174b8
- (void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000172a1
- (void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000017015
- (void)libraryManagerHasStatusChanges:(id)arg1;	// IMP=0x0010000000016e74
- (void)libraryManagerHasChangesToPull:(id)arg1;	// IMP=0x0010000000016cd3
- (void)libraryManagerDidStartSynchronization:(id)arg1;	// IMP=0x0010000000016c17
- (void)libraryManagerStatusDidChange:(id)arg1;	// IMP=0x0010000000016904
- (void)cancelSyncTaskWithIdentifier:(id)arg1;	// IMP=0x00100000000167a7
- (void)forceSyncForScopeIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001633e
- (void)queryUserDetailsForShareParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001612b
- (void)acceptSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015f47
- (void)fetchSharedScopeFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015d34
- (void)updateShareForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015b21
- (void)createScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001590e
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015797
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015637
- (void)beginInMemoryDownloadOfResource:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015261
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015079
- (void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 clientBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000014dd0
- (void)addDropDerivativesRecipe:(id)arg1 writeToUserDefaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014c92
- (void)provideCloudResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014b52
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014a12
- (void)provideScopeChangeForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000148d2
- (void)unblockEngineElementOnce:(id)arg1;	// IMP=0x00100000000148bc
- (void)unblockEngineElement:(id)arg1;	// IMP=0x00100000000148a6
- (void)blockEngineElement:(id)arg1;	// IMP=0x0010000000014890
- (void)reportMiscInformation:(id)arg1;	// IMP=0x00100000000147b1
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;	// IMP=0x00100000000146a4
- (void)requestClientToPushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014514
- (void)forceBackupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014384
- (void)addInfoToLog:(id)arg1;	// IMP=0x00100000000142a5
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001413a
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013fda
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013e71
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013d11
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013bb1
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013a74
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001390e
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013795
- (void)noteClientIsEndingSignificantWork;	// IMP=0x001000000001377f
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x0010000000013769
- (void)enableMingling;	// IMP=0x0010000000013753
- (void)disableMingling;	// IMP=0x001000000001373d
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x0010000000013727
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013711
- (void)enableSynchronizationWithReason:(id)arg1;	// IMP=0x00100000000136fb
- (void)disableSynchronizationWithReason:(id)arg1;	// IMP=0x00100000000136e5
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(_Bool)arg2;	// IMP=0x00100000000135d3
- (void)acknowledgeChangedStatuses:(id)arg1;	// IMP=0x00100000000134ca
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001338d
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001322d
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001309b
- (void)noteClientIsInBackground;	// IMP=0x0010000000013085
- (void)noteClientIsInForegroundQuietly:(_Bool)arg1;	// IMP=0x001000000001306f
- (void)resetStatus;	// IMP=0x0010000000013059
- (void)startSyncSession;	// IMP=0x0010000000013043
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012f3a
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012e0c
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012b81
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000128f6
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012490
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012069
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011b0b
- (void)finalizeSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001176b
- (void)beginPullSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001130a
- (void)beginPushSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010e89
- (void)processSessionContext:(id)arg1;	// IMP=0x0010000000010e03
- (void)cancelTaskWithIdentifier:(id)arg1;	// IMP=0x0010000000010c7f
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001079a
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010663
- (void)deactivateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010501
- (void)activateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001039f
- (void)deactivateLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010081
- (void)closeLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000feca
- (void)openLibraryWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000f1b9
- (void)_whenThereIsNoOtherLibraryManagersOpenedWithLibraryIdentifier:(id)arg1 callBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000eee1
- (void)_killWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eafc
- (void)_dropManagerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e650
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e645
- (id)_clientWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e62f
- (id)redactedDescription;	// IMP=0x001000000000e61d
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000000e497
- (id)initWithConnection:(id)arg1 name:(id)arg2 allowedProcol:(id)arg3 isManagement:(_Bool)arg4;	// IMP=0x001000000000dec6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

