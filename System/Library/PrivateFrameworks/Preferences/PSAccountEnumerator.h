//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray;

@interface PSAccountEnumerator : NSObject
{
    NSArray *_accounts;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    id _accountStoreDidChangeObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c3c4a
- (void)_stopObservingAccountStoreDidChangeNotification;	// IMP=0x00000000000c3be4
- (void)_beginObservingAccountStoreDidChangeNotification;	// IMP=0x00000000000c3a7c
- (void)_loadAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3990
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x00000000000c3875
- (id)_visibleAccountTypeIDs;	// IMP=0x00000000000c374f
- (id)_accountStore;	// IMP=0x00000000000c36f4
- (id)accountsForcingRefresh:(_Bool)arg1;	// IMP=0x00000000000c3565
@property(readonly, nonatomic) NSArray *accounts;
- (void)dealloc;	// IMP=0x00000000000c3509

@end

