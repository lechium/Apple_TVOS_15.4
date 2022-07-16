//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICMediaRedownloadResponse, ICStoreRequestContext, ICStoreURLRequest, ICUnfairLock, NSDictionary, NSString;

@interface ICMediaRedownloadRequest
{
    ICStoreRequestContext *_requestContext;	// 8 = 0x8
    ICMediaRedownloadResponse *_redownloadResponse;	// 16 = 0x10
    ICStoreURLRequest *_storeURLRequest;	// 24 = 0x18
    ICUnfairLock *_lock;	// 32 = 0x20
    _Bool _playbackRequest;	// 40 = 0x28
    _Bool _streamingRental;	// 41 = 0x29
    _Bool _usePrioritizedURLSession;	// 42 = 0x2a
    _Bool _includeKeybagSyncData;	// 43 = 0x2b
    _Bool _includeSubscriptionKeybagSyncData;	// 44 = 0x2c
    NSDictionary *_redownloadParameters;	// 48 = 0x30
    NSString *_requestURLBagKey;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c0b4c
@property(nonatomic) _Bool includeSubscriptionKeybagSyncData; // @synthesize includeSubscriptionKeybagSyncData=_includeSubscriptionKeybagSyncData;
@property(nonatomic) _Bool includeKeybagSyncData; // @synthesize includeKeybagSyncData=_includeKeybagSyncData;
@property(copy, nonatomic) NSString *requestURLBagKey; // @synthesize requestURLBagKey=_requestURLBagKey;
@property(copy, nonatomic) NSDictionary *redownloadParameters; // @synthesize redownloadParameters=_redownloadParameters;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) _Bool usePrioritizedURLSession; // @synthesize usePrioritizedURLSession=_usePrioritizedURLSession;
@property(nonatomic, getter=isStreamingRental) _Bool streamingRental; // @synthesize streamingRental=_streamingRental;
@property(nonatomic, getter=isPlaybackRequest) _Bool playbackRequest; // @synthesize playbackRequest=_playbackRequest;
- (void)_executeWithActiveICloudAccountProperties:(id)arg1;	// IMP=0x00000000000c0976
- (void)cancel;	// IMP=0x00000000000c091c
- (void)execute;	// IMP=0x00000000000c0731
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0657
- (id)initWithRequestContext:(id)arg1 redownloadParametersString:(id)arg2;	// IMP=0x00000000000c05d1
- (id)initWithRequestContext:(id)arg1 redownloadParameters:(id)arg2;	// IMP=0x00000000000c0540
- (id)init;	// IMP=0x00000000000c04ac

@end
