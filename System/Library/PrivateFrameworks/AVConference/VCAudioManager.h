//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>
#import <AVConference/VCAudioSessionDelegate-Protocol.h>

@class ATSpatialStreamDescriptions, AVAudioDevice, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, VCAudioRelay, VCAudioRelayIO, VCAudioSessionMediaProperties, VCAudioUnitProperties, VCAudioUnitSpatialContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioSessionDelegate>
{
    struct tagHANDLE *_hAUIO;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    unsigned int _state;	// 24 = 0x18
    VCAudioSessionMediaProperties *_currentAudioSessionMediaProperties;	// 32 = 0x20
    VCAudioUnitProperties *_currentAudioUnitProperties;	// 40 = 0x28
    NSDictionary *_vpOperatingModeToAudioSessionMediaFormatMapping;	// 48 = 0x30
    NSMutableArray *_allClients;	// 56 = 0x38
    NSMutableArray *_startingIOClients;	// 64 = 0x40
    AVAudioDevice *_inputDevice;	// 72 = 0x48
    AVAudioDevice *_outputDevice;	// 80 = 0x50
    _Bool _isGKVoiceChat;	// 88 = 0x58
    _Bool _isMicrophoneMuted;	// 89 = 0x59
    _Bool _isMixingVoiceWithMediaEnabled;	// 90 = 0x5a
    _Bool _isInDaemon;	// 91 = 0x5b
    _Bool _isInputMeteringEnabled;	// 92 = 0x5c
    _Bool _isOutputMeteringEnabled;	// 93 = 0x5d
    _Bool _isSpeakerPhoneEnabled;	// 94 = 0x5e
    _Bool _isSuspended;	// 95 = 0x5f
    _Bool _followSystemInput;	// 96 = 0x60
    _Bool _followSystemOutput;	// 97 = 0x61
    struct _VCAudioIOControllerIOState _sinkData;	// 104 = 0x68
    struct _VCAudioIOControllerIOState _sourceData;	// 216 = 0xd8
    int _interruptThreadState;	// 328 = 0x148
    VCAudioRelay *_interruptThread;	// 336 = 0x150
    VCAudioRelayIO *_interruptThreadClient;	// 344 = 0x158
    _Bool _isInterrupting;	// 352 = 0x160
    struct _opaque_pthread_mutex_t _interruptingMutex;	// 360 = 0x168
    _Bool _spatialAudioDisabled;	// 424 = 0x1a8
    void **_audioSession;	// 432 = 0x1b0
    int _playbackMode;	// 440 = 0x1b8
    NSMutableDictionary *_spatialContexts;	// 448 = 0x1c0
    NSMutableDictionary *_audioSessionSinkMuted;	// 456 = 0x1c8
    VCAudioUnitSpatialContext *_currentSpatialContext;	// 464 = 0x1d0
    CDUnknownBlockType _mutedTalkerNotificationHandler;	// 472 = 0x1d8
    NSArray *_stateStrings;	// 480 = 0x1e0
    ATSpatialStreamDescriptions *_spatialStreamDescriptions;	// 488 = 0x1e8
    _Bool _isMediaPlaybackOnExternalDevice;	// 496 = 0x1f0
}

