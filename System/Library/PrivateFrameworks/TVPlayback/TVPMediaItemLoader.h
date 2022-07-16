//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/AVAssetResourceLoaderDelegate-Protocol.h>

@class AVURLAsset, NSError, NSNotification, NSString, NSTimer, TVPContentKeySession, TVPMediaItemTimingData, TVPStateMachine, TVSCacheDeletePurgeID;
@protocol OS_dispatch_queue, TVPMediaItem;

__attribute__((visibility("hidden")))
@interface TVPMediaItemLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    _Bool _allowsCellularUsage;	// 8 = 0x8
    _Bool _allowsConstrainedNetworkUsage;	// 9 = 0x9
    _Bool _cleanedUp;	// 10 = 0xa
    _Bool _AVAudioSessionConfiguredAfterMediaServicesReset;	// 11 = 0xb
    NSObject<TVPMediaItem> *_mediaItem;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    TVPMediaItemTimingData *_timingData;	// 40 = 0x28
    AVURLAsset *_existingAVAsset;	// 48 = 0x30
    id _reportingHierarchyToken;	// 56 = 0x38
    AVURLAsset *_AVAsset;	// 64 = 0x40
    TVPStateMachine *_stateMachine;	// 72 = 0x48
    AVURLAsset *_AVAssetInternal;	// 80 = 0x50
    TVPContentKeySession *_contentKeySession;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_assetInternalAccessQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_assetLoadContextAccessQueue;	// 104 = 0x68
    unsigned long long _assetLoadContext;	// 112 = 0x70
    unsigned long long _refCount;	// 120 = 0x78
    NSString *_mediaItemLoaderGUID;	// 128 = 0x80
    TVSCacheDeletePurgeID *_cacheDeletePurgeID;	// 136 = 0x88
    NSTimer *_diskSpaceMonitorTimer;	// 144 = 0x90
    NSNotification *_savedMediaServerResetUserNotification;	// 152 = 0x98
}

