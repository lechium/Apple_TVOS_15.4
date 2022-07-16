//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VirtualGarage/VGExternalAccessoryUpdating-Protocol.h>
#import <VirtualGarage/VGOEMAppSOCStreaming-Protocol.h>
#import <VirtualGarage/VGOEMApplicationFinderUpdates-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, VGExternalAccessory;
@protocol OS_dispatch_queue, VGDataCoordinatorDelegate, VGOEMApplicationFinding;

@interface VGDataCoordinator : NSObject <VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming>
{
    id <VGDataCoordinatorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    id <VGOEMApplicationFinding> _applicationFinder;	// 32 = 0x20
    NSArray *_applications;	// 40 = 0x28
    VGExternalAccessory *_accessory;	// 48 = 0x30
    NSMutableArray *_unpairedVehicles;	// 56 = 0x38
    NSTimer *_vehicleStateRefreshTimer;	// 64 = 0x40
    NSMutableSet *_observedVehicles;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000eaca
- (void)getLatestStateOfVehicle:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e0d1
- (void)OEMAppsUpdated:(id)arg1;	// IMP=0x000000000000cc03
- (void)_removeUnpairedIapVehicleIfNeeded;	// IMP=0x000000000000c916
- (void)_loadIapVehicles;	// IMP=0x000000000000c7c4
- (void)accessoryUpdatedWithVehicle:(id)arg1;	// IMP=0x000000000000c140
- (void)vehicleStateUpdated:(id)arg1;	// IMP=0x000000000000b950
- (void)_stopChargeStreamForVehicle:(id)arg1;	// IMP=0x000000000000b861
- (void)_startChargeStreamForVehicle:(id)arg1;	// IMP=0x000000000000b758
- (id)_oemAppForChargeStreamForVehicle:(id)arg1;	// IMP=0x000000000000b5ca
- (void)_loadAllOEMVehiclesForApps:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ab98
- (id)_applicationForVehicle:(id)arg1;	// IMP=0x000000000000a996
- (void)_setupTimerIfNeeded;	// IMP=0x000000000000a898
- (void)_invalidateRefreshTimer;	// IMP=0x000000000000a807
- (void)_refreshStateForTrackedVehicles;	// IMP=0x000000000000a196
- (void)endAllContinuousUpdates;	// IMP=0x0000000000009f0c
- (void)startContinuousUpdatesForVehicle:(id)arg1;	// IMP=0x0000000000009c83
- (void)unpairVehicle:(id)arg1;	// IMP=0x00000000000092e8
- (void)_saveOnboardingInfoForVehicle:(id)arg1;	// IMP=0x0000000000009286
- (_Bool)shouldUnpairVehicle:(id)arg1;	// IMP=0x0000000000009222
- (void)finishOnboardingVehicle:(id)arg1;	// IMP=0x0000000000008a32
- (id)_vehicleStateProviderForVehicle:(id)arg1;	// IMP=0x00000000000088d8
- (unsigned long long)_indexOfVehicleInUnpairedVehicles:(id)arg1;	// IMP=0x0000000000008832
- (void)_updateStateOfChargeForVehicle:(id)arg1 syncAcrossDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008096
- (void)_updateGarageWithVehicle:(id)arg1 syncAcrossDevices:(_Bool)arg2;	// IMP=0x0000000000007129
- (double)_vehicleStateRefreshInterval;	// IMP=0x0000000000007112
- (id)deviceIdentifier;	// IMP=0x0000000000006f0e
@property(readonly, copy, nonatomic) NSArray *unpairedVehicles;
- (void)dealloc;	// IMP=0x0000000000006d61
- (id)initWithApplicationFinder:(id)arg1 externalAccessory:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000006b9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
