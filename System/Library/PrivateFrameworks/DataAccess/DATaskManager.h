//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DAAccount, DAActivity, DATransaction, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer;
@protocol DATask;

@interface DATaskManager : NSObject
{
    DATransaction *_transaction;	// 8 = 0x8
    DAActivity *_daActivity;	// 16 = 0x10
    DAAccount *_account;	// 24 = 0x18
    int _state;	// 32 = 0x20
    id <DATask> _activeModalTask;	// 40 = 0x28
    id <DATask> _activeQueuedTask;	// 48 = 0x30
    NSString *_powerAssertionGroupID;	// 56 = 0x38
    NSMutableArray *_queuedExclusiveTasks;	// 64 = 0x40
    id <DATask> _activeExclusiveTask;	// 72 = 0x48
    NSMutableSet *_independentTasks;	// 80 = 0x50
    NSMutableSet *_heldIndependentTasks;	// 88 = 0x58
    NSMutableSet *_modalHeldIndependentTasks;	// 96 = 0x60
    NSMutableArray *_mQueuedTasks;	// 104 = 0x68
    id <DATask> _modalHeldActiveQueuedTask;	// 112 = 0x70
    NSMutableArray *_queuedModalTasks;	// 120 = 0x78
    NSTimer *_managerIdleTimer;	// 128 = 0x80
    NSTimer *_userInitiatedSyncTimer;	// 136 = 0x88
    NSTimer *_xpcTransactionTimer;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000002d83d
@property(retain, nonatomic) NSTimer *xpcTransactionTimer; // @synthesize xpcTransactionTimer=_xpcTransactionTimer;
@property(retain, nonatomic) NSTimer *userInitiatedSyncTimer; // @synthesize userInitiatedSyncTimer=_userInitiatedSyncTimer;
@property(retain, nonatomic) NSTimer *managerIdleTimer; // @synthesize managerIdleTimer=_managerIdleTimer;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *queuedModalTasks; // @synthesize queuedModalTasks=_queuedModalTasks;
@property(retain, nonatomic) id <DATask> modalHeldActiveQueuedTask; // @synthesize modalHeldActiveQueuedTask=_modalHeldActiveQueuedTask;
@property(retain, nonatomic) NSMutableArray *mQueuedTasks; // @synthesize mQueuedTasks=_mQueuedTasks;
@property(retain, nonatomic) NSMutableSet *modalHeldIndependentTasks; // @synthesize modalHeldIndependentTasks=_modalHeldIndependentTasks;
@property(retain, nonatomic) NSMutableSet *heldIndependentTasks; // @synthesize heldIndependentTasks=_heldIndependentTasks;
@property(retain, nonatomic) NSMutableSet *independentTasks; // @synthesize independentTasks=_independentTasks;
@property(retain, nonatomic) id <DATask> activeExclusiveTask; // @synthesize activeExclusiveTask=_activeExclusiveTask;
@property(retain, nonatomic) NSMutableArray *queuedExclusiveTasks; // @synthesize queuedExclusiveTasks=_queuedExclusiveTasks;
@property(copy, nonatomic) NSString *powerAssertionGroupID; // @synthesize powerAssertionGroupID=_powerAssertionGroupID;
@property(retain, nonatomic) id <DATask> activeQueuedTask; // @synthesize activeQueuedTask=_activeQueuedTask;
@property(retain, nonatomic) id <DATask> activeModalTask; // @synthesize activeModalTask=_activeModalTask;
@property(nonatomic) __weak DAAccount *account; // @synthesize account=_account;
- (void)taskManagerWillRemoveTask:(id)arg1;	// IMP=0x000000000002d6b3
- (void)taskManagerDidAddTask:(id)arg1;	// IMP=0x000000000002d6ad
- (void)_releasePowerAssertionForTask:(id)arg1;	// IMP=0x000000000002d412
- (void)_retainPowerAssertionForTask:(id)arg1;	// IMP=0x000000000002d2d6
- (void)_cancelTasksWithReason:(int)arg1;	// IMP=0x000000000002cf99
- (void)_scheduleStartModal:(id)arg1;	// IMP=0x000000000002cec3
- (void)_schedulePerformTask:(id)arg1;	// IMP=0x000000000002cea7
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;	// IMP=0x000000000002cd34
- (void)_makeStateTransition;	// IMP=0x000000000002bc30
- (void)_reactivateHeldTasks;	// IMP=0x000000000002b791
- (void)_startModal:(id)arg1;	// IMP=0x000000000002b581
- (void)_requestCancelTasksWithReason:(int)arg1;	// IMP=0x000000000002b372
- (void)_performTask:(id)arg1;	// IMP=0x000000000002b15a
- (_Bool)shouldCancelTaskDueToOnPowerFetchMode;	// IMP=0x000000000002b116
- (_Bool)taskIsModal:(id)arg1;	// IMP=0x000000000002b016
- (void)taskEndModal:(id)arg1;	// IMP=0x000000000002ad30
- (void)taskRequestModal:(id)arg1;	// IMP=0x000000000002a604
- (void)taskDidFinish:(id)arg1;	// IMP=0x00000000000288e6
- (_Bool)_hasTasksIndicatingARunningSync;	// IMP=0x000000000002889e
- (_Bool)_hasTasksForcingNetworkConnection;	// IMP=0x0000000000028598
- (_Bool)_taskInQueueForcesNetworkConnection:(id)arg1;	// IMP=0x0000000000028445
- (_Bool)_taskForcesNetworking:(id)arg1;	// IMP=0x00000000000283e6
- (void)_logSyncEnd;	// IMP=0x00000000000283e0
- (void)_endXpcTransaction;	// IMP=0x000000000002823a
- (void)_clearUserInitiatedSyncTimer;	// IMP=0x000000000002814a
- (void)_useOpportunisticSocketsAgain;	// IMP=0x0000000000028057
- (id)stateString;	// IMP=0x0000000000027db8
- (void)cancelTasksDueToOnPowerMode;	// IMP=0x0000000000027da1
- (void)shutdown;	// IMP=0x000000000002797d
- (void)cancelAllTasks;	// IMP=0x0000000000027843
- (void)cancelTask:(id)arg1;	// IMP=0x000000000002782f
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;	// IMP=0x000000000002774b
- (void)submitQueuedTask:(id)arg1;	// IMP=0x00000000000271e9
- (void)submitIndependentTask:(id)arg1;	// IMP=0x0000000000026cb4
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(_Bool)arg2;	// IMP=0x00000000000266bd
- (void)submitExclusiveTask:(id)arg1;	// IMP=0x00000000000266a9
- (_Bool)isShutdown;	// IMP=0x0000000000026670
- (id)accountPersistentUUID;	// IMP=0x0000000000026620
- (id)accountID;	// IMP=0x00000000000265d0
- (id)identityPersist;	// IMP=0x0000000000026580
- (_Bool)useSSL;	// IMP=0x000000000002653c
- (id)OAuth2Token;	// IMP=0x0000000000026408
- (id)password;	// IMP=0x00000000000263b8
- (id)server;	// IMP=0x0000000000026368
- (long long)port;	// IMP=0x0000000000026324
- (id)user;	// IMP=0x00000000000262d4
- (id)userAgent;	// IMP=0x00000000000261da
- (id)deviceType;	// IMP=0x00000000000261d0
- (_Bool)_useFakeDescriptions;	// IMP=0x00000000000261c8
- (id)_version;	// IMP=0x000000000002613d
- (void)_populateVersionDescriptions;	// IMP=0x00000000000260ac
@property(readonly, nonatomic) NSArray *queuedTasks;
- (void)dealloc;	// IMP=0x0000000000025b3b
- (id)init;	// IMP=0x000000000000209f
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000025a85
@property(readonly, nonatomic) NSArray *allTasks;

@end