+ (id)tempDirURL;	// IMP=0x0000000000078b63
+ (void)removeTemporaryDownloadDirectory;	// IMP=0x0000000000078a92
+ (id)loaderForMediaItem:(id)arg1;	// IMP=0x00000000000787f2
+ (void)initialize;	// IMP=0x00000000000786bb
- (void).cxx_destruct;	// IMP=0x00000000000878ed
@property(retain, nonatomic) NSNotification *savedMediaServerResetUserNotification; // @synthesize savedMediaServerResetUserNotification=_savedMediaServerResetUserNotification;
@property(nonatomic) _Bool AVAudioSessionConfiguredAfterMediaServicesReset; // @synthesize AVAudioSessionConfiguredAfterMediaServicesReset=_AVAudioSessionConfiguredAfterMediaServicesReset;
@property(nonatomic) _Bool cleanedUp; // @synthesize cleanedUp=_cleanedUp;
@property(retain, nonatomic) NSTimer *diskSpaceMonitorTimer; // @synthesize diskSpaceMonitorTimer=_diskSpaceMonitorTimer;
@property(retain, nonatomic) TVSCacheDeletePurgeID *cacheDeletePurgeID; // @synthesize cacheDeletePurgeID=_cacheDeletePurgeID;
@property(copy, nonatomic) NSString *mediaItemLoaderGUID; // @synthesize mediaItemLoaderGUID=_mediaItemLoaderGUID;
@property(nonatomic) unsigned long long refCount; // @synthesize refCount=_refCount;
@property(nonatomic) unsigned long long assetLoadContext; // @synthesize assetLoadContext=_assetLoadContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetLoadContextAccessQueue; // @synthesize assetLoadContextAccessQueue=_assetLoadContextAccessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetInternalAccessQueue; // @synthesize assetInternalAccessQueue=_assetInternalAccessQueue;
@property(retain, nonatomic) TVPContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(retain, nonatomic) AVURLAsset *AVAssetInternal; // @synthesize AVAssetInternal=_AVAssetInternal;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) AVURLAsset *AVAsset; // @synthesize AVAsset=_AVAsset;
@property(nonatomic) _Bool allowsConstrainedNetworkUsage; // @synthesize allowsConstrainedNetworkUsage=_allowsConstrainedNetworkUsage;
@property(nonatomic) _Bool allowsCellularUsage; // @synthesize allowsCellularUsage=_allowsCellularUsage;
@property(retain, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(retain, nonatomic) AVURLAsset *existingAVAsset; // @synthesize existingAVAsset=_existingAVAsset;
@property(retain, nonatomic) TVPMediaItemTimingData *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;	// IMP=0x00000000000876bc
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x0000000000087413
- (void)_cleanUp;	// IMP=0x0000000000086fa8
- (void)_diskSpaceMonitorTimerFired:(id)arg1;	// IMP=0x0000000000086d73
- (void)_mediaItemStopPlayback:(id)arg1;	// IMP=0x0000000000086b9e
- (void)_mediaItemPlaybackErrorDidOccur:(id)arg1;	// IMP=0x00000000000868ee
- (void)_stopBackgroundCaching:(id)arg1;	// IMP=0x00000000000866e9
- (id)_skipKeyNameFromType:(unsigned long long)arg1;	// IMP=0x00000000000866d2
- (id)_rollKeyNameFromType:(unsigned long long)arg1;	// IMP=0x000000000008669d
- (unsigned long long)_skipTypeFromMetadataItemKey:(id)arg1;	// IMP=0x000000000008667d
- (unsigned long long)_rollTypeFromMetadataItemKey:(id)arg1;	// IMP=0x00000000000865f7
- (id)_stringValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;	// IMP=0x00000000000864f4
- (id)_numberValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;	// IMP=0x00000000000863f1
- (id)_productPlacementInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2;	// IMP=0x00000000000862e3
- (id)_advisoryInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 withTotalCount:(unsigned long long)arg3;	// IMP=0x0000000000085eba
- (id)_skipInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4;	// IMP=0x0000000000085633
- (id)_rollInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4;	// IMP=0x0000000000084ed8
- (void)_loadMediaItemMetadataAsynchronously;	// IMP=0x0000000000081f36
- (id)_contentKeyRequestParamsFromBase64String:(id)arg1;	// IMP=0x0000000000081875
- (id)_tomatoFreshnessFromString:(id)arg1;	// IMP=0x00000000000817ce
- (id)_advisoryKeyNamesWithCount:(unsigned long long)arg1;	// IMP=0x00000000000816ac
- (id)_skipKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000081474
- (id)_rollKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000081259
- (_Bool)_needToLoadBlockingMetadataKeys;	// IMP=0x0000000000080ec9
- (id)_metadataKeysToLoad;	// IMP=0x0000000000080dbb
- (void)_postMediaServicesResetFailureWithNotification:(id)arg1;	// IMP=0x0000000000080c9d
- (void)_avAudioSessionConfiguredAfterMediaServicesReset;	// IMP=0x0000000000080b92
- (void)_avAudioSessionMediaServicesReset:(id)arg1;	// IMP=0x0000000000080b1d
- (void)_avAssetMediaServicesReset:(id)arg1;	// IMP=0x00000000000809a7
- (id)_avAssetOptions;	// IMP=0x000000000007fef6
- (void)_registerStateMachineHandlers;	// IMP=0x000000000007a3ed
- (void)loadSHA1DigestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a04f
- (id)newPlayerItem;	// IMP=0x00000000000798ed
@property(readonly, nonatomic) _Bool containsStreamingAVAsset;
@property(readonly, copy) NSString *description;
- (void)prepareForPlaybackInitiation;	// IMP=0x00000000000792fa
- (void)cleanupIfNecessary;	// IMP=0x000000000007925f
- (void)loadIfNecessary;	// IMP=0x00000000000791de
- (void)dealloc;	// IMP=0x0000000000079111
- (id)initWithMediaItem:(id)arg1;	// IMP=0x0000000000078c21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

