//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, _MRAudioFormatProtobuf, _MRAudioRouteProtobuf;

__attribute__((visibility("hidden")))
@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying>
{
    double _duration;	// 8 = 0x8
    double _elapsedTime;	// 16 = 0x10
    double _elapsedTimeTimestamp;	// 24 = 0x18
    long long _iTunesStoreAlbumIdentifier;	// 32 = 0x20
    long long _iTunesStoreArtistIdentifier;	// 40 = 0x28
    long long _iTunesStoreIdentifier;	// 48 = 0x30
    long long _iTunesStoreSubscriptionIdentifier;	// 56 = 0x38
    double _inferredTimestamp;	// 64 = 0x40
    long long _legacyUniqueIdentifier;	// 72 = 0x48
    long long _radioStationIdentifier;	// 80 = 0x50
    double _releaseDate;	// 88 = 0x58
    double _startTime;	// 96 = 0x60
    _MRAudioFormatProtobuf *_activeFormat;	// 104 = 0x68
    int _activeFormatJustification;	// 112 = 0x70
    NSString *_albumArtistName;	// 120 = 0x78
    NSString *_albumName;	// 128 = 0x80
    int _albumTraits;	// 136 = 0x88
    NSString *_albumYear;	// 144 = 0x90
    NSMutableArray *_alternativeFormats;	// 152 = 0x98
    NSData *_appMetricsData;	// 160 = 0xa0
    int _artworkDataHeightDeprecated;	// 168 = 0xa8
    int _artworkDataWidthDeprecated;	// 172 = 0xac
    NSString *_artworkFileURL;	// 176 = 0xb0
    NSString *_artworkIdentifier;	// 184 = 0xb8
    NSString *_artworkMIMEType;	// 192 = 0xc0
    NSString *_artworkURL;	// 200 = 0xc8
    NSData *_artworkURLTemplatesData;	// 208 = 0xd0
    NSString *_assetURLString;	// 216 = 0xd8
    _MRAudioRouteProtobuf *_audioRoute;	// 224 = 0xe0
    NSString *_brandIdentifier;	// 232 = 0xe8
    int _chapterCount;	// 240 = 0xf0
    NSString *_collectionIdentifier;	// 248 = 0xf8
    NSData *_collectionInfoData;	// 256 = 0x100
    NSString *_composer;	// 264 = 0x108
    NSString *_contentIdentifier;	// 272 = 0x110
    NSData *_currentPlaybackDateData;	// 280 = 0x118
    float _defaultPlaybackRate;	// 288 = 0x120
    NSData *_deviceSpecificUserInfoData;	// 296 = 0x128
    NSString *_directorName;	// 304 = 0x130
    int _discNumber;	// 312 = 0x138
    float _downloadProgress;	// 316 = 0x13c
    int _downloadState;	// 320 = 0x140
    int _editingStyleFlags;	// 324 = 0x144
    int _episodeNumber;	// 328 = 0x148
    int _episodeType;	// 332 = 0x14c
    int _formatTierPreference;	// 336 = 0x150
    NSString *_genre;	// 344 = 0x158
    NSString *_localizedContentRating;	// 352 = 0x160
    NSString *_localizedDurationString;	// 360 = 0x168
    NSString *_lyricsURL;	// 368 = 0x170
    int _mediaSubType;	// 376 = 0x178
    int _mediaType;	// 380 = 0x17c
    NSData *_nowPlayingInfoData;	// 384 = 0x180
    int _numberOfSections;	// 392 = 0x188
    NSString *_participantIdentifier;	// 400 = 0x190
    NSString *_participantName;	// 408 = 0x198
    int _playCount;	// 416 = 0x1a0
    float _playbackProgress;	// 420 = 0x1a4
    float _playbackRate;	// 424 = 0x1a8
    int _playlistTraits;	// 428 = 0x1ac
    int _playlistType;	// 432 = 0x1b0
    _MRAudioFormatProtobuf *_preferredFormat;	// 440 = 0x1b8
    NSString *_profileIdentifier;	// 448 = 0x1c0
    NSData *_purchaseInfoData;	// 456 = 0x1c8
    NSString *_radioStationName;	// 464 = 0x1d0
    NSString *_radioStationString;	// 472 = 0x1d8
    int _radioStationType;	// 480 = 0x1e0
    int _seasonNumber;	// 484 = 0x1e4
    NSString *_seriesName;	// 488 = 0x1e8
    NSString *_serviceIdentifier;	// 496 = 0x1f0
    int _songTraits;	// 504 = 0x1f8
    NSString *_subtitle;	// 512 = 0x200
    NSString *_title;	// 520 = 0x208
    int _totalDiscCount;	// 528 = 0x210
    int _totalTrackCount;	// 532 = 0x214
    NSString *_trackArtistName;	// 536 = 0x218
    int _trackNumber;	// 544 = 0x220
    NSData *_userInfoData;	// 552 = 0x228
    _Bool _artworkAvailable;	// 560 = 0x230
    _Bool _hasAlternativeFormats;	// 561 = 0x231
    _Bool _infoAvailable;	// 562 = 0x232
    _Bool _isAdvertisement;	// 563 = 0x233
    _Bool _isAlwaysLive;	// 564 = 0x234
    _Bool _isContainer;	// 565 = 0x235
    _Bool _isCurrentlyPlaying;	// 566 = 0x236
    _Bool _isExplicitItem;	// 567 = 0x237
    _Bool _isInWishList;	// 568 = 0x238
    _Bool _isLiked;	// 569 = 0x239
    _Bool _isLoading;	// 570 = 0x23a
    _Bool _isPlayable;	// 571 = 0x23b
    _Bool _isSharable;	// 572 = 0x23c
    _Bool _isSteerable;	// 573 = 0x23d
    _Bool _isStreamingContent;	// 574 = 0x23e
    _Bool _languageOptionsAvailable;	// 575 = 0x23f
    _Bool _lyricsAvailable;	// 576 = 0x240
    struct {
        unsigned int duration:1;
        unsigned int elapsedTime:1;
        unsigned int elapsedTimeTimestamp:1;
        unsigned int iTunesStoreAlbumIdentifier:1;
        unsigned int iTunesStoreArtistIdentifier:1;
        unsigned int iTunesStoreIdentifier:1;
        unsigned int iTunesStoreSubscriptionIdentifier:1;
        unsigned int inferredTimestamp:1;
        unsigned int legacyUniqueIdentifier:1;
        unsigned int radioStationIdentifier:1;
        unsigned int releaseDate:1;
        unsigned int startTime:1;
        unsigned int activeFormatJustification:1;
        unsigned int albumTraits:1;
        unsigned int artworkDataHeightDeprecated:1;
        unsigned int artworkDataWidthDeprecated:1;
        unsigned int chapterCount:1;
        unsigned int defaultPlaybackRate:1;
        unsigned int discNumber:1;
        unsigned int downloadProgress:1;
        unsigned int downloadState:1;
        unsigned int editingStyleFlags:1;
        unsigned int episodeNumber:1;
        unsigned int episodeType:1;
        unsigned int formatTierPreference:1;
        unsigned int mediaSubType:1;
        unsigned int mediaType:1;
        unsigned int numberOfSections:1;
        unsigned int playCount:1;
        unsigned int playbackProgress:1;
        unsigned int playbackRate:1;
        unsigned int playlistTraits:1;
        unsigned int playlistType:1;
        unsigned int radioStationType:1;
        unsigned int seasonNumber:1;
        unsigned int songTraits:1;
        unsigned int totalDiscCount:1;
        unsigned int totalTrackCount:1;
        unsigned int trackNumber:1;
        unsigned int artworkAvailable:1;
        unsigned int hasAlternativeFormats:1;
        unsigned int infoAvailable:1;
        unsigned int isAdvertisement:1;
        unsigned int isAlwaysLive:1;
        unsigned int isContainer:1;
        unsigned int isCurrentlyPlaying:1;
        unsigned int isExplicitItem:1;
        unsigned int isInWishList:1;
        unsigned int isLiked:1;
        unsigned int isLoading:1;
        unsigned int isPlayable:1;
        unsigned int isSharable:1;
        unsigned int isSteerable:1;
        unsigned int isStreamingContent:1;
        unsigned int languageOptionsAvailable:1;
        unsigned int lyricsAvailable:1;
    } _has;	// 580 = 0x244
}

- (void).cxx_destruct;	// IMP=0x000000000005b893
- (unsigned long long)hash;	// IMP=0x00000000000596d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005817d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057096
- (void)writeTo:(id)arg1;	// IMP=0x0000000000055fe5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000055fd8
- (id)dictionaryRepresentation;	// IMP=0x0000000000051c4b
- (id)description;	// IMP=0x0000000000051b9c

@end

