//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioServerCrashMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSMediaPlayingMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriClientBehaviorMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriEnabledMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeProcessor-Protocol.h>

@class CSAsset, CSAudioStream, CSSmartSiriVolumeEnablePolicy, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSSmartSiriVolume : NSObject <CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;	// 16 = 0x10
    struct unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;	// 24 = 0x18
    struct vector<float, std::allocator<float>> _floatBuffer;	// 32 = 0x20
    NSUserDefaults *_defaults;	// 56 = 0x38
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;	// 64 = 0x40
    unsigned long long _startAnalyzeSampleCount;	// 72 = 0x48
    unsigned long long _samplesFed;	// 80 = 0x50
    unsigned long long _processedSampleCount;	// 88 = 0x58
    _Bool _isStartSampleCountMarked;	// 96 = 0x60
    _Bool _isListenPollingStarting;	// 97 = 0x61
    _Bool _shouldPauseSSVProcess;	// 98 = 0x62
    _Bool _shouldPauseLKFSProcess;	// 99 = 0x63
    _Bool _alarmSoundIsFiring;	// 100 = 0x64
    _Bool _timerSoundIsFiring;	// 101 = 0x65
    _Bool _mediaIsPlaying;	// 102 = 0x66
    CSAsset *_currentAsset;	// 104 = 0x68
    float _musicVolumeDB;	// 112 = 0x70
    float _alarmVolume;	// 116 = 0x74
    unsigned long long _noiseLevelChannelBitset;	// 120 = 0x78
    unsigned long long _LKFSChannelBitset;	// 128 = 0x80
    unsigned int _energyBufferSize;	// 136 = 0x88
    unsigned int _noiseLowerPercentile;	// 140 = 0x8c
    unsigned int _noiseUpperPercentile;	// 144 = 0x90
    unsigned int _LKFSLowerPercentile;	// 148 = 0x94
    unsigned int _LKFSUpperPercentile;	// 152 = 0x98
    float _noiseTimeConstant;	// 156 = 0x9c
    float _noiseMicSensitivityOffset;	// 160 = 0xa0
    float _noiseMicSensitivityOffsetDeviceSimple;	// 164 = 0xa4
    float _LKFSTimeConstant;	// 168 = 0xa8
    float _LKFSMicSensitivityOffset;	// 172 = 0xac
    float _noiseTTSMappingInputRangeLow;	// 176 = 0xb0
    float _noiseTTSMappingInputRangeHigh;	// 180 = 0xb4
    float _noiseTTSMappingOutputRangeLow;	// 184 = 0xb8
    float _noiseTTSMappingOutputRangeHigh;	// 188 = 0xbc
    float _LKFSTTSMappingInputRangeLow;	// 192 = 0xc0
    float _LKFSTTSMappingInputRangeHigh;	// 196 = 0xc4
    float _LKFSTTSMappingOutputRangeLow;	// 200 = 0xc8
    float _LKFSTTSMappingOutputRangeHigh;	// 204 = 0xcc
    float _userOffsetInputRangeLow;	// 208 = 0xd0
    float _userOffsetInputRangeHigh;	// 212 = 0xd4
    float _userOffsetOutputRangeLow;	// 216 = 0xd8
    float _userOffsetOutputRangeHigh;	// 220 = 0xdc
    float _TTSVolumeLowerLimitDB;	// 224 = 0xe0
    float _TTSVolumeUpperLimitDB;	// 228 = 0xe4
    float _noiseWeight;	// 232 = 0xe8
    CSAudioStream *_audioStream;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_listenPollingTimer;	// 248 = 0xf8
    long long _listenPollingTimerCount;	// 256 = 0x100
}

