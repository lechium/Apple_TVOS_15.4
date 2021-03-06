//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSBaseSocketPairConnection, IDSClientChannel, IDSConnectionContext, IDSDGroupStatusNotificationController, IDSDSessionInvitationManager, IDSDSessionMessenger, IDSDSessionSharedState, IDSGroupStatusNotificationParameters, IDSMultiplexerGroupSessionTransport, NSArray, NSData, NSDate, NSMutableArray, NSMutableData, NSMutableDictionary, NSNumber, NSString;
@protocol IDSDSessionAvailabilityCheck;

@interface IDSDSession : NSObject
{
    _Bool _assertedRealTimeMode;	// 8 = 0x8
    id <IDSDSessionAvailabilityCheck> _availabilityCheck;	// 16 = 0x10
    NSDate *_awdStartTimestamp;	// 24 = 0x18
    NSString *_awdUniqueId;	// 32 = 0x20
    IDSBaseSocketPairConnection *_baseSocketPairConnection;	// 40 = 0x28
    _Bool _bypassUTun;	// 48 = 0x30
    NSMutableArray *_cachedClientData;	// 56 = 0x38
    long long _cachedNumberOfActiveParticipants;	// 64 = 0x40
    IDSClientChannel *_clientChannel;	// 72 = 0x48
    unsigned long long _connectionClaimed;	// 80 = 0x50
    IDSConnectionContext *_connectionContext;	// 88 = 0x58
    unsigned int _currentGenerationCounter;	// 96 = 0x60
    _Bool _disallowCellularInterface;	// 100 = 0x64
    _Bool _disallowWifiInterface;	// 101 = 0x65
    NSDate *_endDate;	// 104 = 0x68
    NSMutableDictionary *_extraConnections;	// 112 = 0x70
    unsigned long long _extraConnectionCount;	// 120 = 0x78
    unsigned int _groupSessionState;	// 128 = 0x80
    IDSGroupStatusNotificationParameters *_groupStatusNotificationParams;	// 136 = 0x88
    int _idsDataChannelClientPID;	// 144 = 0x90
    unsigned long long _initialLinkType;	// 152 = 0x98
    NSString *_instanceID;	// 160 = 0xa0
    double _inviteRecvTime;	// 168 = 0xa8
    _Bool _joinGroupSessionPending;	// 176 = 0xb0
    CDUnknownBlockType _joinNotificationDeliveryTimeoutBlock;	// 184 = 0xb8
    unsigned char _keyMaterial[60];	// 192 = 0xc0
    long long _linkProtocol;	// 256 = 0x100
    double _membershipChangeEventTime;	// 264 = 0x108
    double _newKeyEventTime;	// 272 = 0x110
    struct *_packetBufferArray[8];	// 280 = 0x118
    unsigned long long _preferredAddressFamily;	// 344 = 0x158
    _Bool _preferCellularForCallSetup;	// 352 = 0x160
    NSNumber *_qrError;	// 360 = 0x168
    NSMutableArray *_qrEventsForRTCReports;	// 368 = 0x170
    NSNumber *_qrReason;	// 376 = 0x178
    unsigned int _reason;	// 384 = 0x180
    unsigned short _relayPort;	// 388 = 0x184
    _Bool _sessionStartedCalled;	// 390 = 0x186
    NSMutableData *_sessionInfoMetaData;	// 392 = 0x188
    _Bool _shouldAssertRealTimeMode;	// 400 = 0x190
    _Bool _sharedSessionHasJoined;	// 401 = 0x191
    _Bool _shouldConnectToQRServer;	// 402 = 0x192
    NSData *_skeData;	// 408 = 0x198
    int _socketDescriptor;	// 416 = 0x1a0
    NSDate *_startDate;	// 424 = 0x1a8
    _Bool _supressClientNotifications;	// 432 = 0x1b0
    _Bool _verboseFunctionalLogging;	// 433 = 0x1b1
    _Bool _verbosePerformanceLogging;	// 434 = 0x1b2
    _Bool _multiplexerEnabled;	// 435 = 0x1b3
    IDSMultiplexerGroupSessionTransport *_multiplexerTransport;	// 440 = 0x1b8
    double _channelDataCachedTime;	// 448 = 0x1c0
    _Bool _startedAsUPlusOneSession;	// 456 = 0x1c8
    _Bool _switchedToUPlusMany;	// 457 = 0x1c9
    _Bool _supportUnauthenticatedUser;	// 458 = 0x1ca
    unsigned int _currentSessionStateCounter;	// 460 = 0x1cc
    _Bool _isLightweightParticipant;	// 464 = 0x1d0
    NSString *_clientID;	// 472 = 0x1d8
    IDSDSessionInvitationManager *_invitationManager;	// 480 = 0x1e0
    IDSDSessionMessenger *_messenger;	// 488 = 0x1e8
    IDSDSessionSharedState *_sharedState;	// 496 = 0x1f0
    IDSDGroupStatusNotificationController *_groupStatusNotificationController;	// 504 = 0x1f8
}

