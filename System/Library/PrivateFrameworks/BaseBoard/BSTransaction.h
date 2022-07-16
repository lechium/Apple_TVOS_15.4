//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSWatchdogProviding-Protocol.h>

@class BSAuditHistory, NSArray, NSDate, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface BSTransaction : NSObject <BSWatchdogProviding>
{
    NSMutableArray *_parentTransactionRelationships;	// 8 = 0x8
    NSMutableSet *_lifeAssertions;	// 16 = 0x10
    _Bool _aborted;	// 24 = 0x18
    _Bool _interrupted;	// 25 = 0x19
    _Bool _inSubclassBegin;	// 26 = 0x1a
    NSDate *_startTime;	// 32 = 0x20
    NSMutableDictionary *_milestonesToHandlers;	// 40 = 0x28
    NSMutableArray *_childTransactionRelationships;	// 48 = 0x30
    NSMutableSet *_milestones;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    unsigned long long _state;	// 72 = 0x48
    BSAuditHistory *_auditHistory;	// 80 = 0x50
    NSObject<OS_os_log> *_auditHistoryLog;	// 88 = 0x58
    _Bool _disableDebugLogCheckForUnitTesting;	// 96 = 0x60
    _Bool _debugLoggingEnabled;	// 97 = 0x61
    NSMutableSet *_debugLogCategories;	// 104 = 0x68
    NSString *_cachedDescriptionProem;	// 112 = 0x70
    NSMutableArray *_blockObservers;	// 120 = 0x78
    CDUnknownBlockType _completionBlock;	// 128 = 0x80
    _Bool _cachedDefaultBasedAuditHistoryEnabled;	// 136 = 0x88
    _Bool _failed;	// 137 = 0x89
    _Bool _auditHistoryEnabled;	// 138 = 0x8a
    NSError *_error;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000001e709
@property(readonly, nonatomic, getter=isFailed) _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)_loggingProem;	// IMP=0x000000000001e670
- (id)_descriptionProem;	// IMP=0x000000000001e662
- (void)_removeDebugLogCategory:(id)arg1;	// IMP=0x000000000001e612
- (void)_addDebugLogCategory:(id)arg1;	// IMP=0x000000000001e3ec
- (id)_stringForMilestones:(id)arg1;	// IMP=0x000000000001e335
- (void)_addAuditHistoryItem:(id)arg1;	// IMP=0x000000000001e1ba
@property(nonatomic, getter=isAuditHistoryEnabled) _Bool auditHistoryEnabled; // @synthesize auditHistoryEnabled=_auditHistoryEnabled;
- (double)watchdogTimeout;	// IMP=0x000000000001dfc6
- (_Bool)shouldWatchdog:(id *)arg1;	// IMP=0x000000000001dfbe
- (id)_graphNodeDebugName;	// IMP=0x000000000001a699
- (void)_failWithReason:(id)arg1 description:(id)arg2 precipitatingError:(id)arg3;	// IMP=0x000000000001a594
- (void)_failWithReason:(id)arg1 description:(id)arg2;	// IMP=0x000000000001a57f
- (void)_failForTimeoutWithDescription:(id)arg1;	// IMP=0x000000000001a527
- (void)_evaluateCompletion;	// IMP=0x0000000000019af6
- (_Bool)_isRootTransaction;	// IMP=0x0000000000019a93
- (id)_customizedDescriptionProperties;	// IMP=0x0000000000019a8b
- (_Bool)_debugLoggingEnabled;	// IMP=0x0000000000019a82
- (id)_debugLogCategories;	// IMP=0x0000000000019a74
- (_Bool)_revertWithReason:(id)arg1;	// IMP=0x0000000000019a6c
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x0000000000019a64
- (void)_childTransactionDidComplete:(id)arg1;	// IMP=0x0000000000019a5e
- (void)_childTransactionDidFinishWork:(id)arg1;	// IMP=0x0000000000019a58
- (void)_didRemoveChildTransaction:(id)arg1;	// IMP=0x0000000000019a52
- (void)_willRemoveChildTransaction:(id)arg1;	// IMP=0x0000000000019a4c
- (void)_didAddChildTransaction:(id)arg1;	// IMP=0x0000000000019a46
- (void)_willAddChildTransaction:(id)arg1;	// IMP=0x0000000000019a40
- (_Bool)_shouldComplete;	// IMP=0x0000000000019a38
- (void)_didComplete;	// IMP=0x0000000000019a32
- (void)_willComplete;	// IMP=0x0000000000019a2c
- (void)_didFinishWork;	// IMP=0x0000000000019a26
- (void)_willFailWithReason:(id)arg1;	// IMP=0x0000000000019a20
- (void)_didInterruptWithReason:(id)arg1;	// IMP=0x0000000000019a1a
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x0000000000019a14
- (void)_didSatisfyMilestone:(id)arg1;	// IMP=0x0000000000019a0e
- (void)_didBegin;	// IMP=0x0000000000019a08
- (void)_begin;	// IMP=0x0000000000019a02
- (void)_willBegin;	// IMP=0x00000000000199fc
- (_Bool)_canBeInterrupted;	// IMP=0x00000000000199f4
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000198c6
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)listenForSatisfiedMilestone:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000196d3
- (void)evaluateMilestone:(id)arg1 withEvaluator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019283
- (void)satisfyMilestone:(id)arg1;	// IMP=0x0000000000019262
- (_Bool)isWaitingForMilestone:(id)arg1;	// IMP=0x00000000000191cf
- (void)removeAllMilestones;	// IMP=0x0000000000019170
- (_Bool)removeMilestones:(id)arg1;	// IMP=0x0000000000018b7e
- (_Bool)removeMilestone:(id)arg1;	// IMP=0x0000000000018b10
- (void)addMilestones:(id)arg1;	// IMP=0x00000000000185a3
- (void)addMilestone:(id)arg1;	// IMP=0x000000000001853c
- (void)failWithReason:(id)arg1;	// IMP=0x0000000000017f76
- (void)interruptWithReason:(id)arg1;	// IMP=0x0000000000017a07
- (void)interrupt;	// IMP=0x00000000000179ee
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
- (_Bool)isInterruptable;	// IMP=0x00000000000177a2
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isFinishedWorking) _Bool finishedWorking;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic, getter=hasStarted) _Bool started;
- (void)begin;	// IMP=0x0000000000016470
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000163b2
- (void)addObserver:(id)arg1;	// IMP=0x0000000000016307
- (void)registerBlockObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000000161c2
@property(readonly, nonatomic) NSArray *allErrors;
- (void)removeAllChildTransactions;	// IMP=0x0000000000015e45
- (void)removeChildTransaction:(id)arg1;	// IMP=0x0000000000015c1a
- (void)removeAllChildTransactionsOfClass:(Class)arg1;	// IMP=0x00000000000157e0
- (id)childTransactionsOfClass:(Class)arg1;	// IMP=0x00000000000155de
- (_Bool)hasChildTransactionsOfClass:(Class)arg1;	// IMP=0x000000000001541c
- (void)addChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2;	// IMP=0x0000000000014704
- (void)addChildTransaction:(id)arg1;	// IMP=0x00000000000146f0
@property(readonly, nonatomic) NSArray *childTransactions;
@property(readonly, nonatomic) NSSet *milestones;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)dealloc;	// IMP=0x0000000000013d74
- (id)init;	// IMP=0x0000000000013af2

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

