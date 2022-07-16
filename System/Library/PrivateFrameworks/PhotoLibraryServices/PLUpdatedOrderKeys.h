//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PLUpdatedOrderKeys : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isObservingOrderKeys;	// 12 = 0xc
    NSSet *_observedRelationships;	// 16 = 0x10
    NSMutableDictionary *_updatedOrderKeyObjectIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000264521
- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;	// IMP=0x0000000000264498
- (id)getAndClearUpdatedOrderKeys;	// IMP=0x0000000000264435
- (id)_persistentStoresForContext:(id)arg1;	// IMP=0x00000000002643e2
- (_Bool)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;	// IMP=0x0000000000263dcc
- (_Bool)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;	// IMP=0x0000000000263ce7
@property(readonly) _Bool isObservingOrderKeys;
- (id)init;	// IMP=0x0000000000263bf3

@end
