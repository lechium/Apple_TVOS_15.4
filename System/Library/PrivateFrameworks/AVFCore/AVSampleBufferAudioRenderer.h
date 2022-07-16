//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVMediaDataRequesterConsumer-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRendering-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal-Protocol.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering>
{
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;	// 8 = 0x8
}

+ (id)sampleBufferAudioRenderer;	// IMP=0x000000000004dd46
+ (void)setFigAudioRendererFactory:(id)arg1 forQueue:(id)arg2;	// IMP=0x000000000004ee3a
+ (id)currentFigAudioRendererFactory;	// IMP=0x000000000004ee00
@property(readonly, nonatomic) _Bool hasSufficientMediaDataForReliablePlaybackStart;
- (void)stopRequestingMediaData;	// IMP=0x000000000004ed2c
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ebd7
@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
- (void)flushFromSourceTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ea4e
- (void)flush;	// IMP=0x000000000004e9fe
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000004e876
- (_Bool)setRenderSynchronizer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e72d
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;	// IMP=0x000000000004e6ff
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (_Bool)isMuted;	// IMP=0x000000000004e6cf
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000004e656
- (float)volume;	// IMP=0x000000000004e647
- (void)setVolume:(float)arg1;	// IMP=0x000000000004e5b1
@property(nonatomic) unsigned long long allowedAudioSpatializationFormats;
- (struct opaqueMTAudioProcessingTap *)audioTapProcessor;	// IMP=0x000000000004e502
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x000000000004e484
- (_Bool)willTrimShortDurationSamples;	// IMP=0x000000000004e3fe
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;	// IMP=0x000000000004e12b
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;	// IMP=0x000000000004e07e
- (id)audioSession;	// IMP=0x000000000004dfb7
- (void)setAudioSession:(id)arg1;	// IMP=0x000000000004deba
- (void)dealloc;	// IMP=0x000000000004dd5f
- (id)init;	// IMP=0x000000000004dbba
- (void)setOutputContext:(id)arg1;	// IMP=0x000000000004daac
- (id)outputContext;	// IMP=0x000000000004da22
- (void)_uninstallNotificationHandlers;	// IMP=0x000000000004d953
- (int)_installNotificationHandlers;	// IMP=0x000000000004d798
- (void)_wasFlushedAutomaticallyAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000004d6d4
- (void)_triggerMediaRequestCallback;	// IMP=0x000000000004d682
- (int)_initializeTimebase;	// IMP=0x000000000004d621

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
