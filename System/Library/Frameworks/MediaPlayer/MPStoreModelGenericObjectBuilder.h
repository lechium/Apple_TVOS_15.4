//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelRecordLabelBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder, NSMapTable;

@interface MPStoreModelGenericObjectBuilder
{
    NSMapTable *_baseContentItemIDToOccurrenceCount;	// 8 = 0x8
    MPStoreModelAlbumBuilder *_albumBuilder;	// 16 = 0x10
    MPStoreModelArtistBuilder *_artistBuilder;	// 24 = 0x18
    MPStoreModelMovieBuilder *_movieBuilder;	// 32 = 0x20
    MPStoreModelPlaylistBuilder *_playlistBuilder;	// 40 = 0x28
    MPStoreModelSongBuilder *_songBuilder;	// 48 = 0x30
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;	// 56 = 0x38
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;	// 64 = 0x40
    MPStoreModelTVShowBuilder *_tvShowBuilder;	// 72 = 0x48
    MPStoreModelRecordLabelBuilder *_recordLabelBuilder;	// 80 = 0x50
    _Bool _shouldUsePlaylistEntry;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001735df
@property(nonatomic) _Bool shouldUsePlaylistEntry; // @synthesize shouldUsePlaylistEntry=_shouldUsePlaylistEntry;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1;	// IMP=0x00000000001733f2
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;	// IMP=0x0000000000171300
- (void)setPreventStoreItemMetadataCaching:(_Bool)arg1;	// IMP=0x0000000000171202

@end

