//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DeliveryAccount
{
}

+ (id)newDefaultInstance;	// IMP=0x000000000002b857
+ (id)carrierDeliveryAccount;	// IMP=0x000000000002b6b0
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(_Bool)arg3;	// IMP=0x000000000002b5e9
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;	// IMP=0x000000000002b5d1
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;	// IMP=0x000000000002b55b
+ (id)existingAccountWithIdentifier:(id)arg1;	// IMP=0x000000000002b3d6
+ (id)accountWithIdentifier:(id)arg1;	// IMP=0x000000000002b263
+ (id)accountWithUniqueId:(id)arg1;	// IMP=0x000000000002b0f0
+ (void)removeDeliveryAccount:(id)arg1;	// IMP=0x000000000002aff6
+ (void)addDeliveryAccount:(id)arg1;	// IMP=0x000000000002af95
+ (id)deliveryAccounts;	// IMP=0x000000000002af40
+ (id)existingAccountForUniqueID:(id)arg1;	// IMP=0x000000000002adbb
+ (void)reloadDeliveryAccounts;	// IMP=0x000000000002ad5a
+ (void)_postDeliveryAccountsHaveChanged;	// IMP=0x000000000002acaf
+ (id)accountTypeIdentifier;	// IMP=0x000000000002ac9f
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;	// IMP=0x000000000002bec0
- (_Bool)shouldUseSaveSentForAccount:(id)arg1;	// IMP=0x000000000002beb8
- (_Bool)supportsOutboxCopy;	// IMP=0x000000000002beb0
- (_Bool)hasEnoughInformationForEasySetup;	// IMP=0x000000000002be52
- (_Bool)canBeFallbackAccount;	// IMP=0x000000000002be4a
- (id)displayHostname;	// IMP=0x000000000002be38
- (_Bool)hasNoReferences;	// IMP=0x000000000002bcc2
- (id)mailAccountIfAvailable;	// IMP=0x000000000002bcba
- (void)setMaximumMessageBytes:(unsigned long long)arg1;	// IMP=0x000000000002bc42
- (unsigned long long)maximumMessageBytes;	// IMP=0x000000000002bc10
- (void)_setAccountProperties:(id)arg1;	// IMP=0x000000000002bb77
- (void)setUsername:(id)arg1;	// IMP=0x000000000002baef
- (void)setShouldUseAuthentication:(_Bool)arg1;	// IMP=0x000000000002bab0
- (_Bool)shouldUseAuthentication;	// IMP=0x000000000002ba3b
- (id)identifier;	// IMP=0x000000000002b9af
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;	// IMP=0x000000000002b92e
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;	// IMP=0x000000000002b8c0
- (id)newDeliveryWithMessage:(id)arg1;	// IMP=0x000000000002b867
- (Class)deliveryClass;	// IMP=0x000000000002b85f

@end
