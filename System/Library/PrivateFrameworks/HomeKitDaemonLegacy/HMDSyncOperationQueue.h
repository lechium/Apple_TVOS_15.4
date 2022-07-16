//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDSyncOperationManager, HMFExponentialBackoffTimer, NSArray, NSMutableArray, NSString;

@interface HMDSyncOperationQueue : HMFObject <HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_stagedOperations;	// 16 = 0x10
    NSMutableArray *_waitingOperations;	// 24 = 0x18
    _Bool _hasExponentialBackoff;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    HMFExponentialBackoffTimer *_backoffTimer;	// 48 = 0x30
    HMDSyncOperationManager *_manager;	// 56 = 0x38
    double _initialDelay;	// 64 = 0x40
    double _initialBackoff;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00000000005feb9a
- (void).cxx_destruct;	// IMP=0x00000000005feb38
@property(nonatomic) _Bool hasExponentialBackoff; // @synthesize hasExponentialBackoff=_hasExponentialBackoff;
@property(nonatomic) double initialBackoff; // @synthesize initialBackoff=_initialBackoff;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(nonatomic) __weak HMDSyncOperationManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) HMFExponentialBackoffTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)operationsToCancel;	// IMP=0x00000000005fe7cb
- (id)allOperations;	// IMP=0x00000000005fe720
- (id)nextOperation;	// IMP=0x00000000005fe621
- (_Bool)isInMaximumTimeInterval;	// IMP=0x00000000005fe562
- (_Bool)processFiredTimer:(id)arg1;	// IMP=0x00000000005fe1c6
- (void)dropAllOperations;	// IMP=0x00000000005fdfb5
- (void)dropOperation:(id)arg1;	// IMP=0x00000000005fde9c
- (void)stageOperation:(id)arg1;	// IMP=0x00000000005fde83
- (void)addOperation:(id)arg1 withDelay:(double)arg2;	// IMP=0x00000000005fdb54
- (void)_addOperation:(id)arg1;	// IMP=0x00000000005fc60d
- (void)resetBackoffTimer;	// IMP=0x00000000005fc583
- (void)_createBackoffTimer;	// IMP=0x00000000005fc457
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) long long countTotal;
@property(readonly, copy) NSString *description;
- (void)_removeWaitingOperation:(id)arg1;	// IMP=0x00000000005fc24c
- (void)_addWaitingOperation:(id)arg1;	// IMP=0x00000000005fc1d6
- (void)_removeStagedOperation:(id)arg1;	// IMP=0x00000000005fc160
- (void)_addStagedOperation:(id)arg1;	// IMP=0x00000000005fc0ea
@property(readonly, copy) NSArray *waitingOperations;
@property(readonly, copy) NSArray *stagedOperations;
- (id)initName:(id)arg1 syncManager:(id)arg2 initialDelay:(double)arg3 initialBackoff:(double)arg4 hasBackoff:(_Bool)arg5;	// IMP=0x00000000005fbed6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

