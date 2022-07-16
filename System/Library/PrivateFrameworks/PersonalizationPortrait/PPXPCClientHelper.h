//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCInterface;

@interface PPXPCClientHelper : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _connLock;	// 8 = 0x8
    NSXPCConnection *_conn;	// 72 = 0x48
    NSString *_serviceName;	// 80 = 0x50
    NSXPCInterface *_allowedServerInterface;	// 88 = 0x58
    NSXPCInterface *_allowedClientInterface;	// 96 = 0x60
    id _clientExportedObject;	// 104 = 0x68
    CDUnknownBlockType _interruptionHandler;	// 112 = 0x70
    CDUnknownBlockType _invalidationHandler;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000036d8f
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036d18
- (id)remoteObjectProxy;	// IMP=0x0000000000036cb8
- (void)_locked_establishConnection;	// IMP=0x0000000000036a8b
- (void)dealloc;	// IMP=0x0000000000036a40
- (id)initWithServiceName:(id)arg1 allowedServerInterface:(id)arg2 allowedClientInterface:(id)arg3 clientExportedObject:(id)arg4 interruptionHandler:(CDUnknownBlockType)arg5 invalidationHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000368fb

@end

