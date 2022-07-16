//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaDestinationControllerMetricsEventDispatcher, HMFUnfairLock, HMMediaDestinationControllerData, HMMutableMediaDestinationControllerData, NSString;
@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate;

@interface HMDMediaDestinationControllerBackingStoreHandler <HMFLogging>
{
    HMMutableMediaDestinationControllerData *_data;	// 8 = 0x8
    HMFUnfairLock *_lock;	// 16 = 0x10
    id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> _delegate;	// 24 = 0x18
    HMDMediaDestinationControllerMetricsEventDispatcher *_metricsEventDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000006410c
+ (id)backingStoreObjectForData:(id)arg1;	// IMP=0x0000000000064048
- (void).cxx_destruct;	// IMP=0x000000000006366c
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000000635c8
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000063485
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;	// IMP=0x0000000000063225
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;	// IMP=0x0000000000062fe1
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000062ac8
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x0000000000062997
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;	// IMP=0x0000000000062866
- (void)updateAvailableDestinationIdentifiers:(id)arg1;	// IMP=0x00000000000627d3
- (void)updateDestinationIdentifier:(id)arg1;	// IMP=0x0000000000062740
@property(readonly, copy) HMMediaDestinationControllerData *data;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006241d
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000061f31
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061d51
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000061bdf
- (void)removeControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061a3c
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006185e
- (void)updateDestinationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061680
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000000614e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
