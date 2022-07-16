//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection, NSXPCInterface, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUXPCAgent : NSObject <NSXPCListenerDelegate>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    struct LogCategory *_ucat;	// 16 = 0x10
    NSXPCConnection *_xpcCnx;	// 24 = 0x18
    NSMutableSet *_xpcCnxSet;	// 32 = 0x20
    NSXPCListener *_xpcListener;	// 40 = 0x28
    CDUnknownBlockType _connectionStartedHandler;	// 48 = 0x30
    CDUnknownBlockType _connectionEndedHandler;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    CDUnknownBlockType _interruptionHandler;	// 72 = 0x48
    CDUnknownBlockType _invalidationHandler;	// 80 = 0x50
    NSString *_label;	// 88 = 0x58
    NSXPCListenerEndpoint *_listenerEndpoint;	// 96 = 0x60
    NSXPCInterface *_exportedInterface;	// 104 = 0x68
    id _exportedObject;	// 112 = 0x70
    NSXPCInterface *_remoteObjectInterface;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000c29f0
@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionEndedHandler; // @synthesize connectionEndedHandler=_connectionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStartedHandler; // @synthesize connectionStartedHandler=_connectionStartedHandler;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c27f7
- (id)remoteObjectProxy;	// IMP=0x00000000000c2717
- (void)_connectionInvalidated:(id)arg1;	// IMP=0x00000000000c26ae
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000c24df
- (void)_invalidated;	// IMP=0x00000000000c23d8
- (void)_invalidate;	// IMP=0x00000000000c21e3
- (void)invalidate;	// IMP=0x00000000000c2198
- (void)_interrupted;	// IMP=0x00000000000c2131
- (_Bool)activateDirectAndReturnError:(id *)arg1;	// IMP=0x00000000000c1eb2
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1e27
- (void)dealloc;	// IMP=0x00000000000c1d65
- (id)init;	// IMP=0x00000000000c1cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
