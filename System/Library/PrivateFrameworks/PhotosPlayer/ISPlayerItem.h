//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetImageGenerator, AVPlayerItem, AVVideoComposition, ISAsset, ISPlayerContent, NSError, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ISPlayerItem
{
    void *_ivarQueueIdentifier;	// 8 = 0x8
    void *_workQueueIdentifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    long long _ivarQueue_loadingTarget;	// 40 = 0x28
    AVVideoComposition *_ivarQueue_videoComposition;	// 48 = 0x30
    long long _ivarQueue_videoPlayerItemRequestID;	// 56 = 0x38
    _Bool _ivarQueue_aggressivelyCacheVideoFrames;	// 64 = 0x40
    _Bool _ivarQueue_reversesMoreVideoFramesInMemory;	// 65 = 0x41
    _Bool _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;	// 66 = 0x42
    _Bool _ivarQueue_contentSupportsVitality;	// 67 = 0x43
    CDStruct_1b6d18a9 _ivarQueue_playerItemPhotoTime;	// 68 = 0x44
    CDStruct_1b6d18a9 _ivarQueue_playerItemDuration;	// 92 = 0x5c
    ISPlayerContent *_ivarQueue_playerContent;	// 120 = 0x78
    long long _ivarQueue_status;	// 128 = 0x80
    AVPlayerItem *_ivarQueue_videoPlayerItem;	// 136 = 0x88
    NSNumber *_ivarQueue_variationIdentifier;	// 144 = 0x90
    NSString *_ivarQueue_minimumClientVersion;	// 152 = 0x98
    NSError *_ivarQueue_error;	// 160 = 0xa0
    struct {
        _Bool videoPlayerItem;
        _Bool status;
        _Bool content;
        _Bool minimumClientVersion;
        _Bool playbackStyleIdentifier;
        _Bool contentSupportsVitality;
    } _ivarQueue_isValid;	// 168 = 0xa8
    AVAssetImageGenerator *_workQueue_imageGenerator;	// 176 = 0xb0
    _Bool _workQueue_isGeneratingOffsetImage;	// 184 = 0xb8
    _Bool __loadingCancelled;	// 185 = 0xb9
    ISAsset *_asset;	// 192 = 0xc0
    struct CGSize _targetSize;	// 200 = 0xc8
}

+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x000000000001bf6c
+ (long long)currentClientVersion;	// IMP=0x000000000001bf64
- (void).cxx_destruct;	// IMP=0x0000000000019b3e
@property(nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) _Bool _loadingCancelled; // @synthesize _loadingCancelled=__loadingCancelled;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) ISAsset *asset; // @synthesize asset=_asset;
- (void)_assertOnIvarQueue;	// IMP=0x0000000000019aef
- (void)_assertOnWorkQueue;	// IMP=0x0000000000019ae9
- (_Bool)_isOnWorkQueue;	// IMP=0x0000000000019abf
- (_Bool)_isOnIvarQueue;	// IMP=0x0000000000019a95
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019a71
- (void)_performIvarRead:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019a0f
- (void)_performWork:(CDUnknownBlockType)arg1;	// IMP=0x00000000000199f8
- (void)_performWork:(CDUnknownBlockType)arg1 sync:(_Bool)arg2;	// IMP=0x00000000000198a7
- (void)_updateStatusIfNeeded;	// IMP=0x0000000000019842
- (_Bool)_isStatusVaild;	// IMP=0x00000000000197a3
- (void)_invalidateStatus;	// IMP=0x0000000000019757
- (void)_updatePlayerContentIfNeeded;	// IMP=0x000000000001970b
- (_Bool)_isPlayerContentValid;	// IMP=0x000000000001966c
- (void)_invalidatePlayerContent;	// IMP=0x0000000000019620
- (id)_videoPlayerItem;	// IMP=0x0000000000019549
- (void)_setVideoPlayerItem:(id)arg1 videoDuration:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000001947b
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(_Bool)arg1 playerItem:(id)arg2 videoDuration:(CDStruct_1b6d18a9)arg3 error:(id)arg4;	// IMP=0x00000000000193a8
- (void)_updateVideoPlayerItemIfNeeded;	// IMP=0x0000000000019300
- (_Bool)_isVideoPlayerItemValid;	// IMP=0x0000000000019261
- (void)_invalidateVideoPlayerItem;	// IMP=0x0000000000019215
@property(nonatomic) _Bool contentSupportsVitality;
- (void)_updateContentSupportsVitalityIfNeeded;	// IMP=0x000000000001909d
- (void)_invalidateContentSupportsVitality;	// IMP=0x0000000000019051
- (_Bool)_isContentSupportsVitalityValid;	// IMP=0x0000000000018fb2
@property(retain, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
- (void)_updatePlaybackStyleIdentifierIfNeeded;	// IMP=0x0000000000018dc6
- (_Bool)_isPlaybackStyleIdentifierValid;	// IMP=0x0000000000018d27
- (void)_invalidatePlaybackStyleIdentifier;	// IMP=0x0000000000018cdb
@property(retain, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
- (void)_updateMinimumClientVersionIfNeeded;	// IMP=0x0000000000018990
- (_Bool)_isMinimumClientVersionValid;	// IMP=0x00000000000188f1
- (void)_invalidateMinimumClientVersion;	// IMP=0x00000000000188a5
- (_Bool)_needsUpdate;	// IMP=0x0000000000018802
- (void)_updateIfNeeded;	// IMP=0x00000000000187e9
@property(nonatomic, setter=_setStatus:) long long status;
@property(retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property(retain, nonatomic, setter=_setError:) NSError *error;
@property(nonatomic) _Bool decodesAllFramesDuringOrdinaryPlayback;
@property(nonatomic) _Bool reversesMoreVideoFramesInMemory;
@property(nonatomic) _Bool aggressivelyCacheVideoFrames;
- (void)_reloadAllContent;	// IMP=0x0000000000018022
- (void)resetAVObjects;	// IMP=0x0000000000017f1b
- (void)cancelLoading;	// IMP=0x0000000000017ecd
- (void)discardContentBelowLoadingTarget;	// IMP=0x0000000000017eb2
@property(nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID;
- (void)_cancelLoading;	// IMP=0x0000000000017d5e
@property(copy, nonatomic) AVVideoComposition *videoComposition;
@property(nonatomic) long long loadingTarget;
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017a29
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x000000000001772a
- (void)didPerformChanges;	// IMP=0x00000000000176e9
- (id)mutableChangeObject;	// IMP=0x00000000000176e0
- (void)dealloc;	// IMP=0x000000000001765e
- (id)init;	// IMP=0x000000000001763a

@end
