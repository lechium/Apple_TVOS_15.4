//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLClientLibraryManagerProtocol-Protocol.h>
#import <CloudPhotoLibrary/CPLLibraryManagerImplementation-Protocol.h>
#import <CloudPhotoLibrary/NSXPCConnectionDelegate-Protocol.h>

@class NSCountedSet, NSDate, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CPLProxyLibraryManager <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation>
{
    struct os_unfair_lock_s _realConnectionLock;	// 8 = 0x8
    NSXPCConnection *_realConnection;	// 16 = 0x10
    CDUnknownBlockType _blockToCallOnDaemonDying;	// 24 = 0x18
    NSMutableDictionary *_downloadTasks;	// 32 = 0x20
    NSMutableDictionary *_inMemoryDownloadTasks;	// 40 = 0x28
    NSMutableDictionary *_uploadTasks;	// 48 = 0x30
    NSMutableDictionary *_forceSyncTasks;	// 56 = 0x38
    NSMutableDictionary *_vouchersPerTaskIdentifier;	// 64 = 0x40
    unsigned long long _foregroundCalls;	// 72 = 0x48
    _Bool _foregroundCallsHaveBeenQuiet;	// 80 = 0x50
    NSCountedSet *_disablingReasons;	// 88 = 0x58
    unsigned long long _disablingMinglingCount;	// 96 = 0x60
    unsigned long long _significantWorkCalls;	// 104 = 0x68
    NSMutableDictionary *_outstandingInvocations;	// 112 = 0x70
    unsigned long long _outstandingInvocationsCount;	// 120 = 0x78
    NSMutableDictionary *_syncOutstandingInvocations;	// 128 = 0x80
    unsigned long long _syncOutstandingInvocationsCount;	// 136 = 0x88
    NSMutableArray *_pendingBlocksAfterOpening;	// 144 = 0x90
    int _openingStatus;	// 152 = 0x98
    NSDate *_backoffRetryingConnectionDate;	// 160 = 0xa0
    int _notifyToken;	// 168 = 0xa8
    _Bool _killed;	// 172 = 0xac
    _Bool _firstTryOpeningLibrary;	// 173 = 0xad
    NSObject<OS_dispatch_queue> *_queue;	// 176 = 0xb0
}

