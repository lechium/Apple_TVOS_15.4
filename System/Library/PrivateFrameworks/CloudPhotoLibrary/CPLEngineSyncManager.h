//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineForceSyncTaskDelegate-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLDerivativesFilter, CPLEngineForceSyncTask, CPLEngineLibrary, CPLPlatformObject, CPLSyncSession, CPLSyncStep, NSError, NSMutableArray, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;

@interface CPLEngineSyncManager : NSObject <CPLAbstractObject, CPLEngineComponent, CPLEngineSyncTaskDelegate, CPLEngineForceSyncTaskDelegate>
{
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;	// 8 = 0x8
    struct os_unfair_lock_s _transportUserIdentifierLock;	// 16 = 0x10
    CPLDerivativesFilter *_derivativesFilter;	// 24 = 0x18
    _Bool _setupIsDone;	// 32 = 0x20
    _Bool _shouldUpdateDisabledFeatures;	// 33 = 0x21
    _Bool _closed;	// 34 = 0x22
    id <CPLEngineTransportSetupTask> _setupTask;	// 40 = 0x28
    CDUnknownBlockType _closingCompletionHandler;	// 48 = 0x30
    CPLSyncSession *_session;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_lock;	// 64 = 0x40
    NSError *_lastError;	// 72 = 0x48
    CPLSyncStep *_currentStep;	// 80 = 0x50
    id <CPLEngineTransportSetupTask> _forcedSetupTask;	// 88 = 0x58
    CPLEngineForceSyncTask *_currentForceSyncTask;	// 96 = 0x60
    CPLEngineForceSyncTask *_pendingForceSyncTask;	// 104 = 0x68
    unsigned long long _shouldRestartSessionFromState;	// 112 = 0x70
    NSMutableArray *_lastErrors;	// 120 = 0x78
    _Bool _foreground;	// 128 = 0x80
    _Bool _boostPriority;	// 129 = 0x81
    _Bool _hasOverridenBudgets;	// 130 = 0x82
    _Bool _disabledSchedulerForForceSyncTask;	// 131 = 0x83
    NSMutableArray *_forcedSyncHistory;	// 136 = 0x88
    _Bool _shouldTryToMingleImmediately;	// 144 = 0x90
    CPLPlatformObject *_platformObject;	// 152 = 0x98
    CPLEngineLibrary *_engineLibrary;	// 160 = 0xa0
    unsigned long long _state;	// 168 = 0xa8
}

