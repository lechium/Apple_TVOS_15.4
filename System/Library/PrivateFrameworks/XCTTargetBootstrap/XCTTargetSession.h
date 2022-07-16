//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTTargetBootstrap/NSXPCListenerDelegate-Protocol.h>
#import <XCTTargetBootstrap/XCTInternalEntitlementChecking-Protocol.h>
#import <XCTTargetBootstrap/XCTMessagingChannel_DaemonToUIProcess-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTMessagingChannel_DaemonToUIProcess, XCTInternalEntitlementChecking>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_daemonConnection;	// 16 = 0x10
    NSXPCListener *_clientListener;	// 24 = 0x18
    id <XCTConnectionAccepting> _connectionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000035fc
@property(retain) id <XCTConnectionAccepting> connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(retain) NSXPCListener *clientListener; // @synthesize clientListener=_clientListener;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000341c
- (_Bool)isInternallyEntitledConnection:(id)arg1;	// IMP=0x0000000000003081
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002dec
- (id)_on_queue_getListenerEndpoint;	// IMP=0x0000000000002db1
- (void)_on_queue_startListeningForClientConnections;	// IMP=0x0000000000002c45
- (_Bool)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000277f
- (void)_on_queue_connect;	// IMP=0x0000000000002428
- (void)connect;	// IMP=0x00000000000023c6
- (id)initWithDaemonConnection:(id)arg1;	// IMP=0x00000000000022bb
- (id)initWithServiceName:(id)arg1;	// IMP=0x000000000000222c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

