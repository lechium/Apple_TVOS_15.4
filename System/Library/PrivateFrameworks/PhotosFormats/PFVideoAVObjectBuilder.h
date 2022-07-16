//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVVideoComposition, PFSlowMotionTimeRangeMapper, PFVideoAdjustments;

@interface PFVideoAVObjectBuilder : NSObject
{
    AVAsset *_videoAsset;	// 8 = 0x8
    PFVideoAdjustments *_videoAdjustments;	// 16 = 0x10
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForPlayback;	// 24 = 0x18
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForExport;	// 32 = 0x20
    AVAsset *__finalAsset;	// 40 = 0x28
    AVAudioMix *__finalAudioMix;	// 48 = 0x30
    AVVideoComposition *__finalVideoComposition;	// 56 = 0x38
    CDStruct_e83c9415 _timeRange;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000006e296
@property(readonly, nonatomic) AVVideoComposition *_finalVideoComposition; // @synthesize _finalVideoComposition=__finalVideoComposition;
@property(readonly, nonatomic) AVAudioMix *_finalAudioMix; // @synthesize _finalAudioMix=__finalAudioMix;
@property(readonly, nonatomic) AVAsset *_finalAsset; // @synthesize _finalAsset=__finalAsset;
@property(readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForExport; // @synthesize _timeRangeMapperForExport=__timeRangeMapperForExport;
@property(readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForPlayback; // @synthesize _timeRangeMapperForPlayback=__timeRangeMapperForPlayback;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) PFVideoAdjustments *videoAdjustments; // @synthesize videoAdjustments=_videoAdjustments;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (id)_trimAssetIfNecessary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006de67
- (void)_synchronouslyLoadSlowMotionPropertiesFromAsset:(id)arg1;	// IMP=0x000000000006dd02
- (void)requestAVAssetForExport:(_Bool)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006db38
- (void)requestAsynchronousAVAssetWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006da59
- (void)requestAVAssetWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006da3f
- (void)requestAsynchronousExportSessionWithExportPreset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d92f
- (void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d63b
- (void)requestAsynchronousPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006d55c
- (void)requestPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006d064
- (id)description;	// IMP=0x000000000006cf89
- (id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3;	// IMP=0x000000000006ced2
- (id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2;	// IMP=0x000000000006ce27
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;	// IMP=0x000000000006e837
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;	// IMP=0x000000000006e76f
- (CDStruct_e83c9415)slowMotionRampOutRangeForExport:(_Bool)arg1;	// IMP=0x000000000006e607
- (CDStruct_e83c9415)slowMotionRampInRangeForExport:(_Bool)arg1;	// IMP=0x000000000006e49f
- (id)_getOrCreateTimeRangeMapperForExport:(_Bool)arg1;	// IMP=0x000000000006e35e

@end

