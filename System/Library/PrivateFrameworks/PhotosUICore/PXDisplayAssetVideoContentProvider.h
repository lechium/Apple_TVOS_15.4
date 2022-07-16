//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDisplayAssetVideoContentProviderRequestDelegate-Protocol.h>

@class ISWrappedAVAudioSession, NSArray, NSMutableDictionary, NSObject, NSString, PXMediaProvider;
@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXDisplayAssetVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate>
{
    long long _videoRequestID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_loadingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_postprocessingQueue;	// 24 = 0x18
    NSMutableDictionary *_loadingQueue_requestsByPriority;	// 32 = 0x20
    long long _loadingQueue_lastRequestedPriority;	// 40 = 0x28
    id <PXDisplayAsset> _loadingQueue_asset;	// 48 = 0x30
    double _videoAspectRatio;	// 56 = 0x38
    NSArray *_strategies;	// 64 = 0x40
    _Bool _requestURLOnly;	// 72 = 0x48
    NSString *_contentIdentifier;	// 80 = 0x50
    ISWrappedAVAudioSession *_audioSession;	// 88 = 0x58
    PXMediaProvider *_mediaProvider;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000004b7f
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (id)audioSession;	// IMP=0x0000000000004b5d
- (id)contentIdentifier;	// IMP=0x0000000000004b4c
- (void)request:(id)arg1 didFinishWithPlayerItem:(id)arg2 videoURL:(id)arg3 downloadedTimeRange:(CDStruct_e83c9415)arg4 info:(id)arg5;	// IMP=0x00000000000049ff
- (void)requestLoadingProgressDidChange:(id)arg1;	// IMP=0x00000000000049ad
- (void)_handleMediaServicesWereResetNotification:(id)arg1;	// IMP=0x000000000000495b
- (void)_loadingQueue_reloadContent;	// IMP=0x00000000000048f5
- (void)_handlePostprocessedPlayerItem:(id)arg1 priority:(long long)arg2 description:(id)arg3;	// IMP=0x0000000000004750
- (void)_postprocessingQueue_performPostprocessingOfItem:(id)arg1 info:(id)arg2 priority:(long long)arg3;	// IMP=0x000000000000466b
- (_Bool)_loadingQueue_needsNewRequestForPriority:(long long)arg1;	// IMP=0x0000000000004548
- (void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)arg1;	// IMP=0x0000000000004405
- (void)_loadingQueue_cancelAllRequests;	// IMP=0x00000000000043bb
- (void)_loadingQueueBeginLoadingWithPriority:(long long)arg1;	// IMP=0x0000000000004325
- (void)_loadingQueue_setAsset:(id)arg1;	// IMP=0x0000000000004219
- (void)makeUniqueContentIdentifier;	// IMP=0x00000000000041a9
- (void)cancelLoading;	// IMP=0x0000000000004157
@property(retain, nonatomic) id <PXDisplayAsset> asset;
- (void)reloadContent;	// IMP=0x0000000000003f47
@property(readonly, copy) NSString *description;
- (void)postprocessPlayerItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003e94
@property(readonly, nonatomic) _Bool needsPostprocessing;
- (id)videoAspectRatio;	// IMP=0x0000000000003e64
- (void)beginLoadingWithPriority:(long long)arg1;	// IMP=0x0000000000003cf5
- (id)analyticsPayload;	// IMP=0x0000000000003c4b
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 requestURLOnly:(_Bool)arg5;	// IMP=0x0000000000003896
- (id)init;	// IMP=0x000000000000381c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

