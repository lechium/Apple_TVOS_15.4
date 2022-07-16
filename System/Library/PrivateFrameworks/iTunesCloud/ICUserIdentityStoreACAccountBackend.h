//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ACMonitoredAccountStoreDelegateProtocol-Protocol.h>
#import <iTunesCloud/ICUserIdentityStoreBackend-Protocol.h>

@class ACAccount, ACMonitoredAccountStore, NSMutableDictionary, NSNumber, NSString;
@protocol ICUserIdentityStoreBackendDelegate, OS_dispatch_queue;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ACMonitoredAccountStoreDelegateProtocol, ICUserIdentityStoreBackend>
{
    ACMonitoredAccountStore *_accountStore;	// 8 = 0x8
    NSMutableDictionary *_identityPropertiesCache;	// 16 = 0x10
    NSMutableDictionary *_allStoreAccountsByDSID;	// 24 = 0x18
    ACAccount *_primaryICloudAccount;	// 32 = 0x20
    NSNumber *_activeAccountDSID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_accountStoreDelegateQueue;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    id <ICUserIdentityStoreBackendDelegate> _delegate;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000753a0
- (void).cxx_destruct;	// IMP=0x0000000000073718
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_synchronize;	// IMP=0x0000000000073614
- (id)_newUserIdentityPropertiesForAccount:(id)arg1;	// IMP=0x000000000007320d
- (id)_userIdentityPropertiesForAccount:(id)arg1;	// IMP=0x000000000007311f
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)arg1;	// IMP=0x000000000007307e
- (id)_storeAccountForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000072fe8
- (id)_activeStoreAccountWithError:(id *)arg1;	// IMP=0x0000000000072f19
- (id)_primaryAppleAccountWithError:(id *)arg1;	// IMP=0x0000000000072eba
- (id)_allStoreAccountsWithError:(id *)arg1;	// IMP=0x0000000000072e4b
- (id)_registerAndLoadAccountsIfNecessary;	// IMP=0x00000000000727da
- (void)_applyLocalStoreAccountProperties:(id)arg1 toAccount:(id)arg2;	// IMP=0x0000000000072768
- (void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2;	// IMP=0x00000000000724fd
- (void)_postAccountsChangeNotification;	// IMP=0x0000000000072477
- (void)accountCredentialChanged:(id)arg1;	// IMP=0x00000000000723ec
- (void)accountWasRemoved:(id)arg1;	// IMP=0x0000000000072361
- (void)accountWasModified:(id)arg1;	// IMP=0x00000000000722d6
- (void)accountWasAdded:(id)arg1;	// IMP=0x000000000007224b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000072245
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072233
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000072228
- (id)storeAccountForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000071f5c
- (id)localStoreAccountWithError:(id *)arg1;	// IMP=0x0000000000071d3e
- (id)allStoreAccountsWithError:(id *)arg1;	// IMP=0x0000000000071c95
- (id)allManageableStoreAccountDSIDsWithError:(id *)arg1;	// IMP=0x00000000000719e5
- (id)allStoreAccountDSIDsWithError:(id *)arg1;	// IMP=0x00000000000716fd
- (_Bool)setLocalStoreAccountProperties:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000715ed
- (id)localStoreAccountPropertiesWithError:(id *)arg1;	// IMP=0x000000000007152e
- (id)verificationContextForAccountEstablishmentWithError:(id *)arg1;	// IMP=0x000000000007142b
- (id)verificationContextForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000712bd
- (void)synchronize;	// IMP=0x000000000007128b
- (_Bool)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000710c1
- (_Bool)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000070ef7
- (void)removeIdentityForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070ceb
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)arg1;	// IMP=0x0000000000070be1
- (id)identityPropertiesForDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000070aba
- (_Bool)updateActiveLockerAccountDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000070960
- (id)activeLockerAccountDSIDWithError:(id *)arg1;	// IMP=0x0000000000070889
- (_Bool)updateActiveAccountDSID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000070730
- (id)activeAccountDSIDWithError:(id *)arg1;	// IMP=0x000000000007067e
- (id)init;	// IMP=0x000000000007051c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

