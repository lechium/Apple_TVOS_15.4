//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset, NSArray, NSDate, NSDictionary, NSString;

@interface MPModelMovie
{
}

+ (id)__downloadedDate_KEY;	// IMP=0x0000000000156c52
+ (id)__keepLocalManagedStatus_KEY;	// IMP=0x0000000000156c45
+ (id)__keepLocalEnableState_KEY;	// IMP=0x0000000000156c38
+ (id)__libraryAddEligible_KEY;	// IMP=0x0000000000156c2b
+ (id)__lastDevicePlaybackDate_KEY;	// IMP=0x0000000000156c1e
+ (id)__libraryAddedDate_KEY;	// IMP=0x0000000000156c11
+ (id)__libraryAdded_KEY;	// IMP=0x0000000000156c04
+ (id)__hasCloudSyncSource_KEY;	// IMP=0x0000000000156bf7
+ (id)__duration_KEY;	// IMP=0x0000000000156bea
+ (id)__editorialArtworkCatalogBlock_KEY;	// IMP=0x0000000000156bdd
+ (id)__artworkCatalogBlock_KEY;	// IMP=0x0000000000156bd0
+ (id)__storeAsset_KEY;	// IMP=0x0000000000156bc3
+ (id)__playbackPosition_KEY;	// IMP=0x0000000000156bb6
+ (id)__localFileAsset_KEY;	// IMP=0x0000000000156ba9
+ (id)__releaseDate_KEY;	// IMP=0x0000000000156b9c
+ (id)__clips_KEY;	// IMP=0x0000000000156b8f
+ (id)__movieInfoDictionary_KEY;	// IMP=0x0000000000156b82
+ (id)__tagline_KEY;	// IMP=0x0000000000156b75
+ (id)__explicitRating_KEY;	// IMP=0x0000000000156b68
+ (id)__descriptionText_KEY;	// IMP=0x0000000000156b5b
+ (id)__title_KEY;	// IMP=0x0000000000156b4e
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000156b35
+ (id)kindWithVariants:(unsigned long long)arg1;	// IMP=0x0000000000156b21
+ (id)classesForSecureCoding;	// IMP=0x0000000000156a50
+ (id)requiredLibraryAddStatusObservationProperties;	// IMP=0x000000000018fd52
+ (_Bool)supportsLibraryAddStatusObservation;	// IMP=0x000000000018fd4a
+ (_Bool)supportsLibraryRemoval;	// IMP=0x00000000001a8586
+ (id)requiredLibraryRemovalProperties;	// IMP=0x00000000001a83a7
+ (_Bool)supportsKeepLocalStatusObservation;	// IMP=0x00000000001a9211
+ (id)requiredKeepLocalStatusObservationProperties;	// IMP=0x00000000001a9032
+ (long long)genericObjectType;	// IMP=0x00000000001e3134
+ (id)requiredStoreLibraryPersonalizationProperties;	// IMP=0x00000000001fdcbd
- (id)editorialArtworkCatalog;	// IMP=0x00000000001569f8
- (id)artworkCatalog;	// IMP=0x00000000001569a0
- (id)humanDescription;	// IMP=0x000000000015687a
- (id)mediaItemPropertyValues;	// IMP=0x0000000000106bee
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;	// IMP=0x000000000018f831
- (long long)libraryRemovalSupportedOptions;	// IMP=0x00000000001a7d42
- (id)newKeepLocalStatusObserverConfiguration;	// IMP=0x00000000001a891d
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;	// IMP=0x00000000001fd09c
- (id)relativeModelObjectForStoreLibraryPersonalization;	// IMP=0x00000000001fd093
- (id)personalizationScopedPropertiesForProperties:(id)arg1;	// IMP=0x00000000001fd086

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) NSArray *clips; // @dynamic clips;
@property(copy, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(readonly, copy, nonatomic) NSDate *downloadedDate; // @dynamic downloadedDate;
@property(nonatomic) double duration; // @dynamic duration;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property(nonatomic) long long explicitRating; // @dynamic explicitRating;
@property(nonatomic) _Bool hasCloudSyncSource; // @dynamic hasCloudSyncSource;
@property(nonatomic) long long keepLocalEnableState; // @dynamic keepLocalEnableState;
@property(nonatomic) long long keepLocalManagedStatus; // @dynamic keepLocalManagedStatus;
@property(readonly, copy, nonatomic) NSDate *lastDevicePlaybackDate; // @dynamic lastDevicePlaybackDate;
@property(nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible; // @dynamic libraryAddEligible;
@property(nonatomic, getter=isLibraryAdded) _Bool libraryAdded; // @dynamic libraryAdded;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @dynamic libraryAddedDate;
@property(retain, nonatomic) MPModelFileAsset *localFileAsset; // @dynamic localFileAsset;
@property(copy, nonatomic) NSDictionary *movieInfoDictionary; // @dynamic movieInfoDictionary;
@property(retain, nonatomic) MPModelPlaybackPosition *playbackPosition; // @dynamic playbackPosition;
@property(copy, nonatomic) NSDate *releaseDate; // @dynamic releaseDate;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @dynamic storeAsset;
@property(copy, nonatomic) NSString *tagline; // @dynamic tagline;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

