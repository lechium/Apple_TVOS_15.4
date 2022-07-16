//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

#import <AccountsDaemon/ACRemoteAccountStoreProtocol-Protocol.h>

@class ACDAccessPluginManager, ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDClient, ACDClientAuthorizationManager, ACDDatabaseBackupActivity, ACDDatabaseConnection, ACDDataclassOwnersManager, ACDFakeRemoteAccountStoreSession, ACRemoteDeviceProxy, NSMutableArray, NSString;
@protocol ACDAccountStoreDelegate;

@interface ACDAccountStore : ACAccountStore <ACRemoteAccountStoreProtocol>
{
    NSMutableArray *_accountChanges;	// 8 = 0x8
    ACDDatabaseConnection *_databaseConnection;	// 16 = 0x10
    ACDClientAuthorizationManager *_authorizationManager;	// 24 = 0x18
    ACDFakeRemoteAccountStoreSession *_fakeRemoteAccountStoreSession;	// 32 = 0x20
    _Bool _notificationsEnabled;	// 40 = 0x28
    _Bool _migrationInProgress;	// 41 = 0x29
    id <ACDAccountStoreDelegate> _delegate;	// 48 = 0x30
    ACDClient *_client;	// 56 = 0x38
    ACRemoteDeviceProxy *_remoteDeviceProxy;	// 64 = 0x40
    ACDAuthenticationPluginManager *_authenticationPluginManager;	// 72 = 0x48
    ACDAccessPluginManager *_accessPluginManager;	// 80 = 0x50
    ACDDataclassOwnersManager *_dataclassOwnersManager;	// 88 = 0x58
    ACDAuthenticationDialogManager *_authenticationDialogManager;	// 96 = 0x60
    ACDAccountNotifier *_accountNotifier;	// 104 = 0x68
    ACDDatabaseBackupActivity *_databaseBackupActivity;	// 112 = 0x70
}

