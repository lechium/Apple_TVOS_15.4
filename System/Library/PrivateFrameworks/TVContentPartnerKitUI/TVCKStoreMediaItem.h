//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/TVCKLeaseAgentDelegate-Protocol.h>
#import <TVContentPartnerKitUI/TVPSecureKeyDeliveryCoordinatorDelegate-Protocol.h>

@class NSError, NSNumber, NSObject, NSOperationQueue, NSString, NSURL, TVCKBookmark, TVCKDataItem, TVCKDataType, TVCKLeaseAgent, TVPBumperConfig, TVPPlayer, TVPSecureKeyDeliveryCoordinator, TVPSecureKeyStandardLoader, TVSDocumentLoader;
@protocol TVPMediaItem;

@interface TVCKStoreMediaItem <TVCKLeaseAgentDelegate, TVPSecureKeyDeliveryCoordinatorDelegate>
{
    _Bool _bookmarksDisabled;	// 8 = 0x8
    _Bool _disableMetadataMenu;	// 9 = 0x9
    _Bool _disableResumeMenu;	// 10 = 0xa
    _Bool _ignoreLeaseAgentStateChanges;	// 11 = 0xb
    _Bool _needsRentalCheckin;	// 12 = 0xc
    _Bool _addedSettingsObservers;	// 13 = 0xd
    _Bool _loggedHLSPerfIssue;	// 14 = 0xe
    TVPSecureKeyStandardLoader *_secureKeyLoader;	// 16 = 0x10
    NSString *_actionParams;	// 24 = 0x18
    NSString *_rentalID;	// 32 = 0x20
    NSURL *_launchPlaybackURL;	// 40 = 0x28
    NSURL *_hlsPlaylistURL;	// 48 = 0x30
    NSNumber *_contentRatingRank;	// 56 = 0x38
    TVCKDataType *_dataType;	// 64 = 0x40
    NSNumber *_bookmarkOverrideTime;	// 72 = 0x48
    NSURL *_fpsCertificateURL;	// 80 = 0x50
    NSURL *_fpsKeyServerURL;	// 88 = 0x58
    TVCKDataItem *_storeDataItem;	// 96 = 0x60
    TVCKLeaseAgent *_leaseAgent;	// 104 = 0x68
    id _acquisitionToken;	// 112 = 0x70
    TVPSecureKeyDeliveryCoordinator *_secureKeyDeliveryCoordinator;	// 120 = 0x78
    TVSDocumentLoader *_trickPlayImageConfigDocumentLoader;	// 128 = 0x80
    NSObject<TVPMediaItem> *_scrubMediaItem;	// 136 = 0x88
    TVPPlayer *_scrubPlayer;	// 144 = 0x90
    unsigned long long _loadingContext;	// 152 = 0x98
    NSError *_skdError;	// 160 = 0xa0
    TVCKBookmark *_bookmark;	// 168 = 0xa8
    NSOperationQueue *_rottenTomatoesOperationQueue;	// 176 = 0xb0
    TVPBumperConfig *_bumperConfig;	// 184 = 0xb8
}

