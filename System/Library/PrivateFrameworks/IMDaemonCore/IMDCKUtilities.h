//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDCKSyncStateDelegate-Protocol.h>

@class FTDeviceSupport, IDSServerBag, IMDCKSyncState, IMDefaults, IMLockdownManager, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate>
{
    _Bool _didKeyRollPendingCheck;	// 8 = 0x8
    _Bool _useDeprecatedApi;	// 9 = 0x9
    IMDCKSyncState *_syncState;	// 16 = 0x10
    IMLockdownManager *_lockdownManager;	// 24 = 0x18
    IDSServerBag *_serverBag;	// 32 = 0x20
    FTDeviceSupport *_deviceSupport;	// 40 = 0x28
    IMDefaults *_imDefaults;	// 48 = 0x30
}

+ (void)addConditionChecks:(unsigned long long)arg1 toCriteria:(id)arg2;	// IMP=0x000000000001112a
+ (void)calculateAndSaveAliasesToDefaults;	// IMP=0x0000000000011076
+ (id)calculateAliasesForDefaults;	// IMP=0x0000000000010cd7
+ (id)readAliasesFromDefaults;	// IMP=0x0000000000010ab1
+ (id)_idsAccountController;	// IMP=0x0000000000010a42
+ (id)im_AKSecurityLevelKey;	// IMP=0x00000000000109d6
+ (id)restoreFailuresDirectory;	// IMP=0x0000000000009993
+ (id)sharedInstance;	// IMP=0x00000000000097e2
+ (id)logHandle;	// IMP=0x0000000000009584
- (void).cxx_destruct;	// IMP=0x00000000000111ec
@property(nonatomic) _Bool useDeprecatedApi; // @synthesize useDeprecatedApi=_useDeprecatedApi;
@property(retain, nonatomic) IMDefaults *imDefaults; // @synthesize imDefaults=_imDefaults;
@property(retain, nonatomic) FTDeviceSupport *deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(retain, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(retain, nonatomic) IMLockdownManager *lockdownManager; // @synthesize lockdownManager=_lockdownManager;
@property(nonatomic) _Bool didKeyRollPendingCheck; // @synthesize didKeyRollPendingCheck=_didKeyRollPendingCheck;
- (void)disableAllDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000107c3
@property(readonly, nonatomic) _Bool isInCloudKitDemoMode;
- (void)eligibleForTruthZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010562
- (void)downgradingFromHSA2AndDisablingMOC;	// IMP=0x00000000000104ff
- (void)enableMOCIfNeeded;	// IMP=0x00000000000104d1
- (_Bool)signedIntoiCloudAndiMessageAndiCloudAccountMatchesiMessageAccount;	// IMP=0x00000000000101c7
- (_Bool)iCloudAccountMatchesiMessageAccount;	// IMP=0x000000000000fc62
- (_Bool)deviceIsPhoneOrWatch;	// IMP=0x000000000000fc1b
- (unsigned long long)_primaryiCloudAccountSecurityLevel;	// IMP=0x000000000000fb3b
- (_Bool)_allowDestructiveMOCFeaturesBasedOnDSID;	// IMP=0x000000000000fb33
- (id)dsid;	// IMP=0x000000000000fa9a
- (id)_primaryiCloudAccountAltDSID;	// IMP=0x000000000000fa1a
- (id)_primaryiCloudAccount;	// IMP=0x000000000000f9ca
- (id)_accountManager;	// IMP=0x000000000000f94f
- (void)PCSReportManateeStatusAsync:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x000000000000f644
- (unsigned int)PCSReportManateeStatus;	// IMP=0x000000000000f57e
- (_Bool)logDumpIsNecessaryAfterSync;	// IMP=0x000000000000ec7f
- (_Bool)logDumpIsExpected;	// IMP=0x000000000000ebbb
- (_Bool)_isRunningInAutomation;	// IMP=0x000000000000ebb1
- (id)ckStatisticCalculations;	// IMP=0x000000000000eba7
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(_Bool)arg4 requirePreviousPrompt:(_Bool)arg5 willSendBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000000eb79
- (_Bool)_isLogDumpAllowed;	// IMP=0x000000000000eb71
- (void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(_Bool)arg2 didCompleteChatSync:(_Bool)arg3 didSucceedSyncingChats:(_Bool)arg4 didCompleteMessageSync:(_Bool)arg5 didSucceedSyncingMessages:(_Bool)arg6 didCompleteAttachmentSync:(_Bool)arg7 didSucceedSyncingAttachments:(_Bool)arg8 syncAttemptCount:(unsigned long long)arg9;	// IMP=0x000000000000eb6b
- (void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(_Bool)arg2 didStartSync:(_Bool)arg3 didFinishSync:(_Bool)arg4 didSucceedSyncing:(_Bool)arg5;	// IMP=0x000000000000eb65
- (void)logToPowerLogForLogDumpGUID:(id)arg1 logDumpCompleted:(_Bool)arg2 logDumpSucceeded:(_Bool)arg3 logDumpSendingCompleted:(_Bool)arg4 logDumpSendingSucceeded:(_Bool)arg5 reason:(id)arg6;	// IMP=0x000000000000eb5f
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(_Bool)arg4 willSendBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000000eb3e
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3;	// IMP=0x000000000000eb20
- (id)simplifiedError:(id)arg1;	// IMP=0x000000000000e987
- (id)findRootCauses:(id)arg1;	// IMP=0x000000000000e638
- (_Bool)isCKPartialError:(id)arg1;	// IMP=0x000000000000e5ab
- (void)reportCompletionForSyncType:(long long)arg1 isCoreDuetSync:(_Bool)arg2 onAttempt:(unsigned long long)arg3 wasSuccessful:(_Bool)arg4 duration:(double)arg5;	// IMP=0x000000000000e476
- (id)finalSyncStateFor:(long long)arg1;	// IMP=0x000000000000e448
- (void)reportErrorForSyncType:(long long)arg1 syncStep:(id)arg2 response:(long long)arg3 error:(id)arg4;	// IMP=0x000000000000e3d0
- (void)reportZoneCreation:(id)arg1;	// IMP=0x000000000000e326
- (void)postSyncStateToCloudKit:(id)arg1;	// IMP=0x000000000000e263
- (_Bool)isLocalCachedSaltPresent;	// IMP=0x000000000000e1ea
- (_Bool)shouldKickOffWriteForSyncType:(long long)arg1;	// IMP=0x000000000000e1de
- (void)_showCKLogNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e00e
- (_Bool)_deviceActive;	// IMP=0x000000000000df3b
- (id)deviceActiveString;	// IMP=0x000000000000df11
- (id)lastDeviceBackUpDate;	// IMP=0x000000000000df09
- (id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1;	// IMP=0x000000000000dc79
- (id)newfilteredArrayRemovingCKRecordDupes:(id)arg1;	// IMP=0x000000000000d9b6
- (_Bool)deviceConditionsAllowPeriodicSync;	// IMP=0x000000000000d924
- (id)deviceConditions;	// IMP=0x000000000000d7fb
@property(readonly, nonatomic, getter=isKeyRollPending) _Bool keyRollPending;
@property(readonly, nonatomic) _Bool isSyncingPaused;
@property(readonly, nonatomic, getter=isDeviceOnWifi) _Bool deviceOnWifi;
@property(readonly, nonatomic, getter=isDeviceCharging) _Bool deviceCharging;
- (_Bool)_isSyncingPausedOverride;	// IMP=0x000000000000d407
- (void)primaryAccountHasiCloudBackupEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d2b9
- (id)_personIdFromAccount:(id)arg1;	// IMP=0x000000000000d2a4
- (void)fetchiCloudAccountPersonID:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d0fa
- (void)_fetchPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cf8d
- (void)_setiCloudSettingsSwitchEnabled:(_Bool)arg1;	// IMP=0x000000000000cf87
- (void)evalToggleiCloudSettingsSwitch;	// IMP=0x000000000000cf81
- (void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;	// IMP=0x000000000000cf7b
- (id)_accountStore;	// IMP=0x000000000000cf10
- (void)resetLastSyncDate;	// IMP=0x000000000000ce78
- (id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1;	// IMP=0x000000000000cdcb
- (id)syncFailureMetricString:(id)arg1 isRecoverable:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000000ccb8
- (id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2;	// IMP=0x000000000000cbbe
- (void)_askToTapToRadarWithString:(id)arg1 internalOnly:(_Bool)arg2;	// IMP=0x000000000000cbb8
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2 initialSync:(_Bool)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5;	// IMP=0x000000000000cbb2
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2 initialSync:(_Bool)arg3 sendToHandle:(id)arg4;	// IMP=0x000000000000cb8f
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2 initialSync:(_Bool)arg3;	// IMP=0x000000000000cb0f
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(_Bool)arg2;	// IMP=0x000000000000ca92
- (id)logCollectorAddress;	// IMP=0x000000000000ca0f
- (_Bool)shouldCollectDailyLogDumpForRestoreFailures;	// IMP=0x000000000000c9d9
- (_Bool)shouldCollectDailyLogDump;	// IMP=0x000000000000c9a1
- (_Bool)shouldLogDumpOnCloudKitError;	// IMP=0x000000000000c958
- (_Bool)shouldPresentTTROnCloudKitError;	// IMP=0x000000000000c920
- (_Bool)_checkIfEnabledByServerBagOrDefault:(id)arg1;	// IMP=0x000000000000c78b
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;	// IMP=0x000000000000c71f
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibility;	// IMP=0x000000000000c70b
- (void)fetchCloudKitAccountStatusAndUpdateEligibilityAndNeedsRepairStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c428
- (void)_setEligibleToToggleMiCSwitch:(_Bool)arg1;	// IMP=0x000000000000c41c
- (_Bool)shouldRepairAccountWithAccountStatus:(long long)arg1 securityLevel:(unsigned long long)arg2;	// IMP=0x000000000000c2b4
- (_Bool)_accountNeedsRepairOverride;	// IMP=0x000000000000c1ca
- (void)fetchCloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bb22
- (id)_createAccountError:(id)arg1;	// IMP=0x000000000000ba49
- (_Bool)_checkEligibilityWithAccountInfo:(id)arg1;	// IMP=0x000000000000ba34
- (id)_authenticationController;	// IMP=0x000000000000b9c9
- (_Bool)accountIsVerifiedForMOCAndSafeForCacheDelete;	// IMP=0x000000000000b636
- (id)internalQueue;	// IMP=0x000000000000b5df
- (_Bool)removeFromBackUpAllowed;	// IMP=0x000000000000b4e0
- (_Bool)_serverAllowsRemovalFromBackUp;	// IMP=0x000000000000b3fa
- (_Bool)cacheDeleteEnabled;	// IMP=0x000000000000b321
- (_Bool)enableAttachmentMetricCollection;	// IMP=0x000000000000b210
- (_Bool)_serverAllowsCacheDelete;	// IMP=0x000000000000b0f2
- (void)_resetKeepMessagesSettingandBroadcastToAllDevices;	// IMP=0x000000000000af56
- (_Bool)_shouldDisplayPopUpForResettingKeepMessages;	// IMP=0x000000000000aee0
- (id)_getKeepMessagesValue;	// IMP=0x000000000000aec2
- (_Bool)serverAllowsAnalyticDetailsSubmission;	// IMP=0x000000000000adc0
- (_Bool)serverAllowsAnalyticSubmission;	// IMP=0x000000000000acbe
- (_Bool)serverAllowsMetricSubmission;	// IMP=0x000000000000abab
- (void)setCloudKitSyncingEnabled:(_Bool)arg1;	// IMP=0x000000000000a9fd
- (_Bool)cloudKitSyncDownloadAssetsOnly;	// IMP=0x000000000000a9ba
- (_Bool)cloudKitSyncingEnabled;	// IMP=0x000000000000a8d5
- (long long)_mininimumServerBagClientValue;	// IMP=0x000000000000a860
- (_Bool)_shouldiCloudSwitchBeEnabled;	// IMP=0x000000000000a6a5
- (_Bool)_mocFeatureEnabled;	// IMP=0x000000000000a661
- (_Bool)_isInExitState;	// IMP=0x000000000000a643
- (_Bool)_serverAllowsSync;	// IMP=0x000000000000a5e6
- (void)checkiCloudQuota:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a3a2
- (unsigned long long)messageDatabaseSize;	// IMP=0x000000000000a345
- (void)isFirstSyncWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a250
- (long long)overrideNumberOfChatsToWrite;	// IMP=0x000000000000a1a7
- (long long)overrideNumberOfChatsToFetch;	// IMP=0x000000000000a0fe
- (_Bool)shouldForceArchivedMessagesSync;	// IMP=0x000000000000a090
- (_Bool)shouldUseDevNickNameContainer;	// IMP=0x000000000000a025
- (_Bool)shouldUseDevContainer;	// IMP=0x0000000000009fba
- (void)keyRollPendingStateDidChange;	// IMP=0x0000000000009f60
- (void)broadcastCloudKitStateAfterClearingErrors;	// IMP=0x0000000000009f0a
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;	// IMP=0x0000000000009d62
- (void)broadcastCloudKitState;	// IMP=0x0000000000009cd5
- (void)syncStateWillUpdate:(id)arg1;	// IMP=0x0000000000009af5
@property(readonly, nonatomic) IMDCKSyncState *syncState; // @synthesize syncState=_syncState;
- (id)init;	// IMP=0x0000000000009977
- (id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4;	// IMP=0x000000000000987b
- (id)_truthDatabase;	// IMP=0x0000000000009750
- (id)_truthContainer;	// IMP=0x00000000000096f9
- (id)exitManager;	// IMP=0x00000000000096e0
- (id)logHandle;	// IMP=0x00000000000095e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

