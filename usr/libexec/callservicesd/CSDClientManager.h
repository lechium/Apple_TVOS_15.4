//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClient, NSArray, NSMapTable, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSDClientManager : NSObject
{
    NSXPCInterface *_remoteObjectInterface;	// 8 = 0x8
    NSXPCInterface *_exportedInterface;	// 16 = 0x10
    CDUnknownBlockType _interruptionHandler;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
    id _asynchronousExportedObjectProxy;	// 40 = 0x28
    id _synchronousExportedObjectProxy;	// 48 = 0x30
    id _exportedObject;	// 56 = 0x38
    NSString *_requiredConnectionCapability;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSMapTable *_clientsByObject;	// 80 = 0x50
    NSString *_machServiceName;	// 88 = 0x58
    NSXPCListener *_xpcListener;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000001936a1
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(readonly, nonatomic) NSMapTable *clientsByObject; // @synthesize clientsByObject=_clientsByObject;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *requiredConnectionCapability; // @synthesize requiredConnectionCapability=_requiredConnectionCapability;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001932fb
- (void)handleInvocation:(id)arg1 synchronously:(_Bool)arg2;	// IMP=0x00100000001931a5
- (CDUnknownBlockType)_updatedQOSBlockForBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000019315b
- (CDUnknownBlockType)_connectionEndedHandlerForXPCClient:(id)arg1 withCustomBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000192f33
- (id)_xpcClientForConnection:(id)arg1;	// IMP=0x0010000000192cf8
- (void)_performBlock:(CDUnknownBlockType)arg1 onClients:(id)arg2 coalescedByIdentifier:(id)arg3;	// IMP=0x0010000000192b18
- (void)_performBlock:(CDUnknownBlockType)arg1 onClients:(id)arg2;	// IMP=0x0010000000192990
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1 andWait:(_Bool)arg2;	// IMP=0x00100000001928de
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x00100000001928ca
@property(readonly, nonatomic) void *queueContext;
- (void)filterClientsUsingPredicate:(CDUnknownBlockType)arg1 andPerformBlock:(CDUnknownBlockType)arg2 coalescedByIdentifier:(id)arg3;	// IMP=0x00100000001927e6
- (void)performBlockOnClients:(CDUnknownBlockType)arg1 coalescedByIdentifier:(id)arg2;	// IMP=0x001000000019272c
- (void)filterClientsEntitledForCapability:(id)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000019267e
- (void)filterClientsUsingPredicate:(CDUnknownBlockType)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001925c1
- (void)performBlockOnClients:(CDUnknownBlockType)arg1;	// IMP=0x0010000000192523
- (id)clientsEntitledForCapability:(id)arg1;	// IMP=0x001000000019247d
- (id)clientsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000192348
- (void)removeClient:(id)arg1;	// IMP=0x001000000019228d
- (void)addClient:(id)arg1;	// IMP=0x00100000001921d4
- (void)removeLocalClientObject:(id)arg1;	// IMP=0x0010000000192116
- (void)addLocalClientObject:(id)arg1;	// IMP=0x0010000000192048
- (void)invalidate;	// IMP=0x0010000000191fa7
- (void)startListeningOnMachServiceWithName:(id)arg1;	// IMP=0x0010000000191ea0
- (_Bool)isClientAllowed:(id)arg1;	// IMP=0x0010000000191dd6
@property(readonly, nonatomic) CSDClient *currentClient;
@property(readonly, nonatomic) NSArray *clients;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) id synchronousExportedObjectProxy; // @synthesize synchronousExportedObjectProxy=_synchronousExportedObjectProxy;
@property(retain, nonatomic) id asynchronousExportedObjectProxy; // @synthesize asynchronousExportedObjectProxy=_asynchronousExportedObjectProxy;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
- (void)dealloc;	// IMP=0x0010000000191446
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x001000000019136d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

