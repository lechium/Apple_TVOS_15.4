//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallPolicy, RestoreBootstrapInfo, TaskQueue;
@protocol OS_dispatch_queue;

@interface RestoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    TaskQueue *_restoreQueue;	// 16 = 0x10
    _Bool _bootstrapDeviceMonitorAdded;	// 24 = 0x18
    _Bool _bootstrapNetworkMonitorAdded;	// 25 = 0x19
    RestoreBootstrapInfo *_bootstrapInfo;	// 32 = 0x20
}

+ (void)_displayAccountMustPurchaseDialogWithItemID:(id)arg1 logKey:(id)arg2;	// IMP=0x00400000000d51e9
+ (void)completeHardFailuresForApps:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000d4166
+ (id)accountForRestoreInstall:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000d0f2a
+ (id)sharedInstance;	// IMP=0x00100000000d0a61
- (void).cxx_destruct;	// IMP=0x00200000000dc17a
@property(nonatomic) _Bool bootstrapNetworkMonitorAdded; // @synthesize bootstrapNetworkMonitorAdded=_bootstrapNetworkMonitorAdded;
@property(nonatomic) _Bool bootstrapDeviceMonitorAdded; // @synthesize bootstrapDeviceMonitorAdded=_bootstrapDeviceMonitorAdded;
@property(retain, nonatomic) RestoreBootstrapInfo *bootstrapInfo; // @synthesize bootstrapInfo=_bootstrapInfo;
- (_Bool)_restoreAppID:(id)arg1 matches:(id)arg2;	// IMP=0x00100000000dc0a6
- (void)_retryRestoresForAccount:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00100000000db21e
- (_Bool)_restoreApp:(id)arg1 account:(id)arg2 isUserInitiated:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000daea0
- (void)_processCoordinatorFailuresForAccount:(id)arg1 reason:(id)arg2 rootError:(id)arg3;	// IMP=0x00100000000da8cf
- (void)_processTokenFailuresAndPostFollowupOrPerformAuthWithUserInitiated:(_Bool)arg1;	// IMP=0x00100000000d9959
- (void)_performContentRestoreForRestoreInstalls:(id)arg1 batchInfo:(id)arg2 outError:(id *)arg3;	// IMP=0x00100000000d9447
- (void)_performContentRestoreBatchLookup:(id)arg1 batchInfo:(id)arg2 outError:(id *)arg3;	// IMP=0x00100000000d8555
- (long long)_pendingMetadataLookup;	// IMP=0x00100000000d83cc
- (_Bool)_isErrorAccountError:(id)arg1;	// IMP=0x00100000000d8345
- (_Bool)_installErrorDataIsAccountError:(id)arg1;	// IMP=0x00100000000d82a6
- (_Bool)_installEntityHasAccountFailure:(id)arg1;	// IMP=0x00100000000d8246
- (id)_hydrationTypeForAppInstallRestoreType:(long long)arg1;	// IMP=0x00100000000d820d
- (void)_hydrateApp:(id)arg1;	// IMP=0x00100000000d69b7
- (void)_handleMonitorStateDidChangeNotification:(id)arg1;	// IMP=0x00100000000d65e5
- (void)_finishCompletedRestores:(_Bool)arg1 completeOrderedOnly:(_Bool)arg2;	// IMP=0x00100000000d64e9
- (id)_restoreStateToDictionary;	// IMP=0x00100000000d5881
- (id)_findMatchingUnderlyingError:(id)arg1 domain:(id)arg2 code:(long long)arg3;	// IMP=0x00100000000d4fa5
- (void)_createRetryActivityIfNeeded:(_Bool)arg1;	// IMP=0x00100000000d4cca
- (void)_createCoordinatorUsing:(id)arg1 addProgress:(_Bool)arg2;	// IMP=0x00100000000d4cc4
- (_Bool)_canRetryAccountPreflightForError:(id)arg1;	// IMP=0x00100000000d3ec1
- (void)_bootstrapWhenReadyWithInfo:(id)arg1;	// IMP=0x00100000000d36fb
- (void)_bootstrapRestoresForBatchType:(long long)arg1 restoreInfo:(id)arg2 targetAccountID:(id)arg3;	// IMP=0x00100000000d2577
- (void)_bootStrapRestoreJobs:(id)arg1 targetAccountID:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00100000000d2104
- (long long)_activeRestoreCount;	// IMP=0x00100000000d1f7b
- (long long)_activeSoftFailureCount;	// IMP=0x00100000000d1df2
- (long long)_activeHardFailureCount;	// IMP=0x00100000000d1c69
- (void)retryRestoresForAccount:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00100000000d1bb1
- (id)restoreStateDictionary;	// IMP=0x00100000000d1aba
- (void)postFollowupForAppleID:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000d1ab4
- (void)hydrateApps:(id)arg1;	// IMP=0x00100000000d18fa
- (void)clearFollowupForAccountID:(id)arg1;	// IMP=0x00100000000d18f4
- (void)bootStrapRestoreJobs:(id)arg1 targetAccountID:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00100000000d178a
- (id)authenticateForAppleID:(id)arg1 outError:(id *)arg2;	// IMP=0x00100000000d142c
@property(readonly, copy) AppInstallPolicy *defaultInstallPolicy;
- (id)init;	// IMP=0x00100000000d0ae6

@end

