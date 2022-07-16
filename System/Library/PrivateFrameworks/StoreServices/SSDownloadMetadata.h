//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSLock, NSMutableDictionary, NSNumber, NSString, NSURL, SSItemImageCollection;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    long long _keyStyle;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
}

+ (id)_addPlaybackTypeToHLSPlaylistURLString:(id)arg1;	// IMP=0x0000000000017bee
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010bab
- (id)_valueForFirstAvailableTopLevelKey:(id)arg1;	// IMP=0x0000000000017a7d
- (id)_urlValueForValue:(id)arg1;	// IMP=0x0000000000017a16
- (id)_thumbnailArtworkImage;	// IMP=0x0000000000017943
- (id)_stringValueForValue:(id)arg1;	// IMP=0x00000000000178e3
- (void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2;	// IMP=0x0000000000017897
- (void)_setValue:(id)arg1 forTopLevelKey:(id)arg2;	// IMP=0x0000000000017812
- (id)_releaseDateValue;	// IMP=0x00000000000177ed
- (id)_newDateFormatter;	// IMP=0x000000000001777f
- (id)_newImageCollectionWithURLString:(id)arg1;	// IMP=0x00000000000175c4
- (id)_dateValueForValue:(id)arg1;	// IMP=0x0000000000017539
- (id)_assetDictionary;	// IMP=0x0000000000016c78
- (id)valueForMetadataKey:(id)arg1;	// IMP=0x0000000000016c62
- (id)valueForFirstAvailableKey:(id)arg1;	// IMP=0x0000000000016aa1
@property(copy) NSURL *transitMapDataURL;
@property(retain) NSArray *sinfs;
@property _Bool shouldDownloadAutomatically;
- (void)setValuesFromDownload:(id)arg1;	// IMP=0x0000000000015c2a
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;	// IMP=0x0000000000015ace
@property(copy) id requiredDeviceCapabilities;
@property(copy) NSNumber *requestPersistentID;
@property(retain) NSString *releaseDateString;
@property(getter=isRedownloadDownload) _Bool redownloadDownload;
@property(copy) NSString *redownloadActionParameters;
@property(retain) NSURL *primaryAssetURL;
@property unsigned long long preOrderIdentifier;
@property(copy) NSString *preferredAssetFlavor;
- (void)setPublicationVersion:(id)arg1;	// IMP=0x000000000001572a
@property(copy) NSString *pageProgressionDirection;
- (void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2;	// IMP=0x0000000000015598
@property long long keyStyle;
@property(retain) NSString *fileExtension;
@property(retain) NSData *epubRightsData;
- (void)setDownloadPermalink:(id)arg1;	// IMP=0x0000000000015507
@property(retain) NSString *downloadKey;
@property(retain) NSDictionary *dictionary;
@property(retain) NSString *copyright;
@property(retain) NSURL *cancelDownloadURL;
@property(getter=isAutomaticDownload) _Bool automaticDownload;
- (id)publicationVersion;	// IMP=0x00000000000150fe
@property(readonly) NSNumber *numberOfBytesToHash;
- (id)newDownloadProperties;	// IMP=0x0000000000013e4f
@property(readonly) NSArray *MD5HashStrings;
@property(readonly, getter=isVideosKind) _Bool videosKind;
@property(readonly, getter=isSoftwareKind) _Bool softwareKind;
@property(readonly, getter=isContentRestricted) _Bool contentRestricted;
@property(readonly) NSNumber *downloaderAccountIdentifier;
- (id)copyWritableMetadata;	// IMP=0x0000000000013728
@property(readonly, retain) NSData *appReceiptData;
- (id)movementCount;	// IMP=0x00000000000135e8
- (id)movementNumber;	// IMP=0x000000000001359e
- (id)movementName;	// IMP=0x0000000000013554
- (id)workName;	// IMP=0x000000000001350a
- (_Bool)isMusicShow;	// IMP=0x00000000000134bb
- (id)showComposer;	// IMP=0x0000000000013471
- (id)viewStoreItemURL;	// IMP=0x0000000000013435
- (id)videoDetailsDictionary;	// IMP=0x00000000000133eb
- (id)variantIdentifier;	// IMP=0x00000000000133a5
@property(retain) NSString *transactionIdentifier;
@property(retain) NSString *title;
@property(retain) NSURL *thumbnailImageURL;
@property(retain) NSString *thumbnailNewsstandBindingType;
@property(retain) NSString *thumbnailNewsstandBindingEdge;
@property(readonly) SSItemImageCollection *thumbnailImageCollection;
@property(retain) NSString *subtitle;
@property(retain) NSString *sortTitle;
@property(retain) NSString *sortCollectionName;
@property(retain) NSString *sortArtistName;
@property(copy) NSString *shortDescription;
- (void)setDownloadPolicy:(id)arg1;	// IMP=0x0000000000012dcb
- (void)setViewStoreItemURL:(id)arg1;	// IMP=0x0000000000012d90
- (void)setVideoDetailsDictionary:(id)arg1;	// IMP=0x0000000000012d77
- (void)setVariantIdentifier:(id)arg1;	// IMP=0x0000000000012d5e
@property(getter=isTvTemplate) _Bool tvTemplate;
- (void)setLongSeasonDescription:(id)arg1;	// IMP=0x0000000000012bc1
- (void)setSeriesName:(id)arg1;	// IMP=0x0000000000012ba8
- (void)setSharedResource:(_Bool)arg1;	// IMP=0x0000000000012b69
- (void)setSeasonNumber:(id)arg1;	// IMP=0x0000000000012b50
- (void)setMusicShow:(_Bool)arg1;	// IMP=0x0000000000012b11
- (void)setSample:(_Bool)arg1;	// IMP=0x0000000000012ad2
- (void)setSagaIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000012a93
@property(copy) NSNumber *rentalID;
- (void)setRental:(_Bool)arg1;	// IMP=0x0000000000012a3b
@property(retain) NSNumber *releaseYear;
@property(retain) NSDate *releaseDate;
- (void)setPurchaseDate:(id)arg1;	// IMP=0x00000000000129b6
- (void)setPodcastType:(id)arg1;	// IMP=0x000000000001299d
- (void)setPodcastFeedURL:(id)arg1;	// IMP=0x0000000000012962
- (void)setPodcastEpisodeGUID:(id)arg1;	// IMP=0x0000000000012949
- (void)setNumberOfItemsInCollection:(id)arg1;	// IMP=0x00000000000128f6
- (void)setNumberOfCollectionsInCollectionGroup:(id)arg1;	// IMP=0x00000000000128a3
- (void)setNetworkName:(id)arg1;	// IMP=0x000000000001288a
- (void)setMessagesArtworkURL:(id)arg1;	// IMP=0x000000000001284f
@property(copy) NSString *longDescription;
- (void)setLaunchProhibited:(_Bool)arg1;	// IMP=0x00000000000127bd
@property(retain) NSURL *launchExtrasUrl;
@property(retain) NSString *kind;
@property unsigned long long itemIdentifier;
- (void)setIndexInCollection:(id)arg1;	// IMP=0x00000000000126af
@property(copy) NSURL *hlsPlaylistURL;
- (void)setHighDefinition:(_Bool)arg1;	// IMP=0x0000000000012635
- (void)setHasMessagesExtension:(_Bool)arg1;	// IMP=0x00000000000125f6
@property unsigned long long genreIdentifier;
@property(retain) NSString *genre;
@property(retain) NSURL *fullSizeImageURL;
- (void)setExplicitContent:(_Bool)arg1;	// IMP=0x00000000000124fa
- (void)setEpisodeSortIdentifier:(id)arg1;	// IMP=0x00000000000124e1
- (void)setEpisodeIdentifier:(id)arg1;	// IMP=0x00000000000124c8
- (void)setEnableExtensions:(id)arg1;	// IMP=0x00000000000124af
- (void)setDurationInMilliseconds:(id)arg1;	// IMP=0x0000000000012496
- (void)setDocumentTargetIdentifier:(id)arg1;	// IMP=0x000000000001247d
- (void)setContentRating:(id)arg1;	// IMP=0x0000000000012442
- (void)setComposerName:(id)arg1;	// IMP=0x0000000000012429
- (void)setComposerIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000123c2
@property(getter=isDeviceBasedVPP) _Bool deviceBasedVPP;
- (void)setCompilation:(_Bool)arg1;	// IMP=0x0000000000012344
- (void)setCollectionName:(id)arg1;	// IMP=0x00000000000122f1
- (void)setCollectionIndexInCollectionGroup:(id)arg1;	// IMP=0x000000000001229e
- (void)setCollectionIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000012237
- (void)setCollectionArtistName:(id)arg1;	// IMP=0x000000000001221e
- (void)setCloudIdentifier:(id)arg1;	// IMP=0x0000000000012205
- (void)setBundleIdentifier:(id)arg1;	// IMP=0x00000000000121ec
- (void)setBetaExternalVersionIdentifier:(id)arg1;	// IMP=0x00000000000121d3
- (void)setArtworkIsPrerendered:(_Bool)arg1;	// IMP=0x000000000001218e
@property(copy) NSString *artistName;
@property unsigned long long artistIdentifier;
- (id)downloadPolicy;	// IMP=0x0000000000011f03
- (id)longSeasonDescription;	// IMP=0x0000000000011eb9
- (id)seriesName;	// IMP=0x0000000000011e5d
- (id)seasonNumber;	// IMP=0x0000000000011e13
- (unsigned long long)sagaIdentifier;	// IMP=0x0000000000011db0
- (id)purchaseDate;	// IMP=0x0000000000011caf
@property(readonly) NSDictionary *primaryAssetDictionary;
- (id)podcastType;	// IMP=0x0000000000011c06
- (id)podcastFeedURL;	// IMP=0x0000000000011bca
- (id)podcastEpisodeGUID;	// IMP=0x0000000000011b80
- (id)numberOfItemsInCollection;	// IMP=0x0000000000011b2e
- (id)numberOfCollectionsInCollectionGroup;	// IMP=0x0000000000011adc
- (id)networkName;	// IMP=0x0000000000011a92
- (id)messagesArtworkURL;	// IMP=0x0000000000011a56
- (_Bool)launchProhibited;	// IMP=0x00000000000119b5
- (_Bool)isSharedResource;	// IMP=0x0000000000011837
- (_Bool)isSample;	// IMP=0x00000000000117e8
- (_Bool)isRental;	// IMP=0x0000000000011799
@property(readonly, getter=isPremium) _Bool premium;
@property(readonly, getter=isHLS) _Bool HLS;
- (_Bool)isHighDefinition;	// IMP=0x0000000000011678
@property(readonly, getter=hasHDR) _Bool HDR;
- (_Bool)isExplicitContent;	// IMP=0x00000000000115c9
- (_Bool)isCompilation;	// IMP=0x000000000001152b
- (_Bool)is32BitOnly;	// IMP=0x00000000000114dc
- (id)indexInCollection;	// IMP=0x000000000001148a
- (_Bool)hasMessagesExtension;	// IMP=0x00000000000113d9
- (id)episodeSortIdentifier;	// IMP=0x00000000000111fc
- (id)episodeIdentifier;	// IMP=0x00000000000111c0
- (id)enableExtensions;	// IMP=0x0000000000011176
- (id)durationInMilliseconds;	// IMP=0x000000000001112c
- (id)downloadPermalink;	// IMP=0x00000000000110e2
- (id)documentTargetIdentifier;	// IMP=0x0000000000011098
- (id)contentRating;	// IMP=0x000000000001102a
- (id)composerName;	// IMP=0x0000000000010fe0
- (unsigned long long)composerIdentifier;	// IMP=0x0000000000010fb3
- (id)collectionName;	// IMP=0x0000000000010f61
- (id)collectionIndexInCollectionGroup;	// IMP=0x0000000000010f0f
- (unsigned long long)collectionIdentifier;	// IMP=0x0000000000010ee2
- (id)collectionArtistName;	// IMP=0x0000000000010e98
- (id)cloudIdentifier;	// IMP=0x0000000000010e46
- (id)bundleIdentifier;	// IMP=0x0000000000010df4
- (id)betaExternalVersionIdentifier;	// IMP=0x0000000000010dae
- (_Bool)artworkIsPrerendered;	// IMP=0x0000000000010d53
- (id)applicationIdentifier;	// IMP=0x0000000000010c77
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000010c3b
- (id)copyXPCEncoding;	// IMP=0x0000000000010c2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010bb3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001067d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000105be
- (void)dealloc;	// IMP=0x0000000000010574
- (id)initWithKind:(id)arg1;	// IMP=0x0000000000010538
- (id)initWithItem:(id)arg1 offer:(id)arg2;	// IMP=0x000000000000fd48
- (id)initWithItem:(id)arg1;	// IMP=0x000000000000fd05
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000fc9e
- (id)init;	// IMP=0x000000000000fc8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

