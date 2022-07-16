//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServicesCore/PLXPCAsyncProxyCreating-Protocol.h>
#import <PhotoLibraryServicesCore/PLXPCProxyCreating-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, PLXPCProxyCreating;

@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating, PLXPCAsyncProxyCreating>
{
    SEL _proxyGetterSelector;	// 8 = 0x8
    id <PLXPCProxyCreating> _serviceProxy;	// 16 = 0x10
    id <PLXPCProxyCreating> _proxyCreating;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006550c
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006544d
- (id)_unboostingRemoteObjectProxy;	// IMP=0x00000000000653f6
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065379
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000652fc
- (void)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065243
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065148
- (void)_logReplyError:(id)arg1 withCallStackSymbols:(id)arg2;	// IMP=0x0000000000064faa
- (id)_inq_createServiceProxyWithCallStackSymbols:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000648f4
- (id)_inq_createServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000648dd
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;	// IMP=0x0000000000064838

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

