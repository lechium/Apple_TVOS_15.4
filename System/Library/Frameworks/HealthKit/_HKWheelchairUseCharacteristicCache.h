//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKWheelchairUseObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface _HKWheelchairUseCharacteristicCache : NSObject
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    HKWheelchairUseObject *_wheelchairUseObject;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    int _characteristicUpdateToken;	// 48 = 0x30
    long long _queryRetries;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001b8acd
- (void)_handleFetchSuccess:(id)arg1;	// IMP=0x00000000001b889d
- (void)_handleFetchError:(id)arg1;	// IMP=0x00000000001b86ca
- (void)_lock_fetchWheelchairUse;	// IMP=0x00000000001b854c
- (void)_lock_fetchWheelchairUseIfNecessary;	// IMP=0x00000000001b8509
- (_Bool)_lock_needsFetch;	// IMP=0x00000000001b84e8
- (_Bool)hasFetchedWheelchairUse;	// IMP=0x00000000001b84bb
- (_Bool)_lock_isWheelchairUser;	// IMP=0x00000000001b847a
- (_Bool)isWheelchairUser;	// IMP=0x00000000001b8443
- (void)_alertObservers:(id)arg1 didUpdateToWheelchairUser:(_Bool)arg2;	// IMP=0x00000000001b8307
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001b82b3
- (void)addObserver:(id)arg1;	// IMP=0x00000000001b825f
- (void)dealloc;	// IMP=0x00000000001b8226
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000001b8021

@end

