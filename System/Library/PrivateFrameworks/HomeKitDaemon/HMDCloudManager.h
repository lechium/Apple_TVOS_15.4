//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudPushObserver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKContainer, CKDatabase, HMDCloudCache, HMDCloudDataSyncStateFilter, HMDCloudHomeManagerZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDSyncOperationManager, HMFMessageDispatcher, NSData, NSMutableArray, NSObject, NSString;
@protocol HMDCloudManagerDataSource, HMDCloudManagerDelegate, HMMLogEventSubmitting, OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface HMDCloudManager : HMFObject <HMBCloudPushObserver, HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _accountActive;	// 16 = 0x10
    _Bool _cloudHomeDataRecordExists;	// 17 = 0x11
    _Bool _keychainSyncEnabled;	// 18 = 0x12
    _Bool _firstV3FetchRun;	// 19 = 0x13
    _Bool _firstDBQueryRun;	// 20 = 0x14
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    id <HMDCloudManagerDelegate> _delegate;	// 32 = 0x20
    id <HMDCloudManagerDataSource> _dataSource;	// 40 = 0x28
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 48 = 0x30
    CKContainer *_container;	// 56 = 0x38
    CKDatabase *_database;	// 64 = 0x40
    HMDCloudCache *_cloudCache;	// 72 = 0x48
    HMFMessageDispatcher *_configSyncDispatcher;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    CDUnknownBlockType _fetchCompletionHandler;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_retryTimer;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_pollTimer;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_controllerKeyPollTimer;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_watchdogControllerKeyPollTimer;	// 136 = 0x88
    CDUnknownBlockType _cloudDataDeletedNotificationHandler;	// 144 = 0x90
    CDUnknownBlockType _cloudMetadataDeletedNotificationHandler;	// 152 = 0x98
    CDUnknownBlockType _controllerKeyAvailableNotificationHandler;	// 160 = 0xa0
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;	// 168 = 0xa8
    HMFMessageDispatcher *_msgDispatcher;	// 176 = 0xb0
    HMDSyncOperationManager *_syncManager;	// 184 = 0xb8
    NSMutableArray *_currentBackoffTimerValuesInMinutes;	// 192 = 0xc0
    CDUnknownBlockType _dataDecryptionFailedHandler;	// 200 = 0xc8
    CDUnknownBlockType _accountActiveUpdateHandler;	// 208 = 0xd0
}

