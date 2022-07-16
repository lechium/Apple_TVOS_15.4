//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaItemArtwork, MPNowPlayingInfoAudioFormat, MPNowPlayingInfoAudioRoute, MPNowPlayingInfoLyricsItem, NSArray, NSDate, NSDictionary, NSString;
@protocol MPNowPlayingContentItemArtworkDataSource;

@interface MPNowPlayingContentItem <NSCopying>
{
    NSDictionary *_nowPlayingInfo;	// 8 = 0x8
    _Bool _sharableItem;	// 16 = 0x10
    id <MPNowPlayingContentItemArtworkDataSource> _artworkDataSource;	// 24 = 0x18
}

+ (_Bool)shouldPushArtworkData;	// IMP=0x00000000002132a9
- (void).cxx_destruct;	// IMP=0x0000000000211718
@property(retain, nonatomic) id <MPNowPlayingContentItemArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(nonatomic, getter=isSharableItem) _Bool sharableItem; // @synthesize sharableItem=_sharableItem;
@property(nonatomic, getter=isExplicitItem) _Bool explicitItem;
- (void)_mergeContentItem:(id)arg1;	// IMP=0x0000000000211640
@property(copy, nonatomic) NSArray *alternativeFormats;
@property(copy, nonatomic) MPNowPlayingInfoAudioRoute *audioRoute;
@property(nonatomic) unsigned long long formatTierPreference;
@property(nonatomic) long long activeFormatJustification;
@property(copy, nonatomic) MPNowPlayingInfoAudioFormat *activeFormat;
@property(copy, nonatomic) MPNowPlayingInfoAudioFormat *preferredFormat;
@property(nonatomic) unsigned long long playlistTraits;
@property(nonatomic) unsigned long long albumTraits;
@property(nonatomic) unsigned long long songTraits;
- (void)invalidateArtwork;	// IMP=0x000000000021081c
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @dynamic artwork;
@property(nonatomic) _Bool hasArtwork;
- (void)invalidateLyrics;	// IMP=0x0000000000210593
@property(copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
@property(nonatomic) _Bool hasLyrics;
- (void)invalidateDescription;	// IMP=0x000000000021021d
@property(nonatomic) _Bool hasDescription;
@property(copy, nonatomic) NSArray *sections;
- (void)invalidateLanguageOptions;	// IMP=0x000000000020fec7
@property(copy, nonatomic) NSArray *currentLanguageOptions;
@property(copy, nonatomic) NSArray *availableLanguageOptions;
@property(nonatomic) _Bool hasLanguageOptions;
- (void)setElapsedTime:(double)arg1 playbackRate:(float)arg2;	// IMP=0x000000000020faf2
@property(readonly, nonatomic) double calculatedElapsedTime;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(readonly, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property(nonatomic) unsigned long long mediaType;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(readonly, nonatomic) double elapsedTimeTimestamp;
@property(nonatomic) float playbackRate;
@property(nonatomic) double elapsedTime;
@property(nonatomic) long long editingStyleFlags;
@property(nonatomic) long long episodeType;
@property(nonatomic) long long radioStationType;
@property(nonatomic) long long playlistType;
@property(nonatomic) long long legacyUniqueID;
@property(nonatomic) long long storeSubscriptionID;
@property(nonatomic) long long storeID;
@property(nonatomic) long long storeArtistID;
@property(nonatomic) long long storeAlbumID;
@property(nonatomic) long long numberOfChildren;
@property(nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic, getter=isSteerable) _Bool steerable;
@property(nonatomic, getter=isAdvertisement) _Bool advertisement;
@property(nonatomic, getter=isAlwaysLiveItem) _Bool alwaysLiveItem;
@property(copy, nonatomic) NSString *serviceIdentifier;
@property(copy, nonatomic) NSString *externalContentIdentifier;
@property(copy, nonatomic) NSString *radioStationStringIdentifier;
@property(copy, nonatomic) NSString *genreName;
@property(copy, nonatomic) NSString *composerName;
@property(nonatomic) long long trackNumber;
@property(nonatomic) long long totalTrackCount;
@property(nonatomic) long long totalDiscCount;
@property(nonatomic) long long seasonNumber;
@property(nonatomic) long long playCount;
@property(nonatomic) long long episodeNumber;
@property(nonatomic) long long discNumber;
@property(nonatomic) float defaultPlaybackRate;
@property(nonatomic) double startTime;
@property(nonatomic) double duration;
@property(copy, nonatomic) NSString *localizedDurationString;
@property(copy, nonatomic) NSString *artworkIdentifier;
@property(copy, nonatomic) NSArray *artworkURLTemplates;
@property(copy, nonatomic) NSString *artworkURL;
@property(copy, nonatomic) NSString *trackArtistName;
@property(copy, nonatomic) NSString *seriesName;
@property(copy, nonatomic) NSString *radioStationName;
@property(copy, nonatomic) NSString *profileIdentifier;
@property(copy, nonatomic) NSString *localizedContentRating;
@property(copy, nonatomic) NSString *info;
@property(copy, nonatomic) NSString *directorName;
@property(copy, nonatomic) NSString *collectionIdentifier;
@property(copy, nonatomic) NSString *albumYear;
@property(copy, nonatomic) NSString *albumName;
@property(copy, nonatomic) NSString *albumArtistName;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(copy, nonatomic) NSDate *releaseDate;
- (id)copyWithNewIdentifier:(id)arg1;	// IMP=0x000000000020c262
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020c1f8

@end