- (void).cxx_destruct;	// IMP=0x00100000001108d0
@property(retain, nonatomic) IDSDGroupStatusNotificationController *groupStatusNotificationController; // @synthesize groupStatusNotificationController=_groupStatusNotificationController;
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(nonatomic) _Bool sharedSessionHasJoined; // @synthesize sharedSessionHasJoined=_sharedSessionHasJoined;
@property(nonatomic) _Bool shouldConnectToQRServer; // @synthesize shouldConnectToQRServer=_shouldConnectToQRServer;
@property(retain, nonatomic) NSNumber *qrReason; // @synthesize qrReason=_qrReason;
@property(retain, nonatomic) NSNumber *qrError; // @synthesize qrError=_qrError;
@property(retain, nonatomic) IDSDSessionMessenger *messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) IDSDSessionInvitationManager *invitationManager; // @synthesize invitationManager=_invitationManager;
@property(readonly, nonatomic) NSString *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, nonatomic) unsigned int groupSessionState; // @synthesize groupSessionState=_groupSessionState;
@property(readonly, nonatomic) _Bool disallowWifiInterface; // @synthesize disallowWifiInterface=_disallowWifiInterface;
@property(readonly, nonatomic) _Bool disallowCellularInterface; // @synthesize disallowCellularInterface=_disallowCellularInterface;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSArray *requiredLackOfCapabilities;
@property(readonly, nonatomic) NSArray *requiredCapabilities;
- (unsigned long long)connectionCountHint;	// IMP=0x0010000000110460
- (_Bool)_useBTDatagramPipe;	// IMP=0x0010000000110400
- (void)_setClientType:(long long)arg1;	// IMP=0x00100000001103a0
- (_Bool)isScreenSharingSession;	// IMP=0x0010000000110340
- (unsigned int)state;	// IMP=0x00100000001102e0
- (id)fromID;	// IMP=0x0010000000110270
- (id)groupID;	// IMP=0x0010000000110200
- (id)accountID;	// IMP=0x0010000000110190
- (id)participantID;	// IMP=0x0010000000110120
- (long long)clientType;	// IMP=0x00100000001100c0
- (_Bool)enableQuickRelay;	// IMP=0x0010000000110060
- (_Bool)isInitiator;	// IMP=0x0010000000110000
- (id)uniqueID;	// IMP=0x001000000010ff90
- (id)destinationsLightweightStatus;	// IMP=0x001000000010ff20
- (id)destinations;	// IMP=0x001000000010feb0
- (void)setSeqRecvStart:(unsigned int)arg1;	// IMP=0x001000000010fdb0
- (void)setSSRCRecv:(unsigned int)arg1;	// IMP=0x001000000010fd50
- (void)setRemoteUsePhoneContinuityLocalMessage:(id)arg1;	// IMP=0x001000000010fcc0
- (void)setRemoteUseCloudPairedControlChannel:(id)arg1;	// IMP=0x000000000010fc30
- (void)setQuickRelaySessionToken:(id)arg1;	// IMP=0x001000000010fba0
- (void)setInviteTimeout:(long long)arg1;	// IMP=0x001000000010fb30
- (void)setRemoteBlob:(id)arg1;	// IMP=0x001000000010faa0
- (void)receivedEndMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010f9f0
- (void)receivedSessionMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010f940
- (void)receivedCancelMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010f890
- (void)receivedDeclineMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010f7e0
- (void)receivedAcceptMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010f730
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x001000000010f680
- (void)declineInvitationWithData:(id)arg1 forceFromID:(id)arg2 additionalMessageAttributes:(id)arg3;	// IMP=0x001000000010f5b0
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x001000000010f530
- (void)declineInvitation;	// IMP=0x001000000010f4e0
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x001000000010f460
- (void)acceptInvitation;	// IMP=0x001000000010f410
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x001000000010f3b0
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x001000000010f330
- (void)cancelInvitation;	// IMP=0x001000000010f2e0
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x001000000010f250
- (void)sendInvitationWithOptions:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x001000000010f1c0
- (void)sendCancelInvitationMessage;	// IMP=0x001000000010f160
- (void)invitationDeclined;	// IMP=0x001000000010f100
- (_Bool)isWithDefaultPairedDevice;	// IMP=0x001000000010eff0
- (void)didSessionReinitiated;	// IMP=0x001000000010efe0
- (void)_receivedReinitiateBringupAckMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010e0a0
- (void)_receivedReinitiateBringupMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010d420
- (void)_receivedReinitiateTeardownAckMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010c1b0
- (void)_receivedReinitiateTeardownMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010acd0
- (void)_receivedReinitiateRequestMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010a930
- (void)receivedReinitiateMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000010a380
- (void)reinitiate;	// IMP=0x00100000001083a0
- (void)registerMultiplexerTransport;	// IMP=0x0010000000107cc0
- (void)getActiveParticipants:(id)arg1 pushTokenForParticipants:(id)arg2 isLightweightParticipant:(_Bool)arg3;	// IMP=0x0010000000107510
- (id)_createGroupSessionActiveParticipantsFromParticipants:(id)arg1 pushTokenForParticipants:(id)arg2;	// IMP=0x0010000000106d00
- (void)_updateActiveLightweightParticipants:(id)arg1;	// IMP=0x00100000001067d0
- (void)_updateActiveParticipants:(id)arg1;	// IMP=0x0010000000106090
- (void)processAllocationErrorStatus:(int)arg1 errorCode:(int)arg2;	// IMP=0x0010000000105d40
- (void)onURI2ParticipantIDMappingChange:(id)arg1 allocateResponse:(id)arg2;	// IMP=0x0010000000105720
- (void)onParticipantID2PushTokenMappingChange:(id)arg1;	// IMP=0x0010000000104860
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x0010000000104360
- (void)getParticipantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x0010000000103c60
- (void)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x0010000000103560
- (void)requestEncryptionKeyForParticipantIDs:(id)arg1;	// IMP=0x0010000000103300
- (void)hasOutdatedSKI:(id)arg1;	// IMP=0x0010000000103140
- (void)sendAllocationRequest:(id)arg1;	// IMP=0x00100000001027a0
- (void)recvMembershipChangeEventWithReason:(unsigned char)arg1;	// IMP=0x0010000000102610
- (void)InvalidateStableKeyMaterialInFrameworkCache:(id)arg1;	// IMP=0x0010000000102380
- (void)recvStableKeyMaterialForFrameworkCache:(id)arg1;	// IMP=0x0010000000101d90
- (void)invalidateKeyMaterialByKeyIndexes:(id)arg1;	// IMP=0x0010000000101cf0
- (void)recvKeyMaterial:(id)arg1;	// IMP=0x00100000001016d0
- (void)sendKeyMaterialMessageDataOverQR:(id)arg1 toDestination:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000101080
- (void)sendKeyMaterialMessage:(id)arg1 toDestination:(id)arg2;	// IMP=0x00100000000ffe30
- (void)leaveGroupSession:(id)arg1;	// IMP=0x00100000000feee0
- (void)receiveJoinNotificationFromAParticipant;	// IMP=0x00100000000fed90
- (void)joinWithOptions:(id)arg1;	// IMP=0x00100000000fc700
- (id)_checkIfPushMessageSizeGreaterThanMaxLimit:(id)arg1 maxLimit:(unsigned long long)arg2;	// IMP=0x00100000000fc1c0
- (void)setGroupStreamInfo:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000fb320
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000faea0
- (void)removeParticipantIDs:(id)arg1;	// IMP=0x00100000000fa3f0
- (void)manageDesignatedMembers:(id)arg1 withType:(unsigned short)arg2;	// IMP=0x00100000000f98b0
- (void)updateMembers:(id)arg1 withContext:(id)arg2 messagingCapabilities:(id)arg3 triggeredLocally:(_Bool)arg4 lightweightStatusDict:(id)arg5;	// IMP=0x00100000000f5f80
- (_Bool)destinationsContainFromID:(id)arg1;	// IMP=0x00100000000f5860
- (void)link:(id)arg1 didReceiveSessionStats:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x00100000000f57a0
- (void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 status:(unsigned int)arg5;	// IMP=0x00100000000f56e0
- (void)_sendSessionInfoResponseErrorToClient:(unsigned int)arg1;	// IMP=0x00100000000f55a0
- (void)terminateCallDueToIdleClientForLink:(id)arg1;	// IMP=0x00100000000f5560
- (void)link:(id)arg1 didReceiveDebugDataForClient:(id)arg2 dataType:(unsigned char)arg3;	// IMP=0x00100000000f54e0
- (void)link:(id)arg1 didReceiveMembershipChangedInformation:(unsigned char)arg2;	// IMP=0x00100000000f5490
- (void)link:(id)arg1 didReceiveEncryptionInformation:(id)arg2;	// IMP=0x00100000000f5420
- (void)didReceiveBlockedIndicationForLink:(id)arg1 reason:(unsigned int)arg2;	// IMP=0x00100000000f53d0
- (void)link:(id)arg1 didReceivePluginDisconnect:(id)arg2;	// IMP=0x00100000000f5260
- (void)link:(id)arg1 didReceiveRequestToPurgeRegistration:(id)arg2;	// IMP=0x00100000000f4f90
- (void)link:(id)arg1 didReceivePluginUnregistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x00100000000f4f10
- (void)link:(id)arg1 didReceivePluginRegistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x00100000000f4e90
- (void)link:(id)arg1 didReceiveSessionStateCounter:(unsigned int)arg2;	// IMP=0x00100000000f4e40
- (void)link:(id)arg1 didReceiveParticipantUpdate:(id)arg2 status:(unsigned short)arg3;	// IMP=0x00100000000f4dc0
- (void)link:(id)arg1 didAddQREvent:(id)arg2;	// IMP=0x00100000000f4d50
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;	// IMP=0x00100000000f4cf0
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4;	// IMP=0x00100000000f4c70
- (void)link:(id)arg1 didGetLinkProbingStatus:(id)arg2;	// IMP=0x00100000000f4c00
- (void)link:(id)arg1 didSoMaskChange:(unsigned int)arg2;	// IMP=0x00100000000f4bb0
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;	// IMP=0x00100000000f4b60
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;	// IMP=0x00100000000f4b10
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00100000000f4ac0
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00100000000f4a70
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;	// IMP=0x00100000000f34f0
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_727fadec *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000000f3450
- (void)link:(id)arg1 didReceiveReportEvent:(id)arg2;	// IMP=0x00100000000f33e0
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000000f2fa0
- (void)link:(id)arg1 didReceiveKeyMaterialMessageData:(id)arg2 fromParticipantIDs:(id)arg3 toParticipantID:(id)arg4;	// IMP=0x00100000000f2ee0
- (void)link:(id)arg1 didReceiveSKEData:(id)arg2;	// IMP=0x00100000000f2e70
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000000f2bf0
- (void)_sendQREventToAVC:(id)arg1;	// IMP=0x00100000000f2740
- (void)addQREventForRTCReport:(id)arg1;	// IMP=0x00100000000f2250
- (void)_setLinkProtocol:(id)arg1;	// IMP=0x00100000000f1a80
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00100000000f0de0
- (void)connection:(id)arg1 receivedData:(id)arg2;	// IMP=0x00100000000efd90
- (void)handleAVConferenceError:(id)arg1;	// IMP=0x00100000000efd50
- (void)connectionDidStop:(id)arg1 error:(id)arg2;	// IMP=0x00100000000ef970
- (void)connection:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000ef300
- (void)setRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x00100000000ed7b0
- (void)setPreferences:(id)arg1;	// IMP=0x00100000000ed290
- (void)setMuted:(_Bool)arg1;	// IMP=0x00100000000ecda0
- (void)setAudioEnabled:(_Bool)arg1;	// IMP=0x00100000000ec8b0
- (id)connectDuration;	// IMP=0x00100000000ec6f0
- (id)sessionDuration;	// IMP=0x00100000000ec5e0
- (void)endSessionWithReason:(unsigned int)arg1;	// IMP=0x00100000000ec4f0
- (void)_notifyClientsSessionStopped;	// IMP=0x00100000000ebab0
- (void)_cleanupSocketPairConnection;	// IMP=0x00100000000eba70
- (void)_checkAndUnassertRealTimeMode;	// IMP=0x00100000000eb9f0
- (id)_acceptedDeviceToken;	// IMP=0x00100000000eb470
- (id)_acceptedDeviceUniqueID;	// IMP=0x00100000000ead70
- (id)_socketOptionsForDevice:(id)arg1 uniqueID:(id)arg2 pushToken:(id)arg3 connectionSuffix:(id)arg4;	// IMP=0x00100000000e9970
- (void)_closeSocketToDevice:(id)arg1;	// IMP=0x00100000000e8d50
- (void)_resetPreferences:(id)arg1;	// IMP=0x00100000000e88c0
- (void)_endSession;	// IMP=0x00100000000e6960
- (void)endSessionWithData:(id)arg1;	// IMP=0x00100000000e6660
- (void)_sendSessionEndWithData:(id)arg1;	// IMP=0x00100000000e5eb0
- (void)endSession;	// IMP=0x00100000000e5e20
- (void)reconnectSession;	// IMP=0x00100000000e5b70
- (void)_cleanupQuickRelaySession;	// IMP=0x00100000000e57a0
- (void)cleanupSession;	// IMP=0x00100000000e40e0
- (void)startListeningOnClientSocket:(int)arg1 isRawSocket:(_Bool)arg2;	// IMP=0x00100000000e3b90
- (void)runConnectivityCheckWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e39e0
- (void)networkingIsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e3980
- (unsigned int)globalLinkErrorToSessionEndReason:(long long)arg1;	// IMP=0x00100000000e3890
- (_Bool)shouldReportUPlusOneKey;	// IMP=0x00100000000e3850
- (id)getAppID;	// IMP=0x00100000000e37e0
- (id)getFromService;	// IMP=0x00100000000e36c0
- (id)getCallerCert;	// IMP=0x00100000000e3580
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x00100000000e32e0
- (void)setAcceptedRelaySession:(id)arg1;	// IMP=0x00100000000e2a50
- (void)_setInitialLinkType:(unsigned long long)arg1;	// IMP=0x00100000000e23c0
- (void)checkAndCallSessionStart;	// IMP=0x00100000000e2280
- (void)_sessionStartWithSocketDescriptor:(int)arg1;	// IMP=0x00100000000e1a30
- (_Bool)_shouldUseIPsecLink;	// IMP=0x00100000000e1990
- (void)_broadcastSessionStartWithSocket:(int)arg1;	// IMP=0x00100000000e16a0
- (void)startQRSession;	// IMP=0x00100000000e1670
- (void)openSocketToDevice:(id)arg1;	// IMP=0x00100000000df500
- (double)_serverSpecifiedJoinNotificationDeliveryTimeout;	// IMP=0x00100000000df400
- (void)_noteJoinNotificationDidDeliverWithSuccess:(_Bool)arg1;	// IMP=0x00100000000dec20
- (void)_startJoinNotificationDeliveryTimeout;	// IMP=0x00100000000ddb50
- (void)connectQRServer:(id)arg1 withPreferredLocalInterface:(int)arg2;	// IMP=0x00100000000d73f0
- (void)_sendLinkSelectionPreference:(id)arg1 linkScore:(id)arg2;	// IMP=0x00100000000d7380
- (void)didReceiveCurrentCellularSignalRaw:(int)arg1 signalStrength:(int)arg2 signalGrade:(int)arg3;	// IMP=0x00100000000d7360
- (id)_getNewLinkOptionsForActiveParticipantInfoRequest;	// IMP=0x00100000000d6e60
- (void)_sendingOfflineActiveParticipantInfoRequest:(id)arg1;	// IMP=0x00100000000d63e0
- (void)unregisterPluginWithOptions:(id)arg1;	// IMP=0x00100000000d5d20
- (void)registerPluginWithOptions:(id)arg1;	// IMP=0x00100000000d5660
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x00100000000d2d60
- (void)_connectQRDirectlyToClientChannel:(id)arg1;	// IMP=0x00100000000d1130
- (id)_extractFieldBytesFromMetadata:(const void *)arg1 ofSize:(unsigned int)arg2 packetBuffer:(CDStruct_727fadec *)arg3;	// IMP=0x00100000000c1750
- (void)_connectSocketDescriptor:(int)arg1 toClientChannel:(id)arg2;	// IMP=0x00100000000bead0
- (void)_checkAndRunClientChannelTests:(id)arg1;	// IMP=0x00100000000bdc00
- (_Bool)_checkAndSendCachedDataForClient:(id)arg1;	// IMP=0x00100000000bd280
- (void)writeToClientChannel:(id)arg1 packetBuffer:(CDStruct_727fadec *)arg2 metaData:(const char *)arg3 metadataSize:(unsigned int)arg4;	// IMP=0x00100000000bb070
- (void)_invalidateClientChannel:(id)arg1;	// IMP=0x00100000000badb0
- (void)registerClientChannel;	// IMP=0x00100000000b9ca0
- (void)_lightweightParticipantSync:(unsigned char)arg1;	// IMP=0x00100000000b9ac0
- (void)reportFirstMKMReceived:(double)arg1;	// IMP=0x00100000000b94d0
- (void)_cleanupSessionConnection;	// IMP=0x00100000000b8ec0
- (void)_reportRTC;	// IMP=0x00100000000b87b0
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) char *keyMaterial;
- (void)dealloc;	// IMP=0x00100000000b7a00
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 availabilityCheck:(id)arg4;	// IMP=0x00100000000b3130
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;	// IMP=0x00100000000b3020
- (long long)_loggingFlags;	// IMP=0x00100000000b2fa0
- (void)_selectDefaultMic;	// IMP=0x00100000000b2f90
- (void)submitAWDMetricsForIDSSessionWithEndReason:(unsigned int)arg1;	// IMP=0x001000000041e330
- (void);	// IMP=0x001000000041d7b0
- (void)submitAWDMetricsForIDSSessionReinitiateConnected;	// IMP=0x001000000041d6a0
- (void)submitAWDMetricsForIDSSessionReinitiateStarted;	// IMP=0x001000000041d590
- (void)submitAWDMetricsForIDSSessionReinitiateRequested;	// IMP=0x001000000041d480
- (void)submitAWDMetricsForIDSSessionConnected;	// IMP=0x001000000041d370
- (void)submitAWDMetricsForIDSSessionAcceptReceived;	// IMP=0x001000000041d260
- (void)submitAWDMetricsForIDSSessionAcceptSent;	// IMP=0x001000000041d150
- (void)submitAWDMetricsForIDSSessionDeclineReceived;	// IMP=0x001000000041d040
- (void)submitAWDMetricsForIDSSessionDeclineSent;	// IMP=0x001000000041cf30
- (void)submitAWDMetricsForIDSSessionCancelReceived;	// IMP=0x001000000041ce20
- (void)submitAWDMetricsForIDSSessionCancelSentWithRemoteEndReason:(unsigned int)arg1 numberOfRecipients:(id)arg2;	// IMP=0x001000000041ccc0
- (void)submitAWDMetricsForIDSSessionInvitationReceived;	// IMP=0x001000000041cbb0
- (void)submitAWDMetricsForIDSSessionInvitationSentWithNumberOfRecipients:(id)arg1;	// IMP=0x001000000041ca60
- (void)submitAWDMetricsForIDSSessionStarted;	// IMP=0x001000000041c720
- (_Bool)_shouldSubmitMetricsBasedOnDate:(id)arg1 isInitiator:(_Bool)arg2;	// IMP=0x001000000041c4f0
- (_Bool)_shouldSubmitMetricsForThisSession;	// IMP=0x001000000041c400

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

