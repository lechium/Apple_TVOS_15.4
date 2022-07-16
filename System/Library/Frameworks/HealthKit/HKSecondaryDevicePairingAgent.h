//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKTaskServerProxyProvider *_proxyProvider;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
}

+ (id)serverInterface;	// IMP=0x00000000001d5dac
+ (id)clientInterface;	// IMP=0x00000000001d5d8c
- (void).cxx_destruct;	// IMP=0x00000000001d5e06
- (void)connectionInvalidated;	// IMP=0x00000000001d5e00
- (id)remoteInterface;	// IMP=0x00000000001d5de6
- (id)exportedInterface;	// IMP=0x00000000001d5dcc
- (void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d5afd
- (void)fetchSharingStatusWithPairedGuardianWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d58a0
- (void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d5633
- (void)tearDownHealthSharingWithPairedGuardianWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d540c
- (void)performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d517a
- (void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d4f02
- (void)requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d4c50
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000001d4b79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

