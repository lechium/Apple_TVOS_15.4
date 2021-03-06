//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDIDSInboundDelegate-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSharingInboundDelegate-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDXPCConnectorDelegate-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDXPCInboundDelegate-Protocol.h>

@class DEDXPCConnector, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol DEDClientProtocol, DEDPairingProtocol, DEDWorkerProtocol, OS_dispatch_queue, OS_os_log;

@interface DEDController : NSObject <DEDXPCConnectorDelegate, DEDXPCInboundDelegate, DEDSharingInboundDelegate, DEDIDSInboundDelegate, DEDSecureArchiving>
{
    _Bool _isDaemon;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    _Bool _useSharing;	// 10 = 0xa
    _Bool _useIDS;	// 11 = 0xb
    _Bool _embeddedInApp;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_bugSessionCallbackQueue;	// 16 = 0x10
    DEDXPCConnector *_xpcConnector;	// 24 = 0x18
    id <DEDClientProtocol> _clientDelegate;	// 32 = 0x20
    id <DEDWorkerProtocol> _workerDelegate;	// 40 = 0x28
    id <DEDPairingProtocol> _pairingDelegate;	// 48 = 0x30
    CDUnknownBlockType _devicesCompletion;	// 56 = 0x38
    CDUnknownBlockType _pongBlock;	// 64 = 0x40
    CDUnknownBlockType _sessionExistsCompletion;	// 72 = 0x48
    NSMutableDictionary *_sessionStartBlocks;	// 80 = 0x50
    NSMutableDictionary *_sessionDidStartBlocks;	// 88 = 0x58
    NSMutableSet *_recentlyFinishedSessions;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_replyQueue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_workQueue;	// 112 = 0x70
    NSObject<OS_os_log> *_log;	// 120 = 0x78
    CDUnknownBlockType _didCancelCompletion;	// 128 = 0x80
    CDUnknownBlockType _xpcConnectionsCompletion;	// 136 = 0x88
    NSMutableDictionary *_devices;	// 144 = 0x90
    NSDictionary *_sessions;	// 152 = 0x98
}

