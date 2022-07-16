//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PDS/PDSRemoteVendor-Protocol.h>

@class NSError, NSString;
@protocol PDSRemote, PDSRemote><NSXPCProxyCreating, PDSRemoteInternal, PDSRemoteInternal><NSXPCProxyCreating, PDSXPCConnection, PDSXPCConnectionVendor, PDSXPCHandshake><NSXPCProxyCreating, PDSXPCInterfaceVendor;

@interface PDSXPCConnector : NSObject <PDSRemoteVendor>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_clientID;	// 16 = 0x10
    id <PDSXPCConnection> _XPCConnection;	// 24 = 0x18
    id <PDSXPCHandshake><NSXPCProxyCreating> _handshakeProxy;	// 32 = 0x20
    id <PDSRemote><NSXPCProxyCreating> _remoteObject;	// 40 = 0x28
    id <PDSRemote> _syncRemoteObject;	// 48 = 0x30
    id <PDSRemoteInternal><NSXPCProxyCreating> _internalRemoteObject;	// 56 = 0x38
    id <PDSRemoteInternal> _syncInternalRemoteObject;	// 64 = 0x40
    NSError *_connectionError;	// 72 = 0x48
    id <PDSXPCInterfaceVendor> _interfaceVendor;	// 80 = 0x50
    id <PDSXPCConnectionVendor> _connectionVendor;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000002a5e
@property(retain, nonatomic) id <PDSXPCConnectionVendor> connectionVendor; // @synthesize connectionVendor=_connectionVendor;
@property(retain, nonatomic) id <PDSXPCInterfaceVendor> interfaceVendor; // @synthesize interfaceVendor=_interfaceVendor;
@property(retain, nonatomic) NSError *connectionError; // @synthesize connectionError=_connectionError;
@property(retain, nonatomic) id <PDSRemoteInternal> syncInternalRemoteObject; // @synthesize syncInternalRemoteObject=_syncInternalRemoteObject;
@property(retain, nonatomic) id <PDSRemoteInternal><NSXPCProxyCreating> internalRemoteObject; // @synthesize internalRemoteObject=_internalRemoteObject;
@property(retain, nonatomic) id <PDSRemote> syncRemoteObject; // @synthesize syncRemoteObject=_syncRemoteObject;
@property(retain, nonatomic) id <PDSRemote><NSXPCProxyCreating> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) id <PDSXPCHandshake><NSXPCProxyCreating> handshakeProxy; // @synthesize handshakeProxy=_handshakeProxy;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) id <PDSXPCConnection> XPCConnection; // @synthesize XPCConnection=_XPCConnection;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)_lockedXPCConnection;	// IMP=0x0000000000002526
- (id)_lockedPerformConnectWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002068
- (id)_genericSyncProxyWithErrorHandler:(CDUnknownBlockType)arg1 localStorage:(id *)arg2 remoteBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001ee7
- (id)_genericProxyWithError:(id *)arg1 remoteBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001df6
- (id)_lockedRemoteInternalObject;	// IMP=0x0000000000001d8a
- (id)_lockedRemoteObject;	// IMP=0x0000000000001ce3
- (id)internalRemoteObjectProxyWithError:(id *)arg1;	// IMP=0x0000000000001c45
- (id)synchronousInternalRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001b91
- (id)remoteObjectProxyWithError:(id *)arg1;	// IMP=0x0000000000001af3
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001a21
- (_Bool)validateConnectionWithError:(id *)arg1;	// IMP=0x000000000000197b
- (id)initWithClientID:(id)arg1 interfaceVendor:(id)arg2 connectionVendor:(id)arg3;	// IMP=0x000000000000174a
- (id)initWithClientID:(id)arg1;	// IMP=0x00000000000016a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

