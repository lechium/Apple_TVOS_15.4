//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEIKEv2TransportDelegate-Protocol.h>
#import <NetworkExtension/NEIPSecSASessionDelegate-Protocol.h>

@class NEIKEv2ChildSA, NEIKEv2ChildSAConfiguration, NEIKEv2ConfigurationMessage, NEIKEv2IKESA, NEIKEv2IKESAConfiguration, NEIKEv2Packet, NEIKEv2RTT, NEIPSecSASession, NSMutableArray, NSMutableDictionary, NSString;
@protocol NEIKEv2ConfigurationDelegate, NEIKEv2PacketDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NEIKEv2Session : NSObject <NEIKEv2TransportDelegate, NEIPSecSASessionDelegate>
{
    _Bool _isListening;	// 8 = 0x8
    _Bool _ownsDatabaseSession;	// 9 = 0x9
    _Bool _ownsIPSecInterface;	// 10 = 0xa
    _Bool _isAborted;	// 11 = 0xb
    _Bool _isInvalidated;	// 12 = 0xc
    _Bool _isExpectingConfigBlock;	// 13 = 0xd
    _Bool _hasContactedConfigurationDelegate;	// 14 = 0xe
    _Bool _hasOutboundRequestInFlight;	// 15 = 0xf
    unsigned short _initiatorFragmentCount;	// 16 = 0x10
    unsigned short _responderFragmentCount;	// 18 = 0x12
    int _lastRequestMessageID;	// 20 = 0x14
    int _lastReceivedMessageID;	// 24 = 0x18
    int _previousMOBIKEMessageID;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_clientQueue;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    NEIKEv2ConfigurationMessage *_assignedConfiguration;	// 48 = 0x30
    CDUnknownFunctionPointerType _clientCallback;	// 56 = 0x38
    void *_clientCallbackInfo;	// 64 = 0x40
    CDUnknownBlockType _stateUpdateBlock;	// 72 = 0x48
    CDUnknownBlockType _childStateUpdateBlock;	// 80 = 0x50
    CDUnknownBlockType _configurationUpdateBlock;	// 88 = 0x58
    CDUnknownBlockType _trafficSelectorUpdateBlock;	// 96 = 0x60
    CDUnknownBlockType _additionalAddressesUpdateBlock;	// 104 = 0x68
    CDUnknownBlockType _shortDPDEventBlock;	// 112 = 0x70
    CDUnknownBlockType _redirectEventBlock;	// 120 = 0x78
    CDUnknownBlockType _privateNotifyStatusEvent;	// 128 = 0x80
    CDUnknownBlockType _ikeSocketHandler;	// 136 = 0x88
    NEIKEv2ChildSAConfiguration *_listenChildSAUserConfig;	// 144 = 0x90
    NEIPSecSASession *_databaseSession;	// 152 = 0x98
    NSMutableDictionary *_databaseLarvalSAs;	// 160 = 0xa0
    NSMutableDictionary *_databaseSAs;	// 168 = 0xa8
    CDUnknownBlockType _lastRequestReplyHandler;	// 176 = 0xb0
    CDUnknownBlockType _waitingRequestHandler;	// 184 = 0xb8
    NSMutableDictionary *_sentRequests;	// 192 = 0xc0
    NSMutableDictionary *_sentReplies;	// 200 = 0xc8
    NSMutableDictionary *_receivedRequests;	// 208 = 0xd0
    NSMutableDictionary *_receivedReplies;	// 216 = 0xd8
    NSMutableDictionary *_receivedInitiatorFragments;	// 224 = 0xe0
    NSMutableDictionary *_receivedResponderFragments;	// 232 = 0xe8
    NSObject<OS_dispatch_source> *_ikeLifetimeTimer;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_dpdDispatchTimer;	// 248 = 0xf8
    NSMutableArray *_childSAs;	// 256 = 0x100
    NSObject<OS_dispatch_source> *_sendTimer;	// 264 = 0x108
    NSObject<OS_dispatch_source> *_receiveTimer;	// 272 = 0x110
    unsigned long long _uniqueIndex;	// 280 = 0x118
    NSMutableArray *_pendingRequestContexts;	// 288 = 0x120
    struct NEVirtualInterface_s *_ipsecInterface;	// 296 = 0x128
    NEIKEv2IKESA *_ikeSA;	// 304 = 0x130
    id <NEIKEv2ConfigurationDelegate> _configurationDelegate;	// 312 = 0x138
    id <NEIKEv2PacketDelegate> _packetDelegate;	// 320 = 0x140
    NEIKEv2RTT *_rttState;	// 328 = 0x148
    NSObject<OS_dispatch_queue> *_queue;	// 336 = 0x150
    NEIKEv2Packet *_previousMOBIKERequest;	// 344 = 0x158
    NEIKEv2IKESAConfiguration *_ikeConfig;	// 352 = 0x160
}

