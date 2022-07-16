//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPPlaybackInfo, NSString;

@interface MIPSong : PBCodable <NSCopying>
{
    long long _geniusId;	// 8 = 0x8
    MIPAlbum *_album;	// 16 = 0x10
    MIPArtist *_artist;	// 24 = 0x18
    int _audioFormat;	// 32 = 0x20
    MIPArtist *_composer;	// 40 = 0x28
    int _discNumber;	// 48 = 0x30
    MIPGenre *_genre;	// 56 = 0x38
    NSString *_hlsPlaylistURL;	// 64 = 0x40
    NSString *_lyrics;	// 72 = 0x48
    int _lyricsChecksum;	// 80 = 0x50
    MIPPlaybackInfo *_playbackInfo;	// 88 = 0x58
    int _trackNumber;	// 96 = 0x60
    int _userRating;	// 100 = 0x64
    _Bool _excludeFromShuffle;	// 104 = 0x68
    _Bool _hasVideo;	// 105 = 0x69
    struct {
        unsigned int geniusId:1;
        unsigned int audioFormat:1;
        unsigned int discNumber:1;
        unsigned int lyricsChecksum:1;
        unsigned int trackNumber:1;
        unsigned int userRating:1;
        unsigned int excludeFromShuffle:1;
        unsigned int hasVideo:1;
    } _has;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x000000000000c2e2
@property(retain, nonatomic) NSString *hlsPlaylistURL; // @synthesize hlsPlaylistURL=_hlsPlaylistURL;
@property(nonatomic) int lyricsChecksum; // @synthesize lyricsChecksum=_lyricsChecksum;
@property(retain, nonatomic) MIPPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) int audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) long long geniusId; // @synthesize geniusId=_geniusId;
@property(nonatomic) _Bool excludeFromShuffle; // @synthesize excludeFromShuffle=_excludeFromShuffle;
@property(nonatomic) int userRating; // @synthesize userRating=_userRating;
@property(nonatomic) int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) int discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) MIPGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MIPArtist *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MIPAlbum *album; // @synthesize album=_album;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000bf00
- (unsigned long long)hash;	// IMP=0x000000000000bce5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b999
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b749
- (void)copyTo:(id)arg1;	// IMP=0x000000000000b55e
- (void)writeTo:(id)arg1;	// IMP=0x000000000000b366
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000b359
- (id)dictionaryRepresentation;	// IMP=0x000000000000ae91
- (id)description;	// IMP=0x000000000000ade2
@property(readonly, nonatomic) _Bool hasHlsPlaylistURL;
@property(nonatomic) _Bool hasLyricsChecksum;
@property(readonly, nonatomic) _Bool hasPlaybackInfo;
@property(readonly, nonatomic) _Bool hasLyrics;
@property(nonatomic) _Bool hasHasVideo;
@property(nonatomic) _Bool hasAudioFormat;
@property(nonatomic) _Bool hasGeniusId;
@property(nonatomic) _Bool hasExcludeFromShuffle;
@property(nonatomic) _Bool hasUserRating;
@property(nonatomic) _Bool hasTrackNumber;
@property(nonatomic) _Bool hasDiscNumber;
@property(readonly, nonatomic) _Bool hasGenre;
@property(readonly, nonatomic) _Bool hasComposer;
@property(readonly, nonatomic) _Bool hasArtist;
@property(readonly, nonatomic) _Bool hasAlbum;

@end
