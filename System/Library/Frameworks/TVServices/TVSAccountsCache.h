//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSCache, NSHashTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface TVSAccountsCache : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    NSMutableSet *_accountIdentifiers;	// 24 = 0x18
    NSCache *_accountsByIdentifier;	// 32 = 0x20
    NSString *_primaryAppleAccountIdentifier;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000045b30
- (void).cxx_destruct;	// IMP=0x0000000000047156
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSString *primaryAppleAccountIdentifier; // @synthesize primaryAppleAccountIdentifier=_primaryAppleAccountIdentifier;
@property(retain, nonatomic) NSCache *accountsByIdentifier; // @synthesize accountsByIdentifier=_accountsByIdentifier;
@property(retain, nonatomic) NSMutableSet *accountIdentifiers; // @synthesize accountIdentifiers=_accountIdentifiers;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_accountsDidChange:(id)arg1;	// IMP=0x0000000000046d28
- (void)_workQueue_callObserversDidModifyAccountWithAccount:(id)arg1;	// IMP=0x0000000000046b1f
- (void)_workQueue_callObserversDidModifyPrimaryAppleAccountWithAccount:(id)arg1;	// IMP=0x0000000000046916
- (void)_workQueue_stashPrimaryAppleAccount:(id)arg1;	// IMP=0x0000000000046796
- (void)_workQueue_stashAccount:(id)arg1;	// IMP=0x00000000000466ca
- (id)appleAccountWithAltDSID:(id)arg1;	// IMP=0x00000000000464ac
- (id)primaryAppleAccount;	// IMP=0x000000000004627f
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x0000000000046111
- (void)stashAccount:(id)arg1;	// IMP=0x0000000000046055
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000045de4
- (void)addObserver:(id)arg1;	// IMP=0x0000000000045d27
- (void)dealloc;	// IMP=0x0000000000045cb2
- (id)_init;	// IMP=0x0000000000045b95

@end
