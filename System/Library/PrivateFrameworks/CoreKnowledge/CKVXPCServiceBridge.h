//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

@interface CKVXPCServiceBridge : NSObject
{
    Protocol *_serviceProtocol;	// 8 = 0x8
    NSXPCInterface *_serviceInterface;	// 16 = 0x10
    NSString *_machServiceName;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    NSXPCConnection *_serviceConnection;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id _remoteObjectProxy;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c21ab
- (void)dealloc;	// IMP=0x00000000000c216d
- (id)service;	// IMP=0x00000000000c2117
- (void)_clearXPCServiceConnection;	// IMP=0x00000000000c20c7
- (id)_getOrCreateXPCServiceConnection;	// IMP=0x00000000000c1e22
- (id)init;	// IMP=0x00000000000c1dda
- (id)initWithServiceProtocol:(id)arg1 machServiceName:(id)arg2;	// IMP=0x00000000000c1c4e

@end
