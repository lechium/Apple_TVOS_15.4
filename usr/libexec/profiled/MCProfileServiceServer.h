//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, LSApplicationWorkspace, MCBackgroundActivityManager, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MCProfileServiceServer : NSObject
{
    _Bool _memberQueueNeedToRecomputeNagMetadata;	// 8 = 0x8
    _Bool _memberQueueHasMigrated;	// 9 = 0x9
    _Bool _memberQueueHasActivationRecordChangesPending;	// 10 = 0xa
    struct os_unfair_lock_s _checkInLock;	// 12 = 0xc
    int _mobileKeybagLockStateChangeNotificationToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workerQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_workerGroup;	// 32 = 0x20
    MCBackgroundActivityManager *_workerQueueBackgroundActivityManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_monitorQueue;	// 48 = 0x30
    unsigned long long _workerQueueLastCarrierProfileCheckTime;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_memberQueue;	// 64 = 0x40
    double _memberQueueIdleTimeInterval;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_clientRestrictionQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_mailAccountsQueue;	// 88 = 0x58
    id _powerAssertionAssertedNotificationToken;	// 96 = 0x60
    id _powerAssertionDeassertedNotificationToken;	// 104 = 0x68
    LSApplicationWorkspace *_appWorkspace;	// 112 = 0x70
    CoreTelephonyClient *_coreTelephonyClient;	// 120 = 0x78
}

