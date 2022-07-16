//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACRemoteAccountStoreSession, ACTimedExpirer, NSArray, NSMutableDictionary, NSString, NSXPCListenerEndpoint;
@protocol ACRemoteAccountStoreSessionDelegate, OS_dispatch_queue;

@interface ACAccountStore : NSObject
{
    id _daemonAccountStoreDidChangeObserver;	// 8 = 0x8
    NSMutableDictionary *_accountCache;	// 16 = 0x10
    NSMutableDictionary *_accountsWithAccountTypeCache;	// 24 = 0x18
    NSXPCListenerEndpoint *_endpoint;	// 32 = 0x20
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;	// 40 = 0x28
    struct os_unfair_lock_s _remoteAccountStoreSessionLock;	// 48 = 0x30
    ACTimedExpirer *_remoteAccountStoreSessionExpirer;	// 56 = 0x38
    ACRemoteAccountStoreSession *_longLivedRemoteAccountStoreSession;	// 64 = 0x40
    struct os_unfair_lock_s _longLivedRemoteAccountStoreSessionLock;	// 72 = 0x48
    ACTimedExpirer *_longLivedRemoteAccountStoreSessionExpirer;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_replyQueue;	// 88 = 0x58
    NSString *_effectiveBundleID;	// 96 = 0x60
}

