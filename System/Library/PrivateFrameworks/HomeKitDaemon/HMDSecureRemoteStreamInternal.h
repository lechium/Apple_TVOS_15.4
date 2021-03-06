//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDSecureRemoteStreamInternal : HMFObject <HMFLogging>
{
    unsigned char _cipherReadKey[32];	// 8 = 0x8
    unsigned char _cipherReadNonce[8];	// 40 = 0x28
    unsigned char _cipherWriteKey[32];	// 48 = 0x30
    unsigned char _cipherWriteNonce[8];	// 80 = 0x50
    _Bool _commitResponded;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_idleTimer;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_internalQueue;	// 104 = 0x68
    CDUnknownBlockType _internalRequestHandler;	// 112 = 0x70
    unsigned char _pairVerifyDone;	// 120 = 0x78
    struct PairingSessionPrivate *_pairVerifySession;	// 128 = 0x80
    NSMutableDictionary *_prepareRequests;	// 136 = 0x88
    _Bool _prepareResponded;	// 144 = 0x90
    NSString *_sessionID;	// 152 = 0x98
    _Bool _started;	// 160 = 0xa0
    int _state;	// 164 = 0xa4
    NSMutableDictionary *_transactions;	// 168 = 0xa8
    NSMutableArray *_userTransactions;	// 176 = 0xb0
    CDUnknownBlockType _getLocalIdentityHandler;	// 184 = 0xb8
    CDUnknownBlockType _findPeerHandler;	// 192 = 0xc0
    CDUnknownBlockType _requestHandler;	// 200 = 0xc8
    CDUnknownBlockType _startedHandler;	// 208 = 0xd0
    CDUnknownBlockType _stoppedHandler;	// 216 = 0xd8
    CDUnknownBlockType _transportSendMessage;	// 224 = 0xe0
    long long _type;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_userQueue;	// 240 = 0xf0
    unsigned long long _commitTimeoutNanos;	// 248 = 0xf8
    unsigned long long _clientIdleTimeoutNanos;	// 256 = 0x100
    unsigned long long _serverIdleTimeoutNanos;	// 264 = 0x108
    unsigned long long _sendInternalTimeoutNanos;	// 272 = 0x110
    unsigned long long _sendUserTimeoutNanos;	// 280 = 0x118
}

+ (id)logCategory;	// IMP=0x0000000000aed2ad
- (void).cxx_destruct;	// IMP=0x0000000000aea3a2
@property(copy) CDUnknownBlockType transportSendMessage; // @synthesize transportSendMessage=_transportSendMessage;
@property(copy) CDUnknownBlockType stoppedHandler; // @synthesize stoppedHandler=_stoppedHandler;
@property(copy) CDUnknownBlockType startedHandler; // @synthesize startedHandler=_startedHandler;
@property(copy) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
@property(copy) CDUnknownBlockType findPeerHandler; // @synthesize findPeerHandler=_findPeerHandler;
@property(copy) CDUnknownBlockType getLocalIdentityHandler; // @synthesize getLocalIdentityHandler=_getLocalIdentityHandler;
@property(copy) CDUnknownBlockType internalRequestHandler; // @synthesize internalRequestHandler=_internalRequestHandler;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;
- (id)logIdentifier;	// IMP=0x0000000000aea1c7
- (void)_serverCompletePrepareRequest:(id)arg1;	// IMP=0x0000000000aea04f
- (int)_serverHandleCommitRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ae9782
- (int)_serverHandlePrepareRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ae9317
- (int)_serverHandleDecryptedRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ae921f
- (void)_serverHandleEncryptedRequest:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ae8c89
- (void)_serverPairVerifyExchange:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ae84e4
- (void)_serverRunStateMachine;	// IMP=0x0000000000ae81bb
- (int)_clientHandleCommitResponse:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ae7d8b
- (int)_clientSendCommitRequest:(id)arg1;	// IMP=0x0000000000ae7780
- (int)_clientHandlePrepareResponse:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ae74c0
- (int)_clientSendPrepareRequest:(id)arg1;	// IMP=0x0000000000ae6ee1
- (int)_clientPairVerifyExchange:(id)arg1;	// IMP=0x0000000000ae6ab4
- (void)_clientRunStateMachine;	// IMP=0x0000000000ae66be
- (void)_transportReceivedMessage:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ae6101
- (void)transportReceivedMessage:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ae6043
- (void)_completeTransaction:(id)arg1 response:(id)arg2 options:(id)arg3 status:(int)arg4;	// IMP=0x0000000000ae5a78
- (void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ae559a
- (void)_completeUserTransaction:(id)arg1 response:(id)arg2 options:(id)arg3 status:(int)arg4;	// IMP=0x0000000000ae4ff2
- (void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ae4a11
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ae4926
- (int)_updateIdleTimer;	// IMP=0x0000000000ae463a
- (int)_setupEncryption;	// IMP=0x0000000000ae453e
- (void)_runStateMachine;	// IMP=0x0000000000ae4512
- (void)_stop:(int)arg1;	// IMP=0x0000000000ae3bd3
- (void)stop;	// IMP=0x0000000000ae3b81
- (void)_start;	// IMP=0x0000000000ae3640
- (void)start;	// IMP=0x0000000000ae35ee
@property(readonly) double requestTimeout;
- (void)dealloc;	// IMP=0x0000000000ae34fa
- (id)initWithType:(long long)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6;	// IMP=0x0000000000ae32eb
- (id)init;	// IMP=0x0000000000ae32a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