+ (unsigned int)getNewChildSAID;	// IMP=0x00000000000fd7fd
- (void).cxx_destruct;	// IMP=0x000000000010d964
@property(nonatomic) _Bool hasOutboundRequestInFlight; // @synthesize hasOutboundRequestInFlight=_hasOutboundRequestInFlight;
@property(retain, nonatomic) NEIKEv2IKESAConfiguration *ikeConfig; // @synthesize ikeConfig=_ikeConfig;
@property(retain) NEIKEv2Packet *previousMOBIKERequest; // @synthesize previousMOBIKERequest=_previousMOBIKERequest;
@property int previousMOBIKEMessageID; // @synthesize previousMOBIKEMessageID=_previousMOBIKEMessageID;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool hasContactedConfigurationDelegate; // @synthesize hasContactedConfigurationDelegate=_hasContactedConfigurationDelegate;
@property(nonatomic) _Bool isExpectingConfigBlock; // @synthesize isExpectingConfigBlock=_isExpectingConfigBlock;
@property _Bool isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property _Bool isAborted; // @synthesize isAborted=_isAborted;
@property(retain) NEIKEv2RTT *rttState; // @synthesize rttState=_rttState;
@property __weak id <NEIKEv2PacketDelegate> packetDelegate; // @synthesize packetDelegate=_packetDelegate;
@property __weak id <NEIKEv2ConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property(retain) NEIKEv2IKESA *ikeSA; // @synthesize ikeSA=_ikeSA;
@property struct NEVirtualInterface_s *ipsecInterface; // @synthesize ipsecInterface=_ipsecInterface;
@property(retain, nonatomic) NSMutableArray *pendingRequestContexts; // @synthesize pendingRequestContexts=_pendingRequestContexts;
@property(nonatomic) unsigned long long uniqueIndex; // @synthesize uniqueIndex=_uniqueIndex;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *receiveTimer; // @synthesize receiveTimer=_receiveTimer;
@property(retain) NSObject<OS_dispatch_source> *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(retain) NSMutableArray *childSAs; // @synthesize childSAs=_childSAs;
@property(retain) NSObject<OS_dispatch_source> *dpdDispatchTimer; // @synthesize dpdDispatchTimer=_dpdDispatchTimer;
@property(retain) NSObject<OS_dispatch_source> *ikeLifetimeTimer; // @synthesize ikeLifetimeTimer=_ikeLifetimeTimer;
@property int lastReceivedMessageID; // @synthesize lastReceivedMessageID=_lastReceivedMessageID;
@property unsigned short responderFragmentCount; // @synthesize responderFragmentCount=_responderFragmentCount;
@property unsigned short initiatorFragmentCount; // @synthesize initiatorFragmentCount=_initiatorFragmentCount;
@property(retain) NSMutableDictionary *receivedResponderFragments; // @synthesize receivedResponderFragments=_receivedResponderFragments;
@property(retain) NSMutableDictionary *receivedInitiatorFragments; // @synthesize receivedInitiatorFragments=_receivedInitiatorFragments;
@property(retain) NSMutableDictionary *receivedReplies; // @synthesize receivedReplies=_receivedReplies;
@property(retain) NSMutableDictionary *receivedRequests; // @synthesize receivedRequests=_receivedRequests;
@property(retain) NSMutableDictionary *sentReplies; // @synthesize sentReplies=_sentReplies;
@property(retain) NSMutableDictionary *sentRequests; // @synthesize sentRequests=_sentRequests;
@property(copy) CDUnknownBlockType waitingRequestHandler; // @synthesize waitingRequestHandler=_waitingRequestHandler;
@property(copy) CDUnknownBlockType lastRequestReplyHandler; // @synthesize lastRequestReplyHandler=_lastRequestReplyHandler;
@property int lastRequestMessageID; // @synthesize lastRequestMessageID=_lastRequestMessageID;
@property _Bool ownsIPSecInterface; // @synthesize ownsIPSecInterface=_ownsIPSecInterface;
@property(retain) NSMutableDictionary *databaseSAs; // @synthesize databaseSAs=_databaseSAs;
@property(retain) NSMutableDictionary *databaseLarvalSAs; // @synthesize databaseLarvalSAs=_databaseLarvalSAs;
@property(nonatomic) _Bool ownsDatabaseSession; // @synthesize ownsDatabaseSession=_ownsDatabaseSession;
@property(retain) NEIPSecSASession *databaseSession; // @synthesize databaseSession=_databaseSession;
@property(retain) NEIKEv2ChildSAConfiguration *listenChildSAUserConfig; // @synthesize listenChildSAUserConfig=_listenChildSAUserConfig;
@property _Bool isListening; // @synthesize isListening=_isListening;
@property(copy) CDUnknownBlockType ikeSocketHandler; // @synthesize ikeSocketHandler=_ikeSocketHandler;
@property(copy) CDUnknownBlockType privateNotifyStatusEvent; // @synthesize privateNotifyStatusEvent=_privateNotifyStatusEvent;
@property(copy) CDUnknownBlockType redirectEventBlock; // @synthesize redirectEventBlock=_redirectEventBlock;
@property(copy) CDUnknownBlockType shortDPDEventBlock; // @synthesize shortDPDEventBlock=_shortDPDEventBlock;
@property(copy) CDUnknownBlockType additionalAddressesUpdateBlock; // @synthesize additionalAddressesUpdateBlock=_additionalAddressesUpdateBlock;
@property(copy) CDUnknownBlockType trafficSelectorUpdateBlock; // @synthesize trafficSelectorUpdateBlock=_trafficSelectorUpdateBlock;
@property(copy) CDUnknownBlockType configurationUpdateBlock; // @synthesize configurationUpdateBlock=_configurationUpdateBlock;
@property(copy) CDUnknownBlockType childStateUpdateBlock; // @synthesize childStateUpdateBlock=_childStateUpdateBlock;
@property(copy) CDUnknownBlockType stateUpdateBlock; // @synthesize stateUpdateBlock=_stateUpdateBlock;
@property void *clientCallbackInfo; // @synthesize clientCallbackInfo=_clientCallbackInfo;
@property CDUnknownFunctionPointerType clientCallback; // @synthesize clientCallback=_clientCallback;
@property(retain) NEIKEv2ConfigurationMessage *assignedConfiguration; // @synthesize assignedConfiguration=_assignedConfiguration;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)sendPendingRequestContext;	// IMP=0x000000000010cf5c
- (void)flushPendingRequestContexts;	// IMP=0x000000000010cd74
- (void)enqueuePendingRequestContext:(id)arg1;	// IMP=0x000000000010cb9f
- (void)resetChild:(id)arg1;	// IMP=0x000000000010ca97
- (void)resetAll;	// IMP=0x000000000010c85c
- (void)invalidate;	// IMP=0x000000000010c846
- (void)invalidateWithCompletionHandler:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010c404
- (void)reportTrafficSelectorsForChildSA:(id)arg1;	// IMP=0x000000000010c1fd
- (void)uninstallAllChildSAs;	// IMP=0x000000000010bed2
- (void)uninstallChildSA:(id)arg1;	// IMP=0x000000000010bc95
- (void)uninstallOldRekeyedChildSAs:(id)arg1;	// IMP=0x000000000010ba53
- (id)copySAsToDeleteAndInstallRekeyedChildSA:(id)arg1;	// IMP=0x000000000010b892
- (void)reportPrivateNotifies:(id)arg1;	// IMP=0x000000000010b708
- (void)reportShortDPD;	// IMP=0x000000000010b59a
- (void)reportServerRedirect:(id)arg1;	// IMP=0x000000000010b378
- (void)reportServerAdditionalAddresses:(id)arg1;	// IMP=0x000000000010b18e
- (void)reportCustomPayload:(id)arg1;	// IMP=0x000000000010b0f3
- (void)reportConfiguration;	// IMP=0x000000000010af5b
- (void)unestablishConfiguration;	// IMP=0x000000000010ae78
- (void)finishConfigurationEstablishment;	// IMP=0x000000000010add3
- (void)reportState;	// IMP=0x000000000010a6af
- (void)abort;	// IMP=0x000000000010a59a
- (void)receivePacket:(id)arg1;	// IMP=0x0000000000109130
- (void)saveFragment:(id)arg1;	// IMP=0x0000000000108abc
- (_Bool)sendReply:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010832f
- (int)sendRequest:(id)arg1 retry:(_Bool)arg2 sendCompletionHandler:(CDUnknownBlockType)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001081e1
- (int)sendRequest:(id)arg1 retry:(_Bool)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001080ac
- (int)sendRequest:(id)arg1 retryIntervalInMilliseconds:(unsigned long long)arg2 maxRetries:(unsigned int)arg3 timeoutError:(id)arg4 resend:(_Bool)arg5 sendMessageID:(int)arg6 sendCompletionHandler:(CDUnknownBlockType)arg7 replyHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000010709f
- (void)cancelDPDTimer;	// IMP=0x000000000010701a
- (void)cancelSendTimer;	// IMP=0x0000000000106ed3
- (_Bool)sendReplyForMessageID:(int)arg1;	// IMP=0x000000000010676c
- (_Bool)sendCurrentRequest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000105fa2
- (void)setReceivedReply:(id)arg1 messageID:(int)arg2;	// IMP=0x0000000000105f05
- (void)setSentMOBIKERequest:(id)arg1 messageID:(int)arg2;	// IMP=0x0000000000105dab
- (id)copyReceivedReplyForMessageID:(int)arg1;	// IMP=0x0000000000105d28
- (void)setReceivedRequest:(id)arg1 messageID:(int)arg2;	// IMP=0x0000000000105baf
- (id)copyReceivedRequestForMessageID:(int)arg1;	// IMP=0x0000000000105b2c
- (void)setSentReply:(id)arg1 messageID:(int)arg2;	// IMP=0x0000000000105a8f
- (void)setSentRequest:(id)arg1;	// IMP=0x00000000001058b6
- (_Bool)migrateAllChildSAs;	// IMP=0x0000000000105762
- (_Bool)migrateChildSA:(id)arg1;	// IMP=0x00000000001045e0
- (_Bool)installChildSA:(id)arg1;	// IMP=0x0000000000102d37
- (id)copySAFromDictionary:(id)arg1 forChild:(id)arg2;	// IMP=0x0000000000102b88
- (id)copySAFromDictionary:(id)arg1 forSPI:(id)arg2;	// IMP=0x00000000001029cb
- (_Bool)generateSPIForChild:(id)arg1 proposals:(id)arg2;	// IMP=0x0000000000102105
- (id)copyIPsecInterfaceWithMissingAllowed:(_Bool)arg1;	// IMP=0x0000000000101dfa
- (id)copyIPsecInterface;	// IMP=0x0000000000101de6
@property(readonly) _Bool peerAuthenticated;
@property(readonly) unsigned int interfaceIndex;
@property(readonly) NSString *interfaceName;
@property(readonly) _Bool hasInterface;
- (void)addEmptyInterface;	// IMP=0x0000000000101bf2
- (id)copyChildWithRekeyedSPI:(id)arg1;	// IMP=0x00000000001019bb
- (id)copyChildWithSPI:(id)arg1;	// IMP=0x0000000000101701
- (id)copyChildWithID:(unsigned int)arg1;	// IMP=0x000000000010156d
@property(readonly) NEIKEv2ChildSA *firstChildSA;
- (void)resetMessages;	// IMP=0x000000000010139f
- (_Bool)fireWaitingRequestHandlerWithPacket:(id)arg1;	// IMP=0x0000000000101291
- (void)setIKESA:(id)arg1;	// IMP=0x0000000000101041
- (void)startIKELifetimeTimer;	// IMP=0x000000000010082f
- (void)startDPDTimer;	// IMP=0x0000000000100504
- (void)dpdTimerFired;	// IMP=0x000000000010045b
- (unsigned int)addChild:(id)arg1;	// IMP=0x000000000010021f
- (void)addFirstChild:(id)arg1;	// IMP=0x000000000010007b
- (void)sendMOBIKEWithRetries:(unsigned int)arg1 retryInterval:(unsigned long long)arg2 interfaceName:(id)arg3 invalidateTransport:(_Bool)arg4 resetEndpoint:(id)arg5 callbackQueue:(id)arg6 callback:(CDUnknownBlockType)arg7;	// IMP=0x00000000000ffeb7
- (void)sendPrivateNotifies:(id)arg1 maxRetries:(unsigned int)arg2 retryIntervalInMilliseconds:(unsigned long long)arg3 callbackQueue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ffd22
- (void)sendKeepaliveWithRetries:(unsigned int)arg1 retryIntervalInMilliseconds:(unsigned long long)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ffbca
- (_Bool)updateConfiguration:(id)arg1;	// IMP=0x00000000000ff9f4
- (void)removeChild:(unsigned int)arg1;	// IMP=0x00000000000ff8f0
- (void)forceRekeyChild:(unsigned int)arg1;	// IMP=0x00000000000ff7ec
- (void)forceRekeyIKE;	// IMP=0x00000000000ff6e7
- (void)disconnect;	// IMP=0x00000000000ff382
- (void)connect;	// IMP=0x00000000000ff17a
- (id)initWithIKEConfig:(id)arg1 firstChildConfig:(id)arg2 sessionConfig:(id)arg3 queue:(id)arg4 ipsecInterface:(struct NEVirtualInterface_s *)arg5 ikeSocketHandler:(CDUnknownBlockType)arg6 kernelSASessionName:(id)arg7 packetDelegate:(id)arg8;	// IMP=0x00000000000fef46
- (id)initWithIKEConfig:(id)arg1 firstChildConfig:(id)arg2 sessionConfig:(id)arg3 queue:(id)arg4 ipsecInterface:(struct NEVirtualInterface_s *)arg5 ikeSocketHandler:(CDUnknownBlockType)arg6 saSession:(id)arg7 packetDelegate:(id)arg8;	// IMP=0x00000000000fed49
- (id)initWithIKEConfig:(id)arg1 configurationDelegate:(id)arg2 queue:(id)arg3 kernelSASessionName:(id)arg4 transport:(id)arg5 packetDelegate:(id)arg6;	// IMP=0x00000000000feb12
- (id)initWithIKEConfig:(id)arg1 configurationDelegate:(id)arg2 queue:(id)arg3 saSession:(id)arg4 shouldCopySASession:(_Bool)arg5 transport:(id)arg6 packetDelegate:(id)arg7;	// IMP=0x00000000000fe912
- (id)initWithIKEConfig:(id)arg1 firstChildConfig:(id)arg2 sessionConfig:(id)arg3 queue:(id)arg4 ipsecInterface:(struct NEVirtualInterface_s *)arg5 ikeSocketHandler:(CDUnknownBlockType)arg6 saSession:(id)arg7 shouldOwnSASession:(_Bool)arg8 packetDelegate:(id)arg9 transport:(id)arg10 configurationDelegate:(id)arg11;	// IMP=0x00000000000fdbdc
@property(readonly, copy) NSString *description;
- (void)reportError:(int)arg1;	// IMP=0x00000000000fd81b
- (void)blackholeDetectedSA:(id)arg1;	// IMP=0x00000000000fd69e
- (void)idleTimeoutSA:(id)arg1;	// IMP=0x00000000000fd529
- (void)deleteSA:(id)arg1;	// IMP=0x00000000000fd385
- (void)expireSA:(id)arg1;	// IMP=0x00000000000fd210
- (void)dealloc;	// IMP=0x00000000000fcf6c
- (void)initiateDeleteChildSA:(id)arg1;	// IMP=0x00000000000beedd
- (void)receiveDeleteChildSA:(id)arg1;	// IMP=0x00000000000be9a8
- (void)receiveDeleteIKESA:(id)arg1;	// IMP=0x00000000000be790
- (void)receiveRedirect:(id)arg1;	// IMP=0x00000000000be538
- (void)receiveMOBIKE:(id)arg1;	// IMP=0x00000000000be2cc
- (void)initiateMOBIKE:(id)arg1;	// IMP=0x00000000000bde98
- (void)initiateMOBIKEInner:(id)arg1;	// IMP=0x00000000000bd5c9
- (void)resendPreviousMOBIKEInnerWithRetries:(unsigned int)arg1 retryInterval:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bd28b
- (void)receiveRekeyIKESA:(id)arg1;	// IMP=0x00000000000bc47f
- (void)initiateRekeyIKESA:(id)arg1;	// IMP=0x00000000000bb5d1
- (void)receiveRekeyChildSA:(id)arg1 packet:(id)arg2;	// IMP=0x00000000000ba662
- (void)initiateRekeyChildSA:(id)arg1;	// IMP=0x00000000000b944e
- (void)receiveNewChildSA:(id)arg1 packet:(id)arg2;	// IMP=0x00000000000b8957
- (void)initiateNewChildSA:(id)arg1;	// IMP=0x00000000000b7f3c
- (void)receiveConnection:(id)arg1;	// IMP=0x00000000000b691d
- (void)setupReceivedChildWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b6314
- (id)setupReceivedChildCopyError;	// IMP=0x00000000000b6182
- (void)initiateConnect;	// IMP=0x00000000000b4502
- (void)handleEAPIKESA:(id)arg1 childSA:(id)arg2 authPacket:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b3fbd
- (void)retryDHForIKESA:(id)arg1 validated:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b3a2a
- (void)retryCookieForIKESA:(id)arg1 validated:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b359c
- (void)receiveInformational:(id)arg1;	// IMP=0x00000000000b3280
- (void)initiateInformational:(id)arg1;	// IMP=0x00000000000b23be
- (_Bool)receiveDeleteChildSPI:(id)arg1 remoteSPI:(id)arg2 packet:(id)arg3;	// IMP=0x00000000000b215b
- (void)initiateDeleteChildSPI:(id)arg1 remoteSPI:(id)arg2 deleteCompletionCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b1e72
- (_Bool)innerReceiveDeleteIKESA:(id)arg1;	// IMP=0x00000000000b1c96
- (void)initiateDelete:(id)arg1;	// IMP=0x00000000000b180c
- (void)reportAdditionalAddressesInPacket:(id)arg1;	// IMP=0x00000000000b15e0
- (void)reportPrivateNotifiesInPacket:(id)arg1;	// IMP=0x00000000000b11df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