+ (id)platformImplementationProtocol;	// IMP=0x000000000012c338
+ (id)stepForState:(unsigned long long)arg1 syncManager:(id)arg2 session:(id)arg3;	// IMP=0x000000000012c22a
+ (unsigned int)qualityOfServiceForForcedTasks;	// IMP=0x000000000012c21f
+ (unsigned int)qualityOfServiceForSyncSessions;	// IMP=0x000000000012c214
+ (id)shortDescriptionForState:(unsigned long long)arg1;	// IMP=0x000000000012c13c
+ (id)descriptionForState:(unsigned long long)arg1;	// IMP=0x000000000012c064
- (void).cxx_destruct;	// IMP=0x000000000012730d
@property(nonatomic) _Bool shouldTryToMingleImmediately; // @synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately;
@property(nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void)addDropDerivativesRecipe:(id)arg1 writeToUserDefaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001270dd
- (id)_dropDerivativeRulesFromUserDefaults;	// IMP=0x0000000000127041
- (void)_addRuleToUserDefaults:(id)arg1;	// IMP=0x0000000000126f3f
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126e3f
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126d3f
- (id)componentName;	// IMP=0x0000000000126d32
@property(readonly, nonatomic) NSError *lastError;
- (id)lastErrorUnlocked;	// IMP=0x0000000000126c58
- (void)endClientWork:(id)arg1;	// IMP=0x0000000000126be6
- (void)beginClientWork:(id)arg1;	// IMP=0x0000000000126b74
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000126a6e
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126971
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;	// IMP=0x00000000001268a0
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x000000000012670a
- (_Bool)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(_Bool *)arg2;	// IMP=0x00000000001266aa
- (void)_cancelAllTasksForSetup;	// IMP=0x0000000000126694
- (_Bool)_launchSetupTask;	// IMP=0x000000000012636b
- (id)_setupTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000012626c
- (id)_descriptionForSetupTasks;	// IMP=0x000000000012622d
- (void)_launchForceSyncTaskIfNecessary;	// IMP=0x0000000000125daa
- (void)_launchForceSetupTask;	// IMP=0x0000000000125c1a
- (void)forceSyncTaskHasBeenCancelled:(id)arg1;	// IMP=0x0000000000125b88
- (void)forceSyncTaskHasBeenLaunched:(id)arg1;	// IMP=0x0000000000125af6
- (void)_forceSyncTaskDidFinishWithError:(id)arg1;	// IMP=0x0000000000125ab3
- (void)_discardPendingForceSyncTaskWithError:(id)arg1;	// IMP=0x0000000000125a00
- (_Bool)_checkForegroundAtLaunchForForceSyncTask;	// IMP=0x0000000000125950
- (void)_reenableSchedulerForForceSyncTaskIfNecessary;	// IMP=0x0000000000125885
- (void)_disableSchedulerForForceSyncTaskIfNecessary;	// IMP=0x00000000001257c2
- (void)configureDirectTransportTask:(id)arg1;	// IMP=0x0000000000125750
- (_Bool)prepareAndLaunchSyncTaskUnlocked:(id)arg1;	// IMP=0x000000000012522f
- (void)setBoostPriority:(_Bool)arg1;	// IMP=0x0000000000125168
- (void)_overrideBudgetsIfNeeded;	// IMP=0x000000000012504c
- (void)setSyncSessionShouldBeForeground:(_Bool)arg1;	// IMP=0x0000000000124ffa
- (void)requestDisabledFeaturesUpdate;	// IMP=0x0000000000124f35
- (void)discardTransportUserIdentifier;	// IMP=0x0000000000124e70
- (void)resetTransportUserIdentifier;	// IMP=0x0000000000124dba
- (id)_transportUserIdentifier;	// IMP=0x0000000000124d83
- (void)_setTransportUserIdentifier:(id)arg1;	// IMP=0x0000000000124d3e
- (void)cancelCurrentSyncSession;	// IMP=0x0000000000124c79
- (void)startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(_Bool)arg3;	// IMP=0x0000000000124bd5
- (void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 session:(id)arg2 cancelIfNecessary:(_Bool)arg3;	// IMP=0x0000000000124747
- (void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1;	// IMP=0x0000000000123d25
- (void)_advanceToNextStateLocked;	// IMP=0x0000000000123bba
- (void)_notifyEndOfSyncSession;	// IMP=0x0000000000123892
- (_Bool)_launchNecessaryTasksForCurrentStateLocked;	// IMP=0x0000000000123658
- (id)_descriptionForLaunchedTasks;	// IMP=0x0000000000123605
- (id)_shortDescriptionForCurrentState;	// IMP=0x00000000001235da
- (id)_descriptionForCurrentState;	// IMP=0x00000000001235af
- (void)_moveAllTasksToBackgroundLocked;	// IMP=0x0000000000123599
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(_Bool)arg1;	// IMP=0x00000000001234af
- (void)_cancelAllTasksLocked;	// IMP=0x000000000012349b
- (void)_resetErrorForSyncSession;	// IMP=0x0000000000123414
- (void)setErrorForSyncSessionUnlocked:(id)arg1;	// IMP=0x0000000000123030
- (void)_recordForcedSyncTask:(id)arg1 discarded:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000122f2c
- (id)initWithEngineLibrary:(id)arg1;	// IMP=0x0000000000122c91
- (void)_dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122c40
- (void)dispatchForcedTaskBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122b4f
- (void)dispatchSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122a5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

