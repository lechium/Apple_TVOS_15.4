//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 24 = 0x18
    struct __sFILE *_fp;	// 32 = 0x20
}

+ (void)createSharedAudioSession;	// IMP=0x00000000000b19dd
- (void).cxx_destruct;	// IMP=0x00000000000b1a7a
@property(nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // @synthesize audioFeedTimer=_audioFeedTimer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x00000000000b19e3
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x00000000000b19d7
- (id)metrics;	// IMP=0x00000000000b19cf
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00000000000b19c9
- (id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00000000000b19c1
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x00000000000b19b9
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00000000000b19b0
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x00000000000b19a7
- (void)updateMeters;	// IMP=0x00000000000b19a1
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00000000000b199b
- (unsigned long long)alertStartTime;	// IMP=0x00000000000b1993
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00000000000b198b
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;	// IMP=0x00000000000b1983
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x00000000000b197b
- (id)playbackRoute;	// IMP=0x00000000000b196e
- (_Bool)duckOthersOption;	// IMP=0x00000000000b1966
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x00000000000b1960
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000b1958
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000b1950
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000b18cf
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000b184e
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00000000000b1846
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00000000000b182d
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00000000000b1820
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00000000000b1818
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00000000000b1810
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00000000000b1803
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00000000000b1782
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b1553
- (void)_readAudioBufferAndFeed;	// IMP=0x00000000000b1357
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b0f94
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b0f13
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000b0e6e
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0d96
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00000000000b0d90
- (void)setAudioServerCrashEventDelegate:(id)arg1;	// IMP=0x00000000000b0d8a
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000000b0cd3
- (void)registerObserver:(id)arg1;	// IMP=0x00000000000b0c1c
- (void)dealloc;	// IMP=0x00000000000b0b78
- (id)init;	// IMP=0x00000000000b0a4e

@end
