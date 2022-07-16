//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDConversationParticipant, CSDFaceTimeInviteDemuxer, CSDIDSGroupSession, CXCallFailureContext, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSUUID, TUCallScreenShareAttributes, TUConversation, TUConversationActivitySession, TUConversationLink, TUConversationMember, TUConversationParticipant, TUConversationProvider, TUConversationReport, TUHandle, TUVideoDeviceController;
@protocol CSDAVCSession, CSDConversationDelegate, CSDConversationServerBag, OS_dispatch_queue, TUFeatureFlags;

@interface CSDConversation : NSObject
{
    _Bool _relaying;	// 8 = 0x8
    _Bool _fromStorage;	// 9 = 0x9
    _Bool _video;	// 10 = 0xa
    _Bool _hasReceivedLetMeInRequest;	// 11 = 0xb
    _Bool _locallyCreated;	// 12 = 0xc
    _Bool _hasJoined;	// 13 = 0xd
    _Bool _ignoreLMIRequests;	// 14 = 0xe
    _Bool _waitingToPruneParticipants;	// 15 = 0xf
    _Bool _avcSessionInProgress;	// 16 = 0x10
    _Bool _forceExpanseEnabled;	// 17 = 0x11
    NSSet *_memberIdentifiers;	// 24 = 0x18
    id <CSDConversationDelegate> _delegate;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    NSUUID *_groupUUID;	// 48 = 0x30
    TUConversationLink *_link;	// 56 = 0x38
    NSUUID *_messagesGroupUUID;	// 64 = 0x40
    long long _state;	// 72 = 0x48
    long long _letMeInRequestState;	// 80 = 0x50
    TUConversationMember *_localLightweightSecondaryMember;	// 88 = 0x58
    long long _splitSessionUserProfileState;	// 96 = 0x60
    TUHandle *_initiator;	// 104 = 0x68
    TUConversationMember *_localMember;	// 112 = 0x70
    NSSet *_remoteMembers;	// 120 = 0x78
    NSSet *_lightweightMembers;	// 128 = 0x80
    NSSet *_pendingMembers;	// 136 = 0x88
    NSSet *_kickedMembers;	// 144 = 0x90
    NSSet *_rejectedMembers;	// 152 = 0x98
    NSSet *_otherInvitedHandles;	// 160 = 0xa0
    NSSet *_tuActivitySessions;	// 168 = 0xa8
    TUConversationActivitySession *_stagedActivitySession;	// 176 = 0xb0
    NSString *_messagesGroupName;	// 184 = 0xb8
    TUConversationReport *_report;	// 192 = 0xc0
    id <TUFeatureFlags> _featureFlags;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_queue;	// 208 = 0xd0
    NSMutableDictionary *_activeRemoteParticipantsByIdentifier;	// 216 = 0xd8
    NSMutableDictionary *_activeLightweightParticipantsByIdentifier;	// 224 = 0xe0
    NSMutableSet *_kickedParticipants;	// 232 = 0xe8
    CSDIDSGroupSession *_idsSession;	// 240 = 0xf0
    id <CSDAVCSession> _avcSession;	// 248 = 0xf8
    NSNumber *_expectedAudioEnabled;	// 256 = 0x100
    NSNumber *_expectedVideoEnabled;	// 264 = 0x108
    NSNumber *_expectedScreenEnabled;	// 272 = 0x110
    NSNumber *_expectedVideoPaused;	// 280 = 0x118
    MISSING_TYPE *_expectedAudioPaused;	// 288 = 0x120
    NSDictionary *_activeParticipantDestinationsByIdentifier;	// 296 = 0x128
    NSDictionary *_activeLightweightParticipantDestinationsByIdentifier;	// 304 = 0x130
    NSSet *_serverProvidedParticipantIdentifiers;	// 312 = 0x138
    NSSet *_serverProvidedLightweightParticipantIdentifiers;	// 320 = 0x140
    NSDate *_lastRebroadcastTime;	// 328 = 0x148
    unsigned long long _rebroadcastTimeThreshold;	// 336 = 0x150
    TUVideoDeviceController *_videoDeviceController;	// 344 = 0x158
    NSMutableDictionary *_virtualParticipantsByPluginName;	// 352 = 0x160
    CSDFaceTimeInviteDemuxer *_faceTimeInviteDemuxer;	// 360 = 0x168
    NSMutableDictionary *_pendingKickedMembersByIdentifier;	// 368 = 0x170
    NSMutableSet *_pendingAllowedMembers;	// 376 = 0x178
    unsigned long long _kickMemberRetryCount;	// 384 = 0x180
    NSArray *_currentParticipantPresentationContexts;	// 392 = 0x188
    CSDConversationParticipant *_splitSessionSecondary;	// 400 = 0x190
    CDUnknownBlockType _downgradeToOneToOneAfterDelayBlock;	// 408 = 0x198
    NSSet *_remoteMemberHandles;	// 416 = 0x1a0
    NSSet *_pendingMemberHandles;	// 424 = 0x1a8
    NSSet *_memberHandlesEligibleForLinkApproval;	// 432 = 0x1b0
    NSMutableArray *_memberHandlesAwaitingInvitesToLink;	// 440 = 0x1b8
    id <CSDConversationServerBag> _serverBag;	// 448 = 0x1c0
    CDUnknownBlockType _avcSessionCreationBlock;	// 456 = 0x1c8
    NSObject *_reportingHierarchyToken;	// 464 = 0x1d0
    NSObject *_reportingHierarchySubToken;	// 472 = 0x1d8
    NSMutableDictionary *_inflightAVCBlobRecoveryBlocksByIdentifier;	// 480 = 0x1e0
    CDUnknownBlockType _timeoutBlock;	// 488 = 0x1e8
    CDUnknownBlockType _participantRefreshBlock;	// 496 = 0x1f0
    NSSet *_invitationPreferences;	// 504 = 0x1f8
    TUCallScreenShareAttributes *_screenShareAttributes;	// 512 = 0x200
    TUConversationProvider *_provider;	// 520 = 0x208
    CXCallFailureContext *_failureContext;	// 528 = 0x210
}

