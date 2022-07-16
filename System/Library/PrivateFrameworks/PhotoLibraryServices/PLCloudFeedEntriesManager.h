//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;

@interface PLCloudFeedEntriesManager : NSObject
{
    PLPhotoLibrary *_library;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005982b3
@property(readonly, nonatomic) PLPhotoLibrary *library; // @synthesize library=_library;
- (_Bool)_tryMergingComment:(id)arg1 withEntry:(id)arg2;	// IMP=0x0000000000597ac4
- (void)_mergeEntriesAroundDate:(id)arg1;	// IMP=0x00000000005976d1
- (void)_splitEntriesAtDate:(id)arg1;	// IMP=0x000000000059704e
- (void)_mergeOlderEntry:(id)arg1 intoMoreRecentEntry:(id)arg2;	// IMP=0x0000000000596c1f
- (void)_addAsset:(id)arg1 toEntry:(id)arg2;	// IMP=0x0000000000596861
- (CDUnknownBlockType)_commentSortingComparator;	// IMP=0x0000000000596840
- (CDUnknownBlockType)_assetSortingComparator;	// IMP=0x000000000059681f
- (_Bool)_shouldMergeAsset:(id)arg1 intoEntry:(id)arg2;	// IMP=0x00000000005963ee
- (_Bool)_shouldIgnoreInvitationRecord:(id)arg1;	// IMP=0x00000000005963a8
- (_Bool)_shouldIgnoreComment:(id)arg1;	// IMP=0x00000000005962b3
- (_Bool)_shouldIgnoreAsset:(id)arg1;	// IMP=0x000000000059629e
- (_Bool)_commentIsBatchCaption:(id)arg1;	// IMP=0x000000000059615f
- (_Bool)_wasCommentPublishedBeforeSubscription:(id)arg1;	// IMP=0x000000000059606b
- (_Bool)_wasAssetPublishedBeforeSubscription:(id)arg1;	// IMP=0x0000000000595f85
- (id)_subscriptionDateForSharedAlbum:(id)arg1;	// IMP=0x0000000000595f70
- (id)_dateForAsset:(id)arg1;	// IMP=0x0000000000595f0d
- (void)_noteContentDeletionAffectingCommentsEntry:(id)arg1;	// IMP=0x00000000005959fc
- (void)_noteContentDeletionAffectingAssetsEntry:(id)arg1;	// IMP=0x0000000000595563
- (void)_noteDidUpdateInvitationRecord:(id)arg1;	// IMP=0x0000000000594db7
- (void)_noteDidReceiveSharedComment:(id)arg1;	// IMP=0x0000000000593fb7
- (void)_noteDidReceiveSharedComments:(id)arg1;	// IMP=0x0000000000593e46
- (void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)arg1;	// IMP=0x0000000000593bc1
- (void)_noteDidReceiveSharedAsset:(id)arg1;	// IMP=0x000000000059319c
- (void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)arg1;	// IMP=0x0000000000592f55
- (void)_noteContentDeletionAffectingInvitationResponseEntry:(id)arg1;	// IMP=0x0000000000592c5c
- (void)_noteContentDeletionAffectingSubscriptionEntry:(id)arg1;	// IMP=0x000000000059285f
- (void)_noteContentDeletionAffectingInvitationEntry:(id)arg1;	// IMP=0x0000000000592566
- (void)_noteDidUpdateSharedAlbum:(id)arg1;	// IMP=0x00000000005917cd
- (void)rebuildAllEntries:(CDUnknownBlockType)arg1;	// IMP=0x00000000005916e8
- (void)processAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000591131
- (id)_singleEntryOfType:(long long)arg1 forInvitationRecord:(id)arg2;	// IMP=0x0000000000590e47
- (id)_invitationDeclinedEntryForInvitationRecord:(id)arg1;	// IMP=0x0000000000590e2d
- (id)_invitationAcceptedEntryForInvitationRecord:(id)arg1;	// IMP=0x0000000000590e13
- (id)_singleEntryOfType:(long long)arg1 forSharedAlbum:(id)arg2;	// IMP=0x0000000000590b29
- (id)_albumCreatedEntryForSharedAlbum:(id)arg1;	// IMP=0x0000000000590b0f
- (id)_subscriptionEntryForSharedAlbum:(id)arg1;	// IMP=0x0000000000590a43
- (id)_invitationReceivedEntryForSharedAlbum:(id)arg1;	// IMP=0x0000000000590a29
- (void)_getEarliestDate:(id *)arg1 latestDate:(id *)arg2 forRangeOfContiguousCommentsEntriesAroundDate:(id)arg3;	// IMP=0x000000000059047f
- (id)_firstEntryRelativeToDate:(id)arg1 ascending:(_Bool)arg2 includeSameDate:(_Bool)arg3;	// IMP=0x000000000059015f
- (id)_firstEntryOnOrAfterDate:(id)arg1;	// IMP=0x0000000000590142
- (id)_firstEntryAfterDate:(id)arg1;	// IMP=0x0000000000590128
- (id)_firstEntryOnOrBeforeDate:(id)arg1;	// IMP=0x000000000059010e
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000005900a3

@end
