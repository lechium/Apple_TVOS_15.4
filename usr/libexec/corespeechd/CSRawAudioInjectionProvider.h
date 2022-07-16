//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_audioFeedTimer;	// 24 = 0x18
    struct __sFILE *_fp;	// 32 = 0x20
}

+ (void)createSharedAudioSession;	// IMP=0x004000000009b19f
- (void).cxx_destruct;	// IMP=0x002000000009b23c
@property(nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer; // @synthesize audioFeedTimer=_audioFeedTimer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x001000000009b1a5
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x001000000009b199
- (id)metrics;	// IMP=0x001000000009b191
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x001000000009b18b
- (id)voiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000009b183
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x001000000009b17b
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x001000000009b172
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x001000000009b169
- (void)updateMeters;	// IMP=0x001000000009b163
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x001000000009b15d
- (unsigned long long)alertStartTime;	// IMP=0x001000000009b155
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x001000000009b14d
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1;	// IMP=0x001000000009b145
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x001000000009b13d
- (id)playbackRoute;	// IMP=0x001000000009b130
- (_Bool)duckOthersOption;	// IMP=0x001000000009b128
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x001000000009b122
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000009b11a
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000009b112
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000009b091
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000009b010
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000009b008
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000009afef
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000009afe2
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x001000000009afda
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x001000000009afd2
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000009afc5
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000009af44
- (MISSING_TYPE *)stopAudioStreamWithRecordDeviceIndicator:error: /* Error: Ran out of types for this method. */;	// IMP=0x001000000009ad15
- (void)_readAudioBufferAndFeed;	// IMP=0x001000000009ab19
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009a756
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009a6d5
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000009a630
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a558
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x001000000009a552
- (void)setAudioServerCrashEventDelegate:(id)arg1;	// IMP=0x001000000009a54c
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000009a495
- (void)registerObserver:(id)arg1;	// IMP=0x001000000009a3de
- (void)dealloc;	// IMP=0x001000000009a33a
- (id)init;	// IMP=0x001000000009a210

@end
