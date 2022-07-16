//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLNotificationUNCenterDelegate-Protocol.h>

@class CNContactStore, NSMutableDictionary, NSString, PLNotificationUNCenter;
@protocol OS_dispatch_queue;

@interface PLNotificationManager : NSObject <PLNotificationUNCenterDelegate>
{
    _Bool _badgeCountIsInvalid;	// 8 = 0x8
    _Bool _enableTemporaryDebugMode;	// 9 = 0x9
    CNContactStore *_contactStore;	// 16 = 0x10
    int _alertFiltrationEnabled;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 32 = 0x20
    NSMutableDictionary *_waitingAssetsAddNotifications;	// 40 = 0x28
    struct __CFUserNotification *_processCinematicVideoItemsPrompt;	// 48 = 0x30
    struct os_unfair_lock_s _processCinematicVideoItemsPromptLock;	// 56 = 0x38
    PLNotificationUNCenter *_UNCenter;	// 64 = 0x40
}

+ (id)_bestDateForDeliveringNotificationFromCoreDuetWithError:(id *)arg1;	// IMP=0x000000000040ef2e
+ (id)_bestDateForDeliveringNotification;	// IMP=0x000000000040e6ae
+ (id)_notificationDeliveryDate;	// IMP=0x000000000040e4ce
+ (id)filteredAlbumListForContentMode:(int)arg1 library:(id)arg2;	// IMP=0x000000000040e448
+ (id)sharedManager;	// IMP=0x000000000040e3eb
- (void).cxx_destruct;	// IMP=0x0000000000409cca
@property(retain, nonatomic) PLNotificationUNCenter *UNCenter; // @synthesize UNCenter=_UNCenter;
- (void)_resetAlertFiltration;	// IMP=0x0000000000409c64
- (_Bool)_alertFiltrationEnabled;	// IMP=0x0000000000409c02
- (_Bool)_isMyEmailAddress:(id)arg1;	// IMP=0x0000000000409bfa
- (_Bool)_shouldAllowAlertsFromContactWithEmail:(id)arg1;	// IMP=0x0000000000409b53
- (id)contactStore;	// IMP=0x0000000000409b18
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;	// IMP=0x0000000000409a4b
- (void)sendResponse:(_Bool)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2;	// IMP=0x0000000000409977
- (void)discardAllNotifications;	// IMP=0x0000000000409836
- (void)_updateImageDataForNotification:(id)arg1;	// IMP=0x00000000004096ee
- (void)getThumbnailImageDataAssetUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004095e1
- (void)triggerNotificationThumbnailUpdateForAsset:(id)arg1;	// IMP=0x00000000004093eb
- (void)_removeWaitingNotificationForPhotosBatchID:(id)arg1;	// IMP=0x0000000000409332
- (id)_waitingNotificationForPhotosBatchID:(id)arg1;	// IMP=0x0000000000409268
- (id)_addWaitingNotification:(id)arg1 forPhotosBatchID:(id)arg2;	// IMP=0x0000000000409093
- (void)calculateCurrentBadgeCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000408fc1
- (unsigned long long)_appBadgeCount;	// IMP=0x0000000000408ec1
- (unsigned long long)currentAppBadgeCountForNotificationUNCenter:(id)arg1;	// IMP=0x0000000000408eaf
- (void)removeNotificationForInterestInUnrenderedCinematicVideoItems;	// IMP=0x0000000000408e67
- (void)postNotificationForInterestInUnrenderedCinematicVideoItems;	// IMP=0x0000000000408b02
- (void)postNotificationForExpiringCMMsWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;	// IMP=0x0000000000408765
- (void)removeNotificationForSuggestedCMMWithUUID:(id)arg1;	// IMP=0x0000000000408627
- (void)postNotificationForSuggestedCMMWithUUID:(id)arg1 library:(id)arg2 notificationDeliveryDate:(id)arg3;	// IMP=0x0000000000408369
- (void)_deleteNotificationsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeNotifications:(_Bool)arg2 shouldDeletePhotosAddedToAlbumNotifications:(_Bool)arg3;	// IMP=0x000000000040822f
- (_Bool)_notificationType:(long long)arg1 matchesCommentsOrLikeNotifications:(_Bool)arg2 andPhotosAddedToAlbumNotifications:(_Bool)arg3;	// IMP=0x00000000004081eb
- (void)_deleteNotificationsForAlbumWithUUID:(id)arg1 notificationTypes:(id)arg2;	// IMP=0x00000000004081cc
- (void)_deleteNotificationsForMemoriesWithUUID:(id)arg1 notificationTypes:(id)arg2;	// IMP=0x00000000004081ad
- (void)_deleteNotificationsForObjectWithUUID:(id)arg1 notificationDictionaryKey:(id)arg2 notificationTypes:(id)arg3;	// IMP=0x0000000000407f41
- (void)removeNotificationForInterestingMemoryWithUUID:(id)arg1;	// IMP=0x0000000000407e03
- (void)postNotificationForInterestingMemoryWithMemoryUUID:(id)arg1 library:(id)arg2 notificationDeliveryDate:(id)arg3;	// IMP=0x00000000004078c1
- (id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5 pathManager:(id)arg6;	// IMP=0x0000000000407539
- (id)_memoryNotificationFromDictionaryRepresentation:(id)arg1;	// IMP=0x00000000004073bc
- (void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;	// IMP=0x00000000004072e0
- (void)noteUserDidChangeStatusForMomentShare:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000004071c3
- (void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)arg1;	// IMP=0x0000000000407085
- (void)noteUserDidLeavePhotosApplication;	// IMP=0x0000000000406f97
- (void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1;	// IMP=0x0000000000406e7c
- (void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1;	// IMP=0x0000000000406d60
- (void)noteUserDidReadCommentOnSharedAsset:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x0000000000406ac7
- (void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x0000000000406973
- (void)noteUserDidNavigateIntoSharedAlbum:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000004066e8
- (void)noteUserDidViewCloudFeedContent:(long long)arg1 photoLibrary:(id)arg2;	// IMP=0x000000000040611b
- (void)noteUserAssetsAreReadyForMomentShare:(id)arg1;	// IMP=0x0000000000405f89
- (void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)arg1;	// IMP=0x0000000000405d66
- (void)noteDidReceiveCMMInvitationWithMomentShare:(id)arg1;	// IMP=0x0000000000405b1a
- (void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1;	// IMP=0x00000000004058d6
- (void)noteSharedAlbumUnseenStatusDidChange:(id)arg1;	// IMP=0x000000000040568e
- (void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2;	// IMP=0x00000000004050db
- (void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2;	// IMP=0x0000000000404ad5
- (void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4;	// IMP=0x0000000000404789
- (void)noteDidReceiveAssets:(id)arg1 forSharedAlbum:(id)arg2 mstreamdInfo:(id)arg3;	// IMP=0x000000000040423c
- (void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2;	// IMP=0x0000000000403d20
- (void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3;	// IMP=0x00000000004036fa
- (void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1;	// IMP=0x00000000004035df
- (void)noteDidDeleteSharedAlbum:(id)arg1;	// IMP=0x0000000000403480
- (void)noteDidReceiveInvitationForSharedAlbum:(id)arg1;	// IMP=0x0000000000403338
- (void)setEnableTemporaryDebugMode:(_Bool)arg1;	// IMP=0x000000000040332f
- (_Bool)enableTemporaryDebugMode;	// IMP=0x0000000000403326
- (void)dealloc;	// IMP=0x00000000004032e5
- (id)_initSharedInstance;	// IMP=0x0000000000403231
- (id)init;	// IMP=0x00000000004031aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
