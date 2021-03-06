//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/TVPContentKeyLoading-Protocol.h>
#import <VideosUI/TVPMediaItemReporting-Protocol.h>
#import <VideosUI/TVPMediaItemReportingDelegate-Protocol.h>
#import <VideosUI/VUIStoreFPSKeyLoaderDelegate-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSObject, NSString, NSURL, TVPPlayer, VUIMutableBookmark, VUIStoreFPSKeyLoader;

@interface VUIStoreAuxMediaItem <VUIStoreFPSKeyLoaderDelegate, TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate>
{
    _Bool _isAudioOnly;	// 8 = 0x8
    _Bool _disableResumeMenu;	// 9 = 0x9
    _Bool _disableScrubbing;	// 10 = 0xa
    _Bool _isiTunesPurchasedOrRentedContent;	// 11 = 0xb
    _Bool _ignoreExistingOfflineKeyData;	// 12 = 0xc
    _Bool _isFamilySharingContent;	// 13 = 0xd
    _Bool _isLiveContent;	// 14 = 0xe
    _Bool _isHLS;	// 15 = 0xf
    NSURL *_streamingOverrideURLForDownload;	// 16 = 0x10
    NSURL *_fpsCertificateURL;	// 24 = 0x18
    NSURL *_fpsKeyServerURL;	// 32 = 0x20
    NSDictionary *_fpsAdditionalServerParams;	// 40 = 0x28
    NSString *_bookmarkID;	// 48 = 0x30
    NSNumber *_bookmarkOverrideTime;	// 56 = 0x38
    NSURL *_url;	// 64 = 0x40
    VUIMutableBookmark *_bookmark;	// 72 = 0x48
    TVPPlayer *_scrubPlayer;	// 80 = 0x50
    VUIStoreFPSKeyLoader *_storeFPSKeyLoader;	// 88 = 0x58
    NSError *_fpsKeyError;	// 96 = 0x60
    NSObject *_parentReportingToken;	// 104 = 0x68
    long long _playbackType;	// 112 = 0x70
}

+ (void)initialize;	// IMP=0x00000000001f2b96
- (void).cxx_destruct;	// IMP=0x00000000001f5c48
@property(nonatomic) _Bool isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(retain, nonatomic) NSObject *parentReportingToken; // @synthesize parentReportingToken=_parentReportingToken;
@property(retain, nonatomic) NSError *fpsKeyError; // @synthesize fpsKeyError=_fpsKeyError;
@property(retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader; // @synthesize storeFPSKeyLoader=_storeFPSKeyLoader;
@property(retain, nonatomic) TVPPlayer *scrubPlayer; // @synthesize scrubPlayer=_scrubPlayer;
@property(retain, nonatomic) VUIMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool isLiveContent; // @synthesize isLiveContent=_isLiveContent;
@property(nonatomic) _Bool isFamilySharingContent; // @synthesize isFamilySharingContent=_isFamilySharingContent;
@property(nonatomic) _Bool ignoreExistingOfflineKeyData; // @synthesize ignoreExistingOfflineKeyData=_ignoreExistingOfflineKeyData;
@property(nonatomic) _Bool isiTunesPurchasedOrRentedContent; // @synthesize isiTunesPurchasedOrRentedContent=_isiTunesPurchasedOrRentedContent;
@property(nonatomic) _Bool disableScrubbing; // @synthesize disableScrubbing=_disableScrubbing;
@property(nonatomic) _Bool disableResumeMenu; // @synthesize disableResumeMenu=_disableResumeMenu;
@property(copy, nonatomic) NSNumber *bookmarkOverrideTime; // @synthesize bookmarkOverrideTime=_bookmarkOverrideTime;
@property(copy, nonatomic) NSString *bookmarkID; // @synthesize bookmarkID=_bookmarkID;
@property(nonatomic) _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(copy, nonatomic) NSDictionary *fpsAdditionalServerParams; // @synthesize fpsAdditionalServerParams=_fpsAdditionalServerParams;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @synthesize fpsKeyServerURL=_fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsCertificateURL; // @synthesize fpsCertificateURL=_fpsCertificateURL;
@property(copy, nonatomic) NSURL *streamingOverrideURLForDownload; // @synthesize streamingOverrideURLForDownload=_streamingOverrideURLForDownload;
- (void)_scrubPlayerItemDidLoad:(id)arg1;	// IMP=0x00000000001f58fd
- (void)_keepKeyLoaderAlive:(id)arg1;	// IMP=0x00000000001f58f7
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;	// IMP=0x00000000001f58f1
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;	// IMP=0x00000000001f5552
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f5048
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;	// IMP=0x00000000001f5034
- (void)mediaItem:(id)arg1 didChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5;	// IMP=0x00000000001f4f57
- (void)mediaItem:(id)arg1 errorDidOccur:(id)arg2 player:(id)arg3;	// IMP=0x00000000001f4f51
- (id)reportingDelegate;	// IMP=0x00000000001f4f48
- (void)cleanUpMediaItem;	// IMP=0x00000000001f4de2
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x00000000001f4c9c
- (id)_replacementErrorForITunesPlaybackError:(id)arg1;	// IMP=0x00000000001f476b
- (id)_replacementErrorForPlaybackError:(id)arg1;	// IMP=0x00000000001f422f
- (id)replacementErrorForPlaybackError:(id)arg1;	// IMP=0x00000000001f41ba
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f3896
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000001f3806
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000001f3345
- (_Bool)hasTrait:(id)arg1;	// IMP=0x00000000001f3080
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x00000000001f2fc2
- (id)mediaItemURL;	// IMP=0x00000000001f2fb0
- (void)dealloc;	// IMP=0x00000000001f2f3e
- (void)resetReportingEventCollection;	// IMP=0x00000000001f2ea2
- (id)initWithURL:(id)arg1;	// IMP=0x00000000001f2c14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