+ (id)_obsoleteAccountTypeIDsToRemove;	// IMP=0x00000000000294a9
+ (_Bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000013c73
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000011ba6
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;	// IMP=0x000000000001182a
+ (void)_setConnectionTimeout:(unsigned long long)arg1;	// IMP=0x0000000000007f86
+ (void)_setDefaultStore:(id)arg1;	// IMP=0x0000000000007f72
+ (id)defaultStore;	// IMP=0x0000000000007f11
- (void).cxx_destruct;	// IMP=0x000000000002e907
@property(readonly) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_effectiveBundleID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (id)_unsanitizeError:(id)arg1;	// IMP=0x000000000002e6b7
- (id)_sanitizeOptionsDictionary:(id)arg1;	// IMP=0x000000000002e5f6
- (void)shutdownAccountsD:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e065
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002da7a
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d3e0
- (void)reportTelemetryForLandmarkEvent:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d352
- (void)handleURL:(id)arg1;	// IMP=0x000000000002ce90
- (id)_createSMTPAccountForServerAccount:(id)arg1;	// IMP=0x000000000002caa1
- (void)_removeObsoleteOSXServerAccountForiOS:(id)arg1;	// IMP=0x000000000002ba2b
- (id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1;	// IMP=0x000000000002a5c0
- (void)_removeObsoleteAccountsInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029c20
- (void)removeObsoleteAccounts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000295c0
- (_Bool)triggerKeychainMigrationIfNecessary:(id *)arg1;	// IMP=0x0000000000028ea5
- (void)removeAccountFromPairedDevice:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002871b
- (void)removeAccountFromPairedDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028704
- (void)removeAccountsFromPairedDeviceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028009
- (void)removeAccountsFromPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027ff2
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027817
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027007
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000026ff2
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;	// IMP=0x0000000000026fde
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000267ce
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000000267b9
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;	// IMP=0x00000000000267a2
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000025f2f
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002580d
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024fa5
- (_Bool)addClientToken:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000000000249bf
- (id)clientTokenForAccount:(id)arg1;	// IMP=0x00000000000243ff
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023d2a
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;	// IMP=0x00000000000238a2
- (_Bool)isTetheredSyncingEnabledForDataclass:(id)arg1;	// IMP=0x0000000000023437
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022df9
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1;	// IMP=0x0000000000022de5
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022783
- (id)dataclassActionsForAccountDeletion:(id)arg1;	// IMP=0x000000000002276f
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002210d
- (id)dataclassActionsForAccountSave:(id)arg1;	// IMP=0x00000000000220f9
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021953
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;	// IMP=0x000000000002143e
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;	// IMP=0x0000000000020f29
- (id)displayTypeForAccountWithIdentifier:(id)arg1;	// IMP=0x00000000000209e1
- (id)syncableDataclassesForAccountType:(id)arg1;	// IMP=0x00000000000204cc
- (id)supportedDataclassesForAccountType:(id)arg1;	// IMP=0x000000000001ffb7
- (id)provisionedDataclassesForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f904
- (id)provisionedDataclassesForAccount:(id)arg1;	// IMP=0x000000000001f8f0
- (id)enabledDataclassesForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f23d
- (id)enabledDataclassesForAccount:(id)arg1;	// IMP=0x000000000001f229
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;	// IMP=0x000000000001eabf
- (id)childAccountsForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e28d
- (id)childAccountsForAccount:(id)arg1;	// IMP=0x000000000001e279
- (id)parentAccountForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001db58
- (id)parentAccountForAccount:(id)arg1;	// IMP=0x000000000001db44
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d502
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cd61
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c56a
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;	// IMP=0x000000000001bf94
- (id)allCredentialItems;	// IMP=0x000000000001bae5
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000001bad3
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001b3ce
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001acc8
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;	// IMP=0x000000000001acb3
- (id)credentialForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a5f6
- (id)credentialForAccount:(id)arg1;	// IMP=0x000000000001a5e2
- (void)migrateCredentialForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019f29
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019e6f
- (void)renewCredentialsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019e52
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019e35
- (void)renewCredentialsForAccount:(id)arg1 force:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019d29
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000190e5
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000185d4
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000184d0
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000184b6
- (void)clearGrantedPermissionsForAccountType:(id)arg1;	// IMP=0x0000000000018054
- (id)grantedPermissionsForAccountType:(id)arg1;	// IMP=0x0000000000017b3f
- (_Bool)permissionForAccountType:(id)arg1;	// IMP=0x0000000000017683
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;	// IMP=0x0000000000017221
- (void)setPermissionGranted:(_Bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;	// IMP=0x0000000000016c34
- (id)appPermissionsForAccountType:(id)arg1;	// IMP=0x000000000001671f
- (id)accessKeysForAccountType:(id)arg1;	// IMP=0x000000000001620a
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015a09
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000159f2
- (void)_checkSaveRateLimitForAccountType:(id)arg1;	// IMP=0x0000000000015900
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;	// IMP=0x000000000001543f
- (_Bool)saveVerifiedAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014b3f
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014b25
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014b0a
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014aed
- (void)_saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014004
- (void)saveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013fe7
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013556
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012d54
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012d3d
- (void)removeAccount:(id)arg1 withDeleteSync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012c8b
- (void)removeAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012657
- (void)insertAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011f22
- (_Bool)isPushSupportedForAccount:(id)arg1;	// IMP=0x00000000000113e5
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010c98
- (_Bool)hasAccountWithDescription:(id)arg1;	// IMP=0x0000000000010853
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ff1e
- (id)allAccountTypes;	// IMP=0x000000000000f946
- (id)allDataclasses;	// IMP=0x000000000000f497
- (void)accountsOnPairedDeviceWithAccountTypes:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ec0d
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000eb69
- (void)cachedAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e448
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000dbb7
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dba0
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d298
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d281
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ca0a
- (void)accountsWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c1f6
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000ba53
- (id)accountsWithAccountType:(id)arg1;	// IMP=0x000000000000b3fb
@property(readonly, nonatomic) __weak NSArray *accounts;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a682
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a00b
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000009ff7
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009985
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009225
- (id)accountWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008aaf
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x0000000000008a9b
- (void)setNotificationsEnabled:(_Bool)arg1;	// IMP=0x0000000000008a10
- (id)_connectionFailureError;	// IMP=0x00000000000089e5
@property(readonly) id <ACRemoteAccountStoreSessionDelegate> connectionDelegate;
- (void)disconnectFromRemoteAccountStore;	// IMP=0x00000000000089d7
@property(readonly, nonatomic) ACRemoteAccountStoreSession *longLivedRemoteAccountStoreSession;
@property(readonly, nonatomic) ACRemoteAccountStoreSession *remoteAccountStoreSession;
- (void)_clearAccountCaches;	// IMP=0x000000000000845c
- (void)dealloc;	// IMP=0x00000000000083e6
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;	// IMP=0x0000000000007fd4
- (id)initWithEffectiveBundleID:(id)arg1;	// IMP=0x0000000000007fbd
- (id)initWithRemoteEndpoint:(id)arg1;	// IMP=0x0000000000007fa9
- (id)init;	// IMP=0x0000000000007f93

@end

