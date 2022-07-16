//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSXPCConnectionDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _invalidateDone;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005aff9
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)onqueue_connectionInvalidated;	// IMP=0x000000000005af8a
- (void)onqueue_connectionInterrupted;	// IMP=0x000000000005af40
- (void)onqueue_connectionEstablished;	// IMP=0x000000000005aedb
- (_Bool)shouldEscapeXpcTryCatch;	// IMP=0x000000000005ae02
- (id)remoteObjectInterface;	// IMP=0x000000000005ad29
- (id)exportedInterface;	// IMP=0x000000000005ac50
- (id)machServiceName;	// IMP=0x000000000005ab77
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x000000000005aac5
- (void)connectionEstablished;	// IMP=0x000000000005aa64
- (void)onqueue_invalidated;	// IMP=0x000000000005a984
- (void)invalidated;	// IMP=0x000000000005a923
- (void)onqueue_interrupted;	// IMP=0x000000000005a895
- (void)interrupted;	// IMP=0x000000000005a834
- (void)onqueue_ensureConnectionEstablished;	// IMP=0x000000000005a5da
- (void)onqueue_ensureXPCStarted;	// IMP=0x000000000005a267
- (void)onqueue_invalidate;	// IMP=0x000000000005a200
- (void)_invalidate;	// IMP=0x000000000005a19f
- (void)onqueue_activate;	// IMP=0x000000000005a093
- (void)_activate;	// IMP=0x000000000005a032
- (void)onqueue_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059f3d
- (void)getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059e95
- (void)dealloc;	// IMP=0x0000000000059db5
- (id)init;	// IMP=0x0000000000059d5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
