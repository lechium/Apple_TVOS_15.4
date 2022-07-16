//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLPhotoSharingHelper : NSObject
{
}

+ (_Bool)debugAutoAcceptInvitation;	// IMP=0x00000000003bd269
+ (_Bool)debugDownloadAllDerivatives;	// IMP=0x00000000003bd21c
+ (_Bool)debugDownloadMetadataOnly;	// IMP=0x00000000003bd1cf
+ (_Bool)debugDownloadThumbnailsOnly;	// IMP=0x00000000003bd182
+ (_Bool)debugAlwaysStreamSharedVideos;	// IMP=0x00000000003bd121
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;	// IMP=0x00000000003bd045
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;	// IMP=0x00000000003bc843
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;	// IMP=0x00000000003bbfec
+ (id)prefixForBreadcrumbState:(int)arg1;	// IMP=0x00000000003bbe49
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(_Bool)arg3;	// IMP=0x00000000003bbcf5
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000003bbc32
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000003bbb6f
+ (_Bool)isBreadcrumbDebugEnabled;	// IMP=0x00000000003bbb2a
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;	// IMP=0x00000000003bb9e7
+ (unsigned long long)purgeableSpace;	// IMP=0x00000000003bb8d8
+ (void)_markStreamVideosAsPurgeable;	// IMP=0x00000000003bb4d3
+ (void)pruneCloudSharingContentIfNecessaryInLibrary:(id)arg1;	// IMP=0x00000000003bb162
+ (void)applicationIsInForeground:(_Bool)arg1 photoLibraryURL:(id)arg2;	// IMP=0x00000000003bb01f
+ (double)intervalBetweenAlbumPolls;	// IMP=0x00000000003bb011
+ (double)intervalBetweenPolls;	// IMP=0x00000000003bb003
+ (void)downloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 shouldPrioritize:(_Bool)arg3 shouldExtendTimer:(_Bool)arg4;	// IMP=0x00000000003baa5b
+ (id)downloadNotificationForAssetwithUUID:(id)arg1 cloudPlaceholderKind:(short)arg2;	// IMP=0x00000000003baa33
+ (_Bool)_derivativeExistsForAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;	// IMP=0x00000000003ba8e7
+ (id)_downloadRequestQueue;	// IMP=0x00000000003ba8c3
+ (_Bool)_recentlyRequestedDownloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;	// IMP=0x00000000003ba7e5
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;	// IMP=0x00000000003ba617
+ (void)checkServerModelForAlbum:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000003ba25d
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;	// IMP=0x00000000003ba064
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(_Bool)arg2;	// IMP=0x00000000003b9e4c
+ (struct CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;	// IMP=0x00000000003b9bf9
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;	// IMP=0x00000000003b9be0
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;	// IMP=0x00000000003b9bc7
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;	// IMP=0x00000000003b9bae
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;	// IMP=0x00000000003b9b95
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;	// IMP=0x00000000003b9b7c
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1 uti:(id)arg2;	// IMP=0x00000000003b9ab4
+ (id)_temporaryUploadDerivativesPathForCollectionGUID:(id)arg1 pathExtension:(id)arg2;	// IMP=0x00000000003b99ec
+ (double)derivedAssetSmallDimensionLimitForType:(int)arg1;	// IMP=0x00000000003b99c1
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;	// IMP=0x00000000003b9009
+ (id)_videoDerivativeForVideoAtURL:(id)arg1 outputURL:(id)arg2 withPreset:(id)arg3 reason:(id)arg4 outputFileType:(id)arg5;	// IMP=0x00000000003b8d6b
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;	// IMP=0x00000000003b7e27
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;	// IMP=0x00000000003b7c55
+ (void)publishCloudSharedCommentToServer:(id)arg1;	// IMP=0x00000000003b77af
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b76c0
+ (id)_transactionWithName:(const char *)arg1;	// IMP=0x00000000003b767d
+ (id)_processPhoneFailuresQueue;	// IMP=0x00000000003b7659
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;	// IMP=0x00000000003b73ff
+ (id)_phoneInvitationFailureFile;	// IMP=0x00000000003b73db
+ (_Bool)hasPhoneInvitationForAlbum:(id)arg1;	// IMP=0x00000000003b735e
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;	// IMP=0x00000000003b7203
+ (void)markPendingInvitationAsSpamForAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b6e69
+ (void)declinePendingInvitationForAlbum:(id)arg1;	// IMP=0x00000000003b6d3f
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b6919
+ (void)unsubscribeFromAlbum:(id)arg1;	// IMP=0x00000000003b66c1
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;	// IMP=0x00000000003b638b
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;	// IMP=0x00000000003b6245
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;	// IMP=0x00000000003b6239
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b618b
+ (_Bool)removeCloudSharingDirectories:(id *)arg1;	// IMP=0x00000000003b5df1
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003b5b18
+ (_Bool)isCellularConnection;	// IMP=0x00000000003b5a26
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;	// IMP=0x00000000003b564e
+ (void)_userDidDeleteSharedAssets:(id)arg1;	// IMP=0x00000000003b5400
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;	// IMP=0x00000000003b3cf0
+ (id)photoSharingOriginalFilenameForAsset:(id)arg1;	// IMP=0x00000000003b3c28
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;	// IMP=0x00000000003b3933
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;	// IMP=0x00000000003b363e
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;	// IMP=0x00000000003b3336
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;	// IMP=0x00000000003b3069
+ (void)_userDidDeleteSharedAlbum:(id)arg1;	// IMP=0x00000000003b2fb6
+ (void)publishCloudSharedAlbumToServer:(id)arg1;	// IMP=0x00000000003b2b28
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUID:(id)arg1 inviterAddress:(id)arg2;	// IMP=0x00000000003b2a44
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;	// IMP=0x00000000003b2988
+ (void)resetAllLocalState;	// IMP=0x00000000003b2918
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;	// IMP=0x00000000003b209c
+ (id)_localizationKeyForAssets:(id)arg1;	// IMP=0x00000000003b1fdf
+ (_Bool)canSetUserCloudSharedLiked:(_Bool)arg1 forAssets:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003b1c90
+ (_Bool)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003b1a01
+ (_Bool)canCreateStreamInPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003b1722
+ (_Bool)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;	// IMP=0x00000000003b14c6
+ (_Bool)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;	// IMP=0x00000000003b12b3
+ (long long)maxGIFSizeForPublishing;	// IMP=0x00000000003b1295
+ (long long)maxVideoLengthForPublishing;	// IMP=0x00000000003b1181
+ (long long)maxNumThumbnailsToPrefetchPerDay;	// IMP=0x00000000003b1163
+ (long long)maxNumDerivativesToPrefetchPerDay;	// IMP=0x00000000003b1145
+ (long long)maxNumDerivativesToDownloadPerPush;	// IMP=0x00000000003b1127
+ (long long)maxCharactersPerComment;	// IMP=0x00000000003b1109
+ (long long)maxCommentsPerAsset;	// IMP=0x00000000003b10eb
+ (long long)maxSubscribersPerStream;	// IMP=0x00000000003b10cd
+ (long long)maxAssetsPerStream;	// IMP=0x00000000003b10af
+ (long long)maxSubscribedStreams;	// IMP=0x00000000003b1091
+ (long long)maxOwnedStreams;	// IMP=0x00000000003b1073
+ (struct CGSize)videoPosterFrameDimension;	// IMP=0x00000000003b0ec8
+ (long long)_serverLimitValueForKey:(id)arg1 withDefaultResult:(long long)arg2;	// IMP=0x00000000003b0d74
+ (id)serverSideConfigurationDictionary;	// IMP=0x00000000003b0c3a
+ (void)_resetServerSideConfigurationDictionary;	// IMP=0x00000000003b0bf2
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;	// IMP=0x00000000003b09ae
+ (id)streamdVideoCache;	// IMP=0x00000000003b098a
+ (id)_pathToServerConfigurationCache;	// IMP=0x00000000003b0927
+ (void)initializeMSPlatform;	// IMP=0x00000000003b090f
+ (void)forgetSharingPersonID:(id)arg1;	// IMP=0x00000000003b0676
+ (void)retryOutstandingActivities;	// IMP=0x00000000003b03fe
+ (void)pollForAlbumListUpdatesIfNecessary;	// IMP=0x00000000003b0279
+ (void)pollForAlbumListUpdates;	// IMP=0x00000000003b006a
+ (_Bool)accountMatchesEmail:(id)arg1;	// IMP=0x00000000003afd77
+ (id)sharingDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;	// IMP=0x00000000003afae6
+ (id)sharingLastName;	// IMP=0x00000000003afa7c
+ (id)sharingFirstName;	// IMP=0x00000000003afa12
+ (id)sharingUsername;	// IMP=0x00000000003af9a8
+ (id)sharingPersonID;	// IMP=0x00000000003af858
+ (_Bool)sharedStreamsExplictlyDisabledForPhotoLibraryURL:(id)arg1;	// IMP=0x00000000003af850
+ (_Bool)_sharedStreamsExplicitlyDisabled;	// IMP=0x00000000003af848
+ (_Bool)sharedStreamsEnabledForPhotoLibraryURL:(id)arg1;	// IMP=0x00000000003af840
+ (_Bool)_sharedStreamsEnabled;	// IMP=0x00000000003af838
+ (void)clearCachedAccountState;	// IMP=0x00000000003af7f4
+ (void)photosPreferencesChanged;	// IMP=0x00000000003af7d7
+ (void)accountSettingsChanged;	// IMP=0x00000000003af757

@end

