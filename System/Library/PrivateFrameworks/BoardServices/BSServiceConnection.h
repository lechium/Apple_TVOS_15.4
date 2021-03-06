//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSServiceConnectionClient-Protocol.h>
#import <BoardServices/BSServiceConnectionContext-Protocol.h>
#import <BoardServices/BSServiceConnectionHost-Protocol.h>
#import <BoardServices/BSXPCServiceConnectionMessaging-Protocol.h>

@class BSAtomicSignal, BSProcessHandle, BSXPCServiceConnection, NSString, RBSTarget, _BSServiceConnectionConfiguration;
@protocol NSCopying;

@interface BSServiceConnection : NSObject <BSServiceConnectionClient, BSServiceConnectionHost, BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable>
{
    BSXPCServiceConnection *_connection;	// 8 = 0x8
    id <NSCopying> _userInfo;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    _BSServiceConnectionConfiguration *_lock_config;	// 32 = 0x20
    BSAtomicSignal *_lock_activatedSignal;	// 40 = 0x28
    _Bool _lock_invalidated;	// 48 = 0x30
    _Bool _lock_noAssertInvalidatedOnDealloc;	// 49 = 0x31
    _Bool _requiresMessagingAfterHandshake;	// 50 = 0x32
    NSString *_service;	// 56 = 0x38
    NSString *_instance;	// 64 = 0x40
}

+ (id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c859
+ (id)connectionWithEndpoint:(id)arg1;	// IMP=0x000000000000c5b4
+ (id)currentContext;	// IMP=0x000000000000c5a3
- (void).cxx_destruct;	// IMP=0x000000000000f387
@property(readonly, copy, nonatomic) NSString *instance; // @synthesize instance=_instance;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, copy) NSString *description;
- (void)_configureConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ef4d
- (id)createMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ef3f
- (id)createMessage;	// IMP=0x000000000000ef31
- (void)invalidate;	// IMP=0x000000000000eee8
@property(readonly, nonatomic) RBSTarget *remoteAssertionTarget;
- (id)remoteTargetWithAssertionAttributes:(id)arg1;	// IMP=0x000000000000ed1f
@property(readonly, nonatomic) id remoteTarget;
- (void)activate;	// IMP=0x000000000000c8fc
- (void)configureConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c870
@property(readonly, nonatomic) id <NSCopying> userInfo;
@property(readonly, nonatomic) BSProcessHandle *remoteProcess;
- (id)remoteTargetWithLaunchingAssertionAttributes:(id)arg1;	// IMP=0x000000000000c541
- (void)dealloc;	// IMP=0x000000000000c13f
- (id)init;	// IMP=0x000000000000b869

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

