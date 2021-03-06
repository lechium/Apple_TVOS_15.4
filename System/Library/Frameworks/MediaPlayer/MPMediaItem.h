//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItemArtwork, NSArray, NSDate, NSString, NSURL;

@interface MPMediaItem
{
}

+ (_Bool)_isValidItemProperty:(id)arg1;	// IMP=0x00000000000ca04b
+ (void)_createFilterableDictionary;	// IMP=0x00000000000c915c
+ (id)dynamicProperties;	// IMP=0x00000000000c912c
+ (id)fallbackTitlePropertyForGroupingType:(long long)arg1;	// IMP=0x00000000000c9110
+ (id)titlePropertyForGroupingType:(long long)arg1;	// IMP=0x00000000000c9054
+ (id)ULIDPropertyForGroupingType:(long long)arg1;	// IMP=0x00000000000c8fb0
+ (id)persistentIDPropertyForGroupingType:(long long)arg1;	// IMP=0x00000000000c8ed4
+ (_Bool)canFilterByProperty:(id)arg1;	// IMP=0x00000000000c8e3b
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c8e33
+ (id)itemFromSong:(id)arg1;	// IMP=0x00000000000c8dc9
+ (id)itemFromModelObject:(id)arg1;	// IMP=0x00000000000c8c11
+ (id)screenshotArtworkCatalogCacheProperties;	// IMP=0x000000000005c45a
+ (id)artworkCatalogCacheProperties;	// IMP=0x000000000005c412
+ (id)MPSD_mediaItemPropertiesForDownloadability;	// IMP=0x00000000002d92e9
- (id)_libraryLinkURL;	// IMP=0x00000000000c83aa
- (id)_libraryLinkPlaylistName;	// IMP=0x00000000000c8300
- (id)_libraryLinkKind;	// IMP=0x00000000000c822e
- (id)_libraryLinkArtist;	// IMP=0x00000000000c818a
- (id)_directStoreURL;	// IMP=0x00000000000c7f39
@property(readonly, nonatomic, getter=isPreorder) _Bool preorder;
@property(readonly, nonatomic) NSDate *dateDownloaded;
@property(readonly, nonatomic) _Bool isUsableAsRepresentativeItem;
- (void)gaplessHeuristicInfo:(unsigned int *)arg1 durationInSamples:(unsigned long long *)arg2 lastPacketsResync:(unsigned long long *)arg3 encodingDelay:(unsigned int *)arg4 encodingDrain:(unsigned int *)arg5;	// IMP=0x00000000000c7d89
- (unsigned long long)countOfChaptersOfType:(long long)arg1;	// IMP=0x00000000000c7c34
- (id)chapterOfType:(long long)arg1 atTime:(double)arg2;	// IMP=0x00000000000c7a58
- (id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000c78b3
- (id)chaptersOfType:(long long)arg1;	// IMP=0x00000000000c76be
@property(readonly, nonatomic) NSString *userGrouping;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic, getter=isExplicitItem) _Bool explicitItem;
@property(readonly, nonatomic) unsigned long long discCount;
@property(readonly, nonatomic) unsigned long long discNumber;
@property(readonly, nonatomic) unsigned long long albumTrackNumber;
@property(readonly, nonatomic) _Bool rememberBookmarkTime;
@property(readonly, nonatomic) NSString *playbackStoreID;
@property(nonatomic) _Bool hasBeenPlayed;
@property(copy, nonatomic) NSDate *lastSkippedDate;
@property(nonatomic) unsigned long long skipCountSinceSync;
- (void)setSkipCount:(unsigned long long)arg1;	// IMP=0x00000000000c731a
@property(readonly, nonatomic) unsigned long long skipCount;
@property(copy, nonatomic) NSDate *dateAccessed;
@property(copy, nonatomic) NSDate *lastPlayedDate;
@property(nonatomic) unsigned long long playCountSinceSync;
- (void)setPlayCount:(unsigned long long)arg1;	// IMP=0x00000000000c7160
@property(readonly, nonatomic) unsigned long long playCount;
- (id)predicateForProperty:(id)arg1;	// IMP=0x00000000000c7085
@property(readonly, nonatomic) unsigned long long year;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSDate *releaseDate;
- (void)setRating:(unsigned long long)arg1;	// IMP=0x00000000000c6fab
@property(readonly, nonatomic) unsigned long long rating;
@property(readonly, nonatomic) unsigned long long podcastPersistentID;
@property(readonly, nonatomic) NSString *podcastTitle;
@property(readonly, nonatomic) double effectiveStopTime;
@property(readonly, nonatomic) double stopTime;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) double playbackDuration;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic, getter=hasProtectedAsset) _Bool protectedAsset;
@property(readonly, nonatomic, getter=isCloudItem) _Bool cloudItem;
@property(readonly, nonatomic, getter=isCompilation) _Bool compilation;
@property(readonly, nonatomic) _Bool isITunesU;
@property(readonly, nonatomic) _Bool isRental;
@property(readonly, nonatomic) unsigned long long genrePersistentID;
@property(readonly, nonatomic) NSString *genre;
@property(readonly, nonatomic) unsigned long long composerPersistentID;
@property(readonly, nonatomic) NSString *composer;
@property(readonly, nonatomic) NSString *comments;
@property(readonly, nonatomic) NSDate *dateAdded;
@property(readonly, nonatomic) double bookmarkTime;
@property(readonly, nonatomic) unsigned long long beatsPerMinute;
@property(readonly, nonatomic) NSURL *assetURL;
@property(readonly, nonatomic) MPMediaItemArtwork *artwork;
@property(readonly, nonatomic) unsigned long long artistPersistentID;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) unsigned long long albumTrackCount;
@property(readonly, nonatomic) NSString *albumTitle;
@property(readonly, nonatomic) unsigned long long albumArtistPersistentID;
@property(readonly, nonatomic) unsigned long long albumPersistentID;
@property(readonly, nonatomic) NSString *effectiveAlbumArtist;
@property(readonly, nonatomic) NSString *albumArtist;
@property(readonly, nonatomic) NSArray *chapters;
- (id)multiverseIdentifier;	// IMP=0x00000000000c6782
- (void)clearLocationProperties;	// IMP=0x00000000000c6727
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c6685
- (void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2;	// IMP=0x00000000000c65fd
- (void)populateLocationPropertiesWithPath:(id)arg1;	// IMP=0x00000000000c65e9
- (_Bool)existsInLibrary;	// IMP=0x00000000000c64da
- (id)representativeItem;	// IMP=0x00000000000c64d1
- (id)_bestStoreURL;	// IMP=0x00000000000c6488
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000c6482
- (double)nominalHasBeenPlayedThreshold;	// IMP=0x00000000000c6372
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c625a
- (_Bool)incrementPlayCountForStopTime:(double)arg1;	// IMP=0x00000000000c614b
- (void)incrementPlayCountForPlayingToEnd;	// IMP=0x00000000000c6033
- (void)incrementSkipCount;	// IMP=0x00000000000c5f1b
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;	// IMP=0x00000000000c5e03
- (void)markNominalAmountHasBeenPlayed;	// IMP=0x00000000000c5ceb
- (void)incrementPlayCount;	// IMP=0x00000000000c5bd3
- (_Bool)didSkipWithPlayedToTime:(double)arg1;	// IMP=0x00000000000c5ac4
- (id)valuesForProperties:(id)arg1;	// IMP=0x00000000000c59b5
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000c586e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c5756
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c56ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c561e
- (unsigned long long)hash;	// IMP=0x00000000000c55fe
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;	// IMP=0x00000000000c4c98
- (id)initWithPersistentID:(unsigned long long)arg1;	// IMP=0x00000000000c4c2a
- (id)_artworkCatalogWithArtworkType:(long long)arg1;	// IMP=0x000000000005c117
- (id)screenshotArtworkCatalog;	// IMP=0x000000000005c100
- (id)artworkCatalog;	// IMP=0x000000000005c0e9
- (_Bool)MPSD_isDownloadInProgress;	// IMP=0x00000000002d91e1
- (_Bool)MPSD_isDownloadable;	// IMP=0x00000000002d9019

// Remaining properties
@property(readonly, nonatomic) unsigned long long persistentID; // @dynamic persistentID;

@end

