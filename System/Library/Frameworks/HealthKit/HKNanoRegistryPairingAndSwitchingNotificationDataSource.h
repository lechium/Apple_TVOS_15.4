//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource
{
}

- (void)unregisterObserverForDevicePairingChanges:(id)arg1;	// IMP=0x000000000008e080
- (void)registerObserverForDevicePairingChanges:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000008de7d
- (id)_pairingChangeNotifications;	// IMP=0x000000000008dc68
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000008dbdf
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;	// IMP=0x000000000008dac2
- (id)_notificationCenter;	// IMP=0x000000000008daa9

@end
