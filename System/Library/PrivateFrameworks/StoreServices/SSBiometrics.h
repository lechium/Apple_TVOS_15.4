//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSBiometrics : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;	// 8 = 0x8
    SSXPCConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000159a32
- (void)_sendMessage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001597fc
- (void)saveIdentityMapForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000159771
- (void)isIdentityMapValidForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001596e6
- (void)getIdentityMapCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000159475
- (void)tokenUpdateStateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015922f
- (void)tokenUpdateShouldStartWithLogKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158fc3
- (void)tokenUpdateDidFinishWithLogKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158d79
- (void)setAllowed:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158d0a
- (void)setEnabled:(_Bool)arg1 withAuthToken:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000158c6a
- (void)setEnabled:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158be9
- (void)resetWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000158b8e
- (void)resetAccount:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158b03
- (void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158ae6
- (void)getStateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001588a0
- (void)getCurrentACLVersionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000015862c
- (void)getConstraintsDictionaryForPurpose:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015839e
- (void)getCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000157f98
- (void)getCachedBiometricAuthenticationContextWithToken:(id)arg1 evict:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000157cbf
- (void)getAllCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001579e7
- (id)init;	// IMP=0x00000000001578d8

@end

