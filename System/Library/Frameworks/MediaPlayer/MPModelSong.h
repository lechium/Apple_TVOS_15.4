//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPGaplessInfo, MPModelAlbum, MPModelArtist, MPModelComposer, MPModelFileAsset, MPModelGenre, MPModelHomeSharingAsset, MPModelLyrics, MPModelPlaybackPosition, MPModelStoreAsset, NSDate, NSString;

@interface MPModelSong
{
}

+ (id)__traits_KEY;	// IMP=0x00000000000459c2
+ (id)__downloadedDate_KEY;	// IMP=0x00000000000459b5
+ (id)__playbackPosition_KEY;	// IMP=0x00000000000459a8
+ (id)__volumeAdjustment_KEY;	// IMP=0x000000000004599b
+ (id)__gaplessInfo_KEY;	// IMP=0x000000000004598e
+ (id)__cloudStatus_KEY;	// IMP=0x0000000000045981
+ (id)__userRating_KEY;	// IMP=0x0000000000045974
+ (id)__storeAsset_KEY;	// IMP=0x0000000000045967
+ (id)__homeSharingAsset_KEY;	// IMP=0x000000000004595a
+ (id)__year_KEY;	// IMP=0x000000000004594d
+ (id)__classicalMovementNumber_KEY;	// IMP=0x0000000000045940
+ (id)__classicalMovementCount_KEY;	// IMP=0x0000000000045933
+ (id)__classicalMovement_KEY;	// IMP=0x0000000000045926
+ (id)__classicalWork_KEY;	// IMP=0x0000000000045919
+ (id)__hasCloudSyncSource_KEY;	// IMP=0x000000000004590c
+ (id)__libraryAddEligible_KEY;	// IMP=0x00000000000458ff
+ (id)__lastDevicePlaybackDate_KEY;	// IMP=0x00000000000458f2
+ (id)__libraryAddedDate_KEY;	// IMP=0x00000000000458e5
+ (id)__libraryAdded_KEY;	// IMP=0x00000000000458d8
+ (id)__keepLocalManagedStatus_KEY;	// IMP=0x00000000000458cb
+ (id)__keepLocalEnableState_KEY;	// IMP=0x00000000000458be
+ (id)__localFileAsset_KEY;	// IMP=0x00000000000458b1
+ (id)__artworkCatalogBlock_KEY;	// IMP=0x00000000000458a4
+ (id)__volumeNormalization_KEY;	// IMP=0x0000000000045897
+ (id)__shouldShowComposer_KEY;	// IMP=0x000000000004588a
+ (id)__lyrics_KEY;	// IMP=0x000000000004587d
+ (id)__beatsPerMinute_KEY;	// IMP=0x0000000000045870
+ (id)__hasVideo_KEY;	// IMP=0x0000000000045863
+ (id)__artistUploadedContent_KEY;	// IMP=0x0000000000045856
+ (id)__explicitSong_KEY;	// IMP=0x0000000000045849
+ (id)__skipCount_KEY;	// IMP=0x000000000004583c
+ (id)__playCount_KEY;	// IMP=0x000000000004582f
+ (id)__discNumber_KEY;	// IMP=0x0000000000045822
+ (id)__trackNumber_KEY;	// IMP=0x0000000000045815
+ (id)__trackCount_KEY;	// IMP=0x0000000000045808
+ (id)__duration_KEY;	// IMP=0x00000000000457fb
+ (id)__copyrightText_KEY;	// IMP=0x00000000000457ee
+ (id)__grouping_KEY;	// IMP=0x00000000000457e1
+ (id)__composer_KEY;	// IMP=0x00000000000457d4
+ (id)__genre_KEY;	// IMP=0x00000000000457c7
+ (id)__artist_KEY;	// IMP=0x00000000000457ba
+ (id)__album_KEY;	// IMP=0x00000000000457ad
+ (id)__title_KEY;	// IMP=0x00000000000457a0
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000045787
+ (id)kindWithVariants:(unsigned long long)arg1;	// IMP=0x0000000000045773
+ (id)requiredLibraryAddStatusObservationProperties;	// IMP=0x000000000018faca
+ (_Bool)supportsLibraryAddStatusObservation;	// IMP=0x000000000018fac2
+ (_Bool)supportsLibraryRemoval;	// IMP=0x00000000001a81ee
+ (id)requiredLibraryRemovalProperties;	// IMP=0x00000000001a800f
+ (_Bool)supportsKeepLocalStatusObservation;	// IMP=0x00000000001a8e79
+ (id)requiredKeepLocalStatusObservationProperties;	// IMP=0x00000000001a8c9a
+ (long long)genericObjectType;	// IMP=0x00000000001e30c9
+ (id)requiredStoreLibraryPersonalizationProperties;	// IMP=0x00000000001fda50
- (id)artworkCatalog;	// IMP=0x000000000004571b
- (id)humanDescription;	// IMP=0x00000000000455ae
- (id)mediaItemPropertyValues;	// IMP=0x0000000000106212
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;	// IMP=0x000000000018f6de
- (long long)libraryRemovalSupportedOptions;	// IMP=0x00000000001a7c10
- (id)newKeepLocalStatusObserverConfiguration;	// IMP=0x00000000001a873b
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;	// IMP=0x00000000001fc63f
- (id)relativeModelObjectForStoreLibraryPersonalization;	// IMP=0x00000000001fc636
- (id)personalizationScopedPropertiesForProperties:(id)arg1;	// IMP=0x00000000001fc629

