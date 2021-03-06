//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSAccounts
{
}

+ (id)attachmentCapabilities;	// IMP=0x0000000000003869
+ (_Bool)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000003542
+ (void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000333c
+ (_Bool)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003071
+ (id)customSignatureForSendingEmailAddress:(id)arg1;	// IMP=0x0000000000002e47
+ (_Bool)canSendMailSourceAccountManagement:(int)arg1;	// IMP=0x0000000000002da9
+ (_Bool)canSendMail;	// IMP=0x0000000000002d92
+ (void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002bc5
+ (void)accountValuesForKeys:(id)arg1 launchMobileMail:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002b9b
+ (void)accountValuesForKeys:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b6e
+ (_Bool)hasActiveAccounts;	// IMP=0x00000000000029ac
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000039f4
- (void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000002c3f

@end

