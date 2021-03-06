//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSXPCConnectionDelegate-Protocol.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate>
{
    struct os_unfair_lock_s _terminationStateLock;	// 8 = 0x8
    NSError *_terminationError;	// 16 = 0x10
    CDUnknownBlockType _terminationHandler;	// 24 = 0x18
    _Atomic _Bool _isTerminated;	// 32 = 0x20
    _UIAsyncInvocation *_terminateInvocation;	// 40 = 0x28
    NSString *_serviceBundleIdentifier;	// 48 = 0x30
    _UIRemoteViewService *_service;	// 56 = 0x38
    BKSProcessAssertion *_serviceProcessAssertion;	// 64 = 0x40
    NSXPCConnection *_serviceConnection;	// 72 = 0x48
    int __automatic_invalidation_retainCount;	// 80 = 0x50
    _Bool __automatic_invalidation_invalidated;	// 84 = 0x54
}

+ (id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f14900
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f14746
@property(readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property(readonly, nonatomic) int servicePID;
- (void)dealloc;	// IMP=0x0000000000f1589b
- (id)disconnect;	// IMP=0x0000000000f1578e
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f15732
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f1556a
- (id)_terminateWithError:(id)arg1;	// IMP=0x0000000000f15517
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0000000000f1543d
- (id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000f14e48
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 service:(id)arg2 deputyInterfaces:(id)arg3;	// IMP=0x0000000000f14e20
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;	// IMP=0x0000000000f14dfe
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4;	// IMP=0x0000000000f14a17
- (_Bool)_isDeallocating;	// IMP=0x0000000000f1472a
- (_Bool)_tryRetain;	// IMP=0x0000000000f146f5
- (unsigned long long)retainCount;	// IMP=0x0000000000f146e4
- (oneway void)release;	// IMP=0x0000000000f14661
- (id)retain;	// IMP=0x0000000000f14647
- (int)__automatic_invalidation_logic;	// IMP=0x0000000000f145a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

