//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/AVCRateControllerDelegate-Protocol.h>
#import <AVConference/RTCPReportProvider-Protocol.h>
#import <AVConference/VCConnectionChangedHandler-Protocol.h>
#import <AVConference/VCMediaStreamNotification-Protocol.h>
#import <AVConference/VCMomentTransportDelegate-Protocol.h>
#import <AVConference/VCNetworkFeedbackControllerDelegate-Protocol.h>
#import <AVConference/VCRateControlMediaControllerDelegate-Protocol.h>
#import <AVConference/VCSecurityEventHandler-Protocol.h>
#import <AVConference/VCSessionParticipantDelegate-Protocol.h>
#import <AVConference/VCSessionParticipantStreamDelegate-Protocol.h>
#import <AVConference/VCSessionStatsControllerDelegate-Protocol.h>

@class AVCRateController, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, VCControlChannelMultiWay, VCNetworkFeedbackController, VCRateControlMediaController, VCSecurityKeyManager, VCSessionBitrateArbiter, VCSessionConfiguration, VCSessionDownlinkBandwidthAllocator, VCSessionMessaging, VCSessionParticipant, VCSessionParticipantLocal, VCSessionParticipantRemote, VCSessionPresentationInfo, VCSessionStatsController, VCSwitchManager, VCTransportSession;
@protocol OS_dispatch_queue, OS_nw_activity, VCConnectionProtocol, VCSessionDelegate;

__attribute__((visibility("hidden")))
@interface VCSession <VCSessionParticipantStreamDelegate, AVCRateControllerDelegate, VCRateControlMediaControllerDelegate, VCMediaStreamNotification, RTCPReportProvider, VCSecurityEventHandler, VCSessionParticipantDelegate, VCNetworkFeedbackControllerDelegate, VCSessionStatsControllerDelegate, VCConnectionChangedHandler, VCMomentTransportDelegate>
{
    unsigned int _state;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    id <VCSessionDelegate> _delegate;	// 40 = 0x28
    NSString *_uuid;	// 48 = 0x30
    NSString *_idsDestination;	// 56 = 0x38
    VCControlChannelMultiWay *_controlChannel;	// 64 = 0x40
    VCSessionMessaging *_sessionMessaging;	// 72 = 0x48
    VCSessionConfiguration *_configuration;	// 80 = 0x50
    VCSessionParticipantLocal *_localParticipant;	// 88 = 0x58
    NSMutableDictionary *_remoteParticipantsMapByUUID;	// 96 = 0x60
    NSMutableDictionary *_remoteParticipantsMapByServerID;	// 104 = 0x68
    int _reportUpdateInterval;	// 112 = 0x70
    int _reportReportFrequency;	// 116 = 0x74
    VCSessionStatsController *_sessionStatsController;	// 120 = 0x78
    VCNetworkFeedbackController *_feedbackController;	// 128 = 0x80
    NSMutableArray *_startingParticipants;	// 136 = 0x88
    NSMutableSet *_stoppingParticipants;	// 144 = 0x90
    NSMutableArray *_initializingParticipants;	// 152 = 0x98
    VCSecurityKeyManager *_securityKeyManager;	// 160 = 0xa0
    VCTransportSession *_transportSession;	// 168 = 0xa8
    id <VCConnectionProtocol> _currentActiveConnection;	// 176 = 0xb0
    unsigned int _transportSessionID;	// 184 = 0xb8
    _Bool _localSourceNeedsReset;	// 188 = 0xbc
    struct _VCSessionOneToOneSettings _oneToOneSettings;	// 192 = 0xc0
    _Bool _switchFromGFTToOneToOneEnabled;	// 224 = 0xe0
    _Bool oneToOneModeEnabled;	// 225 = 0xe1
    double _remoteMediaStallReconnectTimeout;	// 232 = 0xe8
    double _oneToOneSwitchStartTime;	// 240 = 0xf0
    _Bool _isOneToOneInitiator;	// 248 = 0xf8
    _Bool _oneToOneModeEnabled;	// 249 = 0xf9
    _Bool _isReconnectPending;	// 250 = 0xfa
    _Bool _isOneToOneRemoteMediaStalling;	// 251 = 0xfb
    unsigned short _maxConnectionMTU;	// 252 = 0xfc
    _Bool _useReducedSizeRTCP;	// 254 = 0xfe
    AVCRateController *_uplinkRateController;	// 256 = 0x100
    AVCRateController *_downlinkRateController;	// 264 = 0x108
    unsigned int _uplinkTargetBitrate;	// 272 = 0x110
    unsigned int _downlinkTargetBitrate;	// 276 = 0x114
    VCRateControlMediaController *_uplinkMediaController;	// 280 = 0x118
    unsigned int _basebandFlushTransactionID;	// 288 = 0x120
    VCSessionDownlinkBandwidthAllocator *_downlinkBandwidthAllocator;	// 296 = 0x128
    NSMutableDictionary *_optInDictionary;	// 304 = 0x130
    double _sessionStartTime;	// 312 = 0x138
    struct tagVCMediaQueue *_mediaQueue;	// 320 = 0x140
    _Bool _forceDisableMediaPriority;	// 328 = 0x148
    NSError *_stopError;	// 336 = 0x150
    void *_spatialMetadata;	// 344 = 0x158
    _Bool _isGKVoiceChat;	// 352 = 0x160
    double _remoteMediaStallDisconnectTimeout;	// 360 = 0x168
    int _reportingModuleID;	// 368 = 0x170
    NSObject<OS_nw_activity> *_parentNWActivity;	// 376 = 0x178
    NSObject<OS_nw_activity> *_nwActivity;	// 384 = 0x180
    NSObject<OS_nw_activity> *_nwActivityActiveSession;	// 392 = 0x188
    VCSessionPresentationInfo *_presentationInfo;	// 400 = 0x190
    VCSessionBitrateArbiter *_bitrateArbiter;	// 408 = 0x198
    NSString *_conversationID;	// 416 = 0x1a0
    NSDate *_conversationTimeBase;	// 424 = 0x1a8
    NSDate *_conversationTimeBaseTruncated;	// 432 = 0x1b0
    _Bool _forceFixedEncryptionLabel;	// 440 = 0x1b8
    VCSwitchManager *_switchManager;	// 448 = 0x1c0
    int _currentConnectionType;	// 456 = 0x1c8
    _Bool _sharingEnabled;	// 460 = 0x1cc
}

