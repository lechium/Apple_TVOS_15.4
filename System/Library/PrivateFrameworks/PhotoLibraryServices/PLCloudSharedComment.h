//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, PLCloudFeedCommentsEntry, PLManagedAsset;

@interface PLCloudSharedComment
{
}

+ (id)cloudSharedCommentsWithCommentDate:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000000046912c
+ (id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000468fb4
+ (id)cloudSharedCommentsWithGUIDs:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000468ef8
+ (id)_cloudSharedCommentsWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000000468d50
+ (id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(_Bool)arg4 isMyComment:(_Bool)arg5 inLibrary:(id)arg6;	// IMP=0x0000000000468b00
+ (id)entityName;	// IMP=0x0000000000468af3
- (_Bool)matchesCommentText:(id)arg1 isLike:(_Bool)arg2;	// IMP=0x00000000004689a4
@property(readonly, nonatomic) __weak NSString *commenterFullName;
@property(readonly, nonatomic) __weak NSString *commenterLastName;
@property(readonly, nonatomic) __weak NSString *commenterFirstName;
@property(readonly, nonatomic) __weak NSString *commenterEmail;
- (void)performDelete;	// IMP=0x0000000000468676
- (_Bool)canBeDeletedByUser;	// IMP=0x00000000004685f5
- (id)commenterDisplayName;	// IMP=0x00000000004684df
- (_Bool)isInterestingForAlbumsSorting;	// IMP=0x0000000000468471
- (_Bool)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(_Bool *)arg2;	// IMP=0x0000000000468316
- (_Bool)_isInterestingToUser;	// IMP=0x0000000000468179
@property(readonly, nonatomic) _Bool isLikeBoolValue;
@property(readonly, nonatomic) __weak PLCloudFeedCommentsEntry *cloudFeedEntry;
- (id)asset;	// IMP=0x0000000000468070
- (void)prepareForDeletion;	// IMP=0x0000000000467fa8
- (void)willSave;	// IMP=0x0000000000467ef4
- (void)awakeFromInsert;	// IMP=0x0000000000467e7f
- (id)init;	// IMP=0x0000000000467e50

// Remaining properties
@property(retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedCommentEntry; // @dynamic cloudFeedCommentEntry;
@property(retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry; // @dynamic cloudFeedLikeCommentEntry;
@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property(retain, nonatomic) NSDate *commentClientDate; // @dynamic commentClientDate;
@property(retain, nonatomic) NSDate *commentDate; // @dynamic commentDate;
@property(retain, nonatomic) NSString *commentText; // @dynamic commentText;
@property(retain, nonatomic) NSString *commentType; // @dynamic commentType;
@property(retain, nonatomic) PLManagedAsset *commentedAsset; // @dynamic commentedAsset;
@property(retain, nonatomic) NSString *commenterHashedPersonID; // @dynamic commenterHashedPersonID;
@property(retain, nonatomic) NSNumber *isBatchComment; // @dynamic isBatchComment;
@property(retain, nonatomic) NSNumber *isCaption; // @dynamic isCaption;
@property(retain, nonatomic) NSNumber *isDeletable; // @dynamic isDeletable;
@property(retain, nonatomic) NSNumber *isLike; // @dynamic isLike;
@property(retain, nonatomic) NSNumber *isMyComment; // @dynamic isMyComment;
@property(retain, nonatomic) PLManagedAsset *likedAsset; // @dynamic likedAsset;

@end

