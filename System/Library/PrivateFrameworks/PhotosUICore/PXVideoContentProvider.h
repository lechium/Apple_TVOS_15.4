//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISWrappedAVAudioSession, NSDictionary, NSNumber, NSString, PXVideoContentProviderLoadingResult;

@interface PXVideoContentProvider
{
    PXVideoContentProviderLoadingResult *_loadingResult;	// 8 = 0x8
    double _loadingProgress;	// 16 = 0x10
    NSNumber *_videoAspectRatio;	// 24 = 0x18
    NSString *_contentIdentifier;	// 32 = 0x20
    ISWrappedAVAudioSession *_audioSession;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007eb587
@property(readonly, nonatomic) ISWrappedAVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, copy, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(retain, nonatomic) NSNumber *videoAspectRatio; // @synthesize videoAspectRatio=_videoAspectRatio;
@property(nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(retain, nonatomic) PXVideoContentProviderLoadingResult *loadingResult; // @synthesize loadingResult=_loadingResult;
@property(readonly, nonatomic) NSDictionary *analyticsPayload;
- (void)cancelLoading;	// IMP=0x00000000007eb30d
- (void)beginLoadingWithPriority:(long long)arg1;	// IMP=0x00000000007eb266
- (void)makeUniqueContentIdentifier;	// IMP=0x00000000007eb1bf
- (id)mutableChangeObject;	// IMP=0x00000000007eb1b6

@end

