//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/InterfaceListenerDelegate-Protocol.h>
#import <AVConference/LoopbackSocketTunnelDelegate-Protocol.h>
#import <AVConference/VCConnectionManagerDelegate-Protocol.h>

@class GKInterfaceListener, LoopbackSocketTunnel, NSCondition, NSData, NSDictionary, NSMutableDictionary, NSObject, NSString, TCPTunnelClient, VCTransport;
@protocol OS_dispatch_source, VCConnectionProtocol, VCTransportSessionLegacyDelegate, VideoConferenceRealTimeChannel;

__attribute__((visibility("hidden")))
@interface VCTransportSessionLegacy <LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate>
{
    unsigned char _localU8Version;	// 168 = 0xa8
    long long relayState;	// 176 = 0xb0
    int pendingRelayCount;	// 184 = 0xb8
    float callerPreEmptiveTimeoutInSecs;	// 188 = 0xbc
    unsigned int _connectionSetupRTTEstimate;	// 192 = 0xc0
    _Bool allowsRelay;	// 196 = 0xc4
    _Bool initialSecondaryRelaySetupDone;	// 197 = 0xc5
    _Bool requestedTimeoutRelay;	// 198 = 0xc6
    _Bool _isCaller;	// 199 = 0xc7
    _Bool _didReceivePiggybackBlob;	// 200 = 0xc8
    _Bool _useLoopback;	// 201 = 0xc9
    _Bool _isRemoteOSPreLion;	// 202 = 0xca
    _Bool _isStarted;	// 203 = 0xcb
    NSObject<OS_dispatch_source> *relaySetupTimer;	// 208 = 0xd0
    VCTransport *transport;	// 216 = 0xd8
    unsigned int _callID;	// 224 = 0xe0
    unsigned int _remoteCallID;	// 228 = 0xe4
    int _NATType;	// 232 = 0xe8
    NSMutableDictionary *_localRelayRequestResponse;	// 240 = 0xf0
    NSDictionary *_localRelayUpdate;	// 248 = 0xf8
    NSMutableDictionary *_remoteRelayRequestResponse;	// 256 = 0x100
    NSDictionary *_remoteRelayUpdate;	// 264 = 0x108
    NSData *_localConnectionData;	// 272 = 0x110
    NSData *_localRelayConnectionData;	// 280 = 0x118
    NSData *_remoteConnectionData;	// 288 = 0x120
    NSData *_remoteRelayConnectionData;	// 296 = 0x128
    NSString *_localParticipantID;	// 304 = 0x130
    NSString *_remoteParticipantID;	// 312 = 0x138
    NSString *_sessionID;	// 320 = 0x140
    struct __SecIdentity *_identity;	// 328 = 0x148
    TCPTunnelClient *_tcpTunnelClient;	// 336 = 0x150
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;	// 344 = 0x158
    LoopbackSocketTunnel *_tunnel;	// 352 = 0x160
    id <VCConnectionProtocol> _loopbackConnection;	// 360 = 0x168
    NSCondition *_connectionDataTimeoutCondVar;	// 368 = 0x170
    GKInterfaceListener *_interfaceListener;	// 376 = 0x178
    int _operatingMode;	// 384 = 0x180
    id _delegate;	// 392 = 0x188
}

