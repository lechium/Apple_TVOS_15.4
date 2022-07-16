//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCSessionDownlinkBandwidthAllocatorClient-Protocol.h>

@class NSArray, NSMutableDictionary, NSNumber, NSObject, NSString, TimingCollection, VCPositionalInfo, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo;
@protocol OS_dispatch_source, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote <VCSessionDownlinkBandwidthAllocatorClient>
{
    NSNumber *_optedInAudioStreamID;	// 360 = 0x168
    _Bool _remoteVideoEnabled;	// 368 = 0x170
    _Bool _remoteScreenEnabled;	// 369 = 0x171
    _Bool _remoteVideoPaused;	// 370 = 0x172
    _Bool _remoteSystemAudioPaused;	// 371 = 0x173
    _Bool _receivedFirstFrame;	// 372 = 0x174
    unsigned char _videoQuality;	// 373 = 0x175
    unsigned int _visibilityIndex;	// 376 = 0x178
    unsigned int _prominenceIndex;	// 380 = 0x17c
    VCSessionBandwidthAllocationTable *_mediaTable;	// 384 = 0x180
    VCSessionBandwidthAllocationTable *_repairMediaTable;	// 392 = 0x188
    unsigned char _lastVideoPriority;	// 400 = 0x190
    _Bool _isVideoDegraded;	// 401 = 0x191
    _Bool _isRedundancyRequested;	// 402 = 0x192
    _Bool _isRemoteMediaStalled;	// 403 = 0x193
    struct tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;	// 404 = 0x194
    TimingCollection *_perfTimers;	// 440 = 0x1b8
    _Bool _haveReportedPerfTimers;	// 448 = 0x1c0
    _Bool _isMediaSuspended;	// 449 = 0x1c1
    _Bool _oneToOneVideoEnabled;	// 450 = 0x1c2
    struct _VCSessionParticipantSourceIO _sourceIO;	// 456 = 0x1c8
    struct _VCSessionParticipantCapabilities _capabilities;	// 544 = 0x220
    VCPositionalInfo *_positionalInfo;	// 560 = 0x230
    void *_spatialMetadataEntry;	// 568 = 0x238
    unsigned int _audioChannelIndex;	// 576 = 0x240
    NSObject<OS_nw_activity> *_nwActivity;	// 584 = 0x248
    NSObject<OS_nw_activity> *_participantPoorConnectionNwActivity;	// 592 = 0x250
    NSObject<OS_nw_activity> *_participantMediaStallNwActivity;	// 600 = 0x258
    double _lastVideoExpectationSwitch;	// 608 = 0x260
    _Bool _isVideoExpected;	// 616 = 0x268
    _Bool _isVideoJitterForPlayoutEnabled;	// 617 = 0x269
    _Bool _remoteAudioEnabled;	// 618 = 0x26a
    _Bool _remoteAudioPaused;	// 619 = 0x26b
    _Bool _remoteScreenEnabledStateChanged;	// 620 = 0x26c
    NSMutableDictionary *_jbSynchronizerPerSyncGroupID;	// 624 = 0x270
    NSObject<OS_dispatch_source> *_remoteStreamGroupStateUpdateTimer;	// 632 = 0x278
}

