//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCAudioStreamGroup-Protocol.h>

@class TimingCollection, VCAudioStreamGroupCommon;
@protocol VCMediaStreamSyncSource;

__attribute__((visibility("hidden")))
@interface VCAudioStreamReceiveGroup <VCAudioStreamGroup>
{
    VCAudioStreamGroupCommon *_common;	// 152 = 0x98
    struct tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;	// 160 = 0xa0
    CDUnknownFunctionPointerType _didPullSamplesCallback;	// 192 = 0xc0
    void *_didPullSamplesCallbackContext;	// 200 = 0xc8
    _Bool _receivingEndToEndStream;	// 208 = 0xd0
    float _averageOutputPower;	// 212 = 0xd4
    unsigned long long _speakerProcsCalled;	// 216 = 0xd8
    TimingCollection *_perfTimers;	// 224 = 0xe0
    _Bool _haveReportedPerfTimers;	// 232 = 0xe8
}

- (void)reportParticipantsPerfTimingsOnce;	// IMP=0x0000000000039d06
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;	// IMP=0x0000000000039c93
- (void)vcMediaStream:(id)arg1 didReceiveFirstFrameWithTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000039bd1
- (void)vcMediaStream:(id)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;	// IMP=0x00000000000399c5
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(_Bool)arg2 duration:(double)arg3;	// IMP=0x000000000003969f
- (_Bool)isAudioExpected;	// IMP=0x0000000000039688
- (id)stopCapture;	// IMP=0x000000000003966b
- (id)startCapture;	// IMP=0x000000000003964e
@property(readonly) id <VCMediaStreamSyncSource> syncSource;
- (void)setMuteOnStreams;	// IMP=0x00000000000394a2
- (_Bool)removeSyncDestination:(id)arg1;	// IMP=0x0000000000038f65
- (_Bool)addSyncDestination:(id)arg1;	// IMP=0x0000000000038a27
- (void)didStop;	// IMP=0x0000000000038a0a
- (void)didStart;	// IMP=0x000000000003897d
- (id)willStart;	// IMP=0x000000000003895d
- (void)setOptedInStreamID:(id)arg1;	// IMP=0x0000000000038921
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x00000000000386da
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x00000000000385df
- (void)collectAndLogChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x0000000000038492
- (_Bool)configureStreams;	// IMP=0x00000000000383c0
@property(nonatomic, setter=setMuted:) _Bool isMuted;
@property(setter=setPowerSpectrumEnabled:) _Bool isPowerSpectrumEnabled;
@property(readonly, nonatomic) int deviceRole;
- (_Bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000003810e
- (void)dealloc;	// IMP=0x00000000000380a9
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000000379ab

@end

