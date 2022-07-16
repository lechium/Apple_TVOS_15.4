//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol>
{
    id _delegateContext;	// 8 = 0x8
    NSMapTable *_delegateToInfo;	// 16 = 0x10
    NSString *_serviceToken;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    NSMutableSet *_cachedAccounts;	// 40 = 0x28
    NSMutableSet *_enabledAccounts;	// 48 = 0x30
    NSMutableDictionary *_pendingAccountsToRemove;	// 56 = 0x38
    NSMutableDictionary *_transactionIDToHandlersMap;	// 64 = 0x40
    _Bool _accountsLoaded;	// 72 = 0x48
    _Bool _isLocalAccountVisible;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x000000000007c105
- (void)accountDisabled:(id)arg1 onService:(id)arg2;	// IMP=0x000000000007bcf7
- (void)accountEnabled:(id)arg1 onService:(id)arg2;	// IMP=0x000000000007b8bc
- (void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;	// IMP=0x000000000007b375
- (void)accountsChanged:(id)arg1 forTopic:(id)arg2;	// IMP=0x000000000007a3fe
- (void)accountUpdated:(id)arg1;	// IMP=0x0000000000079d01
- (void)accountRemoved:(id)arg1;	// IMP=0x0000000000079936
- (void)accountAdded:(id)arg1;	// IMP=0x000000000007940b
- (void)disableAccount:(id)arg1;	// IMP=0x00000000000790b9
- (void)enableAccount:(id)arg1;	// IMP=0x0000000000078db5
- (void)_updateLocalAccountVisibility;	// IMP=0x00000000000785d5
- (void)_removeAccount:(id)arg1;	// IMP=0x0000000000078487
- (void)_removeAndDeregisterAccount:(id)arg1;	// IMP=0x0000000000078310
- (void)addAccount:(id)arg1;	// IMP=0x00000000000780da
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077b03
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000776db
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000776c1
- (void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000773e0
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;	// IMP=0x000000000007709a
- (id)accountWithUniqueID:(id)arg1;	// IMP=0x0000000000076dcd
- (void)_loadCachedAccounts;	// IMP=0x00000000000768d0
- (void)_loadCachedAccountsWithDictionaries:(id)arg1;	// IMP=0x000000000007624b
- (void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2;	// IMP=0x0000000000075b5d
- (void)daemonDisconnected;	// IMP=0x0000000000075a74
- (void)_connect;	// IMP=0x000000000007587e
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;	// IMP=0x000000000007505f
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000007503c
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;	// IMP=0x0000000000075013
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000074fff
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000000074f91
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000074e06
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSSet *enabledAccounts;
@property(readonly, nonatomic) NSSet *internalAccounts;
@property(readonly, nonatomic) NSSet *accounts;
- (void)dealloc;	// IMP=0x0000000000074691
- (id)initWithService:(id)arg1 delegateContext:(id)arg2;	// IMP=0x0000000000074423

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