+ (id)_optionsForCarrierProfileInstallationForCarrierIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x002000000000b37b
+ (id)_descriptionForServiceSubscriptionContext:(id)arg1;	// IMP=0x001000000000a97f
+ (id)sharedServer;	// IMP=0x0010000000001e78
- (void).cxx_destruct;	// IMP=0x0020000000010990
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property(nonatomic) int mobileKeybagLockStateChangeNotificationToken; // @synthesize mobileKeybagLockStateChangeNotificationToken=_mobileKeybagLockStateChangeNotificationToken;
@property(retain, nonatomic) id powerAssertionDeassertedNotificationToken; // @synthesize powerAssertionDeassertedNotificationToken=_powerAssertionDeassertedNotificationToken;
@property(retain, nonatomic) id powerAssertionAssertedNotificationToken; // @synthesize powerAssertionAssertedNotificationToken=_powerAssertionAssertedNotificationToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mailAccountsQueue; // @synthesize mailAccountsQueue=_mailAccountsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientRestrictionQueue; // @synthesize clientRestrictionQueue=_clientRestrictionQueue;
@property(nonatomic) _Bool memberQueueHasActivationRecordChangesPending; // @synthesize memberQueueHasActivationRecordChangesPending=_memberQueueHasActivationRecordChangesPending;
@property(nonatomic) _Bool memberQueueHasMigrated; // @synthesize memberQueueHasMigrated=_memberQueueHasMigrated;
@property(nonatomic) _Bool memberQueueNeedToRecomputeNagMetadata; // @synthesize memberQueueNeedToRecomputeNagMetadata=_memberQueueNeedToRecomputeNagMetadata;
@property(nonatomic) double memberQueueIdleTimeInterval; // @synthesize memberQueueIdleTimeInterval=_memberQueueIdleTimeInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(nonatomic) unsigned long long workerQueueLastCarrierProfileCheckTime; // @synthesize workerQueueLastCarrierProfileCheckTime=_workerQueueLastCarrierProfileCheckTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
@property(retain, nonatomic) MCBackgroundActivityManager *workerQueueBackgroundActivityManager; // @synthesize workerQueueBackgroundActivityManager=_workerQueueBackgroundActivityManager;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *workerGroup; // @synthesize workerGroup=_workerGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) struct os_unfair_lock_s checkInLock; // @synthesize checkInLock=_checkInLock;
- (void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 repeatingInterval:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000010590
- (void)managingOrganizationInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ff4c
- (void)monitorEnrollmentStateForClient:(id)arg1 personaID:(id)arg2;	// IMP=0x001000000000fe7c
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fd4b
- (void)setUserBookmarks:(id)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000fbc5
- (id)bookmarkDictsFromBookmarks:(id)arg1;	// IMP=0x001000000000f9de
- (id)bookmarksFromBookmarkDicts:(id)arg1;	// IMP=0x001000000000f7e1
- (void)setURLsFromUserBookmarkDictsAsSettings:(id)arg1 sender:(id)arg2;	// IMP=0x001000000000f48d
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000effd
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eeee
- (void)restoreCloudConfigAndMDMProfileFromSetAsideDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eae8
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e973
- (_Bool)storeCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000000e8f2
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e7c7
- (void)reducedMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e6ca
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e6ad
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e533
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e361
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e20c
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e118
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000de25
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dd14
- (void);	// IMP=0x001000000000dc51
- (void)workerQueueUpdateMISTrust;	// IMP=0x001000000000dc0d
- (void)revalidateManagedApps;	// IMP=0x001000000000db4a
- (void)workerQueueRevalidateManagedApps;	// IMP=0x001000000000daca
- (void)removeExpiredProfiles;	// IMP=0x001000000000da07
- (void)workerQueueRemoveExpiredProfiles;	// IMP=0x001000000000d994
- (void)managedAppIDsWithFlags:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d8da
- (void)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d648
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d3f4
- (id)_localProvisioningProfileError;	// IMP=0x001000000000d373
- (id)_badProvisioningProfileError;	// IMP=0x001000000000d2f2
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d0b8
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000000cd18
- (void)workerQueueNotifyUserLoggedIn;	// IMP=0x001000000000ccdb
- (void)notifyUserLoggedIn;	// IMP=0x001000000000cc18
- (void)_markPostUserLoginWorkCompleted;	// IMP=0x001000000000cc12
- (_Bool)_hasCompletedPostLoginWork;	// IMP=0x001000000000cc0a
- (void)notifyProvisioningProfilesChanged;	// IMP=0x001000000000c9fe
- (void)notifyGracePeriodChanged;	// IMP=0x001000000000c8ca
- (void)notifyFirstUnlock;	// IMP=0x001000000000c807
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c71f
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c620
- (void)workerQueueNotifyDeviceUnlockedAndPasscodeRequired;	// IMP=0x001000000000c5f2
- (void)workerQueueNotifyDeviceUnlocked;	// IMP=0x001000000000c5e0
- (void)workerQueueReadBiometricState;	// IMP=0x001000000000c4f7
- (void)_workerQueueCheckCarrierProfileOnUnlockSometimes;	// IMP=0x001000000000c192
- (void)_workerQueueForceCheckOfCarrierProfileOnNextUnlock;	// IMP=0x001000000000c0fb
- (id)_carrierNameFromContext:(id)arg1;	// IMP=0x001000000000bf0f
- (id)_carrierIdentifierFromContext:(id)arg1;	// IMP=0x001000000000befa
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b456
- (void)_workerQueueCheckCarrierProfileForCarrierIdentifier:(id)arg1 name:(id)arg2 atPath:(id)arg3 forceReinstallation:(_Bool)arg4;	// IMP=0x001000000000aa41
- (void)_workerQueueRemoveAllCarrierProfiles;	// IMP=0x001000000000a728
- (void)_workerQueueSignIntoFaceTimeWithUsername:(id)arg1;	// IMP=0x001000000000a722
- (void)signIntoFaceTimeWithUsername:(id)arg1;	// IMP=0x001000000000a710
- (void)openSettingsAppForProfileInstallation:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000000a5c3
- (id)URLForInstallingProfileInSettingsApp:(id)arg1 returningToBundleID:(id)arg2;	// IMP=0x001000000000a548
- (void)_handleSettingsJumpWithProfileData:(id)arg1 targetDeviceType:(unsigned long long)arg2 bundleID:(id)arg3;	// IMP=0x001000000000a45f
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a162
- (void)removeValueSetting:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009f9f
- (void)removeBoolSetting:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009d8f
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 senderPID:(int)arg7 sender:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0010000000009adb
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009a65
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000991b
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000097c0
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009733
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096a6
- (void)resetPasscodeMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000954d
- (void)isPasscodeCompliantWithNamedPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009391
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000918c
- (void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008f96
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 senderBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008c0e
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008aa6
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008967
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008776
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000850a
- (void)setAllowedURLStrings:(id)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000083bc
- (void)setSpellCheckAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000827f
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008142
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008005
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007ec8
- (void)setSmartPunctuationAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007d8b
- (void)setAutoCorrectionAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007c4e
- (void)loadMailAccountsWithAuditToken:(CDStruct_6ad76789)arg1 filteringEnabled:(_Bool)arg2 sourceAccountManagement:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007760
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 messageSendingAppBundleID:(id)arg2 hostAppBundleID:(id)arg3 accountIsManaged:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000007017
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006a1b
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000063e8
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006316
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000062f4
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000062d2
- (_Bool)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(_Bool *)arg3 outAllowUnmanagedAccounts:(_Bool *)arg4;	// IMP=0x001000000000616b
- (void)mayShareToWhitelistedSourceUnmanagedTargetAppWithServiceName:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005efd
- (_Bool)mayOpenFromManagedToUnmanaged;	// IMP=0x0010000000005ea4
- (_Bool)mayOpenFromUnmanagedToManaged;	// IMP=0x0010000000005e4b
- (_Bool)isOpenInRestrictionInEffect;	// IMP=0x0010000000005e14
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005967
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000586f
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005716
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarningMessage:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000000550b
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005242
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 source:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004f92
- (void)updateProfileIdentifier:(id)arg1 interactionClient:(id)arg2 source:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004d32
- (void)installProfileData:(id)arg1 interactionClient:(id)arg2 options:(id)arg3 source:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000004849
- (id)_handleProvisioningProfileData:(id)arg1 jumpToSettings:(_Bool)arg2 bundleID:(id)arg3;	// IMP=0x00100000000045f5
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003f66
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003df1
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003c76
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003b06
- (void)verifiedMDMProfileIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003990
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003881
- (void)_sendEffectiveSettingsChangedNotification;	// IMP=0x00100000000037f8
- (void)_sendRestrictionChangedNotification;	// IMP=0x0010000000003783
- (void)workerQueueCheckForAutoInstallProfiles;	// IMP=0x001000000000377d
- (void)workerQueueRecomputeNagMessage;	// IMP=0x00100000000036ca
- (void)workerQueueDidRecomputeNagMessageWithResult:(_Bool)arg1;	// IMP=0x0010000000003513
- (void)_workerQueuePrepareForService;	// IMP=0x0010000000002d4b
- (void)reapplyAppEnforcedRestrictionsWithAssertion:(id)arg1;	// IMP=0x00100000000028b5
- (void)localeChanged;	// IMP=0x001000000000285b
- (void)notifyBatterySaverModeChanged;	// IMP=0x00100000000025d9
- (void)start;	// IMP=0x001000000000204e
- (id)init;	// IMP=0x0010000000001ecd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

