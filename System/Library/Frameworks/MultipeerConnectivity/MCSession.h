//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCPeerID, NSArray, NSMutableDictionary, NSString;
@protocol MCSessionDelegate, MCSessionPrivateDelegate, OS_dispatch_queue;

@interface MCSession : NSObject
{
    _Bool _AWDLDisabled;	// 8 = 0x8
    id <MCSessionDelegate> _delegate;	// 16 = 0x10
    _Bool _preferNCMOverEthernet;	// 24 = 0x18
    id <MCSessionPrivateDelegate> _privateDelegate;	// 32 = 0x20
    unsigned int _gckPID;	// 40 = 0x28
    MCPeerID *_myPeerID;	// 48 = 0x30
    NSArray *_securityIdentity;	// 56 = 0x38
    long long _encryptionPreference;	// 64 = 0x40
    struct OpaqueGCKSession *_gckSession;	// 72 = 0x48
    struct OpaqueAGPSession *_agpSession;	// 80 = 0x50
    NSMutableDictionary *_peerIDMap;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_syncQueue;	// 96 = 0x60
    NSMutableDictionary *_peerStates;	// 104 = 0x68
    NSMutableDictionary *_connectionPendingPeerEvents;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 120 = 0x78
    unsigned long long _stateHandle;	// 128 = 0x80
    NSString *_sessionID;	// 136 = 0x88
    unsigned long long _maxPeers;	// 144 = 0x90
}

+ (id)stringForMCSessionSendDataMode:(long long)arg1;	// IMP=0x000000000000ee09
+ (id)stringForSessionState:(long long)arg1;	// IMP=0x000000000000edd0
@property(nonatomic) unsigned long long maxPeers; // @synthesize maxPeers=_maxPeers;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSMutableDictionary *connectionPendingPeerEvents; // @synthesize connectionPendingPeerEvents=_connectionPendingPeerEvents;
@property(retain, nonatomic) NSMutableDictionary *peerStates; // @synthesize peerStates=_peerStates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *peerIDMap; // @synthesize peerIDMap=_peerIDMap;
@property(nonatomic) unsigned int gckPID; // @synthesize gckPID=_gckPID;
@property(nonatomic) struct OpaqueAGPSession *agpSession; // @synthesize agpSession=_agpSession;
@property(nonatomic) struct OpaqueGCKSession *gckSession; // @synthesize gckSession=_gckSession;
@property(readonly, nonatomic) long long encryptionPreference; // @synthesize encryptionPreference=_encryptionPreference;
@property(readonly, nonatomic) NSArray *securityIdentity; // @synthesize securityIdentity=_securityIdentity;
@property(readonly, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
- (void)syncLogMaxConnectedPeers;	// IMP=0x000000000000eba9
- (void)syncLogConnectedPeers;	// IMP=0x000000000000eaba
- (void)logSessionInfo;	// IMP=0x000000000000e962
- (id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000e1a8
- (void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(_Bool)arg4;	// IMP=0x000000000000dcce
- (void)disconnect;	// IMP=0x000000000000dc70
- (id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000cd4f
@property(readonly, nonatomic) NSArray *connectedPeers;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withMode:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000000c3f7
- (void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(long long)arg3;	// IMP=0x000000000000c12b
- (void)cancelConnectPeer:(id)arg1;	// IMP=0x000000000000c0ad
- (void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2;	// IMP=0x000000000000c010
- (void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2;	// IMP=0x000000000000bcb2
- (_Bool)isEncryptionPreferenceCompatible:(long long)arg1;	// IMP=0x000000000000bc5d
- (void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b9c4
- (void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b7b9
- (void)dealloc;	// IMP=0x000000000000b5a6
- (id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(long long)arg3;	// IMP=0x000000000000ae16
- (id)initWithPeer:(id)arg1;	// IMP=0x000000000000addf
- (id)init;	// IMP=0x000000000000adab
- (void)syncHandleNetworkEvent:(CDStruct_68f9d01f *)arg1 pid:(unsigned int)arg2 freeEventWhenDone:(_Bool *)arg3;	// IMP=0x0000000000007064
- (void)syncPeer:(id)arg1 changeStateTo:(long long)arg2 shouldForceCallback:(_Bool)arg3;	// IMP=0x0000000000006b3e
- (unsigned long long)syncConnectedPeersCount;	// IMP=0x0000000000006a0b
- (void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2;	// IMP=0x0000000000006997
- (void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2;	// IMP=0x00000000000068b2
- (void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000000000683e
- (void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000000000675c
- (void)startConnectionWithIndirectPID:(unsigned int)arg1;	// IMP=0x0000000000006629
- (struct os_state_data_s *)syncStateCapture;	// IMP=0x000000000000654d
- (id)syncDetailedDescription;	// IMP=0x0000000000006183
- (void)syncCloseStreamsForPeer:(id)arg1;	// IMP=0x0000000000005d9a
- (void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 shouldTriggerCancelProgress:(_Bool)arg5;	// IMP=0x0000000000005ab7
- (void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 shouldTriggerCancelProgress:(_Bool)arg6;	// IMP=0x00000000000054fd
- (void)syncSendXDataConnectionBlobPushToPID:(unsigned int)arg1 connectionBlob:(id)arg2;	// IMP=0x0000000000005357
- (void)syncSendXDataPeerIDPushToPID:(unsigned int)arg1;	// IMP=0x0000000000005195
- (void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;	// IMP=0x000000000000500d
- (void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;	// IMP=0x0000000000004e85
- (void)syncSendXDataStreamOpenResponseToPID:(unsigned int)arg1 withRequestID:(unsigned int)arg2 streamID:(unsigned int)arg3;	// IMP=0x0000000000004cf1
- (void)syncHandleXDataDataPacket:(char *)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4;	// IMP=0x0000000000004b22
- (id)stringForEncryptionPreference:(long long)arg1;	// IMP=0x0000000000004ae9
- (id)description;	// IMP=0x00000000000049ef
@property(nonatomic) id <MCSessionPrivateDelegate> privateDelegate;
@property(nonatomic) __weak id <MCSessionDelegate> delegate;
@property(nonatomic) _Bool preferNCMOverEthernet;
@property(nonatomic, getter=isAWDLDisabled) _Bool AWDLDisabled;
- (void)setHeartbeatTimeout:(unsigned long long)arg1;	// IMP=0x000000000000f0c1
- (long long)connectedInterfacesForPeer:(id)arg1;	// IMP=0x000000000000ef6c
- (void)peerDidDeclineInvitation:(id)arg1;	// IMP=0x000000000000ee33
- (void)closeDirectConnectionsWithPeer:(id)arg1;	// IMP=0x000000000000f2dd
- (void)setICETimeoutForced:(_Bool)arg1;	// IMP=0x000000000000f276

@end

