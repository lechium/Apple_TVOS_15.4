//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioPowerSpectrumSourceDelegate-Protocol.h>
#import <AVConference/VCAudioStreamGroup-Protocol.h>
#import <AVConference/VCMediaCaptureController-Protocol.h>

@class NSString, VCAudioIO, VCAudioPowerSpectrumSource;

__attribute__((visibility("hidden")))
@interface VCAudioStreamGroupCommon <VCAudioStreamGroup, VCMediaCaptureController, VCAudioPowerSpectrumSourceDelegate, VCAudioIODelegate>
{
    struct tagVCAudioStreamGroupStream *_audioStreams;	// 16 = 0x10
    struct opaqueVCAudioBufferList *_sampleBuffer;	// 24 = 0x18
    struct VCAudioStreamGroupSyncDestinationList _syncDestinationList;	// 32 = 0x20
    VCAudioIO *_audioIO;	// 40 = 0x28
    int _processID;	// 48 = 0x30
    _Bool _isGKVoiceChat;	// 52 = 0x34
    unsigned int _preferredIOSampleRate;	// 56 = 0x38
    unsigned int _preferredIOSamplesPerFrame;	// 60 = 0x3c
    unsigned int _audioSessionID;	// 64 = 0x40
    int _deviceRole;	// 68 = 0x44
    int _operatingMode;	// 72 = 0x48
    unsigned int _audioType;	// 76 = 0x4c
    unsigned long long _spatialToken;	// 80 = 0x50
    _Bool _isMuted;	// 88 = 0x58
    long long _powerSpectrumStreamToken;	// 96 = 0x60
    unsigned int _streamGroupID;	// 104 = 0x68
    NSString *_participantUUID;	// 112 = 0x70
    unsigned char _direction;	// 120 = 0x78
    unsigned int _audioChannelIndex;	// 124 = 0x7c
    unsigned int _maxChannelCount;	// 128 = 0x80
    void *_context;	// 136 = 0x88
    CDUnknownFunctionPointerType _callback;	// 144 = 0x90
    VCAudioPowerSpectrumSource *_audioPowerSpectrumSource;	// 152 = 0x98
    _Bool _isPowerSpectrumEnabled;	// 160 = 0xa0
    unsigned int _processedFramesCount;	// 164 = 0xa4
    struct opaqueCMSimpleQueue *_syncDestinationChangeEventQueue;	// 168 = 0xa8
    struct tagVCMemoryPool *_syncDestinationChangeEventPool;	// 176 = 0xb0
}

+ (_Bool)isSupportedDirection:(unsigned char)arg1;	// IMP=0x000000000004c3c3
@property unsigned int audioChannelIndex; // @synthesize audioChannelIndex=_audioChannelIndex;
@property(readonly) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(readonly, nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic, setter=setMuted:) _Bool isMuted; // @synthesize isMuted=_isMuted;
- (void)cleanupSyncDestinations;	// IMP=0x000000000004c3d1
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x000000000004c371
- (void)sendAudioPowerSpectrumSourceRegistration:(_Bool)arg1;	// IMP=0x000000000004c2ba
- (void)audioPowerSpectrumSinkDidUnregister;	// IMP=0x000000000004c2a6
- (void)audioPowerSpectrumSinkDidRegister;	// IMP=0x000000000004c28f
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x000000000004c0c0
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x000000000004bef1
- (_Bool)enqueueSyncDestinationChangeEvent:(id)arg1 eventType:(int)arg2;	// IMP=0x000000000004bcb6
- (void)collectAndLogChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x000000000004b793
- (_Bool)configureStreams:(id)arg1 withRateControlConfig:(id)arg2;	// IMP=0x000000000004b405
- (void)stopAudioDump;	// IMP=0x000000000004b3be
- (void)startAudioDump;	// IMP=0x000000000004b3b8
- (id)getAudioDumpName;	// IMP=0x000000000004b3b0
- (id)stopCapture;	// IMP=0x000000000004b00d
- (id)startCapture;	// IMP=0x000000000004adff
- (_Bool)removeSyncDestination:(id)arg1 shouldSchedule:(_Bool)arg2;	// IMP=0x000000000004ac8c
- (_Bool)addSyncDestination:(id)arg1 shouldSchedule:(_Bool)arg2;	// IMP=0x000000000004aa23
- (_Bool)reconfigureAudioIOIfNeededWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000004a55f
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000049975
- (void)cleanupStreams;	// IMP=0x0000000000049944
- (void)setupStreamsWithStreamInfos:(id)arg1;	// IMP=0x0000000000049498
- (void)cleanupPowerSpectrumSource;	// IMP=0x00000000000493fa
- (_Bool)setupPowerSpectrumSource;	// IMP=0x00000000000492e3
@property(setter=setPowerSpectrumEnabled:) _Bool isPowerSpectrumEnabled;
@property(readonly) struct tagVCAudioStreamGroupStream *audioStreams;
- (_Bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000004924c
- (void)dealloc;	// IMP=0x000000000004914e
- (void)flushSyncDestinationUpdatesEventQueue;	// IMP=0x0000000000049108
- (id)initWithConfig:(id)arg1 audioCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 audioDirection:(unsigned char)arg4;	// IMP=0x0000000000048c9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

