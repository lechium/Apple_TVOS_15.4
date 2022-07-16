//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRITaskQueueStateProviding-Protocol.h>
#import <TrialServer/TRITaskQueuing-Protocol.h>

@class TRIClient, TRIServerContext, _PASLock;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface TRITaskQueue : NSObject <TRITaskQueuing, TRITaskQueueStateProviding>
{
    _PASLock *_lock;	// 8 = 0x8
    TRIServerContext *_serverContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_opQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_opGroup;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_asyncQueue;	// 40 = 0x28
    TRIClient *_client;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000c6187
- (_Bool)ifNotPresentAddTask:(id)arg1;	// IMP=0x00000000000c60fe
- (void)waitForAsyncQueue;	// IMP=0x00000000000c60e3
- (id)activeActivityDescriptorGrantingCapability:(unsigned long long)arg1;	// IMP=0x00000000000c5e3c
- (id)activeActivityGrantingCapability:(unsigned long long)arg1;	// IMP=0x00000000000c5dec
- (id)debugDescription;	// IMP=0x00000000000c5a8d
- (void)registerFinalizeBlockToRetryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5886
- (void)_registerTaskQueueActivityForDate:(id)arg1;	// IMP=0x00000000000c547a
- (void)_registerRetryActivityForDate:(id)arg1;	// IMP=0x00000000000c4d9a
- (_Bool)updateActivity:(id)arg1 withStartDate:(id)arg2;	// IMP=0x00000000000c4b68
- (unsigned long long)count;	// IMP=0x00000000000c4a6c
- (_Bool)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c45dd
- (_Bool)cancelTasksWithTag:(id)arg1 excludingTasks:(id)arg2;	// IMP=0x00000000000c40d0
- (_Bool)cancelTasksWithTag:(id)arg1;	// IMP=0x00000000000c3ed7
- (_Bool)_cancelTask:(id)arg1 guardedData:(id)arg2;	// IMP=0x00000000000c3db9
- (_Bool)_cancelDependenciesAndTaskWithId:(id)arg1 guardedData:(id)arg2;	// IMP=0x00000000000c3b45
- (_Bool)cancelTask:(id)arg1;	// IMP=0x00000000000c3a22
- (_Bool)_cancelTaskWithId:(id)arg1 guardedData:(id)arg2 persistCancel:(_Bool)arg3;	// IMP=0x00000000000c386a
- (id)_addTask:(id)arg1 withDependencies:(id)arg2 guardedData:(id)arg3;	// IMP=0x00000000000c3636
- (CDStruct_6b48f683)_addTask:(id)arg1 options:(id)arg2 guardedData:(id)arg3 taskIdOut:(id *)arg4 accumulatedNewTaskRecords:(id)arg5;	// IMP=0x00000000000c2ae6
- (void)_partitionTaskGroup:(id)arg1 byRunnabilityGivenCapabilities:(unsigned long long)arg2 runnableAtDate:(id)arg3 topoSortedCurrentlyRunnable:(id *)arg4 blocked:(id *)arg5 allowOnlyRootTasksRunnable:(_Bool)arg6;	// IMP=0x00000000000c2821
- (_Bool)_isTaskWithId:(id)arg1 inTaskGroup:(id)arg2 runnableGivenCapabilities:(unsigned long long)arg3 atDate:(id)arg4 cachedRunnability:(id)arg5 visitedPath:(id)arg6 topoSortedRunnable:(id)arg7 allowOnlyRootTasksRunnable:(_Bool)arg8;	// IMP=0x00000000000c1f33
- (void)_startRunnableTasksIfNecessaryWithGuardedData:(id)arg1;	// IMP=0x00000000000c1e32
- (CDStruct_6b48f683)_addTask:(id)arg1 options:(id)arg2 guardedData:(id)arg3 taskId:(id *)arg4;	// IMP=0x00000000000c1d20
- (CDStruct_6b48f683)addTask:(id)arg1 options:(id)arg2 taskId:(id *)arg3;	// IMP=0x00000000000c1b90
- (CDStruct_6b48f683)addTask:(id)arg1 options:(id)arg2;	// IMP=0x00000000000c1b7b
- (_Bool)_removeTaskWithId:(id)arg1 guardedData:(id)arg2 persistRemove:(_Bool)arg3;	// IMP=0x00000000000c19ce
- (void)_startImmediateTasksIfNotAlreadyQueued:(id)arg1 guardedData:(id)arg2 didStartNewWork:(_Bool *)arg3;	// IMP=0x00000000000c0cea
- (id)_createOperationWithTask:(id)arg1 withId:(id)arg2 dependencies:(id)arg3 taskMap:(id)arg4;	// IMP=0x00000000000c0115
- (id)_runTask:(id)arg1;	// IMP=0x00000000000c008c
- (void)_finalizeTask:(id)arg1 withId:(id)arg2 runResult:(id)arg3;	// IMP=0x00000000000bf57b
- (void)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bee51
- (void)_evaluateRunConditionsWithGuardedData:(id)arg1 shouldContinueWork:(_Bool *)arg2;	// IMP=0x00000000000be658
- (id)_earliestStartDateFromTaskList:(id)arg1;	// IMP=0x00000000000be44c
- (void)_scheduleFutureActivitiesWithGuardedData:(id)arg1;	// IMP=0x00000000000be07c
- (void)_scheduleFutureRecurrentRollbackActivityWithTasks:(id)arg1;	// IMP=0x00000000000bddc5
- (_Bool)finishXPCActivitiesWithGuardedData:(id)arg1;	// IMP=0x00000000000bdae3
- (void)registerFinalizeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bda16
- (id)initWithServerContext:(id)arg1 operationQueue:(id)arg2 operationGroup:(id)arg3 asyncQueue:(id)arg4;	// IMP=0x00000000000bd668
- (id)init;	// IMP=0x00000000000bd662

@end

