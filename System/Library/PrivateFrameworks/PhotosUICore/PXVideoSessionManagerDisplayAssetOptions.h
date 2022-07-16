//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISWrappedAVAudioSession, NSArray, NSMutableArray;

@interface PXVideoSessionManagerDisplayAssetOptions : NSObject
{
    _Bool _shouldCreateUniqueVideoSession;	// 8 = 0x8
    _Bool _shouldStabilizeLivePhotosIfPossible;	// 9 = 0x9
    _Bool _shouldCrossfadeLivePhotosWhenLooping;	// 10 = 0xa
    _Bool _isAudioAllowed;	// 11 = 0xb
    ISWrappedAVAudioSession *_audioSession;	// 16 = 0x10
    NSMutableArray *_strategiesStore;	// 24 = 0x18
    CDStruct_e83c9415 _livePhotoLoopTimeRange;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007c6d0e
@property(readonly, nonatomic) NSMutableArray *strategiesStore; // @synthesize strategiesStore=_strategiesStore;
@property(retain, nonatomic) ISWrappedAVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(nonatomic) _Bool isAudioAllowed; // @synthesize isAudioAllowed=_isAudioAllowed;
@property(nonatomic) CDStruct_e83c9415 livePhotoLoopTimeRange; // @synthesize livePhotoLoopTimeRange=_livePhotoLoopTimeRange;
@property(nonatomic) _Bool shouldCrossfadeLivePhotosWhenLooping; // @synthesize shouldCrossfadeLivePhotosWhenLooping=_shouldCrossfadeLivePhotosWhenLooping;
@property(nonatomic) _Bool shouldStabilizeLivePhotosIfPossible; // @synthesize shouldStabilizeLivePhotosIfPossible=_shouldStabilizeLivePhotosIfPossible;
@property(nonatomic) _Bool shouldCreateUniqueVideoSession; // @synthesize shouldCreateUniqueVideoSession=_shouldCreateUniqueVideoSession;
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)arg1 segmentTimeRange:(CDStruct_e83c9415)arg2 streamingAllowed:(_Bool)arg3 networkAccessAllowed:(_Bool)arg4;	// IMP=0x00000000007c6b72
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)arg1 segmentTimeRange:(CDStruct_e83c9415)arg2 streamingAllowed:(_Bool)arg3;	// IMP=0x00000000007c6b5a
@property(readonly, nonatomic) NSArray *strategies;
- (id)init;	// IMP=0x00000000007c6ab8

@end
