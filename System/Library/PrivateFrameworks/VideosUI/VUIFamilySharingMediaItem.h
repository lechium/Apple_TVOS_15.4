//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VUIExtrasInfo, VUIFamilySharingEntity, VUIFamilySharingRelationships, VUIVideosPlayable;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMediaItem
{
    NSString *_artworkURL;	// 8 = 0x8
    NSString *_previewArtworkURL;	// 16 = 0x10
    VUIExtrasInfo *_iTunesExtrasInfo;	// 24 = 0x18
    VUIFamilySharingRelationships *_relationships;	// 32 = 0x20
    VUIVideosPlayable *_videosPlayable;	// 40 = 0x28
    NSString *_buyParams;	// 48 = 0x30
    NSString *_personalizedBuyParams;	// 56 = 0x38
    VUIFamilySharingEntity *_entity;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000c81a4
@property(retain, nonatomic) VUIFamilySharingEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSString *personalizedBuyParams; // @synthesize personalizedBuyParams=_personalizedBuyParams;
@property(retain, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) VUIVideosPlayable *videosPlayable; // @synthesize videosPlayable=_videosPlayable;
@property(retain, nonatomic) VUIFamilySharingRelationships *relationships; // @synthesize relationships=_relationships;
@property(retain, nonatomic) VUIExtrasInfo *iTunesExtrasInfo; // @synthesize iTunesExtrasInfo=_iTunesExtrasInfo;
@property(retain, nonatomic) NSString *previewArtworkURL; // @synthesize previewArtworkURL=_previewArtworkURL;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
- (id)_itunesExtrasDictionary;	// IMP=0x00000000000c7f14
- (id)_bestRedownloadOffer;	// IMP=0x00000000000c7d68
- (id)_bestOffer;	// IMP=0x00000000000c7c88
- (id)contentDescription;	// IMP=0x00000000000c7bb4
- (id)contentRating;	// IMP=0x00000000000c7b64
- (id)releaseYear;	// IMP=0x00000000000c7a99
- (id)releaseDate;	// IMP=0x00000000000c7a49
- (id)duration;	// IMP=0x00000000000c7958
- (id)bookmark;	// IMP=0x00000000000c7873
- (id)genreTitle;	// IMP=0x00000000000c7823
- (id)showTitle;	// IMP=0x00000000000c77d3
- (id)seasonNumber;	// IMP=0x00000000000c7783
- (id)episodeNumber;	// IMP=0x00000000000c7733
- (id)showCanonicalID;	// IMP=0x00000000000c7726
- (id)seasonCanonicalID;	// IMP=0x00000000000c7719
- (id)seasonIdentifier;	// IMP=0x00000000000c75d3
- (id)showIdentifier;	// IMP=0x00000000000c748d
- (id)extrasURL;	// IMP=0x00000000000c691d
- (id)title;	// IMP=0x00000000000c6768
- (id)storeID;	// IMP=0x00000000000c66b7
- (id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2;	// IMP=0x00000000000c6584

@end

