//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPushHandler, NSMapTable, NSMutableDictionary, NSString, PushConnection, PushDiagnostic;
@protocol OS_dispatch_queue;

@interface PushService : NSObject
{
    PushConnection *_connection;	// 8 = 0x8
    NSMapTable *_consumers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_environment;	// 32 = 0x20
    NSMutableDictionary *_pendingMessages;	// 40 = 0x28
    AMSPushHandler *_pushHandler;	// 48 = 0x30
    PushDiagnostic *_pushDiagnostic;	// 56 = 0x38
    unsigned long long _stateHandle;	// 64 = 0x40
}

+ (id)_pushHandlerWithBagContract:(id)arg1;	// IMP=0x0020000000189fe0
+ (id)sharedInstance;	// IMP=0x0010000000189757
- (void).cxx_destruct;	// IMP=0x002000000018b087
- (void)_unitTest_waitForSetup;	// IMP=0x001000000018b06c
- (void)_queuePendingAppStoreMessage:(id)arg1 withActionType:(id)arg2;	// IMP=0x001000000018af94
- (void)_processReceivedAppStoreMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x001000000018ab5e
- (void)_processReceivedTestFlightMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x001000000018ab58
- (void)_initializeConnectionsAndSkipEnvironmentCheck:(_Bool)arg1;	// IMP=0x001000000018a819
- (void)handleSandboxAccountDidChangeNotification:(id)arg1;	// IMP=0x001000000018a575
- (void)_handleAccountDidChangeNotification:(id)arg1;	// IMP=0x001000000018a3ec
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x001000000018a389
- (void)_flushPendingMessagesWithActionType:(id)arg1;	// IMP=0x001000000018a0b7
- (void)pushConnection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(unsigned long long)arg3;	// IMP=0x0010000000189fda
- (void)pushConnection:(id)arg1 didReceiveRawMessage:(id)arg2;	// IMP=0x0010000000189de9
- (void)unregisterConsumerForActionType:(unsigned long long)arg1;	// IMP=0x0010000000189c99
- (void)registerConsumer:(id)arg1 forActionType:(unsigned long long)arg2;	// IMP=0x0010000000189aa6
- (id)initWithConnection:(id)arg1 testFlightConsumer:(id)arg2;	// IMP=0x00100000001897d6
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000001897c2
- (id)init;	// IMP=0x00100000001897ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

