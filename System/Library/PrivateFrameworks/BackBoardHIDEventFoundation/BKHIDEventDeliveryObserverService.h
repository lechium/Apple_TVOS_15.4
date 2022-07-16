//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BKHIDEventDeliveryResolutionObserver-Protocol.h>
#import <BackBoardHIDEventFoundation/BKSHIDEventObserverServerInterface-Protocol.h>

@class BKHIDEventDeliveryObserverServiceListener, BSMutableIntegerMap, NSMutableIndexSet, NSString;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver>
{
    BSMutableIntegerMap *_connectionsByPID;	// 8 = 0x8
    BKHIDEventDeliveryObserverServiceListener *_serviceListener;	// 16 = 0x10
    NSMutableIndexSet *_observerPIDs;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    BSMutableIntegerMap *_resolutionsByPID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000fe78
- (id)setObservesDeferringResolutions:(id)arg1;	// IMP=0x000000000000fd26
- (void)resolutionsDidChange:(id)arg1 forPID:(int)arg2;	// IMP=0x000000000000fc0b
- (void)removeConnectionForPID:(int)arg1;	// IMP=0x000000000000fbc1
- (void)addConnection:(id)arg1 forPID:(int)arg2;	// IMP=0x000000000000fb3d
- (id)init;	// IMP=0x000000000000facd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
