//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    NSMutableArray *_accounts;	// 16 = 0x10
    NSMutableArray *_originalAccounts;	// 24 = 0x18
    id _accountStoreDidChangeObserver;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000000007198b
- (void).cxx_destruct;	// IMP=0x00000000000735dc
- (void)saveAllAccounts;	// IMP=0x00000000000731f8
- (void)removeAccount:(id)arg1;	// IMP=0x0000000000072ee0
- (void)updateAccount:(id)arg1;	// IMP=0x0000000000072b79
- (void)addAccount:(id)arg1;	// IMP=0x0000000000072a06
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x00000000000727e9
- (id)accountWithPersonID:(id)arg1;	// IMP=0x00000000000725cc
- (id)accountWithUsername:(id)arg1;	// IMP=0x0000000000072269
- (id)accountsEnabledForDataclass:(id)arg1;	// IMP=0x000000000007206b
- (id)primaryAccount;	// IMP=0x0000000000071eb4
- (void)reloadAccounts;	// IMP=0x0000000000071c46
- (id)accounts;	// IMP=0x0000000000071c38
- (void)_stopObservingAccountStoreDidChangeNotification;	// IMP=0x0000000000071bbd
- (void)_beginObservingAccountStoreDidChangeNotification;	// IMP=0x0000000000071a87
- (id)_accountStore;	// IMP=0x0000000000071a3c
- (void)dealloc;	// IMP=0x00000000000719f4

@end

