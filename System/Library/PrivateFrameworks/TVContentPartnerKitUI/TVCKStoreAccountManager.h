//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATVAuthenticationContext, SSAccount;
@protocol OS_dispatch_queue;

@interface TVCKStoreAccountManager : NSObject
{
    ATVAuthenticationContext *_pendingAuthenticationContext;	// 8 = 0x8
    ATVAuthenticationContext *_activeAuthenticationContext;	// 16 = 0x10
    SSAccount *_activeAccount;	// 24 = 0x18
    _Bool _makingAccountChanges;	// 32 = 0x20
    _Bool _isActiveAccountUpdateScheduled;	// 33 = 0x21
    NSObject<OS_dispatch_queue> *_serialAccessQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_authenticationQueue;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversOfActiveAccount;	// IMP=0x00000000000a0f3a
+ (id)sharedInstance;	// IMP=0x00000000000a08e8
- (void).cxx_destruct;	// IMP=0x00000000000a34bc
- (void)_performSynchronizedBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a34ab
- (void)_updateActiveAccount;	// IMP=0x00000000000a312a
- (void)_accountStoreChanged;	// IMP=0x00000000000a3001
- (void)_authenticateActivityChanged:(id)arg1;	// IMP=0x00000000000a2f2c
- (void)_handleAuthenticationContext:(id)arg1 response:(id)arg2 error:(id)arg3;	// IMP=0x00000000000a285c
- (void)_setAuthenticationContext:(id)arg1;	// IMP=0x00000000000a262e
- (id)_popAuthenticationContext;	// IMP=0x00000000000a250b
- (void)_dequeueAuthenticationContextAndAuthenticate;	// IMP=0x00000000000a20b3
- (void)fetchFamilyInfoForActiveAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a1b9c
- (void)authenticateAccount:(id)arg1 withPassword:(id)arg2 allowPrompt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a18d4
- (void)authenticateAccount:(id)arg1 allowPrompt:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a18ba
- (void)authenticateWithName:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a1803
- (void)removeAccount:(id)arg1;	// IMP=0x00000000000a17ec
- (void)signOutAccount:(id)arg1;	// IMP=0x00000000000a17d8
- (void)_signOutAccount:(id)arg1 eraseKeyChainData:(_Bool)arg2;	// IMP=0x00000000000a135e
@property(readonly, nonatomic) SSAccount *activeAccount;
- (id)setActiveAccount:(id)arg1;	// IMP=0x00000000000a0f42
- (id)accountWithAccountName:(id)arg1;	// IMP=0x00000000000a0d67
- (id)accountWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000000a0b94
- (id)accounts;	// IMP=0x00000000000a0aa8
- (id)init;	// IMP=0x00000000000a096d

@end

