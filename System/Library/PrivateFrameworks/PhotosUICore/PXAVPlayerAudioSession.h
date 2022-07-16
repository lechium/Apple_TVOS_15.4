//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PXUpdater;
@protocol OS_dispatch_queue;

@interface PXAVPlayerAudioSession
{
    _Bool _isPreparingToPlay;	// 8 = 0x8
    _Bool _isPlaybackDesired;	// 9 = 0x9
    _Bool _playerTimeHasChangedSinceSeeking;	// 10 = 0xa
    float _playerRate;	// 12 = 0xc
    PXUpdater *_updater;	// 16 = 0x10
    id _playerTimeObserver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_playerQueue;	// 32 = 0x20
    id _playerQueue_player;	// 40 = 0x28
    CDStruct_1b6d18a9 _playerTime;	// 48 = 0x30
}

+ (id)_audioSession;	// IMP=0x00000000008689c7
+ (struct OpaqueCMClock *)masterClock;	// IMP=0x000000000086899b
- (void).cxx_destruct;	// IMP=0x0000000000868221
@property(readonly, nonatomic) id playerQueue_player; // @synthesize playerQueue_player=_playerQueue_player;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(nonatomic) CDStruct_1b6d18a9 playerTime; // @synthesize playerTime=_playerTime;
@property(retain, nonatomic) id playerTimeObserver; // @synthesize playerTimeObserver=_playerTimeObserver;
@property(nonatomic) _Bool playerTimeHasChangedSinceSeeking; // @synthesize playerTimeHasChangedSinceSeeking=_playerTimeHasChangedSinceSeeking;
@property(readonly, nonatomic) float playerRate; // @synthesize playerRate=_playerRate;
@property(readonly, nonatomic) _Bool isPlaybackDesired; // @synthesize isPlaybackDesired=_isPlaybackDesired;
@property(readonly, nonatomic) _Bool isPreparingToPlay; // @synthesize isPreparingToPlay=_isPreparingToPlay;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
- (void)_handlePlayerItemFinishedSeekingForPlayback:(id)arg1;	// IMP=0x000000000086808f
- (void)_loadDurationFromAsset:(id)arg1;	// IMP=0x0000000000867df6
- (void)_handleAVAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3;	// IMP=0x0000000000867b9b
- (void)setIsPlaybackDesired:(_Bool)arg1;	// IMP=0x0000000000867b2c
- (void)setIsPreparingToPlay:(_Bool)arg1;	// IMP=0x0000000000867aab
- (void)_prepareToPlayIfNeeded;	// IMP=0x00000000008679b3
- (void)_handlePlayerTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000008678e7
- (void)_playerQueue_performPlayerTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000086787b
- (void)_performPlayerTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000086778d
- (void)setPlayerRate:(float)arg1;	// IMP=0x00000000008676d8
- (void)_updatePlayerRate;	// IMP=0x0000000000867666
- (void)_invalidatePlayerRate;	// IMP=0x0000000000867622
- (void)_updatePlayerVolume;	// IMP=0x00000000008675d6
- (void)_invalidatePlayerVolume;	// IMP=0x0000000000867592
- (void)_updateStatus;	// IMP=0x00000000008674d7
- (void)_invalidateStatus;	// IMP=0x0000000000867493
- (void)didPerformChanges;	// IMP=0x0000000000867418
- (void)cancelMediaRequest;	// IMP=0x0000000000867371
- (void)requestMediaWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008672c1
- (void)performInternalChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000867222
- (void)errorDidChange;	// IMP=0x00000000008671e1
- (void)desiredPlayerVolumeDidChange;	// IMP=0x00000000008671a0
- (CDStruct_1b6d18a9)currentTime;	// IMP=0x0000000000867159
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000867101
- (void)play;	// IMP=0x000000000086706e
- (void)pause;	// IMP=0x0000000000866fd4
- (void)prepareToPlay;	// IMP=0x0000000000866f81
- (void)performFinalCleanup;	// IMP=0x0000000000866f0f
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(CDStruct_1b6d18a9)arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;	// IMP=0x0000000000866b2b

@end

