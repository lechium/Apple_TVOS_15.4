//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PLAssetContainer-Protocol.h>
#import <PhotosUICore/PXInboxModel-Protocol.h>
#import <PhotosUICore/PXInboxPreviewItem-Protocol.h>

@class NSArray, NSCountedSet, NSDate, NSIndexSet, NSOrderedSet, NSString, PLCloudFeedEntry, PLCloudSharedAlbumInvitationRecord, PLManagedAsset, PLPhotoLibrary;
@protocol PLCloudSharedAlbumProtocol;

@interface PXFeedSectionInfo : NSObject <PXInboxModel, PXInboxPreviewItem, PLAssetContainer>
{
    _Bool _loaded;	// 8 = 0x8
    _Bool _shouldBeVisibleWhenEmpty;	// 9 = 0x9
    NSString *_transientIdentifier;	// 16 = 0x10
    PLManagedAsset *_keyAsset;	// 24 = 0x18
    PLManagedAsset *_secondaryKeyAsset;	// 32 = 0x20
    PLManagedAsset *_tertiaryKeyAsset;	// 40 = 0x28
    PLCloudFeedEntry *_cloudFeedEntry;	// 48 = 0x30
    long long _sectionType;	// 56 = 0x38
    NSDate *_date;	// 64 = 0x40
    id <PLCloudSharedAlbumProtocol> _sharedAlbum;	// 72 = 0x48
    NSString *_albumTitle;	// 80 = 0x50
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;	// 88 = 0x58
    long long _numberOfItems;	// 96 = 0x60
    NSIndexSet *_excludedAssetIndexes;	// 104 = 0x68
    long long _cachedInboxModelType;	// 112 = 0x70
}

+ (void)endCachingSharedAlbumsByGUIDs;	// IMP=0x00000000001a1796
+ (void)beginCachingSharedAlbumsByGUIDs;	// IMP=0x00000000001a1758
+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;	// IMP=0x00000000001a152a
+ (id)defaultPreviewImage;	// IMP=0x0000000000919238
- (void).cxx_destruct;	// IMP=0x00000000001a100e
@property(nonatomic) long long cachedInboxModelType; // @synthesize cachedInboxModelType=_cachedInboxModelType;
@property(copy, nonatomic) NSIndexSet *excludedAssetIndexes; // @synthesize excludedAssetIndexes=_excludedAssetIndexes;
@property(nonatomic) _Bool shouldBeVisibleWhenEmpty; // @synthesize shouldBeVisibleWhenEmpty=_shouldBeVisibleWhenEmpty;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord; // @synthesize invitationRecord=_invitationRecord;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) id <PLCloudSharedAlbumProtocol> sharedAlbum; // @synthesize sharedAlbum=_sharedAlbum;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic) PLCloudFeedEntry *cloudFeedEntry; // @synthesize cloudFeedEntry=_cloudFeedEntry;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @synthesize tertiaryKeyAsset=_tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // @synthesize secondaryKeyAsset=_secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a0e0a
@property(readonly, copy, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
- (id)sharedAlbumWithGUID:(id)arg1;	// IMP=0x00000000001a0c77
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;	// IMP=0x00000000001a0b44
@property(readonly, nonatomic) _Bool isMine;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
- (long long)_inboxModelTypeForCloudCommentType;	// IMP=0x00000000001a0540
@property(readonly, nonatomic) long long inboxModelType;
- (long long)indexOfItemWithComment:(id)arg1;	// IMP=0x00000000001a035e
- (long long)indexOfItemWithAsset:(id)arg1;	// IMP=0x00000000001a034e
- (_Bool)containsAsset:(id)arg1;	// IMP=0x00000000001a0346
- (_Bool)areAllAssetsLiked;	// IMP=0x00000000001a033e
@property(readonly, nonatomic) NSCountedSet *countsByAssetDisplayType;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;	// IMP=0x00000000001a0318
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;	// IMP=0x00000000001a02fa
- (id)likesForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02f2
- (id)commentsForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02ea
- (id)commentTextForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02e2
- (id)commentForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02da
- (long long)indexOfFirstItemFromLastBatch;	// IMP=0x00000000001a02d2
- (id)batchIDForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02ca
- (id)captionForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02c2
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;	// IMP=0x00000000001a02ba
- (_Bool)hasPlayableAssetForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02b2
- (_Bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02aa
- (id)assetForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a02a2
- (long long)typeForItemAtIndex:(long long)arg1;	// IMP=0x00000000001a029a
- (void)updateFromCloudFeedEntry;	// IMP=0x00000000001a0152
- (void)reload;	// IMP=0x00000000001a0077
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (id)initWithCloudFeedEntry:(id)arg1;	// IMP=0x000000000019ffbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000918cca
- (id)_usersInvolvedForCoalescedEntry;	// IMP=0x0000000000918984
- (id)_usersInvolvedForResponse;	// IMP=0x00000000009188c1
- (id)_usersInvolvedForInvitation;	// IMP=0x00000000009187f9
- (id)_usersInvolvedForPost;	// IMP=0x000000000091871e
- (id)_usersInvolvedForComment;	// IMP=0x0000000000918590
- (id)_usersInvolvedForLike;	// IMP=0x0000000000918307
- (id)_usersInvolved;	// IMP=0x00000000009182b0
@property(readonly, nonatomic) NSString *keyCommentGUID;
@property(readonly, nonatomic) NSString *ownerEmail;
@property(readonly, nonatomic) NSString *ownerLastName;
@property(readonly, nonatomic) NSString *ownerFirstName;
@property(readonly, nonatomic) NSArray *assetsForOneUp;
- (void)fetchLeftPreviewItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000917c8d
@property(readonly, nonatomic) NSArray *leftPreviewItems;
@property(nonatomic, getter=isSeen) _Bool seen;
@property(readonly, nonatomic) _Bool userIsSender;
@property(readonly, copy, nonatomic) NSArray *senderNames;
@property(readonly, copy, nonatomic) NSString *inboxModelTitle;
@property(readonly, nonatomic) NSDate *creationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

