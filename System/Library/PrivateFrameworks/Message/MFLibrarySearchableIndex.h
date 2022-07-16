//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class MFCancelationToken, MFCoalescer, MFLazyCache, MFWeakSet, NSMutableArray, NSMutableSet, NSString, _MFLibrarySearchableIndexPendingRemovals;
@protocol MFLibrarySearchableIndexDataSource, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface MFLibrarySearchableIndex : NSObject <MFDiagnosticsGenerator>
{
    NSString *_indexName;	// 8 = 0x8
    MFCancelationToken *_cancelationToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_coalescingTimer;	// 32 = 0x20
    long long _resumeCount;	// 40 = 0x28
    long long _transaction;	// 48 = 0x30
    unsigned long long _throttledIndexingBatchSize;	// 56 = 0x38
    unsigned long long _throttledDataSourceBatchSize;	// 64 = 0x40
    unsigned long long _currentMaximumBatchSize;	// 72 = 0x48
    MFCoalescer *_budgetCoalescer;	// 80 = 0x50
    double _remainingIndexingBudget;	// 88 = 0x58
    long long _remainingIndexingBudgetOverage;	// 96 = 0x60
    NSObject<OS_os_activity> *_batchIndexingActivity;	// 104 = 0x68
    NSMutableArray *_pendingItems;	// 112 = 0x70
    NSMutableSet *_pendingDomainRemovals;	// 120 = 0x78
    _MFLibrarySearchableIndexPendingRemovals *_pendingIdentifierRemovals;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_indexingQueue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_dataSourceQueue;	// 144 = 0x90
    MFLazyCache *_searchResultsCache;	// 152 = 0x98
    MFWeakSet *_middleware;	// 160 = 0xa0
    _Bool _isForeground;	// 168 = 0xa8
    _Bool _isActive;	// 169 = 0xa9
    _Bool _needsRefresh;	// 170 = 0xaa
    _Bool _needsVerification;	// 171 = 0xab
    _Bool _clientStateFetched;	// 172 = 0xac
    _Bool _coalesceTimerFired;	// 173 = 0xad
    _Bool _scheduledProcessing;	// 174 = 0xae
    _Bool _scheduledRefresh;	// 175 = 0xaf
    _Bool _scheduledVerification;	// 176 = 0xb0
    id <MFLibrarySearchableIndexDataSource> _dataSource;	// 184 = 0xb8
}

+ (void)_saveLocalClientState:(id)arg1;	// IMP=0x000000000006d8aa
+ (id)_localClientState;	// IMP=0x000000000006d83c
+ (id)_localClientStateURL;	// IMP=0x000000000006d779
@property(nonatomic) id <MFLibrarySearchableIndexDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)identifiersMatchingCriterion:(id)arg1;	// IMP=0x00000000000701c9
- (void)removeAllItems;	// IMP=0x0000000000070108
- (void)removeItemsForDomainIdentifier:(id)arg1;	// IMP=0x000000000006ffdc
- (void)removeItemsWithIdentifiers:(id)arg1 reasons:(id)arg2;	// IMP=0x000000000006fe6e
- (void)removeItemsWithIdentifiers:(id)arg1;	// IMP=0x000000000006fe1c
- (void)_indexItems:(id)arg1 fromRefresh:(_Bool)arg2;	// IMP=0x000000000006f8e1
- (void)indexItems:(id)arg1;	// IMP=0x000000000006f8cd
- (id)indexedEmptySubjectIdentifers;	// IMP=0x000000000006f860
- (void)requestSpotlightDiagnosticsForMessageRowId:(id)arg1;	// IMP=0x000000000006f85a
- (void)_processSpotlightVerificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f7b1
- (void)_processRefreshRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f6e6
- (void)_getDomainRemovals:(id *)arg1 identifierRemovals:(id *)arg2;	// IMP=0x000000000006f53c
- (id)_consumeBatchOfSize:(unsigned long long)arg1;	// IMP=0x000000000006f31b
- (void)_scheduleDataSourceRefresh;	// IMP=0x000000000006f21c
- (void)_scheduleProcessPendingItems;	// IMP=0x000000000006eea2
- (void)_queueTransitionActive:(_Bool)arg1;	// IMP=0x000000000006eae9
- (void)_queueRefresh;	// IMP=0x000000000006eab3
- (void)_queueConsumeBudgetItemCount:(unsigned long long)arg1;	// IMP=0x000000000006ea94
- (void)_queueConsumeBudgetElapsedPeriod:(double)arg1;	// IMP=0x000000000006e9b5
- (void)_transitionWithBudgetTimeUsed:(double)arg1;	// IMP=0x000000000006e926
- (void)_coalescingTimerFired;	// IMP=0x000000000006e892
- (void)_stopCoalescingTimer;	// IMP=0x000000000006e836
- (void)_startCoalescingTimer;	// IMP=0x000000000006e703
- (void)_dataSourceVerifyRepresentativeSampleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e63a
- (void)_dataSourceRequestNeededUpdatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e2f2
- (void)_dataSourceInvalidateItemsGreaterThanTransaction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006e1fe
- (void)_dataSourceAssignTransaction:(long long)arg1 forIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e145
- (void)_dataSourceAssignTransaction:(long long)arg1 updates:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e01f
- (void)_dataSourceScheduleWork:(CDUnknownBlockType)arg1;	// IMP=0x000000000006dfbb
- (void)refresh;	// IMP=0x000000000006df5a
- (void)resume;	// IMP=0x000000000006dda8
- (void)suspend;	// IMP=0x000000000006dc06
- (void)_invalidateCache;	// IMP=0x000000000006dbed
- (long long)_nextTransaction;	// IMP=0x000000000006db42
@property(readonly, getter=_transaction) long long transaction;
- (void)_noteNeedsLastClientStateFetch;	// IMP=0x000000000006da37
- (void)_fetchLastClientState;	// IMP=0x000000000006da29
- (void)applicationWillResume;	// IMP=0x000000000006d762
- (void)applicationWillSuspend;	// IMP=0x000000000006d74e
@property(nonatomic, getter=_isForeground, setter=_setForeground:) _Bool foreground;
- (double)_throttleRequestedSize:(unsigned long long *)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d644
- (void)_verifySpotlightIndex;	// IMP=0x000000000006d5d1
- (void)_registerDistantFutureSpotlightVerification;	// IMP=0x000000000006d45e
- (void)_scheduleSpotlightVerification;	// IMP=0x000000000006d1b8
- (void)setRemainingIndexingBudget:(double)arg1 shouldPersist:(_Bool)arg2;	// IMP=0x000000000006d0d6
- (void)_persistRemainingIndexingBudgetValue:(id)arg1;	// IMP=0x000000000006cfba
- (void)_scheduleResetIndexingBudgetTimer;	// IMP=0x000000000006ce73
- (void)_resetIndexingBudgetTimer;	// IMP=0x000000000006cdc2
- (double)persistedRemainingIndexingBudget;	// IMP=0x000000000006cb5d
- (id)_budgetPersistenceKey;	// IMP=0x000000000006cb23
- (void)_powerStateChanged;	// IMP=0x000000000006cad9
@property(readonly, nonatomic) unsigned long long pendingIndexItemsCount;
- (id)copyDiagnosticInformation;	// IMP=0x000000000006c60a
- (void)addMiddleware:(id)arg1;	// IMP=0x000000000006c56a
- (void)dealloc;	// IMP=0x000000000006c436
- (id)initWithName:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000006c072
- (id)init;	// IMP=0x000000000006c03f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

