//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAActivityGovernorDelegate-Protocol.h>
#import <PhotoAnalysis/PHADirtyChangeCoalescerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAJobCoalescerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAJobConstraintsObserverDelegate-Protocol.h>
#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>
#import <PhotoAnalysis/PHAWorkerJobDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, PHAActivityGovernor, PHADirtyChangeCoalescer, PHAJobCoalescer, PHAJobConstraints, PHAJobConstraintsObserver, PHAJobGenerator, PHAManager, PHAWorkerHealthMonitor, PHAWorkerJob, PHAWorkerWarmer;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, PHAJobCoordinatorDelegate;

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PHAServiceOperationHandling>
{
    _Atomic int _pendingAsyncTasksCount;	// 8 = 0x8
    _Atomic unsigned long long _processingQOS;	// 16 = 0x10
    NSDictionary *_cachedWorkersByType;	// 24 = 0x18
    struct os_unfair_lock_s _workersByTypeLock;	// 32 = 0x20
    _Bool _newConstraintsPending;	// 36 = 0x24
    _Bool _shouldIgnoreConstraintChanges;	// 37 = 0x25
    PHAJobConstraints *_currentConstraints;	// 40 = 0x28
    PHAWorkerWarmer *_warmer;	// 48 = 0x30
    PHAJobCoalescer *_jobCoalescer;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_maintenanceTimer;	// 72 = 0x48
    PHAWorkerHealthMonitor *_healthMonitor;	// 80 = 0x50
    PHAActivityGovernor *_activityGovernor;	// 88 = 0x58
    PHAJobGenerator *_jobGenerator;	// 96 = 0x60
    PHAManager *_manager;	// 104 = 0x68
    PHAWorkerJob *_currentBackgroundJob;	// 112 = 0x70
    NSObject<OS_os_transaction> *_runningJobTransaction;	// 120 = 0x78
    NSMutableSet *_workerTypesServicedForUserFG;	// 128 = 0x80
    NSObject<OS_os_transaction> *_foregroundTransaction;	// 136 = 0x88
    id <PHAJobCoordinatorDelegate> _delegate;	// 144 = 0x90
    PHAJobConstraintsObserver *_constraintsObserver;	// 152 = 0x98
    double _maxIntervalSinceLastJobReport;	// 160 = 0xa0
    PHAWorkerJob *_currentForegroundJob;	// 168 = 0xa8
    NSMutableArray *_waitingForegroundJobs;	// 176 = 0xb0
    PHADirtyChangeCoalescer *_dirtyCoalescer;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000002211c
@property(readonly, nonatomic) PHADirtyChangeCoalescer *dirtyCoalescer; // @synthesize dirtyCoalescer=_dirtyCoalescer;
@property(readonly, nonatomic) NSMutableArray *waitingForegroundJobs; // @synthesize waitingForegroundJobs=_waitingForegroundJobs;
@property(retain, nonatomic) PHAWorkerJob *currentForegroundJob; // @synthesize currentForegroundJob=_currentForegroundJob;
@property(nonatomic) double maxIntervalSinceLastJobReport; // @synthesize maxIntervalSinceLastJobReport=_maxIntervalSinceLastJobReport;
@property(readonly, nonatomic) PHAJobConstraintsObserver *constraintsObserver; // @synthesize constraintsObserver=_constraintsObserver;
@property(nonatomic) __weak id <PHAJobCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_os_transaction> *foregroundTransaction; // @synthesize foregroundTransaction=_foregroundTransaction;
@property(retain, nonatomic) NSMutableSet *workerTypesServicedForUserFG; // @synthesize workerTypesServicedForUserFG=_workerTypesServicedForUserFG;
@property(retain, nonatomic) NSObject<OS_os_transaction> *runningJobTransaction; // @synthesize runningJobTransaction=_runningJobTransaction;
@property(retain, nonatomic) PHAWorkerJob *currentBackgroundJob; // @synthesize currentBackgroundJob=_currentBackgroundJob;
@property(nonatomic) __weak PHAManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) PHAJobGenerator *jobGenerator; // @synthesize jobGenerator=_jobGenerator;
@property(readonly, nonatomic) PHAActivityGovernor *activityGovernor; // @synthesize activityGovernor=_activityGovernor;
@property(readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor; // @synthesize healthMonitor=_healthMonitor;
@property(nonatomic) _Bool shouldIgnoreConstraintChanges; // @synthesize shouldIgnoreConstraintChanges=_shouldIgnoreConstraintChanges;
@property(nonatomic) _Bool newConstraintsPending; // @synthesize newConstraintsPending=_newConstraintsPending;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *maintenanceTimer; // @synthesize maintenanceTimer=_maintenanceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) PHAJobCoalescer *jobCoalescer; // @synthesize jobCoalescer=_jobCoalescer;
@property(readonly, nonatomic) PHAWorkerWarmer *warmer; // @synthesize warmer=_warmer;
- (id)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2;	// IMP=0x0000000000021dd4
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000021d3b
- (void)operationDidFinish:(id)arg1;	// IMP=0x0000000000021d31
- (void)handleOperation:(id)arg1;	// IMP=0x0000000000021cd3
- (id)photoLibrary;	// IMP=0x0000000000021c83
@property(readonly, nonatomic, getter=isQuiescent) _Bool quiescent;
- (_Bool)_inq_isQuiescent;	// IMP=0x0000000000021b96
- (void)enforceTimeouts;	// IMP=0x0000000000021b43
- (void)enqueueForegroundJob:(id)arg1;	// IMP=0x0000000000021aaa
@property(nonatomic) _Bool activityGovernorOverride; // @dynamic activityGovernorOverride;
- (void)didFinishJob:(id)arg1;	// IMP=0x00000000000219e5
- (void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2;	// IMP=0x00000000000219d0
- (void)coalescer:(id)arg1 didCoalesce:(id)arg2;	// IMP=0x00000000000214aa
- (void)governorDidRevokeForegroundAccess:(id)arg1;	// IMP=0x0000000000021457
- (void)processJobs;	// IMP=0x0000000000021445
- (void)governorDidGrantForegroundAccess:(id)arg1;	// IMP=0x0000000000021433
- (void)governorDidRevokeBackgroundAccess:(id)arg1;	// IMP=0x000000000002142d
- (void)governorDidGrantBackgroundAccess:(id)arg1;	// IMP=0x0000000000021427
- (void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021270
- (void)setCurrentConstraints:(id)arg1;	// IMP=0x000000000002121b
@property(readonly, copy) PHAJobConstraints *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
- (void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1;	// IMP=0x0000000000021182
- (void)_inq_stopJobsAfterConstraintOrActivityChange;	// IMP=0x0000000000021032
- (void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1;	// IMP=0x0000000000020dcc
- (void)_inq_handleNoMoreJobsExpected;	// IMP=0x0000000000020b4f
- (void)_inq_handleJobFinished:(id)arg1;	// IMP=0x00000000000209bd
- (void)_inq_launchJob:(id)arg1;	// IMP=0x00000000000204a3
- (void)_scheduleNextJob;	// IMP=0x0000000000020450
- (id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2;	// IMP=0x00000000000202e6
- (void)_inq_enqueueForegroundJob:(id)arg1;	// IMP=0x0000000000020132
@property(readonly, copy) NSString *description;
- (void)_installMaintenanceTimer;	// IMP=0x000000000001ff52
- (id)_workerForJob:(id)arg1;	// IMP=0x000000000001fe8a
@property(readonly, nonatomic) NSDictionary *workersByType;
- (void)addWorker:(id)arg1;	// IMP=0x000000000001fd74
- (id)_defaultWorkersByType;	// IMP=0x000000000001fc17
- (void)_inq_enforceTimeoutForJob:(id)arg1;	// IMP=0x000000000001fb8a
- (void)_inq_timeoutJob:(id)arg1;	// IMP=0x000000000001fa0a
- (id)_inq_nextForegroundJobCanRunAutomatic:(_Bool)arg1 canRunUserFG:(_Bool)arg2 canRunImmediate:(_Bool)arg3;	// IMP=0x000000000001f851
- (id)_inq_runningJobs;	// IMP=0x000000000001f74f
- (void)_dispatchTransactionAsyncWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f672
- (id)statusAsDictionary;	// IMP=0x000000000001f116
- (void)dealloc;	// IMP=0x000000000001f071
- (void)shutdown;	// IMP=0x000000000001edbb
- (id)initWithManager:(id)arg1;	// IMP=0x000000000001ed39
- (id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3;	// IMP=0x000000000001e80d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
