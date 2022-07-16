//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPMediaItem.h>

@class NSDate, NSNumber, NSObject, NSString, NSURL, VUIMediaEntityType, VUIMediaItemCredits, _TVContentRating;
@protocol VUIMediaEntityIdentifier;

@interface MPMediaItem (VideosUI)
+ (_Bool)_vui_isNetworkPlayableWithPropertyValues:(id)arg1;	// IMP=0x00000000000dac37
+ (_Bool)_vui_isLocalWithPropertyValues:(id)arg1;	// IMP=0x00000000000dab74
+ (id)vui_mediaItemForStoreIdentifier:(id)arg1;	// IMP=0x00000000000da968
+ (id)vui_mediaItemForStoreIdentifierString:(id)arg1;	// IMP=0x00000000000da8b9
+ (id)vui_mediaItemForPersistentIdentifier:(id)arg1;	// IMP=0x00000000000da79d
+ (unsigned long long)vui_VUIMediaEntityAudioCapabilityFromMPMediaItemAudioCapability:(long long)arg1;	// IMP=0x00000000000da791
+ (long long)vui_MPMediaItemAudioCapabilityFromVUIMediaEntityAudioCapability:(unsigned long long)arg1;	// IMP=0x00000000000da785
+ (unsigned long long)vui_VUIMediaEntityColorCapabilityFromMPMediaItemColorCapability:(long long)arg1;	// IMP=0x00000000000da779
+ (long long)vui_MPMediaItemColorCapabilityFromVUIMediaEntityColorCapability:(unsigned long long)arg1;	// IMP=0x00000000000da76d
+ (unsigned long long)vui_VUIMediaEntityResolutionFromMPMediaItemVideoQuality:(long long)arg1;	// IMP=0x00000000000da759
+ (long long)vui_MPMediaItemVideoQualityFromVUIMediaEntityResolution:(unsigned long long)arg1;	// IMP=0x00000000000da745
- (id)_vui_imageIdentifierWithImageType:(unsigned long long)arg1;	// IMP=0x00000000000dad2b
- (id)vui_imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x00000000000daaea
- (id)vui_artworkCatalogWithImageType:(unsigned long long)arg1;	// IMP=0x00000000000daab7
- (id)vui_imageIdentifierWithImageType:(unsigned long long)arg1;	// IMP=0x00000000000daa84
- (id)vui_assetTypeIgnoringLocalAsset:(_Bool)arg1;	// IMP=0x00000000000da535
@property(readonly, nonatomic) NSNumber *vui_assetType;
@property(readonly, nonatomic) NSDate *vui_rentalExpirationDate;
@property(readonly, nonatomic) NSDate *vui_rentalPlaybackEndDate;
@property(readonly, nonatomic) NSDate *vui_rentalEndDate;
@property(readonly, nonatomic) NSNumber *vui_playedState;
@property(readonly, nonatomic) NSURL *vui_extrasURL;
@property(readonly, nonatomic) NSNumber *vui_isLocal;
@property(readonly, nonatomic) NSNumber *vui_isPlayable;
@property(readonly, nonatomic) _TVContentRating *vui_contentRating;
@property(readonly, nonatomic) VUIMediaItemCredits *vui_credits;
@property(readonly, nonatomic) NSString *vui_studio;
@property(readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *vui_seasonIdentifier;
@property(readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *vui_showIdentifier;
@property(readonly, nonatomic) NSString *vui_previewFrameImageIdentifier;
@property(readonly, nonatomic) NSString *vui_coverArtImageIdentifier;
@property(readonly, nonatomic) NSNumber *vui_HLSAudioCapability;
@property(readonly, nonatomic) NSNumber *vui_HLSColorCapability;
@property(readonly, nonatomic) NSNumber *vui_HLSResolution;
@property(readonly, nonatomic) NSNumber *vui_audioCapability;
@property(readonly, nonatomic) NSNumber *vui_colorCapability;
@property(readonly, nonatomic) NSNumber *vui_resolution;
@property(readonly, nonatomic) VUIMediaEntityType *vui_mediaEntityType;
@end
