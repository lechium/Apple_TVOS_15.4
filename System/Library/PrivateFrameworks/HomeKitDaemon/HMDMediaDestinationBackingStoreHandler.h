//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationManagerMetricsDispatcher, HMFUnfairLock, HMMediaDestination, HMMutableMediaDestination;
@protocol HMDMediaDestinationBackingStoreHandlerDelegate;

@interface HMDMediaDestinationBackingStoreHandler
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    HMMutableMediaDestination *_destination;	// 16 = 0x10
    id <HMDMediaDestinationBackingStoreHandlerDelegate> _delegate;	// 24 = 0x18
    HMDMediaDestinationManagerMetricsDispatcher *_metricsDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000031d988
+ (id)backingStoreObjectForMediaDestination:(id)arg1;	// IMP=0x000000000031d8ad
- (void).cxx_destruct;	// IMP=0x000000000031d43f
@property(readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property __weak id <HMDMediaDestinationBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000031d2b9
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000031ccb0
- (void)setAudioGroupIdentifier:(id)arg1;	// IMP=0x000000000031cc1d
- (void)setSupportedOptions:(unsigned long long)arg1;	// IMP=0x000000000031cb9c
@property(readonly) HMMediaDestination *destination;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000031c885
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000031c47d
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000031c29d
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000031c12b
- (void)updateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000031bdb9
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000031ba51
- (id)initWithDestination:(id)arg1 backingStore:(id)arg2 metricsDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000031b8f0

@end

