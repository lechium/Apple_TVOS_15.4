//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSNotificationCenter, NSNumber, PLChangeList, PLContentChanges, PLManagedObjectContext;
@protocol OS_dispatch_queue;

@interface PLChangeNotificationCenter : NSObject
{
    _Bool _isProcessingRemoteDidSave;	// 8 = 0x8
    int _cameraPreviewChangeListenerCount;	// 12 = 0xc
    NSNumber *_cameraPreviewChangedToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationHandlingQueue;	// 24 = 0x18
    NSMutableArray *_snapshots;	// 32 = 0x20
    PLChangeList *_changedAlbumLists;	// 40 = 0x28
    PLContentChanges *_albumListsContent;	// 48 = 0x30
    PLChangeList *_changedAlbums;	// 56 = 0x38
    PLContentChanges *_albumsContent;	// 64 = 0x40
    PLChangeList *_changedAssets;	// 72 = 0x48
    NSMutableSet *_assetsWithCloudCommentChanges;	// 80 = 0x50
    PLContentChanges *_momentsContent;	// 88 = 0x58
    PLChangeList *_changedMoments;	// 96 = 0x60
    PLChangeList *_changedCloudFeedEntries;	// 104 = 0x68
    PLManagedObjectContext *_moc;	// 112 = 0x70
    NSMutableArray *_enqueuedNotifications;	// 120 = 0x78
    NSDictionary *_remoteNotificationData;	// 128 = 0x80
    _Bool _isOverloaded;	// 136 = 0x88
    NSMutableSet *_overloadedObjects;	// 144 = 0x90
}

+ (void)forceFetchingAlbumReload;	// IMP=0x000000000022f050
+ (void)getInsertedAssetCount:(unsigned long long *)arg1 deletedAssetCount:(unsigned long long *)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4;	// IMP=0x000000000022ec72
+ (id)allManagedObjectKeysStrategyWithContext:(id)arg1;	// IMP=0x000000000022ebe0
+ (id)defaultCenter;	// IMP=0x000000000022eb8a
- (void).cxx_destruct;	// IMP=0x000000000022cc2f
- (void)removeCameraPreviewWellImageChangeObserver:(id)arg1;	// IMP=0x000000000022cbd3
- (id)observeCameraPreviewWellImageChangeOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000022cb7c
- (void)addCameraPreviewWellImageChangeObserver:(id)arg1;	// IMP=0x000000000022cb3d
- (void)_unregisterForCameraPreviewWellChanges;	// IMP=0x000000000022ca52
- (void)_registerForCameraPreviewWellChanges;	// IMP=0x000000000022c903
- (void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(_Bool)arg3;	// IMP=0x000000000022c8b8
- (void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(_Bool)arg3 isCoalescedEvent:(_Bool)arg4;	// IMP=0x000000000022c775
- (void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(_Bool)arg3;	// IMP=0x000000000022c6f7
- (void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(_Bool)arg3;	// IMP=0x000000000022c22c
@property(readonly, nonatomic) _Bool _shouldForceFetchingAlbumsToReload;
- (id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(_Bool)arg2;	// IMP=0x000000000022bf07
- (id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1;	// IMP=0x000000000022bef0
- (id)_takeSnapshotOfObject:(id)arg1;	// IMP=0x000000000022bedc
- (void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(_Bool)arg3;	// IMP=0x000000000022bba3
- (id)_snapshotForObject:(id)arg1;	// IMP=0x000000000022ba10
- (id)descriptionOfSplitChanges;	// IMP=0x000000000022b8a7
- (id)_keysOfInterestForObject:(id)arg1;	// IMP=0x000000000022b893
- (_Bool)_isInterestedInUpdatesOfObject:(id)arg1;	// IMP=0x000000000022b334
- (void)_postEnqueuedNotifications;	// IMP=0x000000000022b0ab
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id *)arg3 forKeys:(const id *)arg4 count:(unsigned long long)arg5;	// IMP=0x000000000022aeed
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000022ae9a
- (void)_enqueueAssetContainerListChangeNotification:(id)arg1;	// IMP=0x000000000022ae88
- (void)_enqueueAlbumChangeNotification:(id)arg1;	// IMP=0x000000000022ae76
- (void)_enqueueInvitationRecordsChangeNotification:(id)arg1;	// IMP=0x000000000022ae64
- (void)_enqueueAssetContainerChangeNotification:(id)arg1;	// IMP=0x000000000022ae52
- (void)_evaluateUpdatedAssets;	// IMP=0x000000000022aa5e
- (void)_evaluateContainersWithUpdatedContent;	// IMP=0x00000000002293a0
- (void)_splitContextDidChangeNotification:(id)arg1;	// IMP=0x00000000002287a2
- (void)_cleanupState;	// IMP=0x0000000000228703
- (void)_enqueueAssetChangeNotification;	// IMP=0x0000000000228451
- (void)_enqueueMomentChangeNotifications;	// IMP=0x0000000000227e4b
- (void)_enqueueCloudFeedEntriesChangeNotifications;	// IMP=0x00000000002278db
- (void)_enqueueCloudCommentsNotifications;	// IMP=0x0000000000227587
- (void)_enqueueAlbumNotifications;	// IMP=0x0000000000226e29
- (void)_enqueueAlbumListNotifications;	// IMP=0x0000000000226823
- (void)_enqueuePhotoLibraryNotifications;	// IMP=0x00000000002265f1
- (void)_sendNotificationsForSplitChanges;	// IMP=0x00000000002264a6
- (void)postShouldReloadNotificationWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000226400
- (void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000022633e
- (id)_toOneRelationshipsOfInterestForObject:(id)arg1;	// IMP=0x000000000022629e
- (id)_attributesOfInterestForObject:(id)arg1;	// IMP=0x00000000002261fe
- (id)_orderedRelationshipsOfInterestForObject:(id)arg1;	// IMP=0x00000000002260c8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000225f30
- (void)processContextDidSaveObjectIDsNotification:(id)arg1;	// IMP=0x0000000000225f1e
- (void)processContextDidChangeNotification:(id)arg1;	// IMP=0x0000000000225d2d
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;	// IMP=0x0000000000225c93
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000225c21
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000225b47
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;	// IMP=0x0000000000225aa2
- (void)removeShouldReloadObserver:(id)arg1;	// IMP=0x0000000000225a26
- (void)addShouldReloadObserver:(id)arg1;	// IMP=0x00000000002259a3
- (void)removeAssetChangeObserver:(id)arg1;	// IMP=0x0000000000225987
- (void)addAssetChangeObserver:(id)arg1;	// IMP=0x0000000000225964
- (void)removeCloudFeedEntriesObserver:(id)arg1;	// IMP=0x0000000000225948
- (void)addCloudFeedEntriesObserver:(id)arg1;	// IMP=0x0000000000225925
- (void)removeInvitationRecordsObserver:(id)arg1;	// IMP=0x0000000000225909
- (void)addInvitationRecordsObserver:(id)arg1;	// IMP=0x00000000002258e6
- (void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;	// IMP=0x00000000002258ca
- (void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;	// IMP=0x00000000002258a7
- (void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;	// IMP=0x000000000022588b
- (void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;	// IMP=0x0000000000225868
- (void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2;	// IMP=0x000000000022584c
- (void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2;	// IMP=0x0000000000225829
@property(readonly, retain, nonatomic) NSNotificationCenter *backingCenter;
- (void)enqueueNotification:(id)arg1;	// IMP=0x00000000002257b1
- (void)dealloc;	// IMP=0x0000000000225763
- (id)init;	// IMP=0x00000000002255d3

@end