+ (id)archivedClasses;	// IMP=0x000000000001f73c
- (void).cxx_destruct;	// IMP=0x0000000000029cd6
@property(retain) NSDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(copy) CDUnknownBlockType xpcConnectionsCompletion; // @synthesize xpcConnectionsCompletion=_xpcConnectionsCompletion;
@property(copy) CDUnknownBlockType didCancelCompletion; // @synthesize didCancelCompletion=_didCancelCompletion;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) NSMutableSet *recentlyFinishedSessions; // @synthesize recentlyFinishedSessions=_recentlyFinishedSessions;
@property(retain) NSMutableDictionary *sessionDidStartBlocks; // @synthesize sessionDidStartBlocks=_sessionDidStartBlocks;
@property(retain) NSMutableDictionary *sessionStartBlocks; // @synthesize sessionStartBlocks=_sessionStartBlocks;
@property(copy) CDUnknownBlockType sessionExistsCompletion; // @synthesize sessionExistsCompletion=_sessionExistsCompletion;
@property(copy) CDUnknownBlockType pongBlock; // @synthesize pongBlock=_pongBlock;
@property(copy) CDUnknownBlockType devicesCompletion; // @synthesize devicesCompletion=_devicesCompletion;
@property _Bool embeddedInApp; // @synthesize embeddedInApp=_embeddedInApp;
@property _Bool useIDS; // @synthesize useIDS=_useIDS;
@property _Bool useSharing; // @synthesize useSharing=_useSharing;
@property _Bool started; // @synthesize started=_started;
@property _Bool isDaemon; // @synthesize isDaemon=_isDaemon;
@property __weak id <DEDPairingProtocol> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
@property __weak id <DEDWorkerProtocol> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property __weak id <DEDClientProtocol> clientDelegate; // @synthesize clientDelegate=_clientDelegate;
@property(retain) DEDXPCConnector *xpcConnector; // @synthesize xpcConnector=_xpcConnector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bugSessionCallbackQueue; // @synthesize bugSessionCallbackQueue=_bugSessionCallbackQueue;
- (id)sharingConnection;	// IMP=0x00000000000298f1
- (id)idsConnection;	// IMP=0x00000000000297e0
- (void)logDeviceCounts;	// IMP=0x0000000000029540
- (void)addDevice:(id)arg1;	// IMP=0x0000000000028ff7
- (id)persistence;	// IMP=0x0000000000028fde
- (void)purgeStaleSessions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000280b9
- (_Bool)induceTimeOutIfNeededAndReturnCanProceedWithDevice:(id)arg1 sessionId:(id)arg2;	// IMP=0x0000000000027c65
- (void)didFinishSessionWithIdentifier:(id)arg1;	// IMP=0x0000000000027b0b
- (void)didStartBugSessionWithInfo:(id)arg1;	// IMP=0x000000000002778c
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 fromInbound:(id)arg5;	// IMP=0x00000000000248e8
- (id)idsInbound_sessionForIdentifier:(id)arg1;	// IMP=0x00000000000248d6
- (void)idsInbound_didAbortSessionWithID:(id)arg1;	// IMP=0x00000000000248c4
- (void)idsInbound_didStartBugSessionWithInfo:(id)arg1;	// IMP=0x00000000000248b2
- (void)idsInbound_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;	// IMP=0x000000000002488f
- (id)sharingInbound_sessionForIdentifier:(id)arg1;	// IMP=0x000000000002487d
- (void)sharingInbound_didAbortSessionWithID:(id)arg1;	// IMP=0x000000000002486b
- (void)sharingInbound_didStartBugSessionWithInfo:(id)arg1;	// IMP=0x0000000000024859
- (void)sharingInbound_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;	// IMP=0x0000000000024836
- (void)sharingInbound_successPINForDevice:(id)arg1 fromInbound:(id)arg2;	// IMP=0x00000000000245e6
- (void)sharingInbound_promptPINForDevice:(id)arg1 fromInbound:(id)arg2;	// IMP=0x0000000000024396
- (void)xpcInbound_successPINForDevice:(id)arg1;	// IMP=0x00000000000241b4
- (void)xpcInbound_tryPIN:(id)arg1 forDevice:(id)arg2 fromInbound:(id)arg3;	// IMP=0x0000000000024099
- (void)xpcInbound_promptPINForDevice:(id)arg1;	// IMP=0x0000000000023e57
- (void)xpcInbound_startPairSetupForDevice:(id)arg1 fromInbound:(id)arg2;	// IMP=0x0000000000023d4c
- (void)xpcInbound_listClientXPCConnectionsReply:(id)arg1;	// IMP=0x0000000000023ba4
- (void)xpc_listClientXPCConnectionsFromInbound:(id)arg1;	// IMP=0x00000000000239c5
- (void)xpcInbound_didAbortSessionWithID:(id)arg1;	// IMP=0x00000000000239b3
- (id)xpcInbound_sessionForIdentifier:(id)arg1;	// IMP=0x00000000000239a1
- (void)xpcInbound_hasActiveSessionReply:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x0000000000023767
- (void)xpcInbound_hasActiveSession:(id)arg1 fromInbound:(id)arg2;	// IMP=0x000000000002355f
- (void)xpcInbound_didStartBugSessionWithInfo:(id)arg1;	// IMP=0x000000000002354d
- (void)xpcInbound_startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 fromInbound:(id)arg5;	// IMP=0x000000000002353b
- (void)xpcInbound_stopDeviceDiscovery:(id)arg1;	// IMP=0x00000000000234e2
- (void)xpcInbound_didDiscoverDevices:(id)arg1;	// IMP=0x00000000000231b3
- (void)xpcInbound_gotDeviceUpdate:(id)arg1;	// IMP=0x0000000000022eb6
- (void)xpcInbound_discoverAllAvailableDevices:(id)arg1;	// IMP=0x0000000000021f26
- (void)xpcInbound_pong;	// IMP=0x0000000000021dbf
- (void)xpcInbound_ping:(id)arg1;	// IMP=0x0000000000021c4c
- (id)connector:(id)arg1 needsXPCInboundForPid:(id)arg2;	// IMP=0x0000000000021bf0
- (void)connector:(id)arg1 didLooseConnectionToProcessWithPid:(int)arg2;	// IMP=0x0000000000021a72
- (_Bool)hasRecentlyFinishedSessionWithIdentifier:(id)arg1;	// IMP=0x0000000000021980
- (void)hasActiveSessionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021757
- (void)_didAbortSessionWithID:(id)arg1;	// IMP=0x000000000002161c
- (void)abortSession:(id)arg1;	// IMP=0x0000000000021526
- (void)abortSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021318
- (void)listXPCConnections:(CDUnknownBlockType)arg1;	// IMP=0x00000000000211b0
- (void)reset;	// IMP=0x0000000000020fde
- (id)knownSessions;	// IMP=0x0000000000020f8e
- (void)removeSessionWithIdentifier:(id)arg1;	// IMP=0x0000000000020e3a
- (void)insertNewSession:(id)arg1;	// IMP=0x0000000000020cbf
- (id)sessionForIdentifier:(id)arg1;	// IMP=0x0000000000020c3c
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 target:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000209d4
- (id)_deviceForIncomingDevice:(id)arg1;	// IMP=0x00000000000209c0
- (_Bool)hasDevice:(id)arg1;	// IMP=0x000000000002098d
- (id)_deviceForIncomingDevice:(id)arg1 needsReady:(_Bool)arg2;	// IMP=0x0000000000020522
- (id)_sharingDeviceForIncomingDevice:(id)arg1;	// IMP=0x0000000000020488
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000002014e
- (void)startPairSetupForDevice:(id)arg1;	// IMP=0x000000000001fe3c
- (id)devicesWithIdentifier:(id)arg1;	// IMP=0x000000000001fe2a
- (id)_allKnownDevicesWithIdentifier:(id)arg1;	// IMP=0x000000000001fc7d
- (id)allKnownDevices;	// IMP=0x000000000001fc69
- (void)stopDiscovery;	// IMP=0x000000000001facb
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f90b
- (void)pingDaemonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f7a3
- (void)start;	// IMP=0x000000000001eb8b
- (void)configureForIDS:(_Bool)arg1;	// IMP=0x000000000001eb79
- (void)configureForSharing:(_Bool)arg1;	// IMP=0x000000000001eb15
- (void)configurePairingDelegate:(id)arg1;	// IMP=0x000000000001eb03
- (void)configureWorkerDelegate:(id)arg1;	// IMP=0x000000000001eaf1
- (void)configureClientDelegate:(id)arg1;	// IMP=0x000000000001eadf
- (void)configureForEmbedded:(_Bool)arg1;	// IMP=0x000000000001eacd
- (void)configureForDaemon;	// IMP=0x000000000001ea2b
- (id)init;	// IMP=0x000000000001e832
- (void)_timeOutSessionStartBlockWithIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x0000000000035545
- (_Bool)hasCompletionBlockWithIdentifier:(id)arg1;	// IMP=0x000000000003547c
- (CDUnknownBlockType)popSessionStartCompletionWithIdentifier:(id)arg1;	// IMP=0x000000000003531e
- (void)addSessionStartCompletion:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2 configuration:(id)arg3;	// IMP=0x00000000000351f8
- (CDUnknownBlockType)popDidStartSessionCompletionWithIdentifier:(id)arg1;	// IMP=0x0000000000035098
- (void)addDidStartSessionCompletion:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000034fb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

