//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDBackingStoreTransactionActions, HMDDevice, HMDHome, HMDMessageDispatcher, HMDResidentDevice, HMFFuture, NSArray, NSDictionary, NSUUID;
@protocol HMDDevicePreferenceDataSource, HMDResidentDeviceManagerDelegate;

@protocol HMDResidentDeviceManager <NSObject, HMFLogging, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver>
@property(nonatomic, getter=isResidentSupported) _Bool residentSupported;
@property(readonly) NSUUID *primaryResidentUUID;
@property(readonly, nonatomic) _Bool hasTrustZoneCapableResident;
@property(readonly, nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) _Bool currentDeviceConfirmedPrimaryResident;
@property(readonly, nonatomic, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly, nonatomic, getter=isCurrentDeviceAvailableResident) _Bool currentDeviceAvailableResident;
@property(readonly, nonatomic, getter=isResidentAvailable) _Bool residentAvailable;
@property(readonly, copy, nonatomic) NSArray *availableResidentDevices;
@property(readonly, copy, nonatomic) NSArray *residentDevices;
@property(readonly, nonatomic) __weak HMDResidentDevice *primaryResidentDevice;
@property __weak id <HMDResidentDeviceManagerDelegate> delegate;
- (void)addDataSource:(id <HMDDevicePreferenceDataSource>)arg1;
- (void)confirmWithCompletionHandler:(void (^)(NSError *))arg1;
- (NSDictionary *)dumpState;
- (void)run;
- (void)updatePrimaryResidentWithUUID:(NSUUID *)arg1 actions:(HMDBackingStoreTransactionActions *)arg2;
- (HMFFuture *)foundNewPrimaryResident:(HMDDevice *)arg1;
- (void)confirmOnAvailability;
- (void)confirmAsResident;
- (void)electResidentDevice:(unsigned long long)arg1;
- (void)notifyClientsOfUpdatedResidentDevice:(HMDResidentDevice *)arg1;
- (void)updateResidentAvailability;
- (void)atHomeLevelChanged:(long long)arg1;
- (void)removeResidentDevice:(HMDResidentDevice *)arg1;
- (void)configureWithHome:(HMDHome *)arg1 messageDispatcher:(HMDMessageDispatcher *)arg2;
@end

