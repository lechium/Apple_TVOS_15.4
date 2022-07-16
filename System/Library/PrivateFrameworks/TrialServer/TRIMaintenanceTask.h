//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRITask-Protocol.h>

@class NSArray, NSDate, NSObject, NSString, _PASLock;
@protocol OS_dispatch_queue, TRITaskQueueStateProviding;

@interface TRIMaintenanceTask <TRITask, TRIMetricsProviding>
{
    NSObject<OS_dispatch_queue> *_channelCleanupQueue;	// 8 = 0x8
    _PASLock *_lock;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000031f78
+ (id)parseFromData:(id)arg1;	// IMP=0x0000000000031ebb
+ (id)task;	// IMP=0x000000000002ef08
- (void).cxx_destruct;	// IMP=0x0000000000032144
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032054
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031f80
- (id)serialize;	// IMP=0x0000000000031dcd
- (id)_asPersistedTask;	// IMP=0x0000000000031db4
- (id)trialSystemTelemetry;	// IMP=0x0000000000031c95
- (id)dimensions;	// IMP=0x0000000000031bcd
- (id)metrics;	// IMP=0x0000000000031a88
- (void)mergeTelemetry:(id)arg1;	// IMP=0x000000000003198f
- (void)addDimension:(id)arg1;	// IMP=0x000000000003187e
- (void)addMetric:(id)arg1;	// IMP=0x000000000003176d
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x0000000000031385
- (void)_reportStorageUsageUsingContext:(id)arg1;	// IMP=0x00000000000310e8
- (id)_roundNumber:(id)arg1;	// IMP=0x000000000003107f
- (void)_synchronizePushService:(id)arg1 usingRolloutDatabase:(id)arg2 experimentDatabase:(id)arg3;	// IMP=0x0000000000030d8f
- (_Bool)_cleanupLocalTempStorageWithPaths:(id)arg1;	// IMP=0x0000000000030d35
- (void)_handleOrphanedNamespacesWithNamespaceDatabase:(id)arg1 nextTasks:(id)arg2;	// IMP=0x0000000000030862
- (_Bool)_cleanupUnusedContentWithContext:(id)arg1;	// IMP=0x000000000002f52f
- (_Bool)_cleanupTreatmentWithTreatmentId:(id)arg1 paths:(id)arg2;	// IMP=0x000000000002f3ef
- (void)_handleExpiredExperimentsWithExperimentDatabase:(id)arg1 nextTasks:(id)arg2;	// IMP=0x000000000002f058
- (id)init;	// IMP=0x000000000002ef21
@property(readonly, nonatomic) int taskType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSString *taskName;

@end
