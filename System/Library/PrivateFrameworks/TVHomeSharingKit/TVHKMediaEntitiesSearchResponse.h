//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVHKMediaEntitiesSearchResponse : NSObject
{
    NSArray *_movies;	// 8 = 0x8
    NSArray *_movieRentals;	// 16 = 0x10
    NSArray *_shows;	// 24 = 0x18
    NSArray *_showEpisodes;	// 32 = 0x20
    NSArray *_musicAlbums;	// 40 = 0x28
    NSArray *_musicAlbumArtists;	// 48 = 0x30
    NSArray *_musicSongs;	// 56 = 0x38
    NSArray *_musicVideos;	// 64 = 0x40
    NSArray *_podcasts;	// 72 = 0x48
    NSArray *_podcastEpisodes;	// 80 = 0x50
    NSArray *_iTunesUCourses;	// 88 = 0x58
    NSArray *_iTunesUEpisodes;	// 96 = 0x60
    NSArray *_audiobooks;	// 104 = 0x68
    NSArray *_audiobookChapters;	// 112 = 0x70
    NSArray *_homeVideos;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000006784d
@property(copy, nonatomic) NSArray *homeVideos; // @synthesize homeVideos=_homeVideos;
@property(copy, nonatomic) NSArray *audiobookChapters; // @synthesize audiobookChapters=_audiobookChapters;
@property(copy, nonatomic) NSArray *audiobooks; // @synthesize audiobooks=_audiobooks;
@property(copy, nonatomic) NSArray *iTunesUEpisodes; // @synthesize iTunesUEpisodes=_iTunesUEpisodes;
@property(copy, nonatomic) NSArray *iTunesUCourses; // @synthesize iTunesUCourses=_iTunesUCourses;
@property(copy, nonatomic) NSArray *podcastEpisodes; // @synthesize podcastEpisodes=_podcastEpisodes;
@property(copy, nonatomic) NSArray *podcasts; // @synthesize podcasts=_podcasts;
@property(copy, nonatomic) NSArray *musicVideos; // @synthesize musicVideos=_musicVideos;
@property(copy, nonatomic) NSArray *musicSongs; // @synthesize musicSongs=_musicSongs;
@property(copy, nonatomic) NSArray *musicAlbumArtists; // @synthesize musicAlbumArtists=_musicAlbumArtists;
@property(copy, nonatomic) NSArray *musicAlbums; // @synthesize musicAlbums=_musicAlbums;
@property(copy, nonatomic) NSArray *showEpisodes; // @synthesize showEpisodes=_showEpisodes;
@property(copy, nonatomic) NSArray *shows; // @synthesize shows=_shows;
@property(copy, nonatomic) NSArray *movieRentals; // @synthesize movieRentals=_movieRentals;
@property(copy, nonatomic) NSArray *movies; // @synthesize movies=_movies;
- (id)description;	// IMP=0x00000000000672b3
@property(readonly, nonatomic) unsigned long long totalMediaEntitiesCount;
- (_Bool)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(_Bool)arg3;	// IMP=0x0000000000066454
- (id)init;	// IMP=0x0000000000066359

@end

