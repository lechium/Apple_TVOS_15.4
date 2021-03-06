//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSLocalDeliveryQueue, IDSUTunPeerServiceMap, IMPair, IMPowerAssertion, IMTimer, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSSocketPairConnectionProtocol, IDSUTunConnectionDelegate;

@interface IDSUTunConnection : NSObject
{
    id <IDSUTunConnectionDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_sendingMessages;	// 16 = 0x10
    NSMutableArray *_fallbackMessages;	// 24 = 0x18
    NSMutableDictionary *_statistics;	// 32 = 0x20
    NSMutableDictionary *_cumulativeOutgoingStatistics;	// 40 = 0x28
    NSMutableDictionary *_cumulativeIncomingStatistics;	// 48 = 0x30
    NSMutableDictionary *_tokenToOTREncryptionQueue;	// 56 = 0x38
    NSMutableDictionary *_tokenToOTRError;	// 64 = 0x40
    NSMutableDictionary *_dataProtectedIncomingMessages;	// 72 = 0x48
    id <IDSSocketPairConnectionProtocol> _socketConnection;	// 80 = 0x50
    _Bool _openSocketCalled;	// 88 = 0x58
    _Bool _connectionSuspended;	// 89 = 0x59
    IMTimer *_timeoutTimer;	// 96 = 0x60
    IMTimer *_fallbackTimer;	// 104 = 0x68
    IMTimer *_dequeueTimer;	// 112 = 0x70
    NSString *_identifier;	// 120 = 0x78
    NSString *_otrTokenIdentifier;	// 128 = 0x80
    IDSLocalDeliveryQueue *_deliveryQueue;	// 136 = 0x88
    IMPowerAssertion *_sendingPowerAssertion;	// 144 = 0x90
    double _rtt;	// 152 = 0x98
    long long _cachedBytes[3];	// 160 = 0xa0
    unsigned long long _maxQueueSize;	// 184 = 0xb8
    long long _priority;	// 192 = 0xc0
    NSString *_cbuuid;	// 200 = 0xc8
    NSString *_uniqueID;	// 208 = 0xd0
    NSDate *_lastFallback;	// 216 = 0xd8
    _Bool _isMagnetIndicatingPeerIsAwake;	// 224 = 0xe0
    _Bool _enabled;	// 225 = 0xe1
    _Bool _needsHandshake;	// 226 = 0xe2
    _Bool _isAlwaysConnected;	// 227 = 0xe3
    _Bool _isCloudEnabled;	// 228 = 0xe4
    NSMutableDictionary *_incomingResourceTransfers;	// 232 = 0xe8
    NSMutableSet *_resettingIncomingResourceTransfers;	// 240 = 0xf0
    NSMutableSet *_resumingIncomingResourceTransfers;	// 248 = 0xf8
    _Bool _resumeResourceTransfers;	// 256 = 0x100
    _Bool _enableOTR;	// 257 = 0x101
    _Bool _useSharedOTRSession;	// 258 = 0x102
    _Bool _useNamedOTRSessionToken;	// 259 = 0x103
    _Bool _supportsLegacyOTRSessionToken;	// 260 = 0x104
    _Bool _newServiceSupported;	// 261 = 0x105
    _Bool _supportDynamicServices;	// 262 = 0x106
    _Bool _supportDynamicServicesOptimization;	// 263 = 0x107
    unsigned short _serviceMinCompatibilityVersion;	// 264 = 0x108
    NSMutableSet *_admissionDeniedTopics;	// 272 = 0x110
    unsigned char _remoteInstanceID[16];	// 280 = 0x118
    IDSUTunPeerServiceMap *_incomingServiceMap;	// 296 = 0x128
    IDSUTunPeerServiceMap *_outgoingServiceMap;	// 304 = 0x130
    NSMutableDictionary *_incomingServiceMapUpdateCounter;	// 312 = 0x138
    NSArray *_supportedMessageTypes;	// 320 = 0x140
    _Bool _shouldAbortOnMissingTopic;	// 328 = 0x148
    _Bool _shouldUseIPsecLink;	// 329 = 0x149
    _Bool _shouldUseNWFraming;	// 330 = 0x14a
    IMPair *_receivedResourceTransferUUIDs;	// 336 = 0x150
    unsigned int _dataProtectionClass;	// 344 = 0x158
    long long _idsPriority;	// 352 = 0x160
    IDSUTunConnection *_cloudConnection;	// 360 = 0x168
    NSString *_name;	// 368 = 0x170
}

