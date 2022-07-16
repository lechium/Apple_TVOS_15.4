//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class JaliscoRequestHandler, NSMutableDictionary, NSObject, NSOperationQueue, NSString, SagaRequestHandler;
@protocol OS_dispatch_queue;

@interface ICDCloudMusicLibraryRequestHandler
{
    SagaRequestHandler *_sagaRequestHandler;	// 8 = 0x8
    JaliscoRequestHandler *_jaliscoRequestHandler;	// 16 = 0x10
    long long _musicSubscriptionCheckStatus;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
    NSOperationQueue *;	// 48 = 0x30
    NSOperationQueue *_retryQueue;	// 56 = 0x38
    int _autoEnableFailureCount;	// 64 = 0x40
    int _subscriptionStatusFailureCount;	// 68 = 0x44
    int _autoRetryCloudAuthenticateFailureCount;	// 72 = 0x48
    int _sagaImportFailureCount;	// 76 = 0x4c
    int _deauthOperationCount;	// 80 = 0x50
    _Bool _havePendingSubscriptionStatusCheck;	// 84 = 0x54
    _Bool _havePendingAutoEnableICMLCheck;	// 85 = 0x55
    _Bool _havePendingCloudUpdateLibraryCheck;	// 86 = 0x56
    _Bool _didAdjustMergePreference;	// 87 = 0x57
    _Bool _havePendingSagaUpdate;	// 88 = 0x58
    _Bool _didManuallyReloadCloudLibrary;	// 89 = 0x59
    _Bool _isPendingAuthentication;	// 90 = 0x5a
    _Bool _isHandlerActive;	// 91 = 0x5b
    _Bool _didHandleStartupNotificationReason;	// 92 = 0x5c
    NSMutableDictionary *_syncProgressDictionary;	// 96 = 0x60
}

