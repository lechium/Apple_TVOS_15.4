//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACRemoteAccountStoreProtocol-Protocol.h>

@class ACDAccountStore, NSString;

__attribute__((visibility("hidden")))
@interface ACDAccountStoreFilter : NSObject <ACRemoteAccountStoreProtocol>
{
    ACDAccountStore *_backingAccountStore;	// 8 = 0x8
}

+ (id)new;	// IMP=0x0000000000067cd7
- (void).cxx_destruct;	// IMP=0x000000000007260c
@property(readonly, nonatomic) ACDAccountStore *backingAccountStore; // @synthesize backingAccountStore=_backingAccountStore;
- (void)registerMonitorForAccountsOfTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007239f
- (void)shutdownAccountsD:(CDUnknownBlockType)arg1;	// IMP=0x00000000000720f9
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071e59
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071bb3
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000007190d
- (void)removeAccountFromPairedDevice:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000071653
- (void)removeAccountsFromPairedDeviceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000713b3
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000710fc
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000070e24
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;	// IMP=0x0000000000070be3
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007083a
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000705db
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000070324
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000700a3
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006fe44
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006fbda
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006f970
- (void)handleURL:(id)arg1;	// IMP=0x000000000006f896
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006f62c
- (void)isPushSupportedForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f3cd
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f16e
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ef0f
- (void)migrateCredentialForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006eb69
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e5eb
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e551
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006e2a0
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006e21a
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006e194
- (void)permissionForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006e10e
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006de1d
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006dd97
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006dcf7
- (void)removeAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006dc71
- (void)insertAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006dbeb
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006db65
- (void)saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006d5e2
- (void)saveAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d064
- (void)canSaveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006cfde
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ccbf
- (void)accessKeysForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006cc39
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006cbb3
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006cb2d
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006caa7
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006ca35
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c9af
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c929
- (void)dataclassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c8b7
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c831
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c7ab
- (void)removeCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c725
- (void)saveCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c69f
- (void)insertCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c619
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006c57f
- (void)credentialItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c50d
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006c37a
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006c222
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c19c
- (void)accountTypeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c116
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c090
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006bf38
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006bc7a
- (void)accountExistsWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006bbf4
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b995
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b736
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b478
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b312
- (void)accountsOnPairedDeviceWithAccountTypes:(id)arg1 withOptions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006abf1
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a72e
- (void)accountsWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006a1e7
- (void)accountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006a081
- (void)accountTypesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a00f
- (void)accountsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000069d6a
- (void)setNotificationsEnabled:(_Bool)arg1;	// IMP=0x0000000000069d1e
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069abf
- (_Bool)_clientHasPermissionToAddAccount:(id)arg1;	// IMP=0x0000000000068fb7
- (_Bool)_isClientPermittedToRemoveAccount:(id)arg1;	// IMP=0x0000000000068c4e
- (_Bool)_isClientPermittedToAccessAccount:(id)arg1;	// IMP=0x0000000000068bd7
- (id)_appPermissionsForAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000068919
- (_Bool)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1;	// IMP=0x000000000006868c
- (_Bool)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1;	// IMP=0x000000000006859b
- (_Bool)isClientEntitledToAccessAccountTypeWithIdentifier:(id)arg1;	// IMP=0x0000000000067edb
- (_Bool)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2;	// IMP=0x0000000000067e55
- (_Bool)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2;	// IMP=0x0000000000067d85
- (id)initWithBackingAccountStore:(id)arg1;	// IMP=0x0000000000067d1a
- (id)init;	// IMP=0x0000000000067cef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

