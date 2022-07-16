//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPStoreArtworkRequestToken, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_downloadAssetDictionary;	// 8 = 0x8
    NSDictionary *_downloadMetadataDictionary;	// 16 = 0x10
    NSDictionary *_storeMusicAPIDictionary;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    _Bool _hasOverrideChildStorePlatformDictionaries;	// 40 = 0x28
    NSNumber *_hasSubscriptionOffer;	// 48 = 0x30
    NSArray *_overrideChildStorePlatformDictionaries;	// 56 = 0x38
    NSDictionary *_storePlatformDictionary;	// 64 = 0x40
    MPStoreItemMetadata *_parentStoreItemMetadata;	// 72 = 0x48
}

+ (id)storeServerCalendar;	// IMP=0x00000000000259d6
+ (id)artworkRequestTokenForStorePlatformArtworkValue:(id)arg1;	// IMP=0x0000000000025921
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025919
- (void).cxx_destruct;	// IMP=0x000000000002526b
@property(readonly, copy, nonatomic) MPStoreItemMetadata *parentStoreItemMetadata; // @synthesize parentStoreItemMetadata=_parentStoreItemMetadata;
- (id)_fetchValueFromStoreMusicAPIDictionary:(id)arg1;	// IMP=0x000000000002514d
- (id)_storePlatformLastModifiedDateFormatter;	// IMP=0x000000000002511d
- (id)_musicAPIDateFormatter;	// IMP=0x00000000000250ed
- (id)_storePlatformReleaseDateFormatter;	// IMP=0x00000000000250bd
- (id)metadataWithParentMetadata:(id)arg1;	// IMP=0x000000000002505f
- (id)metadataWithChildStorePlatformDictionaries:(id)arg1;	// IMP=0x0000000000024ffd
- (id)metadataByAppendingMetadata:(id)arg1;	// IMP=0x0000000000024d21
- (id)brickEditorialArtworkRequestToken;	// IMP=0x0000000000024ca3
- (id)flowcaseEditorialArtworkRequestToken;	// IMP=0x0000000000024bfe
- (id)movieArtworkRequestToken;	// IMP=0x0000000000024b80
- (id)tvShowArtworkRequestToken;	// IMP=0x0000000000024b02
- (id)tvEpisodeArtworkRequestToken;	// IMP=0x0000000000024abc
- (id)editorNotesWithStyle:(id)arg1;	// IMP=0x0000000000024932
@property(readonly, copy, nonatomic) NSString *shortDescriptionText;
- (id)descriptionTextWithStyle:(id)arg1;	// IMP=0x0000000000024756
- (id)childStorePlatformDictionaryForStoreID:(id)arg1;	// IMP=0x0000000000024335
- (id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1;	// IMP=0x000000000002428c
- (id)stationGlyphRequestTokenForStorePlatformDictionary:(id)arg1;	// IMP=0x0000000000024218
- (id)stationGlyphRequestTokenForStoreMusicAPIDictionary;	// IMP=0x00000000000241aa
- (id)artworkRequestTokenForStorePlatformDictionary:(id)arg1;	// IMP=0x0000000000024136
- (id)artworkRequestTokenForStoreMusicAPIDictionary;	// IMP=0x00000000000240c8
- (id)avatarArtworkRequestToken;	// IMP=0x0000000000024026
- (id)artworkRequestTokenForUberArtworkKind:(id)arg1;	// IMP=0x0000000000023f15
- (id)artworkRequestTokenForScreenshotArtwork;	// IMP=0x0000000000023e65
- (id)artworkRequestTokenForEditorialArtworkKind:(id)arg1;	// IMP=0x0000000000023d3b
@property(readonly, copy, nonatomic) NSArray *radioStationEvents;
@property(readonly, nonatomic, getter=isLive) _Bool live;
@property(readonly, copy, nonatomic) NSString *radioStationProviderName;
@property(readonly, nonatomic) _Bool isChart;
@property(readonly, copy, nonatomic) NSString *radioStationSubtype;
@property(readonly, nonatomic) long long radioStationTypeID;
@property(readonly, nonatomic, getter=isVerifiedPerson) _Bool verifiedPerson;
@property(readonly, nonatomic, getter=isPrivatePerson) _Bool privatePerson;
@property(readonly, copy, nonatomic) NSString *nameRaw;
@property(readonly, copy, nonatomic) NSString *handle;
@property(readonly, copy, nonatomic) NSString *workName;
@property(readonly, copy, nonatomic) NSString *videoSubtype;
@property(readonly, copy, nonatomic) NSString *versionHash;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSURL *shortURL;
@property(readonly, nonatomic) long long seasonNumber;
@property(readonly, nonatomic) long long episodeCount;
@property(readonly, nonatomic) long long trackNumber;
@property(readonly, nonatomic) long long trackCount;
@property(readonly, nonatomic) long long subscriptionAdamID;
@property(readonly, nonatomic) long long purchasedAdamID;
@property(readonly, copy, nonatomic) id socialProfileID;
@property(readonly, copy, nonatomic) NSArray *formerStoreAdamIDs;
@property(readonly, copy, nonatomic) id storeID;
@property(readonly, copy, nonatomic) NSString *cloudUniversalLibraryID;
@property(readonly, nonatomic) _Bool showComposer;
@property(readonly, nonatomic) _Bool shouldReportPlayEvents;
@property(readonly, copy, nonatomic) NSNumber *shouldBookmarkPlayPosition;
@property(readonly, copy, nonatomic) NSString *shortName;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSNumber *popularity;
@property(readonly, copy, nonatomic) NSArray *playlistIdentifiers;
@property(readonly, copy, nonatomic) NSArray *offers;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSArray *movieClips;
@property(readonly, nonatomic) long long movieClipsCount;
@property(readonly, nonatomic) long long movementNumber;
@property(readonly, copy, nonatomic) NSString *movementName;
@property(readonly, nonatomic) long long movementCount;
@property(readonly, nonatomic) MPStoreArtworkRequestToken *latestAlbumArtworkRequestToken;
@property(readonly, copy, nonatomic) NSString *iTunesBrandType;
@property(readonly, copy, nonatomic) NSString *personalMixSortKey;
@property(readonly, copy, nonatomic) NSString *playlistType;
@property(readonly, copy, nonatomic) NSString *itemKind;
@property(readonly, nonatomic) NSArray *audioTraits;
@property(readonly, nonatomic, getter=isStoreRedownloadable) _Bool storeRedownloadable;
@property(readonly, nonatomic) _Bool isPreorder;
@property(readonly, nonatomic, getter=isMasteredForiTunes) _Bool masteredForiTunes;
@property(readonly, nonatomic, getter=isCompilation) _Bool compilation;
@property(readonly, nonatomic) long long explicitRating;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, copy, nonatomic) NSArray *genreNames;
@property(readonly, nonatomic) _Bool hasSubscriptionOffer;
@property(readonly, nonatomic) _Bool hasSocialPosts;
@property(readonly, nonatomic) _Bool hasTimeSyncedLyrics;
@property(readonly, nonatomic) _Bool hasLyrics;
@property(readonly, nonatomic) _Bool hasArtistBiography;
@property(readonly, copy, nonatomic) NSDictionary *importableStorePlatformDictionary;
@property(readonly, copy, nonatomic) NSDictionary *effectiveStorePlatformDictionary;
@property(readonly, copy, nonatomic) NSString *shortEditorNotes;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSString *editorNotes;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long discNumber;
@property(readonly, nonatomic) long long discCount;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) id curatorID;
@property(readonly, copy, nonatomic) NSString *curatorHandle;
@property(readonly, copy, nonatomic) NSString *curatorName;
@property(readonly, copy, nonatomic) NSString *copyrightText;
@property(readonly, copy, nonatomic) NSString *composerName;
@property(readonly, copy, nonatomic) id collectionStoreID;
@property(readonly, copy, nonatomic) NSString *collectionName;
@property(readonly, nonatomic) unsigned long long cloudID;
@property(readonly, copy, nonatomic) NSString *cloudAlbumID;
@property(readonly, copy, nonatomic) NSArray *childStoreItemMetadatas;
@property(readonly, copy, nonatomic) NSArray *childrenStoreIDs;
@property(readonly, nonatomic, getter=isBeats1) _Bool beats1;
@property(readonly, copy, nonatomic) NSArray *artworkTrackIDs;
@property(readonly, nonatomic) MPStoreArtworkRequestToken *stationGlyphRequestToken;
@property(readonly, nonatomic) MPStoreArtworkRequestToken *artworkRequestToken;
@property(readonly, copy, nonatomic) NSString *artistUploadedContentType;
@property(readonly, copy, nonatomic) id artistStoreID;
@property(readonly, copy, nonatomic) NSString *artistName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d68b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d5b5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d2a1
- (id)description;	// IMP=0x000000000001d191
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 expirationDate:(id)arg3;	// IMP=0x000000000001d123
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2;	// IMP=0x000000000001d10e
- (id)initWithStorePlatformDictionary:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000000001d055
- (id)initWithStorePlatformDictionary:(id)arg1;	// IMP=0x000000000001d041
- (id)initWithStoreMusicAPIDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2;	// IMP=0x000000000001cfe2
- (id)initWithStoreMusicAPIDictionary:(id)arg1;	// IMP=0x000000000001cf6f
- (id)initWithDownloadAssetDictionary:(id)arg1;	// IMP=0x000000000001ceb1
- (_Bool)hasMetadataForRequestReason:(unsigned long long)arg1;	// IMP=0x00000000001078b3
@property(readonly, copy, nonatomic) NSString *cacheableItemIdentifier;

@end