// Remaining properties
@property(retain, nonatomic) MPModelAlbum *album; // @dynamic album;
@property(retain, nonatomic) MPModelArtist *artist; // @dynamic artist;
@property(nonatomic, getter=isArtistUploadedContent) _Bool artistUploadedContent; // @dynamic artistUploadedContent;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(nonatomic) long long beatsPerMinute; // @dynamic beatsPerMinute;
@property(copy, nonatomic) NSString *classicalMovement; // @dynamic classicalMovement;
@property(nonatomic) long long classicalMovementCount; // @dynamic classicalMovementCount;
@property(nonatomic) long long classicalMovementNumber; // @dynamic classicalMovementNumber;
@property(copy, nonatomic) NSString *classicalWork; // @dynamic classicalWork;
@property(nonatomic) long long cloudStatus; // @dynamic cloudStatus;
@property(retain, nonatomic) MPModelComposer *composer; // @dynamic composer;
@property(copy, nonatomic) NSString *copyrightText; // @dynamic copyrightText;
@property(nonatomic) long long discNumber; // @dynamic discNumber;
@property(readonly, copy, nonatomic) NSDate *downloadedDate; // @dynamic downloadedDate;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic, getter=isExplicitSong) _Bool explicitSong; // @dynamic explicitSong;
@property(retain, nonatomic) MPGaplessInfo *gaplessInfo; // @dynamic gaplessInfo;
@property(retain, nonatomic) MPModelGenre *genre; // @dynamic genre;
@property(copy, nonatomic) NSString *grouping; // @dynamic grouping;
@property(nonatomic) _Bool hasCloudSyncSource; // @dynamic hasCloudSyncSource;
@property(nonatomic) _Bool hasVideo; // @dynamic hasVideo;
@property(retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset; // @dynamic homeSharingAsset;
@property(nonatomic) long long keepLocalEnableState; // @dynamic keepLocalEnableState;
@property(nonatomic) long long keepLocalManagedStatus; // @dynamic keepLocalManagedStatus;
@property(readonly, copy, nonatomic) NSDate *lastDevicePlaybackDate; // @dynamic lastDevicePlaybackDate;
@property(nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible; // @dynamic libraryAddEligible;
@property(nonatomic, getter=isLibraryAdded) _Bool libraryAdded; // @dynamic libraryAdded;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @dynamic libraryAddedDate;
@property(retain, nonatomic) MPModelFileAsset *localFileAsset; // @dynamic localFileAsset;
@property(retain, nonatomic) MPModelLyrics *lyrics; // @dynamic lyrics;
@property(nonatomic) long long playCount; // @dynamic playCount;
@property(retain, nonatomic) MPModelPlaybackPosition *playbackPosition; // @dynamic playbackPosition;
@property(nonatomic) _Bool shouldShowComposer; // @dynamic shouldShowComposer;
@property(nonatomic) long long skipCount; // @dynamic skipCount;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @dynamic storeAsset;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long trackCount; // @dynamic trackCount;
@property(nonatomic) long long trackNumber; // @dynamic trackNumber;
@property(nonatomic) unsigned long long traits; // @dynamic traits;
@property(nonatomic) float userRating; // @dynamic userRating;
@property(nonatomic) float volumeAdjustment; // @dynamic volumeAdjustment;
@property(nonatomic) float volumeNormalization; // @dynamic volumeNormalization;
@property(nonatomic) long long year; // @dynamic year;

@end
