//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCTAdapter, IDSTemporaryPhoneUserExpirationManager, IDSTransactionQueue, IDSUserStore, NSString;

@interface IDSTemporaryPhoneUserSynchronizer : NSObject
{
    IDSUserStore *_userStore;	// 8 = 0x8
    IDSCTAdapter *_ctAdapter;	// 16 = 0x10
    IDSTemporaryPhoneUserExpirationManager *_expirationManager;	// 24 = 0x18
    IDSTransactionQueue *_transactionQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000006a9b60
@property(retain, nonatomic) IDSTransactionQueue *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) IDSTemporaryPhoneUserExpirationManager *expirationManager; // @synthesize expirationManager=_expirationManager;
@property(retain, nonatomic) IDSCTAdapter *ctAdapter; // @synthesize ctAdapter=_ctAdapter;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
- (void)expirationManager:(id)arg1 didExpireUser:(id)arg2;	// IMP=0x00100000006a9820
- (void);	// IMP=0x00100000006a97a0
- (void)userStore:(id)arg1 didRemoveAuthenticationCertificateForUser:(id)arg2;	// IMP=0x00100000006a9730
- (void)userStore:(id)arg1 didAddAuthenticationCertificate:(id)arg2 forUser:(id)arg3;	// IMP=0x00100000006a96a0
- (void)userStore:(id)arg1 didRemoveUser:(id)arg2 withAuthenticationCertificate:(id)arg3;	// IMP=0x00100000006a8e70
- (void)userStore:(id)arg1 didUpdateUser:(id)arg2;	// IMP=0x00100000006a8c20
- (void)userStore:(id)arg1 didAddUser:(id)arg2;	// IMP=0x00100000006a89d0
- (id)updatedUserSetForRealm:(long long)arg1 currentUsers:(id)arg2;	// IMP=0x00100000006a81b0
- (void)forceRemoveUser:(id)arg1 silently:(_Bool)arg2;	// IMP=0x00100000006a7f70
- (id)initWithUserStore:(id)arg1 ctAdapter:(id)arg2;	// IMP=0x00100000006a7e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

