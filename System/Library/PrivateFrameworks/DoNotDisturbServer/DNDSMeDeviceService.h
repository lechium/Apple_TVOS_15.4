//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DNDMeDeviceState, DNDSMeDeviceStore, NSMutableSet;
@protocol DNDSBackingStore, OS_dispatch_queue;

@interface DNDSMeDeviceService : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    DNDMeDeviceState *_meDeviceState;	// 24 = 0x18
    NSMutableSet *_listeners;	// 32 = 0x20
    DNDSMeDeviceStore *_store;	// 40 = 0x28
    id <DNDSBackingStore> _backingStore;	// 48 = 0x30
    struct os_unfair_lock_s _storeLock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003a7c3
- (_Bool)_queue_saveDataToBackingStoreWithError:(id *)arg1;	// IMP=0x000000000003a583
- (_Bool)_saveDataToBackingStoreWithError:(id *)arg1;	// IMP=0x000000000003a4c1
- (void)_loadDataFromBackingStore;	// IMP=0x000000000003a178
- (void)_queue_fetchAllDevices;	// IMP=0x000000000003a122
- (void)devicesChanged;	// IMP=0x000000000003a06f
- (void)meDeviceChanged;	// IMP=0x0000000000039fbc
- (void)removeListener:(id)arg1;	// IMP=0x0000000000039f11
- (void)addListener:(id)arg1;	// IMP=0x0000000000039e66
@property(readonly, copy, nonatomic) DNDMeDeviceState *meDeviceState;
- (id)init;	// IMP=0x0000000000039bda

@end
