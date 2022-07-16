//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeHub/HHManagementClientEventListenerDelegate-Protocol.h>
#import <HomeHub/NSXPCConnectionDelegate-Protocol.h>

@class HHEndpoint, HHManagementClientEventListener, NSPointerArray, NSSet, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol HHBubbleIdRetriever, OS_dispatch_queue;

@interface HHManagementClient : NSObject <HHManagementClientEventListenerDelegate, NSXPCConnectionDelegate>
{
    NSXPCListenerEndpoint *_listenerEndpoint;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    HHManagementClientEventListener *_eventListener;	// 24 = 0x18
    NSSet *_currentSelectorSet;	// 32 = 0x20
    int _daemonReadyToken;	// 40 = 0x28
    NSPointerArray *_synchronizedStates;	// 48 = 0x30
    HHEndpoint *_currentEndpoint;	// 56 = 0x38
    _Bool _isCurrentEndpointSet;	// 64 = 0x40
    id <HHBubbleIdRetriever> _bubbleIdRetriever;	// 72 = 0x48
    struct os_unfair_lock_s _lock;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    CDUnknownBlockType _connectionInterruptionHandler;	// 96 = 0x60
}

+ (id)clientWithQueue:(id)arg1;	// IMP=0x00000000000038c0
- (void).cxx_destruct;	// IMP=0x0000000000006c7a
@property(copy, nonatomic) CDUnknownBlockType connectionInterruptionHandler; // @synthesize connectionInterruptionHandler=_connectionInterruptionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)dispatchNotificationWithInvocation:(id)arg1;	// IMP=0x0000000000006b65
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000000000066d7
- (void)_checkForNullBubbleId:(id)arg1;	// IMP=0x00000000000066bc
- (void)_setCurrentEndpoint:(id)arg1;	// IMP=0x0000000000006664
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006592
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000064b8
- (void)_registerForNotifications:(id)arg1 shouldForce:(_Bool)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000617d
- (void)_registerForNotifications;	// IMP=0x000000000000612c
- (void)_registerForNotificationsForcedWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000060b2
- (id)_computeNotificationSelectors;	// IMP=0x0000000000005f0c
- (void)removeSynchronizedState:(id)arg1;	// IMP=0x0000000000005e15
- (void)addSynchronizedState:(id)arg1;	// IMP=0x0000000000005de3
- (void)dealloc;	// IMP=0x0000000000005d8c
- (void)getDaemonVersionInformationWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005c75
- (id)getCurrentEndpointWithError:(id *)arg1;	// IMP=0x0000000000005841
- (void)getCurrentEndpointWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000053d7
- (id)getEndpointWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005143
- (void)getEndpointWithIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004fce
- (void)deleteEndpointWithIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004e5e
- (void)deactivateEndpointWithIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004cee
- (void)activateEndpointWithIdentifier:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004b7e
- (void)createEndpointWithAccessoryIdentifier:(id)arg1 mediaRouteId:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000049f0
- (id)asynchronousRemoteObjectProxy;	// IMP=0x00000000000049dc
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000046d0
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000450d
- (id)connection;	// IMP=0x000000000000419c
- (void)_handleConnectionInterrupted;	// IMP=0x000000000000412b
- (void)_cancelDaemonReadyNotification;	// IMP=0x0000000000004107
- (void)_registerForDaemonReadyNotification:(id)arg1;	// IMP=0x0000000000003f0e
- (void)_handleDaemonReadyNotification;	// IMP=0x0000000000003e5e
- (void)handleDaemonReadyNotification;	// IMP=0x0000000000003dd7
- (void)_reconnectWithRetry:(_Bool)arg1;	// IMP=0x0000000000003b90
- (void)_handleReconnectError:(id)arg1;	// IMP=0x0000000000003a58
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000038a6
- (id)initWithListenerEndpoint:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000003891
- (id)initWithListenerEndpoint:(id)arg1 queue:(id)arg2 bubbleIdRetriever:(id)arg3;	// IMP=0x0000000000003705

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
