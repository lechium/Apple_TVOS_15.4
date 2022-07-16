//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSTokenState, NSData, NSSet, NSString;
@protocol APSConnectionServerDelegate, OS_dispatch_queue, OS_xpc_object;

@interface APSConnectionServer : NSObject
{
    id <APSConnectionServerDelegate> _delegate;	// 8 = 0x8
    NSString *_environmentName;	// 16 = 0x10
    NSData *_publicToken;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    unsigned int _connectionMachPort;	// 40 = 0x28
    NSString *_connectionPortName;	// 48 = 0x30
    int _clientPID;	// 56 = 0x38
    NSSet *_enabledTopics;	// 64 = 0x40
    NSSet *_ignoredTopics;	// 72 = 0x48
    NSSet *_opportunisticTopics;	// 80 = 0x50
    NSSet *_nonWakingTopics;	// 88 = 0x58
    long long _publicTokenDeliveryRetries;	// 96 = 0x60
    unsigned long long _messageSize;	// 104 = 0x68
    unsigned long long _largeMessageSize;	// 112 = 0x70
    NSObject<OS_xpc_object> *_connection;	// 120 = 0x78
    APSTokenState *_tokenState;	// 128 = 0x80
    NSString *_processName;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    unsigned long long _enqueuedBlockCount;	// 152 = 0x98
    _Bool _isQueueSuspended;	// 160 = 0xa0
    _Bool _enableCriticalReliability;	// 161 = 0xa1
    _Bool _usesAppLaunchStats;	// 162 = 0xa2
    _Bool _enableStatusChangeNotifications;	// 163 = 0xa3
    _Bool _freshMachPort;	// 164 = 0xa4
    _Bool _isPublicTokenAcknowledged;	// 165 = 0xa5
    _Bool _isClosed;	// 166 = 0xa6
}

+ (void)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2 withMode:(unsigned long long)arg3 returnServers:(id)arg4;	// IMP=0x002000000005267a
+ (id)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000524e3
+ (void)serverEnvironmentNames:(id)arg1 withMode:(unsigned long long)arg2;	// IMP=0x0010000000052259
+ (id)serverEnvironmentNames;	// IMP=0x00100000000521ac
- (void).cxx_destruct;	// IMP=0x0020000000057294
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) long long publicTokenDeliveryRetries; // @synthesize publicTokenDeliveryRetries=_publicTokenDeliveryRetries;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, retain, nonatomic) NSSet *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool enableStatusChangeNotifications; // @synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications;
@property(nonatomic) _Bool usesAppLaunchStats; // @synthesize usesAppLaunchStats=_usesAppLaunchStats;
@property(nonatomic) _Bool enableCriticalReliability; // @synthesize enableCriticalReliability=_enableCriticalReliability;
@property(nonatomic) unsigned long long largeMessageSize; // @synthesize largeMessageSize=_largeMessageSize;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(readonly, retain, nonatomic) NSSet *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property(readonly, retain, nonatomic) NSSet *ignoredTopics; // @synthesize ignoredTopics=_ignoredTopics;
@property(readonly, retain, nonatomic) NSSet *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
@property(nonatomic) __weak id <APSConnectionServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *tokenName;
- (void)_savePersistentConnectionWithMode:(unsigned long long)arg1;	// IMP=0x0010000000056d08
- (void)_savePersistentConnectionTopics;	// IMP=0x0010000000056cd7
@property(readonly, nonatomic) _Bool isConnected; // @dynamic isConnected;
@property(readonly, nonatomic) _Bool hasIdentity; // @dynamic hasIdentity;
- (void)saveAndUpdateDelegate;	// IMP=0x00100000000568f7
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;	// IMP=0x001000000005646b
- (void)handleChannelSubscriptionFailures:(id)arg1 forTopic:(id)arg2;	// IMP=0x001000000005631f
- (void)acknowledgeDidReceivePublicToken:(id)arg1;	// IMP=0x0010000000055d6e
@property(nonatomic) _Bool isPublicTokenAcknowledged;
- (void)_redeliverCurrentPublicToken;	// IMP=0x0010000000055bd6
- (void)handlePublicTokenDeliveryReply:(id)arg1;	// IMP=0x00100000000558f3
- (void)setPublicToken:(id)arg1 needsAck:(_Bool)arg2;	// IMP=0x0010000000055672
- (void)handleReceivedPerAppToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x001000000005540e
- (void)handleAckIncomingMessageWithGuid:(id)arg1 topic:(id)arg2 tracingUUID:(id)arg3;	// IMP=0x0010000000055371
- (void)handleInvalidatePerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000552f5
- (void)handleRequestPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000552e3
- (void)_requestMissingPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000055267
- (void)handleFakeMessage:(id)arg1;	// IMP=0x001000000005520b
- (void)handleCancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x00100000000551c6
- (void)handleSendOutgoingMessage:(id)arg1;	// IMP=0x001000000005511c
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2 sendRTT:(unsigned long long)arg3 ackTimestamp:(unsigned long long)arg4;	// IMP=0x0010000000054f71
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2;	// IMP=0x0010000000054f59
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x0010000000054eaf
- (void)handleReceivedMessage:(id)arg1;	// IMP=0x0010000000054c46
- (void)_initiateConnectionIfNecessary;	// IMP=0x001000000005456f
- (void)handleConnectionStatusChanged:(_Bool)arg1;	// IMP=0x00100000000544a8
- (id)connectionPortName;	// IMP=0x001000000005449a
- (void)connectionInvalidated;	// IMP=0x001000000005444b
- (void)_suspendQueue;	// IMP=0x001000000005441a
- (void)_resumeQueue;	// IMP=0x00100000000543e9
- (void)connectionHandshakeDidComplete;	// IMP=0x0010000000054379
- (void)_migratePersistentTopicsFromOldMode:(unsigned long long)arg1;	// IMP=0x0010000000053e9c
@property(readonly, copy) NSString *debugDescription;
- (id)processNameWithLabels:(_Bool)arg1;	// IMP=0x0010000000053ca0
- (void)close;	// IMP=0x0010000000053c35
- (void)_lookUpMachPort;	// IMP=0x0010000000053ae9
- (void)dealloc;	// IMP=0x0010000000053a7a
- (id)initWithDelegate:(id)arg1 mode:(unsigned long long)arg2 environmentName:(id)arg3 connectionPortName:(id)arg4 processName:(id)arg5 connection:(id)arg6;	// IMP=0x0010000000053625
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053093
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3;	// IMP=0x001000000005307e

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