@property int operatingMode; // @synthesize operatingMode=_operatingMode;
@property int NATType; // @synthesize NATType=_NATType;
@property(retain, nonatomic) NSDictionary *remoteRelayUpdate; // @synthesize remoteRelayUpdate=_remoteRelayUpdate;
@property(retain, nonatomic) NSDictionary *localRelayUpdate; // @synthesize localRelayUpdate=_localRelayUpdate;
@property(retain, nonatomic) NSMutableDictionary *remoteRelayRequestResponse; // @synthesize remoteRelayRequestResponse=_remoteRelayRequestResponse;
@property(retain) NSMutableDictionary *localRelayRequestResponse; // @synthesize localRelayRequestResponse=_localRelayRequestResponse;
- (_Bool)isRemoteOSPreLion;	// IMP=0x00000000001b0e04
- (unsigned int)connectionSetupRTTEstimate;	// IMP=0x00000000001b0df4
@property unsigned int remoteCallID; // @synthesize remoteCallID=_remoteCallID;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property _Bool allowsRelay; // @synthesize allowsRelay;
@property(retain, nonatomic) NSData *remoteRelayConnectionData; // @synthesize remoteRelayConnectionData=_remoteRelayConnectionData;
@property(retain) NSData *localRelayConnectionData; // @synthesize localRelayConnectionData=_localRelayConnectionData;
@property(retain) NSData *remoteConnectionData; // @synthesize remoteConnectionData=_remoteConnectionData;
@property(retain) NSData *localConnectionData; // @synthesize localConnectionData=_localConnectionData;
@property(copy) NSString *remoteParticipantID; // @synthesize remoteParticipantID=_remoteParticipantID;
@property(copy) NSString *localParticipantID; // @synthesize localParticipantID=_localParticipantID;
@property _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool initialSecondaryRelaySetupDone; // @synthesize initialSecondaryRelaySetupDone;
@property(nonatomic) int pendingRelayCount; // @synthesize pendingRelayCount;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000001b0c3e
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000001b0c38
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000001b0c32
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000001b0c2c
- (void)setIdentity:(struct __SecIdentity *)arg1;	// IMP=0x00000000001b0c00
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;	// IMP=0x00000000001b0bdc
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;	// IMP=0x00000000001b0bbb
- (void)reportNetworkConditionsDegraded;	// IMP=0x00000000001b0b2d
- (int)detailedErrorCode;	// IMP=0x00000000001b0b03
- (_Bool)isConnectedAndAllowAdditionalConnection;	// IMP=0x00000000001b0a14
- (unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT *)arg1;	// IMP=0x00000000001b09db
- (struct tagIPPORT)IPPortForPrimaryConnectionOnLocalInterface:(_Bool)arg1;	// IMP=0x00000000001b093e
- (double)iceTimeoutInSeconds:(_Bool)arg1;	// IMP=0x00000000001b08d8
- (void)resetICETimeoutToLongTimeout;	// IMP=0x00000000001b0855
- (void)setupTransport;	// IMP=0x00000000001b062f
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int *)arg3 nonCellularCandidateTimeout:(double)arg4;	// IMP=0x00000000001b035e
- (id)connectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id *)arg4;	// IMP=0x00000000001afe2f
- (id)connectionData:(char *)arg1 connectionDataSizeInBytes:(int)arg2 shouldUseRelay:(_Bool)arg3;	// IMP=0x00000000001afc36
- (void)getConnectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001afa19
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001af9af
- (id)createRelayUpdateDictionary:(id)arg1;	// IMP=0x00000000001af545
- (id)createInitiateRelayDictionaryForCall:(unsigned int)arg1 primaryConnection:(struct tagCONNRESULT *)arg2;	// IMP=0x00000000001aef1d
- (id)createInitiateRelayDictionary;	// IMP=0x00000000001aeca9
- (void)stopLoopbackProc:(id)arg1;	// IMP=0x00000000001aeaf3
- (void)stopLoopback;	// IMP=0x00000000001aea81
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;	// IMP=0x00000000001ae86c
- (void)setupLoopbackWithConnectionType:(unsigned int)arg1;	// IMP=0x00000000001ae222
- (void)resetLoopback;	// IMP=0x00000000001ae090
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT *)arg3;	// IMP=0x00000000001adf71
- (void)deleteTCPTunnel;	// IMP=0x00000000001adf24
- (_Bool)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(_Bool)arg3 relayType:(unsigned char)arg4 error:(id *)arg5;	// IMP=0x00000000001ad4ae
- (void)didMediaQualityDegrade:(_Bool)arg1;	// IMP=0x00000000001ad4a8
- (void)handleRATChanged:(id)arg1;	// IMP=0x00000000001ad4a2
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x00000000001ad49c
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x00000000001ad496
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;	// IMP=0x00000000001ad3e0
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x00000000001ad1d4
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;	// IMP=0x00000000001ad1ce
- (_Bool)handleExchangedKey:(id)arg1 result:(int)arg2;	// IMP=0x00000000001ad04d
- (void)connectionResultCallback:(struct tagCONNRESULT *)arg1 didReceiveICEPacket:(_Bool)arg2 didUseRelay:(_Bool)arg3 secretKey:(id)arg4 skeResult:(int)arg5;	// IMP=0x00000000001acd0f
- (void)processRemoteIPChange:(id)arg1;	// IMP=0x00000000001acb58
- (void)processRemoteIPChange:(char *)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3;	// IMP=0x00000000001acaeb
- (void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2;	// IMP=0x00000000001ac8ad
- (void)networkStateDidChange;	// IMP=0x00000000001ac340
- (void)triggerInterfaceChange;	// IMP=0x00000000001ac32e
- (_Bool)isHandoverSupported;	// IMP=0x00000000001ac206
- (void)handleConnectionSetupDataChangeMessageDelivered;	// IMP=0x00000000001ac14f
- (void)initiateRelayRequest;	// IMP=0x00000000001abce6
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(_Bool)arg1 callID:(unsigned int)arg2 connectionId:(int)arg3;	// IMP=0x00000000001ab676
- (void)setupSecondaryRelayForCall:(unsigned int)arg1 callerRequired:(_Bool)arg2;	// IMP=0x00000000001ab3de
- (void)notifyDelegateToCancelRelay;	// IMP=0x00000000001ab167
- (void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1;	// IMP=0x00000000001aaf53
- (void)destroySecondaryRelayDispatchTimer;	// IMP=0x00000000001aae66
- (void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned int)arg2 callerRequired:(_Bool)arg3;	// IMP=0x00000000001aab9e
- (void)processRelayUpdate:(id)arg1 didOriginateRequest:(_Bool)arg2;	// IMP=0x00000000001aa4c0
- (void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(_Bool)arg2;	// IMP=0x00000000001a9799
- (void)setForceRelay;	// IMP=0x00000000001a969c
- (void)stop;	// IMP=0x00000000001a9505
- (_Bool)startConnectionWithBlob:(id)arg1 useRelay:(_Bool)arg2 isInitialRelay:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000001a9288
- (void)start;	// IMP=0x00000000001a9060
@property id <VCTransportSessionLegacyDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000001a8ea1
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;	// IMP=0x00000000001a8c8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