+ (id)handler;	// IMP=0x0020000000018cd7
+ (id)handlers;	// IMP=0x0010000000018ca7
- (void).cxx_destruct;	// IMP=0x002000000000a993
- (void)_handleSagaAuthentication:(id)arg1 finishedForReason:(long long)arg2 explicitUserAction:(_Bool)arg3 shouldStartInitialImport:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000a517
- (id)_prepareLibraryLoadErrorWithJaliscoError:(id)arg1 sagaError:(id)arg2;	// IMP=0x001000000000a41c
- (void)_postLibraryUpdateProgressChangedForLibraryType:(long long)arg1;	// IMP=0x001000000000a35a
- (void)_performInitialSagaImportWithClientIdentity:(id)arg1 allowingNoisyAuthPrompt:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a134
- (void)_performJaliscoImportWithClientIdentity:(id)arg1 byAddingMediaKind:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009fd8
- (void)_performInitialJaliscoImportWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009d70
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000009ba6
- (void)_runDisableCloudLibraryOperationWithClientIdentity:(id)arg1 byDeletingDatabase:(_Bool)arg2 disableActiveLockerAccount:(_Bool)arg3 removeSourcePurchaseHistory:(_Bool)arg4 isHandlerDeactivating:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000009574
- (void)_runSagaAuthenticateOperationWithClientIdentity:(id)arg1 mergePreference:(id)arg2 allowNoisyPrompt:(_Bool)arg3 cloudLibraryEnableReason:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000091fc
- (void)_tryEnablingCloudMusicLibraryForReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009120
- (void)_tryEnablingICMLOnDevicesSupportingSideLoadedContentWithProperties:(id)arg1 reason:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008c42
- (void)_authenticateAndStartInitialImportWithMergePreference:(id)arg1 userIdentityProperties:(id)arg2 enableReason:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008b31
- (void)_registerDeviceAndPerformInitialImportWithUserIdentityProperties:(id)arg1 cloudLibraryEnableReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008415
- (long long)_shouldHandleDaemonStartupOrAccountChangedNotificationWithProperties:(id)arg1;	// IMP=0x00100000000080c1
- (void)_adjustMergePreferenceWithUserIdentityProperties:(id)arg1;	// IMP=0x0010000000007ae4
- (_Bool)_wasRestoredFromCloudBackup:(id)arg1;	// IMP=0x00100000000078a0
- (long long)_canEnableCloudMusicLibraryOnPlatformsWithSideLoadedMediaContentWithProperties:(id)arg1 includeLocalContentCheck:(_Bool)arg2;	// IMP=0x001000000000720f
- (long long)_getCurrentSubscriptionStatusForReason:(long long)arg1;	// IMP=0x00100000000071e0
- (void)_retryEnablingCloudMusicLibraryForReason:(long long)arg1;	// IMP=0x0010000000007039
- (void)_reloadSubscriptionStatusAndEnableCloudMusicLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006dc2
- (void)_enqueueCloudUpdateLibraryOperationForReason:(long long)arg1;	// IMP=0x0010000000006ca7
- (void)_enqueueSubscriptionStatusCheckForReason:(long long)arg1;	// IMP=0x0010000000006a46
- (void)_runSubscriptionStatusCheckOperationWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000069af
- (void)_handleMusicSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x00100000000066ec
- (_Bool)_isNativeMusicAppInstalled;	// IMP=0x00100000000065ee
- (void)_resetInternalCloudLibraryState;	// IMP=0x00100000000065af
- (void)_deactivateJaliscoLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000648f
- (void)_deactivateSagaLibraryByDeauthenticating:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005fe3
- (void)updateLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005d24
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005c87
- (void)becomeActive;	// IMP=0x0010000000005c35
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x0010000000005b57
- (void)scheduleBackgroundTaskToUpdateLibraryType:(long long)arg1;	// IMP=0x0010000000005add
- (void)setUpdateProgress:(float)arg1 forLibraryType:(long long)arg2;	// IMP=0x0010000000005a82
- (void)finishedUpdateOperationForLibraryType:(long long)arg1 withResponse:(id)arg2;	// IMP=0x00100000000059e5
- (void)startingUpdateOperationForLibraryType:(long long)arg1 isInitialImport:(_Bool)arg2;	// IMP=0x001000000000598c
- (_Bool)shouldIncludeMediaKindSongForJaliscoImport;	// IMP=0x0010000000005691
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000055a6
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x0010000000005514
- (void)loadBooksForStoreIDs:(id)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005429
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 clientIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000535e
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005273
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005188
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005090
- (void)removeLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004fd2
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000004f7c
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000004f26
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004e5b
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004d90
- (void)loadLastKnownEnableICMLStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000493c
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004851
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004766
- (void)loadArtworkInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000467b
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000045b0
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000044a6
- (void)updatePlaylistPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000043e8
- (void)updateItemPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000432a
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004232
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000413a
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000406f
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003f4a
- (void)addStorePlaylistWithGlobalID:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003e5f
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003d44
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003c4c
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003b27
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003a4d
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000394a
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000037ec
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003721
- (void)removePlaylistsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003636
- (void)removeItemsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000354b
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003480
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000003322
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000031fd
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x00100000000031a7
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x0010000000003151
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x00100000000030fb
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003030
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002f65
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002e9a
- (void)updateProgressForLibraryType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002dfd
- (void)cancelPendingChangesForLibraryType:(long long)arg1;	// IMP=0x0010000000002da7
- (void)addBackgroundOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x0010000000002d01
- (void)addOperation:(id)arg1 forLibraryType:(long long)arg2 priority:(int)arg3;	// IMP=0x0010000000002c5b
- (void)updateJaliscoLibraryWithClientIdentity:(id)arg1 forReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002b90
- (void)updateSagaLibraryWithClientIdentity:(id)arg1 forReason:(long long)arg2 allowNoisyAuthPrompt:(_Bool)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000002aa5
- (void)updateCloudLibraryProgressWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002a7f
- (void)isUpdatingCloudLibraryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000029ed
- (_Bool)isUpdatingCloudLibrary;	// IMP=0x0010000000002958
- (void)disableCloudLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001fb7
- (void)enableCloudLibraryWithClientIdentity:(id)arg1 startInitialImport:(_Bool)arg2 enableCloudLibraryPolicy:(long long)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000001e9d
- (void)handleMusicAppInstalled;	// IMP=0x0010000000001e4b
- (void)handleMusicAppRemovedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001d39
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000019f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
