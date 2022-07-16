//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAtomicSignal, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BSAtomicSignal *_invalidationSignal;	// 16 = 0x10
    NSObject<OS_xpc_object> *_serverEndpoint;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
    int _clientInvalidated;	// 40 = 0x28
    int _notifyToken;	// 44 = 0x2c
    NSObject<OS_xpc_object> *_connection;	// 48 = 0x30
    _Bool _suspended;	// 56 = 0x38
}

- (id)queue_connection;	// IMP=0x00000000000364b5
- (id)_connectionInstanceUUID;	// IMP=0x0000000000036223
- (void)queue_clientWasInvalidated;	// IMP=0x000000000003621d
- (void)queue_connectionWasInvalidated;	// IMP=0x0000000000036217
- (void)queue_connectionWasInterrupted;	// IMP=0x0000000000036211
- (void)queue_connectionWasDestroyed;	// IMP=0x000000000003620b
- (void)queue_connectionWasSuspended;	// IMP=0x0000000000036205
- (void)queue_connectionWasResumed;	// IMP=0x00000000000361ff
- (void)queue_connectionWasCreated;	// IMP=0x00000000000361f9
- (void)queue_handleError:(id)arg1;	// IMP=0x00000000000361f3
- (void)queue_handleMessage:(id)arg1;	// IMP=0x00000000000361ed
- (void)_setEndpoint:(id)arg1;	// IMP=0x00000000000361c1
- (id)_connection;	// IMP=0x00000000000360d7
- (void)_sendMessage:(CDUnknownBlockType)arg1 withReplyHandler:(CDUnknownBlockType)arg2 waitForReply:(_Bool)arg3 waitDuration:(unsigned long long)arg4;	// IMP=0x0000000000035b08
- (void)_sendMessage:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035aee
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035a9b
- (void)_sendMessageReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;	// IMP=0x00000000000359f3
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;	// IMP=0x00000000000359e1
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;	// IMP=0x00000000000359b1
- (id)_errorFromMessageIfAny:(id)arg1;	// IMP=0x0000000000035932
- (void)invalidate;	// IMP=0x0000000000035888
- (void)resumeConnection;	// IMP=0x00000000000357e3
- (void)suspendConnection;	// IMP=0x000000000003574b
- (void)reconnectIfNecessary;	// IMP=0x0000000000035481
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
- (void)dealloc;	// IMP=0x00000000000351a1
- (id)initWithEndpoint:(id)arg1;	// IMP=0x0000000000035185
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;	// IMP=0x00000000000350e2
- (id)initWithServiceName:(id)arg1;	// IMP=0x00000000000350ce
- (id)init;	// IMP=0x000000000003506c

@end

