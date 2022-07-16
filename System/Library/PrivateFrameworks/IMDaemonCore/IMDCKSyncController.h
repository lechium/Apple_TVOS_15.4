//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/IMDCKAbstractSyncControllerDelegate-Protocol.h>
#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate-Protocol.h>
#import <IMDaemonCore/IMSystemMonitorListener-Protocol.h>

@class IMTimer, NSDate, NSString, NSTimer;

@interface IMDCKSyncController <IMDXPCEventStreamHandlerDelegate, IMSystemMonitorListener, IMDCKAbstractSyncControllerDelegate>
{
    _Bool _shouldReloadConversations;	// 8 = 0x8
    NSDate *_syncStartDate;	// 16 = 0x10
    NSTimer *_longRunningSyncTimer;	// 24 = 0x18
    IMTimer *_nightlySyncTimer;	// 32 = 0x20
    long long _initialSyncAttempts;	// 40 = 0x28
    NSDate *_lastLogDumpDate;	// 48 = 0x30
    NSDate *_lastRestoreFailureLogDumpDate;	// 56 = 0x38
    NSTimer *_reloadTimer;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000000008cb00
- (void).cxx_destruct;	// IMP=0x0000000000099899
@property(retain) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property _Bool shouldReloadConversations; // @synthesize shouldReloadConversations=_shouldReloadConversations;
@property(retain, nonatomic) NSDate *lastRestoreFailureLogDumpDate; // @synthesize lastRestoreFailureLogDumpDate=_lastRestoreFailureLogDumpDate;
@property(retain, nonatomic) NSDate *lastLogDumpDate; // @synthesize lastLogDumpDate=_lastLogDumpDate;
@property(nonatomic) long long initialSyncAttempts; // @synthesize initialSyncAttempts=_initialSyncAttempts;
@property(retain, nonatomic) IMTimer *nightlySyncTimer; // @synthesize nightlySyncTimer=_nightlySyncTimer;
@property(retain, nonatomic) NSTimer *longRunningSyncTimer; // @synthesize longRunningSyncTimer=_longRunningSyncTimer;
@property(retain, nonatomic) NSDate *syncStartDate; // @synthesize syncStartDate=_syncStartDate;
- (_Bool)logCloudKitAnalytics;	// IMP=0x0000000000099470
- (void)_submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2;	// IMP=0x00000000000993e6
- (_Bool)_serverDeniesDailySyncStateAnalytics;	// IMP=0x00000000000993cc
- (_Bool)_serverDeniesPeriodicSyncAnalytics;	// IMP=0x00000000000993b2
- (id)_periodicSyncStateDictionary;	// IMP=0x000000000009908d
- (_Bool)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)arg1 firstFullSyncCompletedDate:(id)arg2;	// IMP=0x0000000000099066
- (id)_dailySyncStateDictionary;	// IMP=0x0000000000098e7a
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1;	// IMP=0x0000000000098d6f
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 keys:(id)arg2;	// IMP=0x0000000000098bca
- (void)clearAnalyticDefaultsAndLocalSyncState;	// IMP=0x0000000000098b41
- (void)performOneTimeAccountUpgradeCheckIfNeeded;	// IMP=0x0000000000098a1c
- (_Bool)enforceAccountsMatchForMocAndShowDialogIfNeeded;	// IMP=0x00000000000987ba
- (void)handleAKUserInfoChangedNotification:(id)arg1;	// IMP=0x0000000000098483
- (void)updateSecurityLevelDowngradedIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00000000000980cd
- (void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000097f37
- (id)syncStateDebuggingInfo:(id)arg1;	// IMP=0x0000000000097b48
- (void)_noteMeticsForSyncEndedWithSuccces:(_Bool)arg1;	// IMP=0x0000000000097ad2
- (void)syncChatsWithMessageContext:(id)arg1;	// IMP=0x0000000000097a12
- (void)_writeDownSyncDate;	// IMP=0x000000000009786f
- (long long)_manualSyncAttemptCount;	// IMP=0x00000000000977c0
- (long long)_periodicSyncAttemptCount;	// IMP=0x0000000000097711
- (void)_resetSyncStateAndAttemptCounts;	// IMP=0x0000000000097699
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(_Bool)arg2;	// IMP=0x000000000009737a
- (void)_noteSyncStarted:(_Bool)arg1;	// IMP=0x000000000009721b
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;	// IMP=0x000000000009713d
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1;	// IMP=0x0000000000096fdc
- (void)_ifCloudKitAbleToSyncWithActivity:(id)arg1 callBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009694c
- (void)_callSyncWithCompletion:(CDUnknownBlockType)arg1 activity:(id)arg2;	// IMP=0x0000000000096683
- (void)_syncChatsWithActivity:(id)arg1;	// IMP=0x00000000000961ab
- (id)_sharedDatabaseManager;	// IMP=0x0000000000096192
- (void)syncDeletesToCloudKitWithActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000095d1c
- (void)_beginPeriodicSyncWithActivity:(id)arg1 attemptCount:(unsigned long long)arg2 syncChatsCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094660
- (void)syncAttachmentMetadataFirstSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009448e
- (void)_beginPeriodicSyncWithActivity:(id)arg1 attemptCount:(unsigned long long)arg2;	// IMP=0x0000000000093df7
- (id)_recordManager;	// IMP=0x0000000000093dde
- (void)_reloadChatRegistryOnMainThread;	// IMP=0x0000000000093d12
- (void)_nukeCKData;	// IMP=0x0000000000093c22
- (_Bool)_errorIndicatesDeviceNotGoodForSync:(id)arg1;	// IMP=0x0000000000093bab
- (void)beginInitialSyncAttemptCount:(unsigned long long)arg1 withActivity:(id)arg2;	// IMP=0x0000000000092e90
- (id)_keychainError;	// IMP=0x0000000000092e7c
- (id)_keychainErrorWithCause:(id)arg1;	// IMP=0x0000000000092d87
- (id)_retryError;	// IMP=0x0000000000092d5f
- (_Bool)_handleSyncFailureType:(long long)arg1 step:(long long)arg2 activity:(id)arg3 attemptCount:(unsigned long long)arg4 startTime:(id)arg5 error:(id)arg6 retry:(CDUnknownBlockType)arg7;	// IMP=0x0000000000092438
- (void)collectLogsIfNeeded;	// IMP=0x0000000000092016
- (void)sendRestoreFailuresLogDumpsIfNeeded;	// IMP=0x0000000000091ddc
- (void)sendRestoreFailuresLogDumps;	// IMP=0x000000000009185c
- (void)_deleteRestoreFailuresDirectory;	// IMP=0x000000000009171a
- (_Bool)_withinAnHourOfLogDumpHour;	// IMP=0x000000000009169e
- (unsigned long long)_currentHour;	// IMP=0x00000000000915ec
- (_Bool)_hasDumpedRestoreFailureLogsInPastHour;	// IMP=0x0000000000091532
- (_Bool)_hasDumpedLogsInPastHour;	// IMP=0x0000000000091478
- (void)recordMetricIsCloudKitEnabled;	// IMP=0x00000000000913d7
- (void)systemDidUnlock;	// IMP=0x000000000009133d
- (void)_refreshUIWhileSyncing;	// IMP=0x0000000000091172
- (void)refreshUIIfApplicableWithBatchCount:(unsigned long long)arg1;	// IMP=0x0000000000090eb5
- (double)reloadTimeInterval;	// IMP=0x0000000000090ea7
- (_Bool)_serverAllowsUIRefreshTimerWhileSyncing;	// IMP=0x0000000000090def
- (_Bool)_serverAllowsUIRefreshWhileSyncing;	// IMP=0x0000000000090d37
- (void)syncController:(id)arg1 syncBatchCompleted:(unsigned long long)arg2;	// IMP=0x0000000000090d22
- (void)clearLocalCloudKitSyncState;	// IMP=0x00000000000909cd
- (void)clearCKRelatedDefaults;	// IMP=0x00000000000908fd
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;	// IMP=0x0000000000090276
- (void)beginComingBackOnlineSyncWithActivity:(id)arg1;	// IMP=0x000000000009009d
- (void)_clearTombstonesWithActivity:(id)arg1;	// IMP=0x0000000000090022
- (_Bool)_accountHasMultipleDevices;	// IMP=0x000000000008fef6
- (_Bool)_serverDoesNotSingleDeviceLimitation;	// IMP=0x000000000008fe42
- (_Bool)_chatSyncedRecently;	// IMP=0x000000000008fd15
- (double)_minimumChatComingOnlineSyncInterval;	// IMP=0x000000000008fc28
- (_Bool)_serverDoesNotAllowComingBackOnlineChatSync;	// IMP=0x000000000008fba7
- (void)beginPeriodicSyncWithActivity:(id)arg1;	// IMP=0x000000000008f94d
- (void)beginPeriodicSyncWithChecks:(unsigned long long)arg1 priority:(const char *)arg2 reason:(id)arg3;	// IMP=0x000000000008f68e
- (_Bool)shouldMarkAllIncompatibleMessagesForDeletion;	// IMP=0x000000000008f62e
- (void)beginChatSyncPeriodic:(_Bool)arg1 activity:(id)arg2;	// IMP=0x000000000008f27b
- (void)beginInitialSyncWithActivity:(id)arg1;	// IMP=0x000000000008e9dd
- (void)_didPassAccountAndIdentityUpdateNeeds;	// IMP=0x000000000008e932
- (void)_needsSyncOnAccountUpdate;	// IMP=0x000000000008e8d8
- (void)_needsSyncOnIdentityUpdate;	// IMP=0x000000000008e87e
- (void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;	// IMP=0x000000000008e6f1
- (void)dealloc;	// IMP=0x000000000008e51b
- (id)init;	// IMP=0x000000000008dda9
- (void)kickOffEagerSyncIfApplicable;	// IMP=0x000000000008dad6
- (void)_nightlySyncTimerFired;	// IMP=0x000000000008d9a9
- (void)_kickOffNightlyPeriodicSyncIfApplicable;	// IMP=0x000000000008d889
- (_Bool)_syncNotCompletedRecently;	// IMP=0x000000000008d750
- (double)_IMAHDAgentFallbackIntervalInSeconds;	// IMP=0x000000000008d653
- (void)_dispatchNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000008d5e2
- (id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(_Bool *)arg3;	// IMP=0x000000000008d49f
- (void)registerForAccountNotifications;	// IMP=0x000000000008d3df
- (void)_accountDidChange:(id)arg1;	// IMP=0x000000000008d164
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;	// IMP=0x000000000008d0e1
- (unsigned long long)_maxTimeToDeferInSeconds;	// IMP=0x000000000008cfaf
- (long long)syncControllerRecordType;	// IMP=0x000000000008cfa7
- (id)rampManager;	// IMP=0x000000000008cf8e
- (id)initialAttachmentSyncController;	// IMP=0x000000000008cee4
- (id)updateSyncController;	// IMP=0x000000000008ce0b
- (id)attachmentSyncController;	// IMP=0x000000000008cd32
- (id)exitManager;	// IMP=0x000000000008cd19
- (id)chatSyncController;	// IMP=0x000000000008cd00
- (id)initialMessageSyncController;	// IMP=0x000000000008cc54
- (id)messageSyncController;	// IMP=0x000000000008cb55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
