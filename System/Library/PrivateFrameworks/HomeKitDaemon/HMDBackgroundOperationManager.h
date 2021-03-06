//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HAPPairingIdentity, HMDBackgroundOperationGraph, HMDHomeManager, HMFTimer, HMFUnfairLock, NSMutableArray, NSOperationQueue, NSString;

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    HMFTimer *_expirationTimer;	// 16 = 0x10
    HMFTimer *_dataSourceCoalescingTimer;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    NSMutableArray *_operationList;	// 40 = 0x28
    NSMutableArray *_dataSourceList;	// 48 = 0x30
    NSString *_backgroundOperationsDataStorePath;	// 56 = 0x38
    HMDBackgroundOperationGraph *_opGraph;	// 64 = 0x40
    HAPPairingIdentity *_hh1Key;	// 72 = 0x48
    HAPPairingIdentity *_hh2Key;	// 80 = 0x50
    NSOperationQueue *_queue;	// 88 = 0x58
}

+ (id)findHomeUsingIdentifier:(id)arg1 homeManager:(id)arg2;	// IMP=0x000000000061b9a4
+ (id)findAccessoryUsing:(id)arg1 fromHome:(id)arg2;	// IMP=0x000000000061b8d4
+ (id)findAccessoryUsing:(id)arg1 homeManager:(id)arg2;	// IMP=0x000000000061b7fe
+ (id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)arg1;	// IMP=0x000000000061b7a4
+ (id)getAllReachableAccessories:(id)arg1;	// IMP=0x000000000061b6be
+ (id)getAllPairedAccessoriesOfAllHomes:(id)arg1;	// IMP=0x000000000061b6a9
+ (id)logCategory;	// IMP=0x000000000061b679
+ (id)allowedClasses;	// IMP=0x000000000061b55e
+ (id)sharedManager;	// IMP=0x000000000061b52e
- (void).cxx_destruct;	// IMP=0x000000000061a340
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HAPPairingIdentity *hh2Key; // @synthesize hh2Key=_hh2Key;
@property(retain, nonatomic) HAPPairingIdentity *hh1Key; // @synthesize hh1Key=_hh1Key;
@property(readonly, nonatomic) HMDBackgroundOperationGraph *opGraph; // @synthesize opGraph=_opGraph;
@property(retain, nonatomic) NSString *backgroundOperationsDataStorePath; // @synthesize backgroundOperationsDataStorePath=_backgroundOperationsDataStorePath;
@property(retain, nonatomic) NSMutableArray *dataSourceList; // @synthesize dataSourceList=_dataSourceList;
@property(retain, nonatomic) NSMutableArray *operationList; // @synthesize operationList=_operationList;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)handleResidentDeviceUpdated:(id)arg1;	// IMP=0x000000000061a176
- (id)dumpState;	// IMP=0x000000000061a080
- (void)__archiveToDiskForUnitTesting:(id)arg1;	// IMP=0x000000000061a073
- (id)__unarchiveFromDiskForUnitTesting;	// IMP=0x000000000061a061
- (id)__initForUnitTesting;	// IMP=0x0000000000619fdd
- (void)__clearLocalStoreForUnitTesting;	// IMP=0x0000000000619eae
- (void)__resetAndRebuildOperationGraphForUnitTesting;	// IMP=0x0000000000619e18
- (void)__removeAllOperationsForUnitTesting;	// IMP=0x0000000000619d9d
- (void)__removeAllDataSourcesForUnitTesting;	// IMP=0x0000000000619d22
- (id)__getReadyToExecuteOperations;	// IMP=0x0000000000619b8f
- (void)removeOperationsForAccessoryIdentifier:(id)arg1 operationKind:(id)arg2;	// IMP=0x00000000006199e0
- (void)removeAllOperationForAccessoryIdentifier:(id)arg1;	// IMP=0x0000000000619922
- (void)removeAllOperationsBeforeStartingHH2Migration;	// IMP=0x0000000000619785
- (id)unarchiveFromDisk;	// IMP=0x000000000061929b
- (void)forceEvaluateOperations;	// IMP=0x0000000000619287
- (void)completeProcessingForOperation:(id)arg1;	// IMP=0x0000000000619092
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000618fa6
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;	// IMP=0x0000000000618d17
- (void)checkAndRemoveExpiredOperations;	// IMP=0x0000000000618bbc
- (void)_runOperation:(id)arg1 withParameters:(id)arg2;	// IMP=0x0000000000618a71
- (void)_runOperationsAfterEvaluatingPredicate:(id)arg1;	// IMP=0x00000000006189b3
- (void)_dataSourceHasUpdate:(id)arg1;	// IMP=0x00000000006187ad
- (void)dataSourceHasUpdate:(id)arg1;	// IMP=0x0000000000618770
- (void)addDefaultDataSources;	// IMP=0x000000000061870f
- (void)addDataSource:(id)arg1;	// IMP=0x00000000006184e7
- (void)removeOperation:(id)arg1;	// IMP=0x0000000000618314
- (_Bool)addOperationDependency:(id)arg1 dependsOn:(id)arg2;	// IMP=0x0000000000617cf4
- (void)addOperation:(id)arg1;	// IMP=0x0000000000617ad1
@property(readonly, nonatomic) HMFTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer; // @synthesize dataSourceCoalescingTimer=_dataSourceCoalescingTimer;
- (id)initWithLocalStorePath:(id)arg1;	// IMP=0x0000000000617721
- (void)registerForNotifications:(_Bool)arg1;	// IMP=0x00000000005b1737
- (_Bool)shouldWeScheduleKeyRollOperationsOnThisDevice;	// IMP=0x00000000005b1717
- (id)getHH2ControllerKey;	// IMP=0x00000000005b1557
- (id)getHH1ControllerKey;	// IMP=0x00000000005b1382
- (_Bool)scheduleHH2KeyRollForAccessory:(id)arg1 previousIdentity:(id)arg2 newIdentity:(id)arg3;	// IMP=0x00000000005b0f61
- (void)auditKeyChainEntryForAccessory:(id)arg1;	// IMP=0x00000000005b0da9
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)arg1;	// IMP=0x00000000005b0cfa
- (void)scheduleHH2KeyRollOperationForHome:(id)arg1 isResident:(_Bool)arg2;	// IMP=0x00000000005b0a4d
- (void)makeSureToLoadPairingIdentities;	// IMP=0x00000000005b072b
- (void)startSchedulingKeyRollOperations:(_Bool)arg1 forAccessory:(id)arg2;	// IMP=0x00000000005b0576
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)arg1;	// IMP=0x00000000005b04e4
- (void)_scheduleHH2KeyRollIfNecessary:(id)arg1;	// IMP=0x00000000005b0346
- (void)scheduleHH2KeyRollForAccessory:(id)arg1;	// IMP=0x00000000005b02ff
- (void)scheduleHH2KeyRollIfNecessary;	// IMP=0x00000000005b02eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