+ (id)logCategory;	// IMP=0x00000000003516ba
- (void).cxx_destruct;	// IMP=0x000000000033ec2d
@property(nonatomic, getter=isFirstDBQueryRun) _Bool firstDBQueryRun; // @synthesize firstDBQueryRun=_firstDBQueryRun;
@property(nonatomic, getter=isFirstV3FetchRun) _Bool firstV3FetchRun; // @synthesize firstV3FetchRun=_firstV3FetchRun;
@property(copy, nonatomic) CDUnknownBlockType accountActiveUpdateHandler; // @synthesize accountActiveUpdateHandler=_accountActiveUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType dataDecryptionFailedHandler; // @synthesize dataDecryptionFailedHandler=_dataDecryptionFailedHandler;
@property(retain, nonatomic) NSMutableArray *currentBackoffTimerValuesInMinutes; // @synthesize currentBackoffTimerValuesInMinutes=_currentBackoffTimerValuesInMinutes;
@property(nonatomic) __weak HMDSyncOperationManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(copy, nonatomic) CDUnknownBlockType controllerKeyAvailableNotificationHandler; // @synthesize controllerKeyAvailableNotificationHandler=_controllerKeyAvailableNotificationHandler;
@property(copy, nonatomic) CDUnknownBlockType cloudMetadataDeletedNotificationHandler; // @synthesize cloudMetadataDeletedNotificationHandler=_cloudMetadataDeletedNotificationHandler;
@property(copy, nonatomic) CDUnknownBlockType cloudDataDeletedNotificationHandler; // @synthesize cloudDataDeletedNotificationHandler=_cloudDataDeletedNotificationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer; // @synthesize watchdogControllerKeyPollTimer=_watchdogControllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *controllerKeyPollTimer; // @synthesize controllerKeyPollTimer=_controllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer; // @synthesize pollTimer=_pollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) _Bool keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property(nonatomic) _Bool cloudHomeDataRecordExists; // @synthesize cloudHomeDataRecordExists=_cloudHomeDataRecordExists;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // @synthesize clientCallbackQueue=_clientCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFMessageDispatcher *configSyncDispatcher; // @synthesize configSyncDispatcher=_configSyncDispatcher;
@property(retain, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) __weak id <HMDCloudManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak id <HMDCloudManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool accountActive; // @synthesize accountActive=_accountActive;
- (void)handler:(id)arg1 didReceiveCKNotification:(id)arg2;	// IMP=0x000000000033e768
- (void)handler:(id)arg1 didReceivePushForTopic:(id)arg2;	// IMP=0x000000000033e69c
- (void)_fetchDatabaseZoneChangesCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000033e1ab
- (void)cacheDatabaseServerToken;	// IMP=0x000000000033e13a
- (void)fetchDatabaseZoneChanges;	// IMP=0x000000000033e00d
- (void)_scheduleZoneFetch:(id)arg1;	// IMP=0x000000000033db37
- (void)registerForPushNotifications;	// IMP=0x000000000033dab9
- (void)_setupSubscriptionForZone:(id)arg1;	// IMP=0x000000000033d847
- (void)_registerForProxSetupNotifications;	// IMP=0x000000000033d7b0
- (void)_auditProxSetupNotification:(id)arg1;	// IMP=0x000000000033d65d
- (void)_stopControllerKeyPollTimer;	// IMP=0x000000000033d523
- (void)_startControllerKeyPollTimerWithValue:(long long)arg1;	// IMP=0x000000000033d2a6
- (void)_startControllerKeyPollTimerWithBackoff;	// IMP=0x000000000033d023
- (void)_startControllerKeyPollTimer;	// IMP=0x000000000033cfc1
- (void)_stopWatchdogControllerKeyPollTimer;	// IMP=0x000000000033ce87
- (void)_startWatchdogControllerKeyPollTimer;	// IMP=0x000000000033cc1d
- (void)_handleControllerKeyAvailable;	// IMP=0x000000000033c9f1
- (void)_handleKeychainSyncStateChanged:(_Bool)arg1;	// IMP=0x000000000033c7ba
- (void)handleKeychainStateChangedNotification:(id)arg1;	// IMP=0x000000000033c703
- (void)_stopFetchPollTimer;	// IMP=0x000000000033c5c9
- (void)_startFetchPollTimer;	// IMP=0x000000000033c2b2
- (void)_stopFetchRetryTimer;	// IMP=0x000000000033c178
- (void)_startFetchRetryTimer;	// IMP=0x000000000033bef5
- (void)_updateServerTokenStatusOnCloudFilter;	// IMP=0x000000000033be58
- (void)updateServerTokenStatusOnCloudFilter;	// IMP=0x000000000033bde7
- (void)initializeServerTokenStatusOnCloudFilter;	// IMP=0x000000000033bd2f
- (_Bool)_validFetchRetryCKErrorCode:(long long)arg1;	// IMP=0x000000000033bd19
- (void)_forceCleanCloud:(_Bool)arg1 fetchTransaction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000033ba2f
- (void)updateCloudDataSyncFilterState:(_Bool)arg1;	// IMP=0x000000000033b9e3
- (void)_accountIsActive;	// IMP=0x000000000033b6c7
- (void)_createZoneAndFetchChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000033b3bf
- (void)_verifyZonesExist:(id)arg1 zoneIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000033b043
- (void)_resetHomeDataRecordState;	// IMP=0x000000000033afda
- (id)_changeTokenFromData:(id)arg1;	// IMP=0x000000000033ad41
- (void)_handleAccountStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033aad5
- (void)updateAccountStatusChanged:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033aa1e
- (void)_processFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 fetchTransaction:(id)arg3 migrationOptions:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5 moreRecordsComing:(_Bool)arg6 emptyRecord:(_Bool)arg7;	// IMP=0x000000000033a04f
- (_Bool)_processFetchedTransaction:(id)arg1;	// IMP=0x00000000003396a3
- (void)_fetchLegacyTransaction:(id)arg1 forceFetch:(_Bool)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000338703
- (void)fetchLegacyTransaction:(id)arg1 forceFetch:(_Bool)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003385f0
- (void)setAccountActiveUpdateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000033853f
- (void)setDataDecryptionFailedCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000033848e
- (void)setControllerKeyAvailableNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003383dd
- (void)setCloudMetadataDeletedNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000033832c
- (void)setCloudDataDeletedNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000033827b
- (void)setDataAvailableFromCloudCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003381ca
- (void)fetchCurrentAccountStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000337fbf
- (id)_serverTokenData;	// IMP=0x0000000000337edb
@property(readonly, nonatomic) NSData *serverTokenData;
@property(readonly, nonatomic) _Bool decryptionFailed;
- (void)_resetCloudCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000337bc4
- (void)resetCloudCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000337b13
- (void)_resetCloudServerTokenData;	// IMP=0x00000000003379ac
- (void)resetCloudServerTokenData:(id)arg1;	// IMP=0x000000000033793b
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003374d1
- (void)_resetCloudZonesIgnoreHomeManager:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033723c
- (void)_verifyAndRemoveAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000336f04
- (void)_verifyAndRemoveZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000336c9c
- (void)verifyAndRemoveZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000336bc0
- (void)_removeAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003367f5
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000336700
- (void)_fetchAndVerifyZoneRootRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000335ff8
- (void)_uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000335d6e
- (void)uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000335c54
- (void)_removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000335a0b
- (void)removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033592f
- (void)_uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033563e
- (void)_checkZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000335244
- (void)_verifyZoneHasBeenDeletedTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000334da6
- (void)_createZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000334aec
- (void)uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003349d2
- (void)_fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000333eb6
- (void)fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000333dda
- (void)_removeHomeZoneName:(id)arg1;	// IMP=0x0000000000333cab
- (void)removeHomeZoneName:(id)arg1;	// IMP=0x0000000000333bbd
- (void)_addHomeZoneName:(id)arg1 owner:(id)arg2;	// IMP=0x0000000000333a15
- (void)addHomeZoneName:(id)arg1 owner:(id)arg2;	// IMP=0x00000000003338fb
@property(readonly, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property(readonly, nonatomic) HMDCloudMetadataZone *metadataZone;
- (_Bool)legacyZoneHasRecordsAvaliable;	// IMP=0x00000000003337ed
@property(readonly, nonatomic) HMDCloudLegacyZone *legacyZone;
- (void)__deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000333499
- (void)__deleteRecordZonesWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003331f5
- (void)__deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033302c
- (void)__saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000332d28
- (void)__fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000332a26
- (void)__fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000332860
- (void)__saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033255c
- (void)__fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033225a
- (void)__addCKDatabaseOperation:(id)arg1;	// IMP=0x000000000033209e
- (void)dealloc;	// IMP=0x0000000000332029
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 callbackQueue:(id)arg7 container:(id)arg8 logEventSubmitter:(id)arg9 workQueue:(id)arg10;	// IMP=0x0000000000331b8c
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 logEventSubmitter:(id)arg7 callbackQueue:(id)arg8;	// IMP=0x0000000000331902

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