- (id).cxx_construct;	// IMP=0x0000000000094234
- (void).cxx_destruct;	// IMP=0x00000000000941b2
@property(nonatomic) long long listenPollingTimerCount; // @synthesize listenPollingTimerCount=_listenPollingTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
- (void)setPermanentVolumeOffsetWithDirection:(_Bool)arg1;	// IMP=0x0000000000094150
- (void)setSmartSiriVolumeDirection:(_Bool)arg1;	// IMP=0x000000000009414a
- (void)setSmartSiriVolumePercentage:(float)arg1;	// IMP=0x0000000000094144
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;	// IMP=0x0000000000093fb7
- (float)_getUserOffsetFromMusicVolumeDB:(float)arg1;	// IMP=0x0000000000093f4c
- (float)_getMusicVolumeDBCSSSVDeviceDefault:(float)arg1;	// IMP=0x0000000000093ef1
- (float)_getMusicVolumeDBCSSSVDeviceSimple:(float)arg1;	// IMP=0x0000000000093edf
- (float)_getDevicedBFSForInputLinearVolume:(float)arg1;	// IMP=0x0000000000093e86
- (float)_convertDB2Mag:(float)arg1;	// IMP=0x0000000000093e74
- (void)_setDefaultParameters;	// IMP=0x0000000000093e05
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;	// IMP=0x0000000000093d5e
- (void)_resetStartAnalyzeTime;	// IMP=0x0000000000093d4d
- (float *)_getFloatBufferData:(id)arg1;	// IMP=0x0000000000093c83
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x0000000000093c7d
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x0000000000093c77
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x0000000000093b3e
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0000000000093b38
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00000000000939f0
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00000000000938ee
- (void)didReceiveAlarmVolumeChanged:(float)arg1;	// IMP=0x000000000009388a
- (void)didReceiveMusicVolumeChanged:(float)arg1;	// IMP=0x000000000009380b
- (void)didReceiveTimerChanged:(long long)arg1;	// IMP=0x0000000000093675
- (void)didReceiveAlarmChanged:(long long)arg1;	// IMP=0x00000000000934df
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;	// IMP=0x0000000000093374
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;	// IMP=0x00000000000931a0
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;	// IMP=0x0000000000093104
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;	// IMP=0x00000000000930dc
- (float)_deviceSpecificLinearVolumeToDBMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x00000000000930ab
- (float)_deviceSpecificDBToLinearVolumeMappingCSSSVDeviceSimple:(float)arg1;	// IMP=0x000000000009307a
- (float)_getDeviceSimpledBFSForOutputLinearVolume:(float)arg1;	// IMP=0x0000000000093049
- (float)_getDeviceSimpleOutputLinearVolumeFordBFSValue:(float)arg1;	// IMP=0x0000000000093018
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;	// IMP=0x000000000009277d
- (void)didDetectKeywordWithResult:(id)arg1;	// IMP=0x000000000009236a
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x0000000000092364
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x00000000000921e8
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x0000000000091f23
- (void)reset;	// IMP=0x0000000000091e96
- (void)_resumeSSVProcessing;	// IMP=0x0000000000091da2
- (void)_pauseSSVProcessing;	// IMP=0x0000000000091cb3
- (float)estimateSoundLevelbySoundType:(long long)arg1;	// IMP=0x0000000000091a5a
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;	// IMP=0x000000000009170c
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(_Bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;	// IMP=0x000000000009150c
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;	// IMP=0x000000000009147e
- (void)_reset;	// IMP=0x00000000000913e7
- (void)_setAsset:(id)arg1;	// IMP=0x000000000009100b
- (void)setAsset:(id)arg1;	// IMP=0x0000000000090f63
- (void)fetchInitSystemVolumes;	// IMP=0x0000000000090e47
- (void)initializeTimerState;	// IMP=0x0000000000090ccd
- (void)initializeAlarmState;	// IMP=0x0000000000090b53
- (void)initializeMediaPlayingState;	// IMP=0x0000000000090948
- (void)_stopListening;	// IMP=0x000000000009074d
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008ffbd
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008faba
- (void)_startListenPolling;	// IMP=0x000000000008f9cf
- (void)startSmartSiriVolume;	// IMP=0x000000000008f612
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;	// IMP=0x000000000008f192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

