//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSDictionary, NSMutableDictionary;
@protocol AIDAAccountManagerDelegate, AIDAServiceOwnerProtocol;

@interface AIDAAccountManager : NSObject
{
    id <AIDAServiceOwnerProtocol> _serviceOwnersManager;	// 8 = 0x8
    struct os_unfair_lock_s _accountManagerLock;	// 16 = 0x10
    NSMutableDictionary *_handlerByObserver;	// 24 = 0x18
    NSDictionary *_accounts;	// 32 = 0x20
    ACAccountStore *_accountStore;	// 40 = 0x28
    id <AIDAAccountManagerDelegate> _delegate;	// 48 = 0x30
}

+ (id)_accountStoreChangeQueue;	// IMP=0x0000000000002778
- (void).cxx_destruct;	// IMP=0x000000000000282a
@property(nonatomic) __weak id <AIDAAccountManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)removeAccountChangeObserver:(id)arg1;	// IMP=0x000000000000264e
- (void)addAccountChangeObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000024c5
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x0000000000002171
- (id)_delegate_accountsForAccountManager;	// IMP=0x000000000000208f
- (id)aidaAccountForService:(id)arg1;	// IMP=0x0000000000001f88
@property(copy, nonatomic) NSDictionary *accounts; // @synthesize accounts=_accounts;
- (void)dealloc;	// IMP=0x0000000000001e2a
- (id)initWithAccountStore:(id)arg1;	// IMP=0x0000000000001d0d
- (id)init;	// IMP=0x0000000000001ce2

@end

