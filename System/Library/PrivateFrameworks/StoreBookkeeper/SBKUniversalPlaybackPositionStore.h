//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSTimer, SBKAsynchronousTask, SBKRequestHandler;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

@interface SBKUniversalPlaybackPositionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isActive;	// 16 = 0x10
    _Bool _hasLocalChangesToSync;	// 17 = 0x11
    NSMutableArray *_pendingTaskBlocks;	// 24 = 0x18
    NSString *_domain;	// 32 = 0x20
    NSNumber *_accountIdentifier;	// 40 = 0x28
    unsigned long long _automaticSynchronizeOptions;	// 48 = 0x30
    double _initialAutosyncInterval;	// 56 = 0x38
    double _pollingLimitFromBag;	// 64 = 0x40
    double _autorefreshInterval;	// 72 = 0x48
    _Bool _refreshTimerActive;	// 80 = 0x50
    id _accountsObserver;	// 88 = 0x58
    id _prefsObserver;	// 96 = 0x60
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;	// 104 = 0x68
    SBKAsynchronousTask *_currentTask;	// 112 = 0x70
    SBKAsynchronousTask *_lookupDomainVersionTask;	// 120 = 0x78
    SBKAsynchronousTask *_bagLookupTask;	// 128 = 0x80
    SBKRequestHandler *_currentTaskRequestHandler;	// 136 = 0x88
    NSDate *_dateToFireNextTimer;	// 144 = 0x90
    NSTimer *_timer;	// 152 = 0x98
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x00000000000196bc
- (void).cxx_destruct;	// IMP=0x00000000000172ef
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain, nonatomic) SBKRequestHandler *currentTaskRequestHandler; // @synthesize currentTaskRequestHandler=_currentTaskRequestHandler;
@property(retain, nonatomic) SBKAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain, nonatomic) SBKAsynchronousTask *lookupDomainVersionTask; // @synthesize lookupDomainVersionTask=_lookupDomainVersionTask;
@property(retain, nonatomic) SBKAsynchronousTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly, nonatomic) __weak id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x0000000000017160
- (void)_onQueueStartNewTimer;	// IMP=0x0000000000017138
- (void)_onQueueStopTimer;	// IMP=0x00000000000170d6
- (void)_onQueueResumeTimer;	// IMP=0x0000000000017090
- (void)_onQueueSuspendTimer;	// IMP=0x0000000000017005
- (void)_onQueueScheduleTimer;	// IMP=0x0000000000016f53
- (_Bool)_timerIsStopped;	// IMP=0x0000000000016ede
- (void)_timerFired:(id)arg1;	// IMP=0x0000000000016e93
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;	// IMP=0x0000000000016e45
- (double)_effectiveAutorefreshRate;	// IMP=0x0000000000016d06
- (void)_updateForStoreAccountsChange;	// IMP=0x0000000000016c7f
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016797
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;	// IMP=0x00000000000166fa
- (id)_accountForSyncing;	// IMP=0x0000000000016693
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016510
- (void)_onQueuePushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001638d
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016273
- (void)_onQueueRunTaskWithName:(id)arg1 taskCompletionHandler:(CDUnknownBlockType)arg2 runTaskBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015db2
- (void)_onQueueRunNextPendingTaskBlock;	// IMP=0x0000000000015d61
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015b45
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015ab7
- (void)loadBagContextWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015a28
- (void)loadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015999
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001590a
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001582b
- (void)pullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015772
- (void)pushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000156b9
- (void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001562c
- (_Bool)automaticallySynchronizeOnBecomeActive;	// IMP=0x000000000001561a
- (_Bool)_automaticallySynchronizeOnBecomeActive;	// IMP=0x0000000000015602
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;	// IMP=0x00000000000155bd
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x00000000000155ab
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x0000000000015592
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;	// IMP=0x000000000001554d
@property(nonatomic) _Bool hasLocalChangesToSync;
@property(nonatomic) unsigned long long automaticSynchronizeOptions;
- (void)resignActive;	// IMP=0x000000000001547a
- (void)becomeActive;	// IMP=0x000000000001542f
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;	// IMP=0x0000000000015405
- (void)_onQueueUpdateTimerForActiveChanges;	// IMP=0x0000000000015381
- (void)dealloc;	// IMP=0x000000000001521a
- (id)initWithInitialUpdateDelay:(double)arg1;	// IMP=0x0000000000015138
- (id)init;	// IMP=0x000000000001511e
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 accountIdentifier:(id)arg4 isActive:(_Bool)arg5;	// IMP=0x0000000000014d61
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 isActive:(_Bool)arg4;	// IMP=0x0000000000014ca4
- (void)deprecated_setDataSource:(id)arg1;	// IMP=0x0000000000014c93

@end

