//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKAppletSubcredentialManagementSession
{
}

+ (id)createSessionWithDelegate:(id)arg1;	// IMP=0x000000000037bd98
- (void)deleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000037c4ae
- (void)listReceivedSharingInvitationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000037c45d
- (void)listSharingInvitationsForKeyIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000037c40c
- (void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037c3f6
- (void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000037c3e0
- (void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000037c3c4
- (id)trackSubcredential:(id)arg1 slotIdentifier:(id)arg2 confidentialMailboxData:(id)arg3 ephemeralPublicKey:(id)arg4 withReceipt:(id)arg5;	// IMP=0x000000000037c397
- (void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037c0ee
- (void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037be43
- (void)listCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000037bda0

@end

