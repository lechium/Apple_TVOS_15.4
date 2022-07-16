//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioConverter, CSAudioInjectionDevice, NSObject, NSString, NSUUID;
@protocol CSAudioInjectionEngineDelegate, OS_dispatch_queue;

@interface CSAudioInjectionTvRemoteEngine
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <CSAudioInjectionEngineDelegate> _delegate;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    CSAudioInjectionDevice *_connectedDevice;	// 32 = 0x20
    CSAudioConverter *_encoder;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000009b952
@property(retain, nonatomic) CSAudioConverter *encoder; // @synthesize encoder=_encoder;
@property(nonatomic) __weak CSAudioInjectionDevice *connectedDevice; // @synthesize connectedDevice=_connectedDevice;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <CSAudioInjectionEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5;	// IMP=0x001000000009b72a
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000009b724
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;	// IMP=0x001000000009b6ce
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x001000000009b631
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000009b589
- (void)stopAudioStream;	// IMP=0x001000000009b55a
- (void)startAudioStreamWithOption:(id)arg1;	// IMP=0x001000000009b52b
- (_Bool)isRecording;	// IMP=0x001000000009b4fc
- (_Bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009b4cd
- (_Bool)injectAudio:(id)arg1;	// IMP=0x001000000009b49e
- (void)stop;	// IMP=0x001000000009b46f
- (void)start;	// IMP=0x001000000009b440
- (void)attachDevice:(id)arg1;	// IMP=0x001000000009b3c1
- (_Bool)alwaysOnVoiceTriggerEnabled;	// IMP=0x001000000009b3b9
- (void)setAlwaysOnVoiceTriggerEnabled:(_Bool)arg1;	// IMP=0x001000000009b3b3
- (_Bool)isAlwaysOnVoiceTriggerAvailable;	// IMP=0x001000000009b3ab
- (id)initWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000009b27e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