+ (void)setDefaultDataType:(id)arg1;	// IMP=0x000000000008428f
+ (void)initialize;	// IMP=0x000000000008423f
- (void).cxx_destruct;	// IMP=0x000000000008e6ce
@property(nonatomic) _Bool loggedHLSPerfIssue; // @synthesize loggedHLSPerfIssue=_loggedHLSPerfIssue;
@property(retain, nonatomic) TVPBumperConfig *bumperConfig; // @synthesize bumperConfig=_bumperConfig;
@property(retain, nonatomic) NSOperationQueue *rottenTomatoesOperationQueue; // @synthesize rottenTomatoesOperationQueue=_rottenTomatoesOperationQueue;
@property(retain, nonatomic) TVCKBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) NSError *skdError; // @synthesize skdError=_skdError;
@property(nonatomic) _Bool addedSettingsObservers; // @synthesize addedSettingsObservers=_addedSettingsObservers;
@property(nonatomic) _Bool needsRentalCheckin; // @synthesize needsRentalCheckin=_needsRentalCheckin;
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) TVPPlayer *scrubPlayer; // @synthesize scrubPlayer=_scrubPlayer;
@property(retain, nonatomic) NSObject<TVPMediaItem> *scrubMediaItem; // @synthesize scrubMediaItem=_scrubMediaItem;
@property(retain, nonatomic) TVSDocumentLoader *trickPlayImageConfigDocumentLoader; // @synthesize trickPlayImageConfigDocumentLoader=_trickPlayImageConfigDocumentLoader;
@property(retain, nonatomic) TVPSecureKeyDeliveryCoordinator *secureKeyDeliveryCoordinator; // @synthesize secureKeyDeliveryCoordinator=_secureKeyDeliveryCoordinator;
@property(nonatomic) _Bool ignoreLeaseAgentStateChanges; // @synthesize ignoreLeaseAgentStateChanges=_ignoreLeaseAgentStateChanges;
@property(retain, nonatomic) id acquisitionToken; // @synthesize acquisitionToken=_acquisitionToken;
@property(retain, nonatomic) TVCKLeaseAgent *leaseAgent; // @synthesize leaseAgent=_leaseAgent;
@property(retain, nonatomic) TVCKDataItem *storeDataItem; // @synthesize storeDataItem=_storeDataItem;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @synthesize fpsKeyServerURL=_fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsCertificateURL; // @synthesize fpsCertificateURL=_fpsCertificateURL;
@property(nonatomic) _Bool disableResumeMenu; // @synthesize disableResumeMenu=_disableResumeMenu;
@property(nonatomic) _Bool disableMetadataMenu; // @synthesize disableMetadataMenu=_disableMetadataMenu;
@property(copy, nonatomic) NSNumber *bookmarkOverrideTime; // @synthesize bookmarkOverrideTime=_bookmarkOverrideTime;
@property(copy, nonatomic) TVCKDataType *dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSNumber *contentRatingRank; // @synthesize contentRatingRank=_contentRatingRank;
@property(copy, nonatomic) NSURL *hlsPlaylistURL; // @synthesize hlsPlaylistURL=_hlsPlaylistURL;
@property(copy, nonatomic) NSURL *launchPlaybackURL; // @synthesize launchPlaybackURL=_launchPlaybackURL;
@property(nonatomic) _Bool bookmarksDisabled; // @synthesize bookmarksDisabled=_bookmarksDisabled;
@property(copy, nonatomic) NSString *rentalID; // @synthesize rentalID=_rentalID;
@property(copy, nonatomic) NSString *actionParams; // @synthesize actionParams=_actionParams;
- (_Bool)_useBumper;	// IMP=0x000000000008e2aa
- (id)_bumperConfigFromStoreBumperConfig:(id)arg1 logoImage:(id)arg2;	// IMP=0x000000000008dc2a
- (void)_loadBumperConfigWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008da50
- (void)_updateRentalExpirationDate:(id)arg1;	// IMP=0x000000000008d6ca
- (void)_stopRentalPlaybackReceived:(id)arg1;	// IMP=0x000000000008d647
- (id)_dsid;	// IMP=0x000000000008d5a2
- (id)_maxHLSVideoResolution;	// IMP=0x000000000008d4f3
- (id)_bookmarkNetTime;	// IMP=0x000000000008d436
- (id)_adamIDString;	// IMP=0x000000000008d374
- (id)_serviceIdentifier;	// IMP=0x000000000008d125
- (_Bool)_supportsPlayCountsPrivate;	// IMP=0x000000000008d085
- (_Bool)_stopsBackgroundCaching;	// IMP=0x000000000008d01c
- (_Bool)_shouldStopWhenAppIsBackgrounded;	// IMP=0x000000000008cfb3
- (_Bool)_optimizeForHighLatency;	// IMP=0x000000000008cedd
- (_Bool)_matchCacheDataByURLPathComponentOnly;	// IMP=0x000000000008ce46
- (_Bool)_preventSpeculativeLoading;	// IMP=0x000000000008ce03
- (_Bool)_mightCacheInBackground;	// IMP=0x000000000008cd7e
- (unsigned long long)_cachingStrategy;	// IMP=0x000000000008cd15
- (_Bool)_shouldIncludeStoreCookiesInContentRequests;	// IMP=0x000000000008cbf8
- (_Bool)_isStreaming;	// IMP=0x000000000008cb8f
- (_Bool)_shouldStopPlaybackWhenVideoResolutionSettingsChange;	// IMP=0x000000000008cb26
- (_Bool)_usePreloadedHLSURL;	// IMP=0x000000000008c877
- (void)_scrubPlayerItemDidLoad:(id)arg1;	// IMP=0x000000000008c7f5
- (void)_loadTomatoRatingDataForAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008c372
- (_Bool)_mediaItemPreparationCancelled:(unsigned long long)arg1;	// IMP=0x000000000008c34f
- (void)_loadTrickPlayConfigURL;	// IMP=0x000000000008be58
- (_Bool)_okToSkipBookmarkSync;	// IMP=0x000000000008bb15
- (_Bool)_waitForRentalCheckoutToComplete;	// IMP=0x000000000008bac7
- (_Bool)_requiresRentalCheckout;	// IMP=0x000000000008ba5e
- (_Bool)_usesFairPlayStreamingLease;	// IMP=0x000000000008b9f5
- (_Bool)_usesFileBasedContentLease;	// IMP=0x000000000008b98c
- (_Bool)_requiresAcquisition;	// IMP=0x000000000008b8ff
- (void)_clearDownloadResponse;	// IMP=0x000000000008b7cd
- (id)_getBestVideoQualityAssetFromAssets:(id)arg1 mainAsset:(id)arg2;	// IMP=0x000000000008b35b
- (void)_augmentMediaItemWithDownloadResponse:(id)arg1;	// IMP=0x000000000008ae8c
- (void)_startLeaseIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a84b
- (void)_fetchRentalWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a2d1
- (void)_acquireItemWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000089aad
- (_Bool)_treatUnratedContentAsRated;	// IMP=0x0000000000089a44
- (_Bool)_supportsBookmarks;	// IMP=0x0000000000089996
- (id)_dataItemValueForProperty:(id)arg1;	// IMP=0x00000000000898f8
- (void)leaseAgent:(id)arg1 renewalDidFailWithError:(id)arg2;	// IMP=0x0000000000089821
- (void)mergePropertiesFromDataItem:(id)arg1 toDataItem:(id)arg2;	// IMP=0x000000000008981b
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x00000000000896c8
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x000000000008957d
- (void)cleanUpMediaItem;	// IMP=0x00000000000891cd
- (id)replacementErrorForPlaybackError:(id)arg1;	// IMP=0x0000000000088ba8
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;	// IMP=0x0000000000088b93
- (void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2;	// IMP=0x00000000000888fc
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1;	// IMP=0x00000000000888e8
@property(retain, nonatomic) TVPSecureKeyStandardLoader *secureKeyLoader; // @synthesize secureKeyLoader=_secureKeyLoader;
- (void)loadStreamingKeyForRequest:(id)arg1;	// IMP=0x000000000008861c
- (void)prepareForPlaybackInitiationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008748a
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008585a
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000000084e90
- (_Bool)hasTrait:(id)arg1;	// IMP=0x0000000000084ad6
- (id)mediaItemURL;	// IMP=0x0000000000084a6b
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x00000000000848e6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000008482c
- (void)dealloc;	// IMP=0x00000000000846a0
- (void)_addResolutionSettingsObservers;	// IMP=0x000000000008459b
- (void)_commonInit;	// IMP=0x00000000000844bd
- (id)initWithDataItem:(id)arg1;	// IMP=0x000000000008442e
- (id)initWithRentalID:(id)arg1;	// IMP=0x0000000000084384
- (id)initWithDataType:(id)arg1 actionParams:(id)arg2;	// IMP=0x00000000000842a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