+ (void)cleanupControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1;	// IMP=0x00000000001e44d0
+ (void)addUUIDToMutableData:(id)arg1 fromUUIDString:(id)arg2;	// IMP=0x00000000001e42d2
+ (int)deviceRoleForSessionMode:(long long)arg1;	// IMP=0x00000000001e1802
@property(nonatomic) _Bool isOneToOneRemoteMediaStalling; // @synthesize isOneToOneRemoteMediaStalling=_isOneToOneRemoteMediaStalling;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(retain, nonatomic) NSObject<OS_nw_activity> *nwActivity; // @synthesize nwActivity=_nwActivity;
@property(nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // @synthesize parentNWActivity=_parentNWActivity;
@property(readonly, nonatomic) VCSessionStatsController *sessionStatsController; // @synthesize sessionStatsController=_sessionStatsController;
@property(retain, nonatomic) VCSessionMessaging *sessionMessaging; // @synthesize sessionMessaging=_sessionMessaging;
@property(readonly, nonatomic) AVCRateController *downlinkRateController; // @synthesize downlinkRateController=_downlinkRateController;
@property(readonly, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteParticipantsMapByServerID; // @synthesize remoteParticipantsMapByServerID=_remoteParticipantsMapByServerID;
@property(retain) NSMutableDictionary *optInDictionary; // @synthesize optInDictionary=_optInDictionary;
@property(retain, nonatomic) id <VCConnectionProtocol> currentActiveConnection; // @synthesize currentActiveConnection=_currentActiveConnection;
@property(readonly, nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) VCSessionParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
- (void)additionalFlushCountToOneToOneRateController:(unsigned int)arg1;	// IMP=0x00000000001eced6
- (void)didReceiveMomentsRequest:(id)arg1;	// IMP=0x00000000001ece95
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;	// IMP=0x00000000001ecbfa
- (void)mediaQualityDegraded:(_Bool)arg1;	// IMP=0x00000000001ecb4a
- (void)preWarmStateChanged:(_Bool)arg1;	// IMP=0x00000000001eca3b
- (void)reportingIntervalChanged:(double)arg1;	// IMP=0x00000000001eca1e
- (void)recommendedSettingsChanged:(id)arg1;	// IMP=0x00000000001ec9e3
- (void)unregisterReportingTask;	// IMP=0x00000000001ec9a1
- (void)registerReportingTask;	// IMP=0x00000000001ec7d9
- (void)generateReportDictionary:(struct __CFDictionary *)arg1;	// IMP=0x00000000001eba26
- (id)newNetworkBitrateString:(const CDStruct_4c7d81d2 *)arg1;	// IMP=0x00000000001eb995
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x00000000001eb6dc
- (void)processDidStop;	// IMP=0x00000000001eb4ca
- (void)setupOneToOneVideoStreamDelegate;	// IMP=0x00000000001eb47f
- (void)setupOneToOneVideoReceiverDelegate;	// IMP=0x00000000001eb3a2
- (void)dispatchedParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001eab7b
- (void)stopAllParticipants;	// IMP=0x00000000001eaa0c
- (void)dispatchedUpdateConfiguration:(id)arg1;	// IMP=0x00000000001ea245
- (void)tearDown;	// IMP=0x00000000001ea0f0
- (void)dispatchedTransportStop;	// IMP=0x00000000001ea0ba
- (void)dispatchedStopWithError:(id)arg1 didRemoteCancel:(_Bool)arg2;	// IMP=0x00000000001e964c
- (void)dispatchedStopWithError:(id)arg1;	// IMP=0x00000000001e9638
- (void)dispatchedStart;	// IMP=0x00000000001e88ad
- (void)dispatchedRemoveParticipant:(id)arg1;	// IMP=0x00000000001e83ed
- (void)dispatchedAddParticipantConfigurations:(id)arg1;	// IMP=0x00000000001e82c5
- (_Bool)configureRemoteParticipant:(id)arg1 withConfig:(id)arg2;	// IMP=0x00000000001e7f9e
- (void)dispatchedAddParticipantWithConfig:(id)arg1;	// IMP=0x00000000001e7154
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3;	// IMP=0x00000000001e6eac
- (void)collectSessionEventKeyFields:(struct __CFDictionary *)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6;	// IMP=0x00000000001e684f
- (void)reportingMomentsToGreenTeaWithRequest:(id)arg1;	// IMP=0x00000000001e6849
- (void)reportingMomentsWithRequest:(id)arg1 recipientID:(id)arg2;	// IMP=0x00000000001e66f9
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5;	// IMP=0x00000000001e632c
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4;	// IMP=0x00000000001e630a
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;	// IMP=0x00000000001e62e0
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;	// IMP=0x00000000001e62b8
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2;	// IMP=0x00000000001e6292
- (struct __CFDictionary *)getClientSpecificUserInfo;	// IMP=0x00000000001e61d1
- (id)computeConversationTimeBaseTruncated;	// IMP=0x00000000001e616d
- (void)didEncryptionKeyRollTimeout;	// IMP=0x00000000001e60f7
- (void)resetDecryptionTimeout;	// IMP=0x00000000001e5f73
- (_Bool)handleEncryptionInfoChange:(id)arg1;	// IMP=0x00000000001e5c5f
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000001e59d8
- (void)mediaStream:(id)arg1 didReceiveFlushRequestWithPayloads:(id)arg2;	// IMP=0x00000000001e59d2
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;	// IMP=0x00000000001e5809
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;	// IMP=0x00000000001e5681
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000001e5664
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x00000000001e5647
- (void)unregisterMediaStreamNotificationDelegateForParticipant:(id)arg1;	// IMP=0x00000000001e550c
- (void)registerMediaStreamNotificationDelegateForParticipant:(id)arg1;	// IMP=0x00000000001e53c5
- (void)setupMultiwayABTesting;	// IMP=0x00000000001e5275
- (void)cleanupNwActivity;	// IMP=0x00000000001e522a
- (void)cleanupVCRC;	// IMP=0x00000000001e51e9
- (void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3;	// IMP=0x00000000001e4eb3
- (void)unregisterRemoteParticipantFromSession:(id)arg1;	// IMP=0x00000000001e4cc4
- (void)removeDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x00000000001e4c94
- (_Bool)registerRemoteParticipantToSession:(id)arg1;	// IMP=0x00000000001e4897
- (_Bool)composeControlChannelParticipantConfig:(CDStruct_c24deb19 *)arg1 withRemoteParticipant:(id)arg2;	// IMP=0x00000000001e451d
- (id)newEncryptionLabelWithLocalUUID:(id)arg1 remoteUUID:(id)arg2;	// IMP=0x00000000001e437a
- (void)broadcastInitialMediaState;	// IMP=0x00000000001e40fe
- (void)messageMediaInitialStateToParticipant:(id)arg1;	// IMP=0x00000000001e3e4e
- (void)setDelegatesForRemoteParticipant:(id)arg1;	// IMP=0x00000000001e3e0b
- (void)handleMembershipChangeInfoEvent:(id)arg1;	// IMP=0x00000000001e3cf8
- (void)handleEncryptionInfoEvent:(id)arg1;	// IMP=0x00000000001e3a27
- (_Bool)detectSSRCCollision:(id)arg1 resetNeeded:(_Bool *)arg2;	// IMP=0x00000000001e3711
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x00000000001e3653
- (void)optInStreamWithIDSStreamIDs:(id)arg1;	// IMP=0x00000000001e3595
- (void)updateLocalStreamConfiguration;	// IMP=0x00000000001e3273
- (void)updateLocalVideoCaptureFrameRate;	// IMP=0x00000000001e2f25
- (int)maxRemoteParticipants30fps;	// IMP=0x00000000001e2ea7
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)arg1;	// IMP=0x00000000001e2de6
- (void)createMediaQueue;	// IMP=0x00000000001e2a1d
- (void)setupUplinkBitrateCaps;	// IMP=0x00000000001e29b4
- (void)startRateControllersMultiwayFromOneToOne:(_Bool)arg1;	// IMP=0x00000000001e2807
- (void)updateMultiwayRateControllerWithActiveConnection:(id)arg1 isScreenEnabled:(_Bool)arg2 isLocal:(_Bool)arg3;	// IMP=0x00000000001e26b9
- (void)cleanupSpatialAudio;	// IMP=0x00000000001e2533
- (int)setupSpatialAudio;	// IMP=0x00000000001e2173
- (void)didRemoveSpatialMetadataEntry;	// IMP=0x00000000001e20e8
- (void)setupRateControllersMultiway;	// IMP=0x00000000001e1edc
- (id)vcrcServerBagWithOperatingMode:(int)arg1;	// IMP=0x00000000001e1d26
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;	// IMP=0x00000000001e1b5f
- (void)setSessionInfoSynchronizerErrorResponseCallback;	// IMP=0x00000000001e184e
- (void)setSessionInfoSynchronizerCallbacks;	// IMP=0x00000000001e1820
- (void)reportingSessionStopEventWithError:(id)arg1;	// IMP=0x00000000001e155d
- (void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2;	// IMP=0x00000000001e1027
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(_Bool)arg1;	// IMP=0x00000000001e07ae
- (void)updateParticipantConfigurations:(id)arg1;	// IMP=0x00000000001e02a0
- (void)updateParticipantWindowState;	// IMP=0x00000000001e0042
- (void)applySpatialMetadata;	// IMP=0x00000000001dfa5c
- (void)updatePresentationInfo:(id)arg1;	// IMP=0x00000000001df719
- (int)flushBasebandWithPayloads:(id)arg1;	// IMP=0x00000000001df711
- (void)mediaController:(void *)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;	// IMP=0x00000000001df6a1
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;	// IMP=0x00000000001df675
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x00000000001df125
- (void)updateNetworkFeedbackControllerReport:(CDStruct_4b4d87a1 *)arg1;	// IMP=0x00000000001def88
- (void)didReceivedSessionStatsAtTime:(double)arg1;	// IMP=0x00000000001deef5
- (void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;	// IMP=0x00000000001dee1f
- (void)vcSessionParticipant:(id)arg1 oneToOneModeDidChange:(_Bool)arg2;	// IMP=0x00000000001ded34
- (void)vcSessionParticipantDidRemoteMediaStallTimeout:(id)arg1 duration:(double)arg2;	// IMP=0x00000000001de955
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)arg1;	// IMP=0x00000000001de56d
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;	// IMP=0x00000000001de1c1
- (void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;	// IMP=0x00000000001de10c
- (void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;	// IMP=0x00000000001de057
- (void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(_Bool)arg2;	// IMP=0x00000000001ddf4d
- (void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;	// IMP=0x00000000001ddeae
- (void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;	// IMP=0x00000000001ddcd1
- (void)vcSessionParticipant:(id)arg1 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg2;	// IMP=0x00000000001ddcb4
- (void)vcSessionParticipant:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3;	// IMP=0x00000000001ddad1
- (void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(_Bool)arg2;	// IMP=0x00000000001dd921
- (void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(_Bool)arg2;	// IMP=0x00000000001dd7d2
- (void)vcSessionParticipant:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001dd421
- (void)vcSessionParticipant:(id)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001dd02b
- (void)vcSessionParticipant:(id)arg1 remoteScreenEnabledDidChange:(_Bool)arg2;	// IMP=0x00000000001dce95
- (void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;	// IMP=0x00000000001dcd1f
- (void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;	// IMP=0x00000000001dcc02
- (void)vcSessionParticipantFetchStreamGroupState:(id)arg1;	// IMP=0x00000000001dcb1c
- (void)vcSessionParticipant:(id)arg1 streamGroupID:(unsigned int)arg2 stateDidChange:(unsigned int)arg3;	// IMP=0x00000000001dca2c
- (void)vcSessionParticipant:(id)arg1 screenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001dc662
- (void)vcSessionParticipant:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001dc206
- (void)vcSessionParticipant:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001dbe55
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x00000000001dbd8b
- (void)vcSessionParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001dbc62
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;	// IMP=0x00000000001dbb7c
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;	// IMP=0x00000000001db8b0
- (void)handlePreferredInterfaceForDuplicationUpdate:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x00000000001db751
- (void)handleActiveConnectionChangeForMultiway:(id)arg1;	// IMP=0x00000000001db4cb
- (void)dispatchedHandleActiveConnectionChange:(id)arg1;	// IMP=0x00000000001db25a
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000001db1c4
- (void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2;	// IMP=0x00000000001db16a
- (void)handlePrimaryConnectionChanged:(id)arg1;	// IMP=0x00000000001db051
- (void)handleCellTechChange:(int)arg1 connection:(id)arg2;	// IMP=0x00000000001daf4e
- (void)notifyRemoteOfCellTechChange:(id)arg1 remoteParticipant:(id)arg2;	// IMP=0x00000000001dadf2
- (void)applyRemoteLinkConstrains:(id)arg1;	// IMP=0x00000000001dad49
- (void)applyLinkConstrains:(id)arg1;	// IMP=0x00000000001dac3c
- (void)setTransportSessionEventHandler;	// IMP=0x00000000001da363
- (void)sendStreamGroupStateToParticipant:(id)arg1;	// IMP=0x00000000001da2b4
- (void)dispatchedSetSharingEnabled:(_Bool)arg1;	// IMP=0x00000000001d9c98
- (void)setOneToOneModeEnabledFromRemoteSignal:(_Bool)arg1;	// IMP=0x00000000001d9b6c
- (void)reportingSetUserInfo;	// IMP=0x00000000001d9897
@property(readonly, nonatomic) NSArray *remoteParticipants;
- (void)mediaStateChangedForParticipant:(id)arg1;	// IMP=0x00000000001d9725
- (id)participantForID:(id)arg1;	// IMP=0x00000000001d956f
- (void)updateConfiguration:(id)arg1;	// IMP=0x00000000001d94c0
- (void)stopWithError:(id)arg1;	// IMP=0x00000000001d940e
- (void)start;	// IMP=0x00000000001d935c
@property(readonly, nonatomic) VCSessionParticipantRemote *oneToOneRemoteParticipant;
- (void)removeParticipant:(id)arg1;	// IMP=0x00000000001d929b
- (void)addParticipantConfigurations:(id)arg1;	// IMP=0x00000000001d91a2
@property(readonly, nonatomic) id <VCSessionDelegate> delegate;
- (id)participantsToString;	// IMP=0x00000000001d9147
@property(readonly, copy) NSString *description;
- (char *)sessionStateToString:(unsigned int)arg1;	// IMP=0x00000000001d9084
- (void)setState:(unsigned int)arg1;	// IMP=0x00000000001d8e15
- (void)setupTransportSessionWithDestination:(id)arg1;	// IMP=0x00000000001d8d2a
- (void)setTransportConnectionSelectionVersion;	// IMP=0x00000000001d8cb3
@property(readonly, nonatomic) NSDictionary *transportMetadata;
@property(readonly, nonatomic) NSDictionary *capabilities;
- (void)dealloc;	// IMP=0x00000000001d84d4
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 processId:(int)arg5 isGKVoiceChat:(_Bool)arg6;	// IMP=0x00000000001d6b28
- (void)handleActiveConnectionChangeForOneToOne:(id)arg1;	// IMP=0x000000000032f238
- (void)notifyDelegateActiveConnectionDidChange;	// IMP=0x000000000032f035
- (void)reportActiveConnectionOneToOne;	// IMP=0x000000000032eee7
- (void)startOneToOne;	// IMP=0x000000000032e3b4
- (void)setupOneToOneABTesting;	// IMP=0x000000000032cab9
- (void)applyNegotiatedOneToOneFaceTimeSettings;	// IMP=0x000000000032c979
- (void)dispatchedSetOneToOneModeEnabled:(_Bool)arg1 isLocal:(_Bool)arg2;	// IMP=0x000000000032beb1
- (_Bool)addOneToOneParticipant:(id)arg1;	// IMP=0x000000000032b5be
- (unsigned int)vcrcServerBagProfileNumber;	// IMP=0x000000000032b352
- (void)configureOneToOneRateController:(id)arg1 isUsingVideo:(_Bool)arg2;	// IMP=0x000000000032af92
- (_Bool)negotiateOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x000000000032a727
- (_Bool)switchFromMultiwayToOneToOne;	// IMP=0x000000000032a202
- (void)reportSwitchingCompleted:(_Bool)arg1;	// IMP=0x0000000000329f3e
- (void)setupOneToOneAdaptiveLearning;	// IMP=0x0000000000329bc0
- (void)setupOneToOneSwitchFromMultiway;	// IMP=0x0000000000329a1d
- (void)startReportingForOneToOneEnabled:(_Bool)arg1;	// IMP=0x00000000003291f3
- (void)didSendOneToOneEnabledMessage:(id)arg1 didSucceed:(_Bool)arg2;	// IMP=0x0000000000328e41
- (void)cleanUpOneToOneVideoStreamDelegate;	// IMP=0x0000000000328dfd
- (void)cleanupOneToOneVideoReceiverDelegate;	// IMP=0x0000000000328db9
- (void)cleanupOneToOneDelegates;	// IMP=0x0000000000328d8b
- (void)cleanupOneToOne;	// IMP=0x0000000000328d0c
- (void)cleanupOneToOneMediaQueue;	// IMP=0x0000000000328cd0
- (_Bool)switchFromOneToOneToMultiway;	// IMP=0x000000000032890d
- (_Bool)configureRemoteParticipantForOneToOne:(id)arg1;	// IMP=0x000000000032830a
- (_Bool)isOneToOneUsingVideo;	// IMP=0x00000000003282ae
- (void)stopRateControllerOneToOne;	// IMP=0x000000000032828e
- (void)startRateControllerOneToOne;	// IMP=0x000000000032822b
- (void)stopMultiwayToSwitchToOneToOne;	// IMP=0x0000000000328186
- (id)newParticipantOneToOneConfigWithIDSParticipantID:(unsigned long long)arg1 isLocal:(_Bool)arg2 mediaControlInfoVersion:(unsigned char)arg3 videoEnabled:(_Bool)arg4 screenEnabled:(_Bool)arg5 remoteParticipant:(id)arg6;	// IMP=0x0000000000327caa
- (int)setupOneToOneMediaControlInfoGeneratorsWithVersion:(unsigned char)arg1 oneToOneConfig:(id)arg2 videoEnabled:(_Bool)arg3;	// IMP=0x00000000003278a0
- (_Bool)configureLocalParticipantWithOneToOneRemoteParticipant:(id)arg1 isInitialConfiguration:(_Bool)arg2;	// IMP=0x0000000000327230
- (void)cleanupRateControllerOneToOne;	// IMP=0x00000000003271ed
- (void)initWithRelevantStorebagEntries;	// IMP=0x0000000000327143
- (void)updateOneToOneRateControllerForVideoEnabled:(_Bool)arg1;	// IMP=0x000000000032705a
- (int)setupRateControllerOneToOne;	// IMP=0x00000000003267aa
- (_Bool)setOneToOneConfigOnRemoteParticipant:(id)arg1;	// IMP=0x000000000032653e
- (id)newNegotiatorForOneToOneWithRemoteParticipant:(id)arg1;	// IMP=0x0000000000325d9b
- (int)setupOneToOneMediaQueue;	// IMP=0x0000000000325bcc
- (int)setupOneToOne;	// IMP=0x00000000003258a9
- (void)broadcastStreamGroupStateUpdateMessage;	// IMP=0x000000000033b1c0
- (void)setupLinkConstrainsChangedMessages;	// IMP=0x000000000033b088
- (void)setupCellTechChangeMessages;	// IMP=0x000000000033ae42
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;	// IMP=0x000000000033ac05
- (void)setupMediaQualityDegradedMessage;	// IMP=0x000000000033a88f
- (void)setupDisconnectMessage;	// IMP=0x000000000033a65c
- (void)setupPiPStateChangeMessage;	// IMP=0x000000000033a32d
- (void)setupPreferredInterfaceMessage;	// IMP=0x0000000000339f92
- (void)setupVideoRedundancyMessages;	// IMP=0x0000000000339d3d
- (void)generateKeyFrameWithReceivedMessage:(id)arg1;	// IMP=0x0000000000339bfc
- (void)setupMomentsMessages;	// IMP=0x00000000003399b4
- (void)setupWRMAlertUpdateMessage;	// IMP=0x000000000033963e
- (void)setupSymptomEnabledMessages;	// IMP=0x00000000003393bd
- (void)processSymptomFromMessage:(id)arg1 participantID:(id)arg2 isLocalInitiated:(_Bool)arg3 isLocalSideOnly:(_Bool)arg4;	// IMP=0x000000000033909a
- (void)setupKeyFrameGenerationMessages;	// IMP=0x0000000000338e3c
- (void)setupVideoPausedMessages;	// IMP=0x0000000000338bba
- (void)setupOneToOneEnabledMessages;	// IMP=0x0000000000338924
- (void)setupAudioPausedMessages;	// IMP=0x00000000003386a2
- (void)setupStreamGroupStateFetchMessage;	// IMP=0x000000000033835a
- (void)setupStreamGroupStateUpdateMessage;	// IMP=0x0000000000337bb6
- (_Bool)validateStreamGroup:(id)arg1 state:(id)arg2;	// IMP=0x0000000000337b4e
- (void)setupVideoEnabledMessages;	// IMP=0x00000000003378cc
- (void)setupAudioEnabledMessages;	// IMP=0x000000000033764a
- (void)broadcastSingleStateMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x000000000033748e
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2 toVersion:(int)arg3;	// IMP=0x00000000003372bf
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2;	// IMP=0x0000000000337134
- (void)broadcastMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x0000000000336fa9
- (void)stopSessionMessaging;	// IMP=0x0000000000336f3d
- (void)startSessionMessaging;	// IMP=0x0000000000336ef6
- (void)destroySessionMessaging;	// IMP=0x0000000000336e9e
- (void)createSessionMessaging;	// IMP=0x0000000000336d23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
