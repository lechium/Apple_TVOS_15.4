//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSHashTable, NSString, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate>
{
    NSHashTable *_acquiredAssertions;	// 8 = 0x8
    PKXPCService *_remoteService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000032b844
- (void).cxx_destruct;	// IMP=0x000000000032cc58
- (void)_removeAssertionWithIdentifier:(id)arg1;	// IMP=0x000000000032ca18
- (id)_existingRemoteObjectProxy;	// IMP=0x000000000032ca02
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;	// IMP=0x000000000032c9ec
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000032c9d6
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000032c9c0
- (id)_remoteObjectProxy;	// IMP=0x000000000032c9aa
- (void)remoteServiceDidSuspend:(id)arg1;	// IMP=0x000000000032c74a
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;	// IMP=0x000000000032c612
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;	// IMP=0x000000000032c60c
- (void)isAssertionValid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c548
- (void)assertion:(id)arg1 shouldInvalidateWhenBackgrounded:(_Bool)arg2;	// IMP=0x000000000032c49b
- (void)invalidateAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c009
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032ba2b
- (void)dealloc;	// IMP=0x000000000032b9e7
- (id)initSharedInstance;	// IMP=0x000000000032b8d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

