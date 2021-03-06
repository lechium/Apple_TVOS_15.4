//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PHImageRequest, PHLivePhotoRequestOptions, PHLivePhotoResult, PHVideoRequest;

@interface PHLivePhotoRequestContext
{
    NSProgress *_imageProgress;	// 16 = 0x10
    NSProgress *_videoProgress;	// 24 = 0x18
    PHLivePhotoResult *_livePhotoResult;	// 32 = 0x20
    PHImageRequest *_fastImageRequest;	// 40 = 0x28
    PHImageRequest *_highQualityImageRequest;	// 48 = 0x30
    PHVideoRequest *_videoRequest;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    _Bool _imagePartCompleted;	// 68 = 0x44
    _Bool _videoPartCompleted;	// 69 = 0x45
    PHLivePhotoRequestOptions *_livePhotoOptions;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000ad004
@property(readonly, nonatomic) PHLivePhotoRequestOptions *livePhotoOptions; // @synthesize livePhotoOptions=_livePhotoOptions;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000000000acc44
- (id)progresses;	// IMP=0x00000000000acb1f
- (CDUnknownBlockType)progressHandler;	// IMP=0x00000000000acb02
- (_Bool)shouldReportProgress;	// IMP=0x00000000000acab1
- (id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3 result:(id)arg4;	// IMP=0x00000000000ac61c
- (id)initialRequests;	// IMP=0x00000000000ac0da
- (_Bool)representsShareableHighQualityResource;	// IMP=0x00000000000ac0d2
- (_Bool)isNetworkAccessAllowed;	// IMP=0x00000000000ac0b5
- (long long)type;	// IMP=0x00000000000ac0aa
- (id)_lazyVideoProgress;	// IMP=0x00000000000ac042
- (id)_lazyImageProgress;	// IMP=0x00000000000abfda
- (_Bool)_shouldRequestVideo;	// IMP=0x00000000000abfb5
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000abedc

@end

