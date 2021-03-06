//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    id <AKAuthorizationClientProtocol> _contextManager;	// 24 = 0x18
    NSXPCListenerEndpoint *_listenerEndpoint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004f7c1
@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (void)_connectionInvalidationHandler;	// IMP=0x000000000004f702
- (void)_connectionInterruptionHandler;	// IMP=0x000000000004f6c1
- (id)_connection;	// IMP=0x000000000004f385
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004f302
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004f27f
- (void)dealloc;	// IMP=0x000000000004f1eb
- (id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2;	// IMP=0x000000000004f14b
- (id)init;	// IMP=0x000000000004f135

@end

