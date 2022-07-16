//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelAlbum, MPModelForYouRecommendationGroup, MPModelPlaylist, MPModelRadioStation, NSString, NSURL;

@interface MPModelForYouRecommendationItem
{
}

+ (id)requiredStoreLibraryPersonalizationProperties;	// IMP=0x000000000018e768
+ (id)__subgroupIndex_KEY;	// IMP=0x000000000018e75b
+ (id)__parentGroup_KEY;	// IMP=0x000000000018e74e
+ (id)__backedByStoreItemMetadata_KEY;	// IMP=0x000000000018e741
+ (id)__radioStation_KEY;	// IMP=0x000000000018e734
+ (id)__playlist_KEY;	// IMP=0x000000000018e727
+ (id)__album_KEY;	// IMP=0x000000000018e71a
+ (id)__utterance_KEY;	// IMP=0x000000000018e70d
+ (id)__reason_KEY;	// IMP=0x000000000018e700
+ (id)__url_KEY;	// IMP=0x000000000018e6f3
+ (id)__itemType_KEY;	// IMP=0x000000000018e6e6
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;	// IMP=0x000000000018eb1e
- (id)relativeModelObjectForStoreLibraryPersonalization;	// IMP=0x000000000018ea93
- (id)personalizationScopedPropertiesForProperties:(id)arg1;	// IMP=0x000000000018e9d5
@property(readonly, nonatomic) MPModelForYouRecommendationGroup *subgroup;

// Remaining properties
@property(retain, nonatomic) MPModelAlbum *album; // @dynamic album;
@property(nonatomic, getter=isBackedByStoreItemMetadata) _Bool backedByStoreItemMetadata; // @dynamic backedByStoreItemMetadata;
@property(nonatomic) unsigned long long itemType; // @dynamic itemType;
@property(nonatomic) __weak MPModelForYouRecommendationGroup *parentGroup; // @dynamic parentGroup;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @dynamic radioStation;
@property(copy, nonatomic) NSString *reason; // @dynamic reason;
@property(nonatomic) long long subgroupIndex; // @dynamic subgroupIndex;
@property(copy, nonatomic) NSURL *url; // @dynamic url;
@property(copy, nonatomic) NSString *utterance; // @dynamic utterance;

@end

