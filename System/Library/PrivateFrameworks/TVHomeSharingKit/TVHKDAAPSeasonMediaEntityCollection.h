//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, TVHKDAAPSeasonMediaEntityCollectionIdentifier, TVHKMediaEntityIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPSeasonMediaEntityCollection
{
    _Bool _splitSeason;	// 8 = 0x8
    TVHKMediaEntityType *_type;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_albumTitle;	// 32 = 0x20
    NSString *_sortAlbumTitle;	// 40 = 0x28
    TVHKMediaEntityIdentifier *_albumIdentifier;	// 48 = 0x30
    NSArray *_episodes;	// 56 = 0x38
    NSString *_episodeAlbumTitle;	// 64 = 0x40
    NSArray *_episodesSortedByAddedDate;	// 72 = 0x48
    NSArray *_episodesSortedByReleaseDate;	// 80 = 0x50
    TVHKDAAPSeasonMediaEntityCollectionIdentifier *_seasonIdentifier;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000075cca
@property(retain, nonatomic) TVHKDAAPSeasonMediaEntityCollectionIdentifier *seasonIdentifier; // @synthesize seasonIdentifier=_seasonIdentifier;
@property(copy, nonatomic) NSArray *episodesSortedByReleaseDate; // @synthesize episodesSortedByReleaseDate=_episodesSortedByReleaseDate;
@property(copy, nonatomic) NSArray *episodesSortedByAddedDate; // @synthesize episodesSortedByAddedDate=_episodesSortedByAddedDate;
@property(copy, nonatomic) NSString *episodeAlbumTitle; // @synthesize episodeAlbumTitle=_episodeAlbumTitle;
@property(readonly, copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(nonatomic, getter=isSplitSeason) _Bool splitSeason; // @synthesize splitSeason=_splitSeason;
- (id)type;	// IMP=0x0000000000075c1f
- (_Bool)_allEpisodesHaveReleaseDates;	// IMP=0x0000000000075b90
- (id)_latestEpisodeWithReleaseDate;	// IMP=0x0000000000075b40
- (id)_earliestEpisodeWithReleaseDate;	// IMP=0x0000000000075af0
- (id)_lastAddedEpisode;	// IMP=0x0000000000075aa0
- (id)_firstAddedEpisode;	// IMP=0x0000000000075a50
- (id)_titleIgnoringSeasonNumber;	// IMP=0x0000000000075956
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000074e7f
- (id)mediaItemCount;	// IMP=0x0000000000074e0f
- (id)addedToDate;	// IMP=0x0000000000074dbf
- (unsigned long long)imageNonPersistentID;	// IMP=0x0000000000074d51
- (unsigned long long)persistentID;	// IMP=0x0000000000074d49
- (unsigned long long)nonPersistentID;	// IMP=0x0000000000074d41
- (unsigned long long)protocol;	// IMP=0x0000000000074d39
- (id)imageIdentifier;	// IMP=0x0000000000074cbf
- (id)releaseDate;	// IMP=0x0000000000074c4b
- (id)addedDate;	// IMP=0x0000000000074bfb
- (id)contentDescription;	// IMP=0x0000000000074b81
- (id)seasonNumber;	// IMP=0x0000000000074b07
- (id)albumIdentifier;	// IMP=0x0000000000074af2
- (id)sortAlbumTitle;	// IMP=0x0000000000074add
- (id)albumTitle;	// IMP=0x0000000000074ac8
- (unsigned long long)playedState;	// IMP=0x0000000000074a8d
- (void)setPlayedState:(unsigned long long)arg1;	// IMP=0x00000000000749ec
- (id)genreTitle;	// IMP=0x0000000000074972
- (id)title;	// IMP=0x0000000000074797
- (id)identifier;	// IMP=0x0000000000074785
- (id)initWithMediaServerIdentifier:(id)arg1 seasonIdentifier:(id)arg2 show:(id)arg3 episodes:(id)arg4 isSplitSeason:(_Bool)arg5;	// IMP=0x000000000007433f
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x00000000000742d0

@end

