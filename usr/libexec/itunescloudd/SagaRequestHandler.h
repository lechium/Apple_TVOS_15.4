//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudUpdateLibraryOperation, ICConnectionConfiguration, ML3MusicLibrary, NSMutableArray, NSString, SagaArtworkImporter, SagaLibrary;
@protocol ICDCloudMusicLibrarySagaUpdateTaskHelper, OS_dispatch_queue, OS_dispatch_source;

@interface SagaRequestHandler : NSObject
{
    SagaLibrary *_library;	// 8 = 0x8
    SagaArtworkImporter *_artworkImporter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_uploadItemPropertiesQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uploadPlaylistPropertiesQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_updateCloudLibraryQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    CloudUpdateLibraryOperation *_updateCloudLibraryOperation;	// 56 = 0x38
    NSMutableArray *_updateLibraryCompletionHandlers;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_itemPropertiesCoalescingTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_playlistPropertiesCoalescingTimer;	// 80 = 0x50
    id <ICDCloudMusicLibrarySagaUpdateTaskHelper> _updateTaskHelper;	// 88 = 0x58
    ICConnectionConfiguration *_configuration;	// 96 = 0x60
    ML3MusicLibrary *_musicLibrary;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000006487d
- (void)_handleCloudLibraryUpdateOperationFinishedWithError:(id)arg1;	// IMP=0x00100000000646fa
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 allowNoisyAuthPrompt:(_Bool)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000063df8
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063d2b
- (id)_library;	// IMP=0x0010000000063ccb
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x0010000000063b3e
- (float)updateProgress;	// IMP=0x0010000000063aa9
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000063703
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000634c4
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062ef3
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062ba7
- (void)loadArtworkInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062845
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x001000000006282a
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x001000000006280f
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x00100000000627f4
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000626d5
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000625b6
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062497
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x00100000000623cb
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000062173
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061f1f
- (void)addStorePlaylistWithGlobalID:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061cda
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000061aac
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006165f
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000613d7
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061198
- (void)removePlaylistsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060f56
- (void)removeItemsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060d14
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000060adb
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000060807
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000605da
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006038a
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005fedc
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000005fc06
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000005f90b
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005f63f
- (void)uploadPlaylistPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x001000000005f5a5
- (void)uploadItemPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x001000000005f50b
- (void)updatePlaylistPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f355
- (void)updateItemPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005f19f
- (void)increasePriorityForAllOperations;	// IMP=0x001000000005f03a
- (void)decreasePriorityForAllOperations;	// IMP=0x001000000005eed5
- (void)cancelOperations;	// IMP=0x001000000005ee06
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005ecf8
- (void)cancelPendingChanges;	// IMP=0x001000000005ece4
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005eb82
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000005eb04
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000005ea86
- (id)initWithConfiguration:(id)arg1 progressObserver:(id)arg2;	// IMP=0x001000000005e778
- (id)init;	// IMP=0x001000000005e736
- (void)dealloc;	// IMP=0x001000000005e59d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

