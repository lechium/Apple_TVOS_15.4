//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession;

__attribute__((visibility("hidden")))
@interface AVVCSessionManager : NSObject
{
    _Bool mShouldDuckOthers;	// 8 = 0x8
    _Bool mIsMiniDuckingEnabled;	// 9 = 0x9
    _Bool mShouldEnableMiniDucking;	// 10 = 0xa
    _Bool mShouldDisableMiniDucking;	// 11 = 0xb
    _Bool mSessionNeedsVolumeControl;	// 12 = 0xc
    _Bool mSessionNeedsRoutingControl;	// 13 = 0xd
    _Bool mSessionOutputIsWirelessSplitter;	// 14 = 0xe
    _Bool mIsOtherAudioPlaying;	// 15 = 0xf
    _Bool mRouteHasDoAPSupport;	// 16 = 0x10
    _Bool mOutputSupportsSWVolume;	// 17 = 0x11
    _Bool mDeviceIsIOSAccessory;	// 18 = 0x12
    _Bool mDeviceIsOlderWatch;	// 19 = 0x13
    unsigned int mSessionActivationOptions;	// 20 = 0x14
    long long mPreviousActivationMode;	// 24 = 0x18
    _Bool _isPrimary;	// 32 = 0x20
    _Bool _clientRequestsRecording;	// 33 = 0x21
    int _sessionState;	// 36 = 0x24
    long long _reporterID;	// 40 = 0x28
    AVAudioSession *_audioSession;	// 48 = 0x30
    double _inputLatency;	// 56 = 0x38
    double _outputLatency;	// 64 = 0x40
}

@property(readonly, nonatomic) double outputLatency; // @synthesize outputLatency=_outputLatency;
@property(readonly, nonatomic) double inputLatency; // @synthesize inputLatency=_inputLatency;
@property(nonatomic) _Bool clientRequestsRecording; // @synthesize clientRequestsRecording=_clientRequestsRecording;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(nonatomic) int sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (_Bool)setDuckToLevelScalar:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a8bf4
- (_Bool)setDuckToLevelDB:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a8a89
- (long long)inputNumberOfChannels;	// IMP=0x00000000000a8933
- (_Bool)setRecordingFromRemoteInput:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000a8673
- (void)removeSessionNotifications:(id)arg1;	// IMP=0x00000000000a853b
- (void)setupSessionNotifications:(id)arg1;	// IMP=0x00000000000a83ac
- (id)getActiveSessionDisplayIDsAsString;	// IMP=0x00000000000a833d
- (unsigned int)getOpaqueSessionID;	// IMP=0x00000000000a81ea
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a8072
- (_Bool)setActivationContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a7f07
- (_Bool)getSiriInputSource:(unsigned long long *)arg1 withIdentifier:(id *)arg2;	// IMP=0x00000000000a7e60
- (id)siriRemoteInputIdentifier;	// IMP=0x00000000000a7dfd
- (unsigned long long)siriInputSource;	// IMP=0x00000000000a7c92
- (id)sessionCurrentInputRoutes;	// IMP=0x00000000000a7c2f
- (id)sessionCurrentOutputRoutes;	// IMP=0x00000000000a7bcc
- (id)currentRoute;	// IMP=0x00000000000a7b7b
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;	// IMP=0x00000000000a7a12
- (_Bool)setIAmTheAssistant:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000a78a6
@property(readonly) long long reporterID; // @synthesize reporterID=_reporterID;
- (_Bool)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000a75d4
- (_Bool)isSessionInSiriCategory;	// IMP=0x00000000000a7462
- (_Bool)isSessionInSiriCategoryModeAndOptions:(unsigned int)arg1;	// IMP=0x00000000000a71e3
- (_Bool)clearInputPreferences:(id *)arg1;	// IMP=0x00000000000a7084
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000a6f01
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000a6d7e
- (double)speechDetectionDeviceSampleRate;	// IMP=0x00000000000a6c25
- (double)getOutputLatency;	// IMP=0x00000000000a6ade
- (double)getInputLatency;	// IMP=0x00000000000a6997
- (_Bool)isAirplayOneOfTheOutputRoutes:(id)arg1;	// IMP=0x00000000000a6704
- (int)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x00000000000a65db
- (void)setSessionActivationOptions:(unsigned int)arg1;	// IMP=0x00000000000a65d2
- (unsigned int)getSessionActivationOptions;	// IMP=0x00000000000a65c9
- (_Bool)isSessionOutputInWirelessSplitterMode;	// IMP=0x00000000000a65bd
- (_Bool)setDuckingFadeOutDuration:(id)arg1 fadeInDuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a6342
- (_Bool)setDuckOthers:(id)arg1 mixWithOthers:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a5e86
- (void)changeDuckOthersOption:(_Bool)arg1;	// IMP=0x00000000000a5e7d
- (int)setSessionBufferSize:(int)arg1;	// IMP=0x00000000000a5b78
- (int)setSessionSampleRateForActivationMode:(long long)arg1;	// IMP=0x00000000000a55c2
- (int)setSessionAudioHWControlFlagsForActivationMode:(long long)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000a4844
- (int)setSessionCategoryModeOptionsForActivationMode:(long long)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000a3aaf
- (void)getHypotheticalRouteAndUpdateStates;	// IMP=0x00000000000a3a8b
- (_Bool)isMiniDuckingEnabled;	// IMP=0x00000000000a3a82
- (void)shouldEnableMiniDucking:(_Bool)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000a3993
- (int)setSessionActivationContext:(id)arg1;	// IMP=0x00000000000a367a
- (int)setupOneTimeSessionSettingsForClient:(long long)arg1;	// IMP=0x00000000000a3213
- (void)dealloc;	// IMP=0x00000000000a31d0
- (id)initWithSession:(id)arg1;	// IMP=0x00000000000a30c9

@end