- (void).cxx_destruct;	// IMP=0x0020000000033ac3
@property(retain, nonatomic) CXCallFailureContext *failureContext; // @synthesize failureContext=_failureContext;
@property(retain, nonatomic) TUConversationProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) TUCallScreenShareAttributes *screenShareAttributes; // @synthesize screenShareAttributes=_screenShareAttributes;
@property(copy, nonatomic) NSSet *invitationPreferences; // @synthesize invitationPreferences=_invitationPreferences;
@property(nonatomic) _Bool forceExpanseEnabled; // @synthesize forceExpanseEnabled=_forceExpanseEnabled;
@property(nonatomic) _Bool avcSessionInProgress; // @synthesize avcSessionInProgress=_avcSessionInProgress;
@property(copy, nonatomic) CDUnknownBlockType participantRefreshBlock; // @synthesize participantRefreshBlock=_participantRefreshBlock;
@property(copy, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property(readonly, copy, nonatomic) NSMutableDictionary *inflightAVCBlobRecoveryBlocksByIdentifier; // @synthesize inflightAVCBlobRecoveryBlocksByIdentifier=_inflightAVCBlobRecoveryBlocksByIdentifier;
@property(retain, nonatomic) NSObject *reportingHierarchySubToken; // @synthesize reportingHierarchySubToken=_reportingHierarchySubToken;
@property(retain, nonatomic) NSObject *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(copy, nonatomic) CDUnknownBlockType avcSessionCreationBlock; // @synthesize avcSessionCreationBlock=_avcSessionCreationBlock;
@property(retain, nonatomic) id <CSDConversationServerBag> serverBag; // @synthesize serverBag=_serverBag;
@property(copy, nonatomic) NSMutableArray *memberHandlesAwaitingInvitesToLink; // @synthesize memberHandlesAwaitingInvitesToLink=_memberHandlesAwaitingInvitesToLink;
@property(copy, nonatomic) NSSet *memberHandlesEligibleForLinkApproval; // @synthesize memberHandlesEligibleForLinkApproval=_memberHandlesEligibleForLinkApproval;
@property(copy, nonatomic) NSSet *pendingMemberHandles; // @synthesize pendingMemberHandles=_pendingMemberHandles;
@property(copy, nonatomic) NSSet *remoteMemberHandles; // @synthesize remoteMemberHandles=_remoteMemberHandles;
@property(copy, nonatomic) CDUnknownBlockType downgradeToOneToOneAfterDelayBlock; // @synthesize downgradeToOneToOneAfterDelayBlock=_downgradeToOneToOneAfterDelayBlock;
@property(retain, nonatomic) CSDConversationParticipant *splitSessionSecondary; // @synthesize splitSessionSecondary=_splitSessionSecondary;
@property(retain, nonatomic) NSArray *currentParticipantPresentationContexts; // @synthesize currentParticipantPresentationContexts=_currentParticipantPresentationContexts;
@property(nonatomic) unsigned long long kickMemberRetryCount; // @synthesize kickMemberRetryCount=_kickMemberRetryCount;
@property(retain, nonatomic) NSMutableSet *pendingAllowedMembers; // @synthesize pendingAllowedMembers=_pendingAllowedMembers;
@property(retain, nonatomic) NSMutableDictionary *pendingKickedMembersByIdentifier; // @synthesize pendingKickedMembersByIdentifier=_pendingKickedMembersByIdentifier;
@property(readonly, nonatomic) CSDFaceTimeInviteDemuxer *faceTimeInviteDemuxer; // @synthesize faceTimeInviteDemuxer=_faceTimeInviteDemuxer;
@property(readonly, nonatomic) NSMutableDictionary *virtualParticipantsByPluginName; // @synthesize virtualParticipantsByPluginName=_virtualParticipantsByPluginName;
@property(readonly, nonatomic) TUVideoDeviceController *videoDeviceController; // @synthesize videoDeviceController=_videoDeviceController;
@property(nonatomic) unsigned long long rebroadcastTimeThreshold; // @synthesize rebroadcastTimeThreshold=_rebroadcastTimeThreshold;
@property(copy, nonatomic) NSDate *lastRebroadcastTime; // @synthesize lastRebroadcastTime=_lastRebroadcastTime;
@property(nonatomic, getter=isWaitingToPruneParticipants) _Bool waitingToPruneParticipants; // @synthesize waitingToPruneParticipants=_waitingToPruneParticipants;
@property(copy, nonatomic) NSSet *serverProvidedLightweightParticipantIdentifiers; // @synthesize serverProvidedLightweightParticipantIdentifiers=_serverProvidedLightweightParticipantIdentifiers;
@property(copy, nonatomic) NSSet *serverProvidedParticipantIdentifiers; // @synthesize serverProvidedParticipantIdentifiers=_serverProvidedParticipantIdentifiers;
@property(copy, nonatomic) NSDictionary *activeLightweightParticipantDestinationsByIdentifier; // @synthesize activeLightweightParticipantDestinationsByIdentifier=_activeLightweightParticipantDestinationsByIdentifier;
@property(copy, nonatomic) NSDictionary *activeParticipantDestinationsByIdentifier; // @synthesize activeParticipantDestinationsByIdentifier=_activeParticipantDestinationsByIdentifier;
@property(retain, nonatomic) NSNumber *expectedAudioPaused; // @synthesize expectedAudioPaused=_expectedAudioPaused;
@property(retain, nonatomic) NSNumber *expectedVideoPaused; // @synthesize expectedVideoPaused=_expectedVideoPaused;
@property(retain, nonatomic) NSNumber *expectedScreenEnabled; // @synthesize expectedScreenEnabled=_expectedScreenEnabled;
@property(retain, nonatomic) NSNumber *expectedVideoEnabled; // @synthesize expectedVideoEnabled=_expectedVideoEnabled;
@property(retain, nonatomic) NSNumber *expectedAudioEnabled; // @synthesize expectedAudioEnabled=_expectedAudioEnabled;
@property(retain, nonatomic) id <CSDAVCSession> avcSession; // @synthesize avcSession=_avcSession;
@property(readonly, nonatomic) CSDIDSGroupSession *idsSession; // @synthesize idsSession=_idsSession;
@property(retain, nonatomic) NSMutableSet *kickedParticipants; // @synthesize kickedParticipants=_kickedParticipants;
@property(retain, nonatomic) NSMutableDictionary *activeLightweightParticipantsByIdentifier; // @synthesize activeLightweightParticipantsByIdentifier=_activeLightweightParticipantsByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *activeRemoteParticipantsByIdentifier; // @synthesize activeRemoteParticipantsByIdentifier=_activeRemoteParticipantsByIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) TUConversationReport *report; // @synthesize report=_report;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(retain, nonatomic) TUConversationActivitySession *stagedActivitySession; // @synthesize stagedActivitySession=_stagedActivitySession;
@property(readonly, copy, nonatomic) NSSet *tuActivitySessions; // @synthesize tuActivitySessions=_tuActivitySessions;
@property(nonatomic) _Bool ignoreLMIRequests; // @synthesize ignoreLMIRequests=_ignoreLMIRequests;
@property(copy, nonatomic) NSSet *otherInvitedHandles; // @synthesize otherInvitedHandles=_otherInvitedHandles;
@property(copy, nonatomic) NSSet *rejectedMembers; // @synthesize rejectedMembers=_rejectedMembers;
@property(copy, nonatomic) NSSet *kickedMembers; // @synthesize kickedMembers=_kickedMembers;
@property(copy, nonatomic) NSSet *pendingMembers; // @synthesize pendingMembers=_pendingMembers;
@property(copy, nonatomic) NSSet *lightweightMembers; // @synthesize lightweightMembers=_lightweightMembers;
@property(copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(readonly, nonatomic) TUConversationMember *localMember; // @synthesize localMember=_localMember;
@property(readonly, nonatomic) TUHandle *initiator; // @synthesize initiator=_initiator;
@property(nonatomic, getter=hasJoined) _Bool hasJoined; // @synthesize hasJoined=_hasJoined;
@property(nonatomic) long long splitSessionUserProfileState; // @synthesize splitSessionUserProfileState=_splitSessionUserProfileState;
@property(retain, nonatomic) TUConversationMember *localLightweightSecondaryMember; // @synthesize localLightweightSecondaryMember=_localLightweightSecondaryMember;
@property(readonly, nonatomic, getter=isLocallyCreated) _Bool locallyCreated; // @synthesize locallyCreated=_locallyCreated;
@property(nonatomic) long long letMeInRequestState; // @synthesize letMeInRequestState=_letMeInRequestState;
@property(nonatomic) _Bool hasReceivedLetMeInRequest; // @synthesize hasReceivedLetMeInRequest=_hasReceivedLetMeInRequest;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(retain, nonatomic) TUConversationLink *link; // @synthesize link=_link;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSDConversationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedRemoteVideoEnabled:(_Bool)arg2;	// IMP=0x00100000000331f3
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedRemoteAudioEnabled:(_Bool)arg2;	// IMP=0x0010000000032f6a
- (void)session:(id)arg1 screenCaptureDidStart:(_Bool)arg2 withError:(id)arg3;	// IMP=0x0010000000032e34
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 didChangeAudioPriority:(long long)arg2 videoPriority:(long long)arg3;	// IMP=0x0010000000032c90
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedAudioPaused:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x0010000000032b0a
- (void)addedRemoteParticipantWithIdentifier:(unsigned long long)arg1 audioEnabled:(_Bool)arg2 streamToken:(long long)arg3 screenToken:(long long)arg4;	// IMP=0x0010000000032910
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedScreenEnabled:(_Bool)arg2 streamToken:(long long)arg3 screenToken:(long long)arg4;	// IMP=0x001000000003258f
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedVideoEnabled:(_Bool)arg2 streamToken:(long long)arg3 screenToken:(long long)arg4;	// IMP=0x00100000000323d7
- (void)remoteParticipantWithIdentifier:(unsigned long long)arg1 updatedAudioEnabled:(_Bool)arg2 streamToken:(long long)arg3 screenToken:(long long)arg4;	// IMP=0x001000000003221f
- (void)sessionShouldReconnect:(id)arg1;	// IMP=0x00100000000320b8
- (void)session:(id)arg1 changedBytesOfDataUsed:(long long)arg2;	// IMP=0x0010000000031fb6
- (void)session:(id)arg1 changedOneToOneModeEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000031e08
- (void)session:(id)arg1 changedLocalVideoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000031aff
- (void)session:(id)arg1 changedLocalAudioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000317f6
- (void)session:(id)arg1 changedScreenEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000003132b
- (void)session:(id)arg1 changedLocalVideoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000030dd6
- (void)session:(id)arg1 changedLocalAudioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000030acd
- (void)serverDisconnectedForSession:(id)arg1;	// IMP=0x00100000000309b8
- (void)session:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x001000000003070f
- (void)session:(id)arg1 didDetectError:(id)arg2;	// IMP=0x0010000000030465
- (void)session:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000002fe96
- (int)_errorToAVCProviderEndedReason:(id)arg1 defaultProviderReason:(int)arg2;	// IMP=0x001000000002fc4e
- (void)sessionDidReceiveKeyUpdate:(id)arg1;	// IMP=0x001000000002fc19
- (void)session:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;	// IMP=0x001000000002faad
- (void)session:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;	// IMP=0x001000000002f99e
- (void)session:(id)arg1 didReceiveKickedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(_Bool)arg5;	// IMP=0x001000000002e62e
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x001000000002e56c
- (void)sessionDidTerminate:(id)arg1;	// IMP=0x001000000002e49c
- (void)session:(id)arg1 receivedActiveLightweightParticipantDestinationsByIdentifier:(id)arg2;	// IMP=0x001000000002e1d9
- (void)session:(id)arg1 receivedActiveParticipantDestinationsByIdentifier:(id)arg2;	// IMP=0x001000000002dcfc
- (void)session:(id)arg1 endedWithError:(id)arg2 reason:(unsigned int)arg3;	// IMP=0x001000000002d9f5
- (void)session:(id)arg1 didLeaveGroupWithError:(id)arg2;	// IMP=0x001000000002d54b
- (void)session:(id)arg1 didJoinGroup:(_Bool)arg2 participantIdentifiers:(id)arg3 error:(id)arg4;	// IMP=0x001000000002d187
- (void)switchBackToOneToOneIfPossibleUsingDelay:(_Bool)arg1;	// IMP=0x001000000002c9f1
- (void)switchBackToOneToOneIfPossible;	// IMP=0x001000000002c9dd
- (void)_registerPluginsIfNecessary;	// IMP=0x001000000002c9a0
- (id)_stableExpanseIdentifier;	// IMP=0x001000000002c5f8
- (void)_reportConversationFailedWithProviderEndedReason:(unsigned long long)arg1;	// IMP=0x001000000002c53a
- (void)_reportConversationFailedWithFailureReason:(long long)arg1 providerEndedReason:(unsigned long long)arg2;	// IMP=0x001000000002c469
- (void)refreshActiveParticipantsList;	// IMP=0x001000000002c205
- (void)_pruneRemoteParticipantsIfNecessary;	// IMP=0x001000000002bc7b
- (void)_cancelInFlightAVCBlobRecoveryIfNecessary;	// IMP=0x001000000002b8db
- (void)_requestAVCBlobsIfNecessary;	// IMP=0x001000000002adc6
- (void)_cancelTimeoutForLeavingConversation;	// IMP=0x001000000002ad04
- (void)_beginTimeoutForLeavingConversationWithReason:(id)arg1;	// IMP=0x001000000002a95f
- (void)_cleanUpFromAVCSessionFailure;	// IMP=0x001000000002a870
- (void)_startAVCSessionIfNecessary;	// IMP=0x001000000002a504
- (void)_startIDSSessionWithContext:(id)arg1;	// IMP=0x0010000000029fb7
@property(readonly, nonatomic) _Bool allParticipantsSupportSharePlay;
- (void)addAliasesToConversationContainer:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000029d66
@property(readonly, nonatomic) TUConversationParticipant *localParticipant;
- (id)remoteMemberForHandle:(id)arg1;	// IMP=0x0010000000029ad8
- (id)remoteParticipantForIdentifier:(unsigned long long)arg1;	// IMP=0x001000000002998a
- (id)remoteParticipantForHandle:(id)arg1;	// IMP=0x0010000000029611
- (void)addRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x001000000002958b
@property(readonly, nonatomic) NSDictionary *capabilitySendMessageOptions;
- (_Bool)containsMemberWithHandle:(id)arg1;	// IMP=0x00100000000290ef
- (_Bool)isRepresentedByRemoteMembers:(id)arg1 andLink:(id)arg2;	// IMP=0x0010000000028ebf
- (id)reducedInfoMembers:(id)arg1;	// IMP=0x0010000000028c36
- (void)setVideoEnabled:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000028b91
- (void)setAudioEnabled:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000028aec
- (void)setRemoteParticipantsDownlinkMuted:(_Bool)arg1;	// IMP=0x0010000000028924
- (void)_allowMember:(id)arg1;	// IMP=0x0010000000028884
- (void)kickMember:(id)arg1;	// IMP=0x0010000000028589
- (void)leave;	// IMP=0x0010000000027ff0
- (void)startAudio;	// IMP=0x0010000000027dd8
- (void)broadcastLocalParticipantData;	// IMP=0x0010000000027c53
- (void)joinUsingContext:(id)arg1;	// IMP=0x0010000000026ea2
- (void)stopSelectiveSharingSession;	// IMP=0x0010000000026e9c
- (void)resetSelectiveSharingSessionContent;	// IMP=0x0010000000026e96
- (void)createSelectiveSharingSessionIfNecessary;	// IMP=0x0010000000026e90
- (struct CGSize)localPortraitAspectRatio;	// IMP=0x0010000000026db3
- (void)_launchApplicationForActivityIfNecessary:(_Bool)arg1;	// IMP=0x0010000000026dad
- (void)_launchApplicationForActivityIfNecessary;	// IMP=0x0010000000026d86
- (void)launchAppForActivity:(id)arg1 foreground:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002699b
- (void)launchAppForActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026938
- (id)createStagedActivitySessionForActivity:(id)arg1;	// IMP=0x0010000000026862
- (_Bool)setConversationLink:(id)arg1 allowUpdate:(_Bool)arg2;	// IMP=0x001000000002641e
- (void)removePendingMembers:(id)arg1 triggeredLocally:(_Bool)arg2;	// IMP=0x0010000000025eb6
- (void)addPendingMembers:(id)arg1 triggeredLocally:(_Bool)arg2;	// IMP=0x0010000000025925
- (void)updateMessagesGroupName:(id)arg1;	// IMP=0x00100000000258cc
- (void)updateMemberValidationSource:(id)arg1 source:(long long)arg2;	// IMP=0x001000000002552b
- (void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 invitationPreferences:(id)arg3 addingFromLetMeIn:(_Bool)arg4 triggeredLocally:(_Bool)arg5;	// IMP=0x0010000000023e76
- (void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x0010000000023dce
- (void)removeRemoteMembers:(id)arg1 triggeredLocally:(_Bool)arg2;	// IMP=0x0010000000023741
- (void)removeVirtualParticipant:(id)arg1;	// IMP=0x00100000000233f8
- (void)addVirtualParticipant:(id)arg1;	// IMP=0x0010000000023128
- (void)updateParticipantPresentationContexts:(id)arg1;	// IMP=0x0010000000022db8
- (void)removeParticipantWithIdentifier:(unsigned long long)arg1 fromHandle:(id)arg2;	// IMP=0x00100000000225b5
- (_Bool)allowsScreenSharing;	// IMP=0x0010000000022565
- (void)removeParticipantsForMember:(id)arg1;	// IMP=0x0010000000022223
- (void)addActiveParticipant:(id)arg1;	// IMP=0x0010000000021714
@property(copy, nonatomic) NSSet *memberIdentifiers; // @synthesize memberIdentifiers=_memberIdentifiers;
@property(nonatomic, getter=isFromStorage) _Bool fromStorage; // @synthesize fromStorage=_fromStorage;
- (void)updateLocalAspectRatiosForOneToOneModeEnabled:(_Bool)arg1;	// IMP=0x0010000000021496
- (void)setConversationGridDisplayMode:(unsigned long long)arg1;	// IMP=0x0010000000021413
@property(nonatomic) struct CGRect presentationRect;
@property(nonatomic) int presentationState;
@property(nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic, getter=isRelaying) _Bool relaying; // @synthesize relaying=_relaying;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused;
- (void)setScreenEnabled:(_Bool)arg1 attributes:(id)arg2;	// IMP=0x001000000002007c
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property(readonly, nonatomic, getter=isScreenEnabled) _Bool screenEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property(readonly, nonatomic) NSSet *virtualParticipants;
- (_Bool)_expanseEnabled;	// IMP=0x001000000001f5e7
- (id)localParticipantDataToSendToDestinationIDs:(id)arg1;	// IMP=0x001000000001f4f3
- (id)localParticipantData;	// IMP=0x001000000001f295
- (id)localConversationParticipantWithDataToSendToDestinationIDs:(id)arg1;	// IMP=0x001000000001f1b3
@property(readonly, nonatomic, getter=isAudioReady) _Bool audioReady;
- (long long)maxVideoDecodesAllowed;	// IMP=0x001000000001eec3
@property(readonly, nonatomic) unsigned long long localParticipantIdentifier;
@property(readonly, nonatomic) long long avcSessionToken;
- (id)avcSessionIdentifier;	// IMP=0x001000000001ed4c
@property(readonly, copy, nonatomic) TUConversation *tuConversation;
@property(readonly, nonatomic) _Bool isAnyOtherAccountDeviceActive;
@property(readonly, copy, nonatomic) NSSet *activeLightweightParticipants;
@property(readonly, copy, nonatomic) NSSet *activeRemoteParticipants;
- (id)activeParticipants;	// IMP=0x001000000001df7e
@property(readonly, copy) NSString *description;
- (id)initWithQueue:(id)arg1 UUID:(id)arg2 groupUUID:(id)arg3 groupSession:(id)arg4 messagesGroupUUID:(id)arg5 locallyCreated:(_Bool)arg6 localMember:(id)arg7 initiator:(id)arg8 remoteMembers:(id)arg9 pendingMembers:(id)arg10 otherInvitedHandles:(id)arg11 lightweightMembers:(id)arg12 activity:(id)arg13 link:(id)arg14 report:(id)arg15 fromStorage:(_Bool)arg16 video:(_Bool)arg17 applicationController:(id)arg18 featureFlags:(id)arg19 systemStateObserver:(id)arg20;	// IMP=0x001000000001c7c3
- (id)initWithQueue:(id)arg1 UUID:(id)arg2 groupUUID:(id)arg3 groupSession:(id)arg4 messagesGroupUUID:(id)arg5 locallyCreated:(_Bool)arg6 localMember:(id)arg7 initiator:(id)arg8 remoteMembers:(id)arg9 pendingMembers:(id)arg10 otherInvitedHandles:(id)arg11 lightweightMembers:(id)arg12 activity:(id)arg13 link:(id)arg14 report:(id)arg15 fromStorage:(_Bool)arg16 video:(_Bool)arg17 applicationController:(id)arg18;	// IMP=0x001000000001c5a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
