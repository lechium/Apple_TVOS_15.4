//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUIService/AXUIMessageSenderDelegate-Protocol.h>

@class AXAccessQueue, AXUIDisplayManager, AXUIMessageSender, BSProcessDeathWatcher, NSMutableArray, NSMutableDictionary, NSString;

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate>
{
    BSProcessDeathWatcher *_springBoardReaper;	// 8 = 0x8
    _Bool _shouldAllowServicesToProcessMessages;	// 16 = 0x10
    AXUIDisplayManager *_displayManager;	// 24 = 0x18
    AXAccessQueue *_resumingConnectionsQueue;	// 32 = 0x20
    NSMutableArray *_pausedConnections;	// 40 = 0x28
    AXAccessQueue *_entitlementsCheckersAccessQueue;	// 48 = 0x30
    NSMutableDictionary *_entitlementsCheckers;	// 56 = 0x38
    AXUIMessageSender *_messageSender;	// 64 = 0x40
    NSMutableArray *_serviceContexts;	// 72 = 0x48
    AXAccessQueue *_servicesAccessQueue;	// 80 = 0x50
    unsigned long long _lastUsedServiceIdentifier;	// 88 = 0x58
    NSMutableDictionary *_transactions;	// 96 = 0x60
}

+ (void)_releaseSharedServiceManager;	// IMP=0x000000000000f3d9
+ (id)sharedServiceManager;	// IMP=0x000000000000f348
- (void).cxx_destruct;	// IMP=0x0000000000014aaf
@property(retain, nonatomic) NSMutableDictionary *transactions; // @synthesize transactions=_transactions;
@property(nonatomic) _Bool shouldAllowServicesToProcessMessages; // @synthesize shouldAllowServicesToProcessMessages=_shouldAllowServicesToProcessMessages;
@property(nonatomic) unsigned long long lastUsedServiceIdentifier; // @synthesize lastUsedServiceIdentifier=_lastUsedServiceIdentifier;
@property(retain, nonatomic) AXAccessQueue *servicesAccessQueue; // @synthesize servicesAccessQueue=_servicesAccessQueue;
@property(retain, nonatomic) NSMutableArray *serviceContexts; // @synthesize serviceContexts=_serviceContexts;
@property(retain, nonatomic) AXUIMessageSender *messageSender; // @synthesize messageSender=_messageSender;
@property(retain, nonatomic) NSMutableDictionary *entitlementsCheckers; // @synthesize entitlementsCheckers=_entitlementsCheckers;
@property(retain, nonatomic) AXAccessQueue *entitlementsCheckersAccessQueue; // @synthesize entitlementsCheckersAccessQueue=_entitlementsCheckersAccessQueue;
@property(retain, nonatomic) NSMutableArray *pausedConnections; // @synthesize pausedConnections=_pausedConnections;
@property(retain, nonatomic) AXAccessQueue *resumingConnectionsQueue; // @synthesize resumingConnectionsQueue=_resumingConnectionsQueue;
@property(retain, nonatomic) AXUIDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
- (id)_servicesForUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000014606
- (id)_uniqueIdentifierForService:(id)arg1;	// IMP=0x00000000000145ed
- (id)_serviceContextForService:(id)arg1;	// IMP=0x00000000000142f8
- (id)_serviceContextForClientWithIdentifier:(id)arg1;	// IMP=0x0000000000014036
- (void)_unregisterAllClientsWithConnection:(id)arg1;	// IMP=0x00000000000133a3
- (_Bool)_registerClientWithIdentifier:(id)arg1 connection:(id)arg2 serviceBundleName:(id)arg3 initiatingMessageIdentifier:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000126ad
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;	// IMP=0x0000000000012617
- (void)_applicationDidFinishLaunching;	// IMP=0x00000000000123fe
- (void)_registerForSystemAppDeath;	// IMP=0x0000000000012236
- (_Bool)_serviceWithClass:(Class)arg1 canProcessMessageWithIdentifier:(unsigned long long)arg2 fromClientWithConnection:(id)arg3 possibleRequiredEntitlements:(id *)arg4;	// IMP=0x0000000000011f39
- (void)_handleConnection:(id)arg1;	// IMP=0x00000000000108f4
- (_Bool)_start;	// IMP=0x00000000000103fa
- (void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void *)arg3;	// IMP=0x000000000001036b
- (void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000102ff
- (id)_sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000010256
- (void)_sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000000feb1
- (id)_clientMessengerWithIdentifier:(id)arg1;	// IMP=0x000000000000fb49
- (void)endTransactionWithIdentifier:(id)arg1 forService:(id)arg2;	// IMP=0x000000000000f96f
- (void)beginTransactionWithIdentifier:(id)arg1 forService:(id)arg2;	// IMP=0x000000000000f768
- (void)dealloc;	// IMP=0x000000000000f682
- (id)init;	// IMP=0x000000000000f3f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