- (void).cxx_destruct;	// IMP=0x00200000003e25d0
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(retain, nonatomic) IDSUTunConnection *cloudConnection; // @synthesize cloudConnection=_cloudConnection;
@property(nonatomic) _Bool supportsLegacyOTRSessionToken; // @synthesize supportsLegacyOTRSessionToken=_supportsLegacyOTRSessionToken;
@property(nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long idsPriority; // @synthesize idsPriority=_idsPriority;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) double rtt; // @synthesize rtt=_rtt;
@property(retain, nonatomic) NSArray *supportedMessageTypes; // @synthesize supportedMessageTypes=_supportedMessageTypes;
@property(readonly, nonatomic) _Bool isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
@property(readonly, nonatomic) NSDictionary *cumulativeOutgoingStatistics; // @synthesize cumulativeOutgoingStatistics=_cumulativeOutgoingStatistics;
@property(readonly, nonatomic) NSDictionary *cumulativeIncomingStatistics; // @synthesize cumulativeIncomingStatistics=_cumulativeIncomingStatistics;
@property(nonatomic) _Bool isAlwaysConnected; // @synthesize isAlwaysConnected=_isAlwaysConnected;
@property(retain, nonatomic) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(nonatomic) unsigned long long maxQueueSize; // @synthesize maxQueueSize=_maxQueueSize;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)forceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000003e1e90
- (void)connectionDidReceiveBytes:(id)arg1;	// IMP=0x00100000003e1c40
- (MISSING_TYPE *)connectionDidReachInFlightMessageLowWaterMark: /* Error: Ran out of types for this method. */;	// IMP=0x00100000003e19b0
- (void)connectionBecameEmpty;	// IMP=0x00100000003e1780
- (void)connectionBecameEmpty:(id)arg1;	// IMP=0x00100000003e14f0
- (void)didReceiveDataMessage:(id)arg1;	// IMP=0x00100000003e1430
- (void)connection:(id)arg1 didReceiveDataMessage:(id)arg2;	// IMP=0x00100000003e1320
- (void)connectionDidClose;	// IMP=0x00100000003e10f0
- (void)connectionDidClose:(id)arg1;	// IMP=0x00100000003e0e50
- (void)_dumpLogs;	// IMP=0x00100000003e0bb0
- (void)_processDecryptedMessage:(id)arg1;	// IMP=0x00100000003d60b0
- (void)_processIncomingDataMessage:(id)arg1;	// IMP=0x00100000003d5980
- (void)_processIncomingResourceTransferMessage:(id)arg1 messageUUID:(id)arg2 streamID:(unsigned short)arg3 topic:(id)arg4 wantsAppAck:(_Bool)arg5 expectsPeerResponse:(_Bool)arg6 peerResponseIdentifier:(id)arg7 isDefaultPairedDevice:(_Bool)arg8 didWakeHint:(_Bool)arg9;	// IMP=0x00100000003cfc80
- (_Bool)_resourceTransferUUIDAlreaadyReceived:(id)arg1;	// IMP=0x00100000003cfb80
- (void)_noteReceivedResourceTransferUUID:(id)arg1;	// IMP=0x00100000003cf780
- (unsigned long long)_currentLink;	// IMP=0x00100000003cf5d0
- (void)_processMessage:(id)arg1 withSequenceNumberBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cf510
- (void)_sendExpiredAckForMessage:(id)arg1;	// IMP=0x00100000003cf160
- (void)_sendAckForMessage:(id)arg1;	// IMP=0x00100000003cf020
- (void)sendAckForMessageWithSequenceNumber:(unsigned int)arg1;	// IMP=0x00100000003cede0
- (long long)_socketToNiceCommand:(unsigned char)arg1;	// IMP=0x00100000003ceb20
- (void)_flushMessagesAll:(_Bool)arg1 response:(long long)arg2;	// IMP=0x00100000003cd630
- (void)flushAllMessagesForReason:(long long)arg1;	// IMP=0x00100000003cd580
- (void)dropDisallowedMessages;	// IMP=0x00100000003cd500
- (_Bool)_messageHasValidEncryptionStatus:(id)arg1;	// IMP=0x00100000003cd460
- (void)_optionallyDecryptMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cd290
- (void)_decryptPublicKeyEncryptedMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003cc5f0
- (id)_decryptOTREncrtypedMessage:(id)arg1;	// IMP=0x00100000003ca7a0
- (void)_handleOTRDecryptionError:(id)arg1;	// IMP=0x00100000003c9e00
- (void)_handleOTRDecryptionSuccess:(id)arg1;	// IMP=0x00100000003c9a80
- (_Bool)_storeIncomingClassADataMesageIfNeeded:(id)arg1 topic:(id)arg2 sequenceNumber:(unsigned int)arg3;	// IMP=0x00100000003c91a0
- (_Bool)_storeIncomingClassCDataMessageIfNeeded:(id)arg1 topic:(id)arg2 sequenceNumber:(unsigned int)arg3;	// IMP=0x00100000003c88c0
- (void)_sendEncryptedMessage:(id)arg1;	// IMP=0x00100000003c7730
- (void)_sendPublicKeyEncryptedMessage:(id)arg1;	// IMP=0x00100000003c6a80
- (void)_sendOTREncryptionQueue:(id)arg1 streamID:(unsigned short)arg2;	// IMP=0x00100000003c63f0
- (void)_sendOTREncryptedMessage:(id)arg1 useEncryption:(_Bool)arg2 streamID:(unsigned short)arg3 forPriority:(long long)arg4 flag:(int)arg5 token:(id)arg6;	// IMP=0x00100000003c5bb0
- (id)_encryptDataWithOTR:(id)arg1 token:(id)arg2;	// IMP=0x00100000003c55a0
- (void)classStorageBecameAvailable:(id)arg1;	// IMP=0x00100000003c4a80
- (void)handleOTRNegotiationTimeout:(id)arg1;	// IMP=0x00100000003c3900
- (void)handleOTRNegotiationComplete:(id)arg1;	// IMP=0x00100000003c3820
- (void)_requeueMessages:(id)arg1;	// IMP=0x00100000003c2bd0
- (void)_requeueSendingMessage:(id)arg1;	// IMP=0x00100000003c2ab0
- (void)_dequeueMessagesTimerDidFire:(id)arg1;	// IMP=0x00100000003c27b0
- (void)_invalidateMessagesDequeueTimer;	// IMP=0x00100000003c2720
- (void)_startMessagesDequeueMessagesTimer;	// IMP=0x00100000003c22f0
- (double)_dequeueMessagesTimerInterval;	// IMP=0x00100000003c22d0
- (unsigned long long)_pendingOutgoingBytesForClass:(unsigned int)arg1;	// IMP=0x00100000003c1b00
- (void)_removeMessageFromStatistics:(id)arg1;	// IMP=0x00100000003c17c0
- (void)_addOutgoingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 dataProtectionClass:(unsigned int)arg3 isResource:(_Bool)arg4;	// IMP=0x00100000003c1720
- (void)_addIncomingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2;	// IMP=0x00100000003c16a0
- (void)_addMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 direction:(unsigned char)arg3 dataProtectionClass:(unsigned int)arg4 isResource:(_Bool)arg5;	// IMP=0x00100000003c0cc0
- (void)_updateDictionary:(id)arg1 addMessageSize:(long long)arg2 addMessageCount:(long long)arg3;	// IMP=0x00100000003c0a40
- (void)_sendSocketMessage:(id)arg1 ignoreSequenceNumber:(_Bool)arg2;	// IMP=0x00100000003c0240
- (void)_sendSocketMessage:(id)arg1;	// IMP=0x00100000003c01e0
- (void)_clearSendingPowerAssertionWithReason:(id)arg1;	// IMP=0x00100000003bffd0
- (void)clearStats;	// IMP=0x00100000003bff50
- (void)trafficClassesChanged;	// IMP=0x00100000003bf980
- (void)_dequeueMessages;	// IMP=0x00100000003bad40
- (void)_assertQuickRelayForCloudMessaging;	// IMP=0x00100000003ba900
- (unsigned int)_calculateRandomDelayForCloudMessagingRequest;	// IMP=0x00100000003ba120
- (id)_now;	// IMP=0x00100000003ba0f0
- (id)serviceController;	// IMP=0x00100000003ba0c0
- (_Bool)_nonBTAllowedForClientID:(id)arg1;	// IMP=0x00100000003ba030
- (_Bool)supportsMessageOfType:(long long)arg1;	// IMP=0x00100000003b9fb0
- (_Bool)checkServiceCompability:(id)arg1 localMessage:(id)arg2;	// IMP=0x00100000003b9c20
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x00100000003b9670
- (_Bool)_messageIsAllowedToSendMessageOnTopic:(id)arg1;	// IMP=0x00100000003b9020
- (void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2 reason:(id)arg3 detailedError:(id)arg4 responseCode:(long long)arg5;	// IMP=0x00100000003b7f20
- (void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2 reason:(id)arg3 responseCode:(long long)arg4;	// IMP=0x00100000003b7e60
- (void)_messageTimedOut:(id)arg1 localMessage:(id)arg2;	// IMP=0x00100000003b7740
- (_Bool)_shouldAWDLogMessage:(id)arg1;	// IMP=0x00100000003b76b0
- (void)_timeoutTimerFired;	// IMP=0x00100000003b69c0
- (void)_resetTimeout:(id)arg1;	// IMP=0x00100000003b5f70
- (void)invalidateTimeoutTimer;	// IMP=0x00100000003b5f30
- (void)_fallbackTimerFired;	// IMP=0x00100000003b5070
- (void)_resetFallbackTimeout:(double)arg1 useNextFallback:(_Bool)arg2;	// IMP=0x00100000003b4c50
- (_Bool)_performFallbackIfNecessary:(id)arg1;	// IMP=0x00100000003b42b0
- (double)_fallbackTimeoutForService:(id)arg1;	// IMP=0x00100000003b3dc0
- (double)_nanoDisconnectedFallbackTimeoutForService:(id)arg1;	// IMP=0x00100000003b3a20
- (double)_nanoConnectedFallbackTimeoutForService:(id)arg1;	// IMP=0x00100000003b3680
- (void)_clearLastFallbackWithReason:(id)arg1;	// IMP=0x00100000003b3440
- (void)_connectivityChanged;	// IMP=0x00100000003b3390
- (void)_handleBecomingEmptyOfCloudMessages;	// IMP=0x00100000003b3290
- (void)_handleBecomingEmpty;	// IMP=0x00100000003b3130
- (void)_handleBecomingEmptyForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00100000003b2f90
- (_Bool)_nonThreadSafeIsConnected;	// IMP=0x00100000003b2f50
@property(readonly, nonatomic) _Bool isConnected;
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x00100000003b2bf0
- (void)cancelMessageID:(id)arg1;	// IMP=0x00100000003b2330
- (void)sendMessage:(id)arg1;	// IMP=0x00100000003b0320
- (void)_startAndSetupSocketPairConnection:(id)arg1 capabilityFlags:(unsigned long long)arg2 instanceID:(unsigned char (*)[16])arg3 serviceMinCompatibilityVersion:(unsigned short)arg4 socketDescriptor:(int)arg5;	// IMP=0x00100000003af310
- (void)_startNWConnectinForIPsecCase:(int)arg1 controlChannelVersion:(id)arg2 capabilityFlags:(unsigned long long)arg3 instanceID:(unsigned char (*)[16])arg4 serviceMinCompatibilityVersion:(unsigned short)arg5;	// IMP=0x00100000003ae4a0
- (void)_startConnection;	// IMP=0x00100000003ace00
- (void)resumeConnectivity;	// IMP=0x00100000003acd30
- (void)_checkAndStartConnection;	// IMP=0x00100000003accb0
- (void)_startConnectionForContinuityPeer;	// IMP=0x00100000003ac900
- (id)_nonThreadSafeSocketOptions;	// IMP=0x00100000003ac250
- (_Bool)_isMagnetConnection;	// IMP=0x00100000003ac210
- (void)_nonThreadSafeStopConnection;	// IMP=0x00100000003abd00
- (id)_UTunDeliveryController;	// IMP=0x00100000003abcd0
- (id)_encryptionController;	// IMP=0x00100000003abca0
- (void)setIsMagnetIndicatingPeerIsAwake:(_Bool)arg1;	// IMP=0x00100000003ab8e0
- (_Bool)isMagnetIndicatingPeerIsAwake;	// IMP=0x00100000003ab8c0
- (void)setEnabled:(_Bool)arg1 withReason:(id)arg2;	// IMP=0x00100000003aab90
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00100000003aab50
- (_Bool)isEnabled;	// IMP=0x00100000003aab30
- (void)setDeviceBTUUID:(id)arg1;	// IMP=0x00100000003aa610
@property(readonly, nonatomic) NSDictionary *queueStatistics;
@property(readonly, nonatomic) NSDictionary *sendingMessageStatistics;
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;	// IMP=0x00100000003a99b0
- (id)_sendingMessageStatisticsForClass:(unsigned int)arg1;	// IMP=0x00100000003a9900
- (_Bool)hasSpaceForMessagesWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x00100000003a9460
- (unsigned long long)_inflightMessageCount;	// IMP=0x00100000003a9400
- (unsigned long long)_inflightMessageCountForType:(long long)arg1;	// IMP=0x00100000003a93a0
- (unsigned long long)_inflightMessageCountForClass:(unsigned int)arg1;	// IMP=0x00100000003a9340
- (unsigned long long)_sendingMessageCountForType:(long long)arg1;	// IMP=0x00100000003a91f0
- (unsigned long long)_sendingMessageCountForClass:(unsigned int)arg1;	// IMP=0x00100000003a90a0
@property(readonly, nonatomic) _Bool isIdle;
- (_Bool)_isWiProxPeer;	// IMP=0x00100000003a8f50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003a8f30
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003a8ed0
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000003a8b40
- (id)initWithIdentifier:(id)arg1 socketPriority:(long long)arg2 btUUID:(id)arg3 uniqueID:(id)arg4 incomingServiceMap:(id)arg5 outgoingServiceMap:(id)arg6 isCloudEnabled:(_Bool)arg7 shouldUseIPsecLink:(_Bool)arg8;	// IMP=0x00100000003a8310

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

