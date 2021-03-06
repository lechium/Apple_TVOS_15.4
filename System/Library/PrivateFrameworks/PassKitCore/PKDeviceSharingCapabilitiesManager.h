//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentServiceDelegate-Protocol.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSString, PKPaymentService;
@protocol OS_dispatch_queue;

@interface PKDeviceSharingCapabilitiesManager : NSObject <PKPaymentServiceDelegate>
{
    NSHashTable *_observers;	// 8 = 0x8
    struct os_unfair_lock_s _lockObservers;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    NSObject<OS_dispatch_queue> *_replyQueue;	// 24 = 0x18
    PKPaymentService *_paymentService;	// 32 = 0x20
    NSMutableArray *_familyMembers;	// 40 = 0x28
    NSMutableDictionary *_fetchStatusByAppleID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000267dd7
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000267be3
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000000267b8a
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000267b31
- (void)_sendDeviceSharingCapabilitiesUpdated:(id)arg1 maximumPossibleDevices:(long long)arg2 forAppleID:(id)arg3;	// IMP=0x0000000000267a14
- (void)_sendDeviceSharingCapabilitiesUpdated:(id)arg1 newSharingCapabilties:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00000000002678db
- (void)didReceiveDeviceSharingCapabilities:(id)arg1 forHandle:(id)arg2;	// IMP=0x00000000002673e1
- (id)currentFetchStatusForAppleID:(id)arg1;	// IMP=0x0000000000267371
- (void)fetchDeviceCapabilitesForAppleIDs:(id)arg1 associatedFamilyMembers:(id)arg2;	// IMP=0x0000000000266ea1
- (id)init;	// IMP=0x0000000000266db1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

