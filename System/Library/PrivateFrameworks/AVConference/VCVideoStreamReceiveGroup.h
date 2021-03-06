//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCRedundancyControllerDelegate-Protocol.h>

@class NSNumber, VCRedundancyControllerVideo;

__attribute__((visibility("hidden")))
@interface VCVideoStreamReceiveGroup <VCRedundancyControllerDelegate>
{
    _Atomic unsigned char _videoPriority;	// 145 = 0x91
    unsigned char _lastVideoPriority;	// 146 = 0x92
    unsigned char _videoQuality;	// 147 = 0x93
    _Bool _remoteVideoPaused;	// 148 = 0x94
    _Bool _isRemoteMediaStalled;	// 149 = 0x95
    _Bool _isVideoDegraded;	// 150 = 0x96
    double _isVideoDegradedStartTime;	// 152 = 0x98
    unsigned int _visibilityIndex;	// 160 = 0xa0
    _Bool _haveReportedPerfTimers;	// 164 = 0xa4
    _Bool _isProcessingVideoOptIn;	// 165 = 0xa5
    NSNumber *_previousOptedInStreamID;	// 168 = 0xa8
    VCRedundancyControllerVideo *_videoRedundancyController;	// 176 = 0xb0
    _Bool _isRedundancyRequested;	// 184 = 0xb8
    _Bool _isMediaSuspended;	// 185 = 0xb9
    double _lastVideoExpectationSwitch;	// 192 = 0xc0
    _Bool _isVideoExpected;	// 200 = 0xc8
    _Bool _shouldEnableMLEnhance;	// 201 = 0xc9
    _Bool _didReportExtendedPoorConnection;	// 202 = 0xca
    _Bool _shouldConvertSourceRTPTimestamp;	// 203 = 0xcb
    _Bool _remoteVideoEnabled;	// 204 = 0xcc
}

@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) _Bool shouldEnableMLEnhance; // @synthesize shouldEnableMLEnhance=_shouldEnableMLEnhance;
@property(nonatomic) _Bool isRemoteMediaStalled; // @synthesize isRemoteMediaStalled=_isRemoteMediaStalled;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;	// IMP=0x00000000002a9792
- (void)collectAndLogChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x00000000002a915a
- (void)reportParticipantsPerfTimingsOnce;	// IMP=0x00000000002a8f6b
- (void)checkForExtendedPoorConnection;	// IMP=0x00000000002a8d09
- (void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x00000000002a8a80
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(_Bool)arg2 duration:(double)arg3;	// IMP=0x00000000002a8a50
- (void)updateVideoExpected;	// IMP=0x00000000002a860b
- (void)vcMediaStream:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x00000000002a8216
- (void)vcMediaStream:(id)arg1 didReceiveFirstFrameWithTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000002a80f7
- (void)vcMediaStream:(id)arg1 priorityDidChange:(unsigned char)arg2;	// IMP=0x00000000002a80e3
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x00000000002a80dd
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000002a80d7
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000002a7b86
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (void)setVideoDegraded:(_Bool)arg1;	// IMP=0x00000000002a6edb
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;	// IMP=0x00000000002a6b59
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x00000000002a5c63
- (void)setOptedInStreamID:(id)arg1;	// IMP=0x00000000002a5bf2
- (void)updateVideoPriority:(unsigned char)arg1;	// IMP=0x00000000002a5b10
- (void)setupVideoPriority;	// IMP=0x00000000002a5af4
- (id)willStart;	// IMP=0x00000000002a5ab9
- (_Bool)setSyncSource:(id)arg1;	// IMP=0x00000000002a5680
- (void)updateShouldEnableFaceZoom;	// IMP=0x00000000002a5420
- (void)setShouldEnableFaceZoom:(_Bool)arg1;	// IMP=0x00000000002a5310
- (_Bool)isVideoExpected;	// IMP=0x00000000002a50ff
- (_Bool)isVisible;	// IMP=0x00000000002a50eb
- (id)setupRedundancyController;	// IMP=0x00000000002a4d16
- (void)willStop;	// IMP=0x00000000002a4d04
- (void)didStart;	// IMP=0x00000000002a4cf2
- (void)resetPerfTimers;	// IMP=0x00000000002a4c92
- (void)resetDidReceiveFirstFrame;	// IMP=0x00000000002a4b67
- (void)dealloc;	// IMP=0x00000000002a4aec
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000002a4895

@end