+ (id)accountCache;	// IMP=0x0000000000024375
- (void).cxx_destruct;	// IMP=0x000000000003ca16
@property(nonatomic, getter=isMigrationInProgress) _Bool migrationInProgress; // @synthesize migrationInProgress=_migrationInProgress;
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity; // @synthesize databaseBackupActivity=_databaseBackupActivity;
@property(retain, nonatomic) ACDAccountNotifier *accountNotifier; // @synthesize accountNotifier=_accountNotifier;
@property(retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // @synthesize authenticationDialogManager=_authenticationDialogManager;
@property(retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // @synthesize dataclassOwnersManager=_dataclassOwnersManager;
@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // @synthesize accessPluginManager=_accessPluginManager;
@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // @synthesize authenticationPluginManager=_authenticationPluginManager;
@property(readonly, nonatomic) ACDDatabaseConnection *databaseConnection; // @synthesize databaseConnection=_databaseConnection;
@property(retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy; // @synthesize remoteDeviceProxy=_remoteDeviceProxy;
@property(readonly, nonatomic) ACDClientAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(nonatomic) __weak ACDClient *client; // @synthesize client=_client;
@property(nonatomic) __weak id <ACDAccountStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerMonitorForAccountsOfTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c39e
- (void)shutdownAccountsD:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c387
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c309
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000003bff5
- (void)migrateCredentialForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003bd54
- (void)removeAccountFromPairedDevice:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003bc1c
- (void)removeAccountsFromPairedDeviceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003bafe
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b9af
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b84a
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;	// IMP=0x000000000003b832
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a821
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a495
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000003a3b4
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a2fd
- (id)longLivedRemoteAccountStoreSession;	// IMP=0x000000000003a2eb
- (id)remoteAccountStoreSession;	// IMP=0x000000000003a297
- (void)handleURL:(id)arg1;	// IMP=0x0000000000039ca0
- (void)_removeClientTokenForAccountIdentifer:(id)arg1;	// IMP=0x0000000000039c08
- (id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0000000000039b38
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003992f
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039607
- (id)_clientTokenQueue;	// IMP=0x0000000000039586
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039400
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039369
- (void)isPushSupportedForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039312
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038d12
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038c7f
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038b04
- (void)accountExistsWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000388e5
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038842
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038413
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037e03
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000037d67
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037c56
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037b09
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037838
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037742
- (void)permissionForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000375d6
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000373f9
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000371ad
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036ef9
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036ede
- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000036ba8
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000365c0
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036387
- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035d94
- (id)_lockForAccountType:(id)arg1;	// IMP=0x0000000000035c20
- (_Bool)shouldPreventAccountCreationWithObsoleteAccountType;	// IMP=0x0000000000035c18
- (void)saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034f50
- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(_Bool)arg3 dataclassActions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000034f31
- (void)saveAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034f17
- (void)canSaveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034cc5
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000347f0
- (void)removeAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034240
- (void)insertAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033bfd
- (void)accessKeysForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000336b6
- (id)_supportedDataclassesForManagedAccountType:(id)arg1;	// IMP=0x00000000000334bf
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000332ad
- (id)_syncableDataclassesForManagedAccountType:(id)arg1;	// IMP=0x00000000000330b6
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032ea4
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032acc
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000326f4
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032224
- (_Bool)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;	// IMP=0x0000000000032046
- (_Bool)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;	// IMP=0x0000000000031e68
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003197a
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000314fa
- (id)_childAccountsForAccountWithID:(id)arg1;	// IMP=0x0000000000031052
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030c15
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030baf
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030943
- (id)_predicateForFetchingAccountsWithManagedAccountTypeID:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000308e7
- (id)_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000030213
- (id)_accountsWithAcountType:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000301f9
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000300b2
- (void)accountsWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030098
- (void)dataclassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fd7a
- (void)removeCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fa25
- (void)saveCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f574
- (void)insertCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ef2c
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ebbb
- (void)credentialItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e8b3
- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002e5fe
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dde4
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002d9e7
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d4c1
- (id)masterCredentialForAccountIdentifier:(id)arg1;	// IMP=0x000000000002d1bc
- (void)accountTypeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cdb0
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cb8d
- (void)accountTypesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c841
- (void)accountsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c7e0
- (id)_allAccounts_sync;	// IMP=0x000000000002c3f5
- (void)accountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c179
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c0f9
- (id)_credentialItemWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;	// IMP=0x000000000002c051
- (_Bool)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002bcce
- (_Bool)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000002bad1
- (void)_delegate_accountStoreDidSaveAccount:(id)arg1 changeType:(int)arg2;	// IMP=0x000000000002b9fc
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 oldAccount:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002a373
- (_Bool)_canSaveAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029bda
- (id)_dataclassWithName:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x0000000000029931
- (id)_accountTypeWithIdentifier:(id)arg1;	// IMP=0x000000000002988f
- (id)_displayAccountForAccount:(id)arg1;	// IMP=0x0000000000029800
- (id)_accountWithIdentifier:(id)arg1 prefetchKeypaths:(id)arg2;	// IMP=0x0000000000029731
- (id)_accountWithIdentifier:(id)arg1;	// IMP=0x00000000000296a4
- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000292fa
- (void)deleteAccountNoSave:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029294
- (_Bool)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000028478
- (void)updateAccountNoSave:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000283b3
- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000027a0e
- (void)addAccountNoSave:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002793e
- (_Bool)_performDataclassActions:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002767d
- (id)_commitOrRollbackDataclassActions:(id)arg1 forAccount:(id)arg2 originalEnabledDataclasses:(id)arg3;	// IMP=0x0000000000027472
- (_Bool)_shouldSendDidSaveNotificationForAccount:(id)arg1;	// IMP=0x00000000000271cb
- (_Bool)_saveWithError:(id *)arg1;	// IMP=0x000000000002608b
- (_Bool)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000252e0
- (_Bool)accountsExistWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000025030
- (void)accountsOnPairedDeviceWithAccountTypes:(id)arg1 withOptions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024c02
- (id)accountsWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000024831
- (id)accountTypeWithIdentifier:(id)arg1;	// IMP=0x00000000000245a6
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;	// IMP=0x0000000000024442
- (id)init;	// IMP=0x00000000000243eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