+ (id)clientProtocolInterface;	// IMP=0x000000000000419d
+ (id)daemonProtocolInterface;	// IMP=0x00000000000020d4
- (void).cxx_destruct;	// IMP=0x000000000001d0b2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_dropVoucherForTaskWithIdentifier:(id)arg1;	// IMP=0x000000000001d084
- (void)_storeVoucher:(id)arg1 forTaskWithIdentifier:(id)arg2;	// IMP=0x000000000001d060
- (void)_withVoucherForTaskWithIdentifier:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cfc5
- (void)addDropDerivativesRecipe:(id)arg1 writeToUserDefaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001cb44
- (void)provideCloudResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c6cf
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c25a
- (void)provideScopeChangeForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bde5
- (void)unblockEngineElementOnce:(id)arg1;	// IMP=0x000000000001ba42
- (void)unblockEngineElement:(id)arg1;	// IMP=0x000000000001b69f
- (void)blockEngineElement:(id)arg1;	// IMP=0x000000000001b2fc
- (void)reportMiscInformation:(id)arg1;	// IMP=0x000000000001af59
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;	// IMP=0x000000000001ab26
- (void)requestClientToPushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a7bd
- (void)forceBackupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a454
- (void)addInfoToLog:(id)arg1;	// IMP=0x000000000001a0b1
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019c8b
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019880
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001945e
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019053
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018c48
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001889a
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001847a
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000180d0
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017ca5
- (void)barrier;	// IMP=0x0000000000017ad4
- (void)cancelSyncTask:(id)arg1;	// IMP=0x00000000000177a9
- (void)cancelTask:(id)arg1;	// IMP=0x000000000001747e
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x000000000001729a
- (void)libraryManagerHasBeenReplaced;	// IMP=0x0000000000017037
- (void)pushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016ce1
- (void)provideLocalResource:(id)arg1 recordClassString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001680e
- (void)forceSyncDidFinishForTask:(id)arg1 withErrors:(id)arg2;	// IMP=0x000000000001620c
- (void)libraryManagerHasStatusChanges;	// IMP=0x0000000000016004
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;	// IMP=0x0000000000015dbd
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;	// IMP=0x0000000000015b26
- (void)libraryManagerHasChangesToPull;	// IMP=0x0000000000015936
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000155b1
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;	// IMP=0x0000000000015267
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;	// IMP=0x0000000000014fc5
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;	// IMP=0x0000000000014e93
- (void)backgroundDownloadDidFailForResource:(id)arg1;	// IMP=0x0000000000014bf9
- (void)backgroundDownloadDidFinishForResource:(id)arg1;	// IMP=0x0000000000014970
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000014304
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000013bff
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;	// IMP=0x000000000001365d
- (void)downloadDidStartForResourceTransferTask:(id)arg1;	// IMP=0x000000000001315f
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012bac
- (void)_dispatchFailedForceSyncTaskForScopeIdentifiers:(id)arg1 withError:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012a11
- (void)_invokeSyncOutstandingInvocationsWithTaskIdentifier:(id)arg1;	// IMP=0x0000000000012777
- (_Bool)_setStatusFromDictionary:(id)arg1;	// IMP=0x0000000000012659
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(_Bool)arg2;	// IMP=0x00000000000122b3
- (void)acknowledgeChangedStatuses:(id)arg1;	// IMP=0x0000000000011f2c
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011b2f
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000116cf
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000112d2
- (void)noteClientIsEndingSignificantWork;	// IMP=0x0000000000010ef4
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x0000000000010bb0
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010829
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x00000000000104ef
- (void)enableMingling;	// IMP=0x0000000000010111
- (void)disableMingling;	// IMP=0x000000000000fdd7
- (void)enableSynchronizationWithReason:(id)arg1;	// IMP=0x000000000000f92a
- (void)disableSynchronizationWithReason:(id)arg1;	// IMP=0x000000000000f558
- (void)noteClientIsInBackground;	// IMP=0x000000000000f167
- (void)noteClientIsInForegroundQuietly:(_Bool)arg1;	// IMP=0x000000000000ec0c
- (void)noteClientReceivedNotificationOfServerChanges;	// IMP=0x000000000000eb9e
- (void)startSyncSession;	// IMP=0x000000000000e8f1
- (void)resetStatus;	// IMP=0x000000000000e644
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000df05
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d7c6
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d3f0
- (void)queryUserDetailsForShareParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cfbb
- (void)acceptSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cb87
- (void)fetchSharedScopeFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c752
- (void)updateShareForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c31d
- (void)createScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000be9b
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bbb6
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b8e6
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b2ae
- (void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg1 withError:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b144
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ad27
- (void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 clientBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000a78b
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000009eb0
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 options:(id)arg2 proposedTaskIdentifier:(id)arg3 withError:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000009cf3
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;	// IMP=0x0000000000009950
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009681
- (void)deactivateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000093b2
- (void)activateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000090e3
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000840b
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007ec5
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007554
- (void)dispatchBlockWhenLibraryIsOpen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007430
- (void)_dispatchBlockWhenOpen:(CDUnknownBlockType)arg1;	// IMP=0x00000000000067fe
- (void)_reallyOpenWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006073
- (void)_dropConnectionCompletly;	// IMP=0x0000000000005fb3
- (void)_dropConnectionCompletlyLocked;	// IMP=0x0000000000005f3e
- (void)_markConnectionAsInvalid;	// IMP=0x0000000000005da8
- (void)_setupConnection;	// IMP=0x0000000000004a8c
- (void)_setCallBlockOnDaemonDying:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004a22
- (void)_callBlockOnDaemonDying;	// IMP=0x00000000000049ea
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004872
- (id)_connection;	// IMP=0x00000000000046ac
- (void)dealloc;	// IMP=0x00000000000045ee
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00000000000044a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
