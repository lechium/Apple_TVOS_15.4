//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PHVideoRequestOptions;

@interface PHVideoRequestContext
{
    NSProgress *_progress;	// 16 = 0x10
    PHVideoRequestOptions *_videoOptions;	// 24 = 0x18
    long long _intent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000116cf8
@property(readonly, nonatomic) long long intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) PHVideoRequestOptions *videoOptions; // @synthesize videoOptions=_videoOptions;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000116a90
- (id)progresses;	// IMP=0x00000000001169e6
- (CDUnknownBlockType)progressHandler;	// IMP=0x00000000001169c9
- (_Bool)shouldReportProgress;	// IMP=0x0000000000116978
- (id)initialRequests;	// IMP=0x000000000011663b
- (_Bool)representsShareableHighQualityResource;	// IMP=0x0000000000116620
- (_Bool)isNetworkAccessAllowed;	// IMP=0x0000000000116603
- (long long)type;	// IMP=0x00000000001165f8
- (id)_lazyProgress;	// IMP=0x00000000001165a2
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000116472

@end