+ (unsigned int)maxVideoNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;	// IMP=0x00000000001146a2
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;	// IMP=0x000000000011468d
+ (_Bool)isDeviceLargeScreen;	// IMP=0x0000000000114685
@property(readonly, nonatomic) VCPositionalInfo *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) struct _VCSessionParticipantCapabilities capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isRemoteScreenEnabled) _Bool remoteScreenEnabled; // @synthesize remoteScreenEnabled=_remoteScreenEnabled;
@property(nonatomic, getter=isRemoteAudioPaused) _Bool remoteAudioPaused; // @synthesize remoteAudioPaused=_remoteAudioPaused;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
@property(retain, nonatomic) NSNumber *optedInAudioStreamID; // @synthesize optedInAudioStreamID=_optedInAudioStreamID;
- (void)updateAndHandleVideoMediaStall:(_Bool)arg1 isOneToOneStream:(_Bool)arg2;	// IMP=0x000000000011cae6
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(_Bool)arg2 duration:(double)arg3;	// IMP=0x000000000011c8b0
- (void)updateVideoPriority:(unsigned char)arg1;	// IMP=0x000000000011c7f2
- (void)debounceAudioPriority:(unsigned char)arg1;	// IMP=0x000000000011c55c
- (void)cancelAndReleaseFetchTimer;	// IMP=0x000000000011c38b
- (void)createAndResumeFetchTimer;	// IMP=0x000000000011bd39
- (_Bool)isSeamlessTransitionSupportedForStreamGroup:(id)arg1;	// IMP=0x000000000011bcf2
- (void)updateSourcePlayoutTimestampWithSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x000000000011bc4a
- (void)updateShouldEnableMLEnhance;	// IMP=0x000000000011b9f7
- (void)setSharingEnabled:(_Bool)arg1;	// IMP=0x000000000011b952
- (void)setShouldEnableFaceZoom:(_Bool)arg1;	// IMP=0x000000000011b7fc
- (void)updateShouldEnableFaceZoom;	// IMP=0x000000000011b59c
- (_Bool)setupStreamGroups;	// IMP=0x000000000011b258
- (void)setupJBTargetSynchronizers;	// IMP=0x000000000011acfd
- (void)createJitterBufferTargetEstimatorSynchronizer:(struct tagVCJBTargetEstimatorSynchronizer **)arg1 syncGroupID:(unsigned int)arg2;	// IMP=0x000000000011aa70
- (_Bool)shouldSetupStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000011a900
- (_Bool)didNegotiateStreamGroupWithID:(unsigned int)arg1;	// IMP=0x000000000011a7d8
- (id)newCameraStreamGroupWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000011a43c
- (id)newVideoStreamGroupWithStreamGroupConfig:(id)arg1;	// IMP=0x000000000011a1fe
- (_Bool)setupStreamGroupWithConfig:(id)arg1;	// IMP=0x0000000000119630
- (_Bool)updateStreamGroupWithOneToOneStreamConfig:(id)arg1;	// IMP=0x00000000001191d0
- (id)newMediaStreamWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x00000000001190f1
- (id)newStreamGroupConfigWithNegotiationConfig:(id)arg1;	// IMP=0x0000000000118b17
- (void)setupMediaStreamGroupConfig:(id)arg1 withNegotiationConfig:(id)arg2;	// IMP=0x00000000001188e1
- (id)newMediaStreamInfoWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000118039
- (id)newMediaStreamConfigWithStreamConfig:(id)arg1 streamGroupConfig:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3;	// IMP=0x0000000000117d66
- (_Bool)setupStreamConfigWithCodecs:(id)arg1 streamConfig:(id)arg2 codecConfigs:(id)arg3 featureStringsDict:(id)arg4;	// IMP=0x0000000000117705
- (id)newMediaStreamConfigWithStreamGroupConfig:(id)arg1 streamConfig:(id)arg2 rateControlConfig:(id)arg3 multiwayConfig:(id)arg4;	// IMP=0x0000000000116f62
- (_Bool)setupVideoStreamConfiguration:(id)arg1 withStreamGroupStreamConfig:(id)arg2 codecConfigs:(id)arg3 multiwayConfig:(id)arg4 groupID:(unsigned int)arg5;	// IMP=0x000000000011696b
- (id)newMultiwayConfigWithStreamGroupStreamConfig:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 groupID:(unsigned int)arg3;	// IMP=0x000000000011676e
- (void)updateVideoMultiwayConfig:(id)arg1 withStreamGroupStreamConfig:(id)arg2;	// IMP=0x0000000000116607
- (_Bool)setupVideoStreamOneToOneConfigurations:(id)arg1;	// IMP=0x00000000001163dc
- (_Bool)setupScreenStreamOneToOneConfigurations:(id)arg1;	// IMP=0x00000000001161b1
- (void)updateScreenStreamConfigurationWithStreamGroupResult:(id)arg1 multiwayConfig:(id)arg2 screenStreamConfig:(id)arg3;	// IMP=0x0000000000116003
@property(readonly, nonatomic) _Bool isVideoExpected;
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;	// IMP=0x0000000000115d50
@property(readonly) _Bool isVisible;
@property(readonly) NSArray *mediaEntries;
- (void)validateMediaEntries:(id)arg1;	// IMP=0x0000000000115366
- (void)appendStreamGroupsMediaEntries:(id)arg1;	// IMP=0x0000000000114bb1
- (unsigned char)cappedVideoQualityWithShouldLimitCameraQualityForPIP:(_Bool)arg1;	// IMP=0x000000000011495a
- (void)appendStreamGroup:(id)arg1 maxBitrate:(unsigned int)arg2 mediaEntries:(id)arg3;	// IMP=0x0000000000114781
- (void)setRemoteMediaStalled:(_Bool)arg1;	// IMP=0x0000000000114461
- (void)setVideoDegraded:(_Bool)arg1;	// IMP=0x000000000011402b
- (void)pushEventToNwActivity:(long long)arg1 started:(_Bool)arg2;	// IMP=0x0000000000113cd2
- (void)collectAudioChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x0000000000113b06
- (void)collectVideoChannelMetrics:(CDStruct_4c7d81d2 *)arg1;	// IMP=0x0000000000113968
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000113962
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000001132c8
- (void)didReceiveFirstFrameForStreamGroup:(id)arg1;	// IMP=0x0000000000113267
- (unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x000000000011321a
- (unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg1;	// IMP=0x00000000001131cd
- (id)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x00000000001131a2
- (id)optedInStreamIDForStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000113177
- (id)startScreenGroup;	// IMP=0x000000000011316f
- (id)stopAudioStreams;	// IMP=0x0000000000113167
- (id)startAudioIO;	// IMP=0x000000000011315f
- (unsigned int)actualNetworkBitrateWithAudioBitrates:(id)arg1;	// IMP=0x0000000000112fb2
- (void)setVideoStreamDelegate:(id)arg1;	// IMP=0x0000000000112ae7
- (void)setVideoReceiverFeedbackDelegate:(id)arg1;	// IMP=0x0000000000112840
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 operatingMode:(int)arg2;	// IMP=0x000000000011265f
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (long long)participantMicrophoneToken;	// IMP=0x00000000001124fc
- (id)audioGroup;	// IMP=0x000000000011248b
- (id)videoGroup;	// IMP=0x000000000011242f
- (id)screenGroup;	// IMP=0x00000000001123d3
- (long long)participantScreenToken;	// IMP=0x0000000000112393
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *screenStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *videoStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *audioStreamInfo;
- (_Bool)isScreenActive;	// IMP=0x00000000001122af
- (void)updateAudioSpectrumState;	// IMP=0x000000000011212c
- (_Bool)isAudioActive;	// IMP=0x00000000001120e7
- (void)negotiateAudioRules:(id)arg1;	// IMP=0x0000000000111d15
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;	// IMP=0x000000000011168e
- (void)appendOptedInStreamID:(id)arg1 toOptInStreamsIDs:(id)arg2 targetBandwidthEntry:(id)arg3 forceSeamlessTransition:(_Bool)arg4;	// IMP=0x00000000001113a9
@property(readonly, nonatomic) NSNumber *optedInVideoStreamID;
- (void)setActiveStreamIDs:(id)arg1;	// IMP=0x00000000001110fa
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000111019
- (id)getAudioDumpName;	// IMP=0x0000000000111011
- (id)entryForStreamID:(id)arg1;	// IMP=0x0000000000110e42
- (_Bool)setupAudioStreamOneToOneConfigurations:(id)arg1;	// IMP=0x0000000000110c2f
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 entryType:(unsigned char)arg3;	// IMP=0x000000000010feb8
- (id)checkSubstreams:(id)arg1 forLowerQualityIndex:(unsigned int)arg2;	// IMP=0x000000000010fd6e
- (_Bool)setupAudioStreamConfiguration:(id)arg1 withStreamGroupConfig:(id)arg2 streamGroupStreamConfig:(id)arg3;	// IMP=0x000000000010f745
- (_Bool)isStreamGroupActive:(id)arg1;	// IMP=0x000000000010f6a2
- (void)cleanupNwActivity;	// IMP=0x000000000010f5e4
- (void)completeAndReleaseNwActivity:(id)arg1 withReason:(int)arg2;	// IMP=0x000000000010f5c3
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000010ead7
- (id)setupStreamRTP:(id)arg1;	// IMP=0x000000000010eac2
- (_Bool)isParticipantPeace:(id)arg1;	// IMP=0x000000000010e976
- (_Bool)supportsGFTSwitchToOneToOne;	// IMP=0x000000000010e4ec
- (_Bool)processParticipantInfo;	// IMP=0x000000000010db9c
- (void)updateOneToOneAudioPositionalInfo:(const struct tagVCSpatialAudioMetadataPositionalInfo *)arg1;	// IMP=0x000000000010db84
- (_Bool)isInCanvas;	// IMP=0x000000000010db67
- (void)updatePositionalInfo:(id)arg1 shouldReapply:(_Bool)arg2;	// IMP=0x000000000010d9d0
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;	// IMP=0x000000000010d507
- (id)applyVideoEnabledSetting:(_Bool)arg1;	// IMP=0x000000000010d1c6
- (void)setRemoteStreamGroupState:(unsigned int)arg1 forStreamGroup:(unsigned int)arg2;	// IMP=0x000000000010cbbc
- (void)setTransitionToDisabled:(unsigned int)arg1;	// IMP=0x000000000010cb35
- (void)setTransitionToPaused:(unsigned int)arg1;	// IMP=0x000000000010ca22
- (void)setTransitionToEnabled:(unsigned int)arg1;	// IMP=0x000000000010c92c
- (void)setRemoteSystemAudioPaused:(_Bool)arg1;	// IMP=0x000000000010c4a0
- (void)setVideoPaused:(_Bool)arg1;	// IMP=0x000000000010b505
- (void)setAudioPaused:(_Bool)arg1;	// IMP=0x000000000010aba3
- (void)onPauseAudioStreams;	// IMP=0x000000000010ab91
- (void)onDidResumeAudio;	// IMP=0x000000000010ab7f
- (void)onStartAudioIO;	// IMP=0x000000000010a9cb
- (void)stopAudioIOCompletion;	// IMP=0x000000000010a990
- (void)cleanupSpatialAudio;	// IMP=0x000000000010a956
- (int)setupSpatialAudioWithMetadata:(void *)arg1;	// IMP=0x000000000010a7a6
- (void)stop;	// IMP=0x000000000010a6f8
- (void)start;	// IMP=0x000000000010a64a
- (void)dealloc;	// IMP=0x000000000010a4e4
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000109092

// Remaining properties
@property(readonly) NSString *uuid;

@end

