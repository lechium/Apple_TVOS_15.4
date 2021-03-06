//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSDateComponents, NSString;

@interface INMessageLinkMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_siteName;	// 8 = 0x8
    NSString *_summary;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_itemType;	// 32 = 0x20
    NSString *_originalURL;	// 40 = 0x28
    NSArray *_imageURLs;	// 48 = 0x30
    NSArray *_iconURLs;	// 56 = 0x38
    NSString *_creator;	// 64 = 0x40
    long long _linkMediaType;	// 72 = 0x48
    NSString *_iTunesStoreIdentifier;	// 80 = 0x50
    NSString *_iTunesStoreFrontIdentifier;	// 88 = 0x58
    NSString *_songTitle;	// 96 = 0x60
    NSString *_songArtist;	// 104 = 0x68
    NSString *_songAlbum;	// 112 = 0x70
    NSString *_albumName;	// 120 = 0x78
    NSString *_albumArtist;	// 128 = 0x80
    NSString *_musicVideoName;	// 136 = 0x88
    NSString *_musicVideoArtist;	// 144 = 0x90
    NSString *_artistName;	// 152 = 0x98
    NSString *_artistGenre;	// 160 = 0xa0
    NSString *_playlistName;	// 168 = 0xa8
    NSString *_playlistCurator;	// 176 = 0xb0
    NSString *_radioName;	// 184 = 0xb8
    NSString *_radioCurator;	// 192 = 0xc0
    NSString *_softwareName;	// 200 = 0xc8
    NSString *_softwareGenre;	// 208 = 0xd0
    NSString *_softwarePlatform;	// 216 = 0xd8
    NSString *_bookName;	// 224 = 0xe0
    NSString *_bookAuthor;	// 232 = 0xe8
    NSString *_audioBookName;	// 240 = 0xf0
    NSString *_audioBookAuthor;	// 248 = 0xf8
    NSString *_audioBookNarrator;	// 256 = 0x100
    NSString *_podcastName;	// 264 = 0x108
    NSString *_podcastArtist;	// 272 = 0x110
    NSString *_podcastEpisodeName;	// 280 = 0x118
    NSString *_podcastEpisodePodcastName;	// 288 = 0x120
    NSString *_podcastEpisodeArtist;	// 296 = 0x128
    NSDateComponents *_podcastEpisodeReleaseDate;	// 304 = 0x130
    NSString *_tvEpisodeEpisodeName;	// 312 = 0x138
    NSString *_tvEpisodeSeasonName;	// 320 = 0x140
    NSString *_tvEpisodeGenre;	// 328 = 0x148
    NSString *_tvSeasonName;	// 336 = 0x150
    NSString *_tvSeasonGenre;	// 344 = 0x158
    NSString *_movieName;	// 352 = 0x160
    NSString *_movieGenre;	// 360 = 0x168
    NSString *_tvShowName;	// 368 = 0x170
    NSString *_movieBundleName;	// 376 = 0x178
    NSString *_movieBundleGenre;	// 384 = 0x180
    NSString *_appleTvTitle;	// 392 = 0x188
    NSString *_appleTvSubtitle;	// 400 = 0x190
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0000000000389850
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000389848
- (void).cxx_destruct;	// IMP=0x00000000003895b2
@property(copy, nonatomic) NSString *appleTvSubtitle; // @synthesize appleTvSubtitle=_appleTvSubtitle;
@property(copy, nonatomic) NSString *appleTvTitle; // @synthesize appleTvTitle=_appleTvTitle;
@property(copy, nonatomic) NSString *movieBundleGenre; // @synthesize movieBundleGenre=_movieBundleGenre;
@property(copy, nonatomic) NSString *movieBundleName; // @synthesize movieBundleName=_movieBundleName;
@property(copy, nonatomic) NSString *tvShowName; // @synthesize tvShowName=_tvShowName;
@property(copy, nonatomic) NSString *movieGenre; // @synthesize movieGenre=_movieGenre;
@property(copy, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
@property(copy, nonatomic) NSString *tvSeasonGenre; // @synthesize tvSeasonGenre=_tvSeasonGenre;
@property(copy, nonatomic) NSString *tvSeasonName; // @synthesize tvSeasonName=_tvSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeGenre; // @synthesize tvEpisodeGenre=_tvEpisodeGenre;
@property(copy, nonatomic) NSString *tvEpisodeSeasonName; // @synthesize tvEpisodeSeasonName=_tvEpisodeSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeEpisodeName; // @synthesize tvEpisodeEpisodeName=_tvEpisodeEpisodeName;
@property(copy, nonatomic) NSDateComponents *podcastEpisodeReleaseDate; // @synthesize podcastEpisodeReleaseDate=_podcastEpisodeReleaseDate;
@property(copy, nonatomic) NSString *podcastEpisodeArtist; // @synthesize podcastEpisodeArtist=_podcastEpisodeArtist;
@property(copy, nonatomic) NSString *podcastEpisodePodcastName; // @synthesize podcastEpisodePodcastName=_podcastEpisodePodcastName;
@property(copy, nonatomic) NSString *podcastEpisodeName; // @synthesize podcastEpisodeName=_podcastEpisodeName;
@property(copy, nonatomic) NSString *podcastArtist; // @synthesize podcastArtist=_podcastArtist;
@property(copy, nonatomic) NSString *podcastName; // @synthesize podcastName=_podcastName;
@property(copy, nonatomic) NSString *audioBookNarrator; // @synthesize audioBookNarrator=_audioBookNarrator;
@property(copy, nonatomic) NSString *audioBookAuthor; // @synthesize audioBookAuthor=_audioBookAuthor;
@property(copy, nonatomic) NSString *audioBookName; // @synthesize audioBookName=_audioBookName;
@property(copy, nonatomic) NSString *bookAuthor; // @synthesize bookAuthor=_bookAuthor;
@property(copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy, nonatomic) NSString *softwarePlatform; // @synthesize softwarePlatform=_softwarePlatform;
@property(copy, nonatomic) NSString *softwareGenre; // @synthesize softwareGenre=_softwareGenre;
@property(copy, nonatomic) NSString *softwareName; // @synthesize softwareName=_softwareName;
@property(copy, nonatomic) NSString *radioCurator; // @synthesize radioCurator=_radioCurator;
@property(copy, nonatomic) NSString *radioName; // @synthesize radioName=_radioName;
@property(copy, nonatomic) NSString *playlistCurator; // @synthesize playlistCurator=_playlistCurator;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(copy, nonatomic) NSString *artistGenre; // @synthesize artistGenre=_artistGenre;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *musicVideoArtist; // @synthesize musicVideoArtist=_musicVideoArtist;
@property(copy, nonatomic) NSString *musicVideoName; // @synthesize musicVideoName=_musicVideoName;
@property(copy, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *songAlbum; // @synthesize songAlbum=_songAlbum;
@property(copy, nonatomic) NSString *songArtist; // @synthesize songArtist=_songArtist;
@property(copy, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(copy, nonatomic) NSString *iTunesStoreFrontIdentifier; // @synthesize iTunesStoreFrontIdentifier=_iTunesStoreFrontIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property(nonatomic) long long linkMediaType; // @synthesize linkMediaType=_linkMediaType;
@property(copy, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(copy, nonatomic) NSArray *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(copy, nonatomic) NSString *originalURL; // @synthesize originalURL=_originalURL;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000387d3d
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000387c61
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0000000000386f43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000386aa9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038509c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000385091
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003848c5
@property(readonly) unsigned long long hash;
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45;	// IMP=0x00000000003842d0
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45 tvShowName:(id)arg46 movieBundleName:(id)arg47 movieBundleGenre:(id)arg48 appleTvTitle:(id)arg49 appleTvSubtitle:(id)arg50;	// IMP=0x0000000000383877
- (id)init;	// IMP=0x0000000000383848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

