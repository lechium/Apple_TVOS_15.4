//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, NSValue, TVHKGaplessConfiguration, TVHKMediaEntityIdentifier, TVHKMediaItemCredits, VUIContentRating;

@interface TVHKMediaItem
{
}

+ (id)keyPathsForValuesAffectingPlayedState;	// IMP=0x000000000008122a
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000000081128
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000812dc
- (id)collectionItemIdentifier;	// IMP=0x00000000000810df
@property(readonly, nonatomic) TVHKMediaItemCredits *credits;
@property(readonly, copy, nonatomic) NSString *studio;
@property(readonly, copy, nonatomic) NSNumber *DRMUserID;
@property(readonly, copy, nonatomic) NSNumber *DRMKeyID;
@property(copy, nonatomic) NSNumber *bookmark;
@property(readonly, nonatomic) _Bool supportsBookmark;
@property(copy, nonatomic) NSNumber *skipCount;
@property(copy, nonatomic) NSNumber *playCount;
@property(copy, nonatomic) NSNumber *hasBeenPlayed;
- (unsigned long long)playedState;	// IMP=0x0000000000080e7c
- (void)setPlayedState:(unsigned long long)arg1;	// IMP=0x0000000000080d0e
@property(copy, nonatomic) NSDate *rentalPlaybackStartDate;
@property(copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSDate *lastPlayedDate;
- (id)releaseDate;	// IMP=0x0000000000080c78
@property(readonly, copy, nonatomic) NSDate *modifiedDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) TVHKGaplessConfiguration *gaplessConfiguration;
@property(readonly, copy, nonatomic) NSNumber *stopTime;
@property(readonly, copy, nonatomic) NSNumber *startTime;
@property(readonly, copy, nonatomic) NSNumber *volumeNormalization;
@property(readonly, copy, nonatomic) NSNumber *storefrontID;
@property(readonly, copy, nonatomic) NSNumber *storeID;
@property(readonly, copy, nonatomic) NSValue *dimensions;
@property(readonly, copy, nonatomic) NSString *format;
@property(readonly, nonatomic) VUIContentRating *contentRating;
@property(readonly, copy, nonatomic) NSNumber *videoQuality;
@property(readonly, copy, nonatomic) NSNumber *discNumber;
@property(readonly, copy, nonatomic) NSNumber *trackNumber;
@property(readonly, copy, nonatomic) NSNumber *episodeNumber;
@property(readonly, copy, nonatomic) TVHKMediaEntityIdentifier *showIdentifier;
@property(readonly, copy, nonatomic) NSString *sortShowTitle;
@property(readonly, copy, nonatomic) NSString *showTitle;
@property(readonly, copy, nonatomic) NSString *sortComposerTitle;
@property(readonly, copy, nonatomic) NSString *composerTitle;
@property(readonly, copy, nonatomic) TVHKMediaEntityIdentifier *albumArtistIdentifier;
@property(readonly, copy, nonatomic) NSString *sortAlbumArtistTitle;
@property(readonly, copy, nonatomic) NSString *albumArtistTitle;
@property(readonly, copy, nonatomic) NSString *sortArtistTitle;
@property(readonly, copy, nonatomic) NSString *artistTitle;
@property(readonly, copy, nonatomic) NSNumber *containerItemIdentifier;

@end