+ (id)sharedSystemAudioInstance;	// IMP=0x0000000000008bc6
+ (id)sharedVoiceChatInstance;	// IMP=0x0000000000008b6f
@property(retain, nonatomic) NSDictionary *vpOperatingModeToAudioSessionMediaFormatMapping; // @synthesize vpOperatingModeToAudioSessionMediaFormatMapping=_vpOperatingModeToAudioSessionMediaFormatMapping;
@property(nonatomic) _Bool isInDaemon; // @synthesize isInDaemon=_isInDaemon;
@property(retain, nonatomic) VCAudioUnitProperties *currentAudioUnitProperties; // @synthesize currentAudioUnitProperties=_currentAudioUnitProperties;
@property(retain, nonatomic) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties; // @synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties;
@property(nonatomic, getter=isSpeakerPhoneEnabled) _Bool speakerPhoneEnabled; // @synthesize speakerPhoneEnabled=_isSpeakerPhoneEnabled;
@property(retain, nonatomic) AVAudioDevice *currentOutputDevice; // @synthesize currentOutputDevice=_outputDevice;
@property(retain, nonatomic) AVAudioDevice *currentInputDevice; // @synthesize currentInputDevice=_inputDevice;
@property(nonatomic, getter=isMixingVoiceWithMediaEnabled) _Bool mixingVoiceWithMediaEnabled; // @synthesize mixingVoiceWithMediaEnabled=_isMixingVoiceWithMediaEnabled;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted; // @synthesize microphoneMuted=_isMicrophoneMuted;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
- (int)setVolume:(float)arg1 withRampTime:(float)arg2;	// IMP=0x00000000000131d0
- (void)setupDynamicDuckingVolumeHandlerForAUIO:(struct tagHANDLE *)arg1;	// IMP=0x00000000000131ca
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x0000000000013178
- (void)didSessionEnd;	// IMP=0x0000000000013166
- (void)didSessionStop;	// IMP=0x0000000000013154
- (void)didSessionResume;	// IMP=0x0000000000012f57
- (void)didSessionPause;	// IMP=0x0000000000012d4f
- (void)stopInterruptThread;	// IMP=0x0000000000012c62
- (void)startInterruptThread;	// IMP=0x0000000000012a92
- (void)cleanupInterruptThread;	// IMP=0x0000000000012a4e
- (_Bool)setupInterruptThread;	// IMP=0x00000000000128d2
- (void)stopAudioSession;	// IMP=0x00000000000128be
- (void)resetAudioSessionWithProperties:(id)arg1 interruptSuccessful:(_Bool *)arg2;	// IMP=0x000000000001278d
- (_Bool)startAudioSessionWithProperties:(id)arg1;	// IMP=0x0000000000012778
- (void)refreshRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;	// IMP=0x000000000001267a
- (void)refreshOutputMetering;	// IMP=0x00000000000125f6
- (void)refreshInputMetering;	// IMP=0x0000000000012572
- (void)updateClient:(id)arg1 direction:(unsigned char)arg2;	// IMP=0x0000000000012019
- (void)stopClient:(id)arg1;	// IMP=0x0000000000011c47
- (void)startClient:(id)arg1;	// IMP=0x000000000001178c
- (_Bool)updateStateWithAudioIOClient:(id)arg1;	// IMP=0x000000000001107d
- (id)preferredClientWithNewClient:(id)arg1;	// IMP=0x0000000000010eff
- (_Bool)stateInterruptedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x0000000000010c26
- (void)stateTransitionInterruptedToStarted;	// IMP=0x0000000000010bf8
- (void)stateTransitionInterruptedToRunning;	// IMP=0x0000000000010bc6
- (_Bool)stateInterruptedShouldGoToRunning:(id)arg1;	// IMP=0x0000000000010b9a
- (_Bool)stateInterruptedShouldGoToStarted:(id)arg1;	// IMP=0x0000000000010b3e
- (_Bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x00000000000107c7
- (void)stateTransitionRunningToInterrupted;	// IMP=0x0000000000010799
- (void)stateRunningToSessionStarted;	// IMP=0x000000000001076b
- (_Bool)stateRunningShouldTransitionToInterrupted:(id)arg1;	// IMP=0x000000000001073f
- (_Bool)stateRunningShouldTransitionToStarted:(id)arg1;	// IMP=0x00000000000106e3
- (_Bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x0000000000010214
- (void)enterStateStarted;	// IMP=0x000000000000ffda
- (_Bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x000000000000ff50
- (void)activateSpatialContext:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000000000fee5
- (void)applySpatialMetadata:(struct OpaqueCMBlockBuffer *)arg1;	// IMP=0x000000000000fd11
- (void)applySessionContextToAudioUnitProperties:(id)arg1 preferredClient:(id)arg2;	// IMP=0x000000000000fb4d
- (void)setSpatialMetadata:(struct OpaqueCMBlockBuffer *)arg1 audioSessionId:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f9b1
- (void)unregisterAudioSessionId:(unsigned int)arg1;	// IMP=0x000000000000f7c0
- (int)registerAudioSessionId:(unsigned int)arg1 maxChannelCountMic:(unsigned int)arg2 maxChannelCountSpeaker:(unsigned int)arg3 spatialMetadata:(struct OpaqueCMBlockBuffer *)arg4;	// IMP=0x000000000000f4fc
- (int)unregisterFromMutedTalkerNotification;	// IMP=0x000000000000f3a1
- (int)registerForMutedTalkerNotification:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f168
- (int)unregisterForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg1;	// IMP=0x000000000000f04f
- (int)registerForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg1;	// IMP=0x000000000000ee12
- (void)applyControllerFormatToClients:(id)arg1;	// IMP=0x000000000000ebac
- (void)activateStartingClient:(id)arg1 applyControllerFormat:(_Bool)arg2;	// IMP=0x000000000000ea7d
- (void)completeStartForAllStartingClients;	// IMP=0x000000000000e86b
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;	// IMP=0x000000000000e5a7
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;	// IMP=0x000000000000e24e
- (void)stopAUIO;	// IMP=0x000000000000e1b8
- (void)resetAudioLimiterWithProperties:(id)arg1;	// IMP=0x000000000000e062
- (void)resetAUIOWithProperties:(id)arg1;	// IMP=0x000000000000deaa
- (_Bool)shouldResetAudioSessionWithProperties:(id)arg1;	// IMP=0x000000000000dc42
- (_Bool)shouldResetAudioUnitWithProperties:(id)arg1;	// IMP=0x000000000000d3c9
- (_Bool)startAUIOWithProperties:(id)arg1;	// IMP=0x000000000000c909
- (void)setMediaPlaybackOnExternalDevice:(_Bool)arg1;	// IMP=0x000000000000c872
- (void)updateCurrentOutputDevice:(id)arg1;	// IMP=0x000000000000bda3
- (void)updateCurrentInputDevice:(id)arg1;	// IMP=0x000000000000bb43
- (void)setupIODevicesForAUIO:(struct tagHANDLE *)arg1;	// IMP=0x000000000000bb3d
- (id)newAudioSessionMediaPropertiesWithPreferredClient:(id)arg1 audioUnitProperties:(id)arg2;	// IMP=0x000000000000bb2c
- (id)newAudioSessionMediaPropertiesForSystemAudioWithPreferredClient:(id)arg1 audioUnitProperties:(id)arg2;	// IMP=0x000000000000bb13
- (id)newAudioUnitPropertiesForSystemAudioWithPreferredClient:(id)arg1;	// IMP=0x000000000000b816
- (id)newAudioUnitPropertiesWithPreferredClient:(id)arg1;	// IMP=0x000000000000b179
- (_Bool)computeAllowAudioRecordingWithPreferredClient:(id)arg1;	// IMP=0x000000000000afd1
- (unsigned int)computeSamplePerFrameWithPreferredClient:(id)arg1 sampleRate:(unsigned int)arg2;	// IMP=0x000000000000ae05
- (void)computeFormatDescription:(struct AudioStreamBasicDescription *)arg1 withPreferredClient:(id)arg2;	// IMP=0x000000000000ac40
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;	// IMP=0x000000000000abcc
- (void)_cleanupDeadClients;	// IMP=0x000000000000a814
- (_Bool)removeClient:(id)arg1;	// IMP=0x000000000000a720
- (void)waitIdleForClient:(id)arg1;	// IMP=0x000000000000a3d1
- (_Bool)addClient:(id)arg1;	// IMP=0x000000000000a22c
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState *)arg1;	// IMP=0x000000000000a1e4
- (void)flushEventQueue:(struct opaqueCMSimpleQueue *)arg1;	// IMP=0x0000000000009f16
- (int)prewarmingClientOperatingMode;	// IMP=0x0000000000009dff
- (void)resetAudioTimestamps;	// IMP=0x0000000000009dd8
- (void)computeHardwarePreferences;	// IMP=0x0000000000009dd2
- (void)setOutputMetering;	// IMP=0x0000000000009c93
- (void)setInputMetering;	// IMP=0x0000000000009b54
- (void)applyAudioSessionMute;	// IMP=0x0000000000009acd
- (void)setMute:(_Bool)arg1 forClient:(id)arg2;	// IMP=0x00000000000098c2
- (void)dealloc;	// IMP=0x000000000000943e
- (id)initWithAudioSessionMode:(int)arg1;	// IMP=0x0000000000008dff
- (void)getPreferredFormat:(struct AudioStreamBasicDescription *)arg1 blockSize:(double *)arg2 vpOperatingMode:(unsigned int *)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription *)arg6;	// IMP=0x0000000000008c65
@property(readonly, nonatomic) struct _VCAudioIOControllerIOState *sourceIO;
@property(readonly, nonatomic) struct _VCAudioIOControllerIOState *sinkIO;
- (id)autorelease;	// IMP=0x0000000000008c45
- (oneway void)release;	// IMP=0x0000000000008c3f
- (unsigned long long)retainCount;	// IMP=0x0000000000008c32
- (id)retain;	// IMP=0x0000000000008c29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008c20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
