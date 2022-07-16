//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDDeviceControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDevice, HMDDeviceController, HMDHome, HMFUnfairLock, NSString, NSUUID;
@protocol HMDResidentDeviceManager;

@interface HMDResidentDevice : HMFObject <HMDDeviceControllerDelegate, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    HMDDevice *_device;	// 16 = 0x10
    HMDDeviceController *_deviceController;	// 24 = 0x18
    _Bool _confirmed;	// 32 = 0x20
    _Bool _enabled;	// 33 = 0x21
    _Bool _reachable;	// 34 = 0x22
    _Bool _lowBattery;	// 35 = 0x23
    NSUUID *_identifier;	// 40 = 0x28
    long long _batteryState;	// 48 = 0x30
    HMDHome *_home;	// 56 = 0x38
    id <HMDResidentDeviceManager> _residentDeviceManager;	// 64 = 0x40
}

+ (id)deriveUUIDFromHomeUUID:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x00000000006b5fd1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006b5fc9
+ (id)logCategory;	// IMP=0x00000000006b5f99
+ (id)batteryStateAsString:(long long)arg1;	// IMP=0x00000000006b5f5f
+ (id)shortDescription;	// IMP=0x00000000006b5f4d
- (void).cxx_destruct;	// IMP=0x00000000006b5099
@property(nonatomic) __weak id <HMDResidentDeviceManager> residentDeviceManager; // @synthesize residentDeviceManager=_residentDeviceManager;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(nonatomic, getter=isLowBattery) _Bool lowBattery; // @synthesize lowBattery=_lowBattery;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006b4d81
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006b4bed
- (id)logIdentifier;	// IMP=0x00000000006b4b9d
- (id)dumpState;	// IMP=0x00000000006b4996
- (void)deviceController:(id)arg1 didUpdateDevice:(id)arg2;	// IMP=0x00000000006b4989
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000006b468a
- (void)_handleResidentDeviceUpdateConfirmed:(_Bool)arg1;	// IMP=0x00000000006b43f8
- (void)_handleResidentDeviceUpdateEnabled:(_Bool)arg1;	// IMP=0x00000000006b4000
- (void)_residentDeviceModelUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000006b2fb5
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000006b2faf
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000006b2ea8
- (void)__deviceUpdated:(id)arg1;	// IMP=0x00000000006b2d26
- (id)deviceController;	// IMP=0x00000000006b2bfa
- (id)runtimeState;	// IMP=0x00000000006b2a42
@property(readonly, nonatomic) _Bool supportsResidentFirmwareUpdate;
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
@property(readonly, nonatomic) _Bool supportsShortcutActions;
@property(readonly, nonatomic) _Bool supportsMediaActions;
@property(readonly, nonatomic) _Bool supportsMediaSystem;
@property(readonly, nonatomic) _Bool supportsSharedEventTriggerActivation;
@property(readonly, nonatomic, getter=isConfirmed) _Bool confirmed;
@property(readonly, nonatomic) unsigned long long status;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006b241d
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000006b221b
- (id)shortDescription;	// IMP=0x00000000006b2159
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, getter=isBlocked) _Bool blocked;
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000006b1e3f
- (void)dealloc;	// IMP=0x00000000006b1dca
- (id)__initWithDeviceController:(id)arg1;	// IMP=0x00000000006b1caf
- (id)initWithDevice:(id)arg1 home:(id)arg2;	// IMP=0x00000000006b1ba2
- (id)initWithDevice:(id)arg1;	// IMP=0x00000000006b1a12
- (id)initWithModel:(id)arg1;	// IMP=0x00000000006b1605
- (id)init;	// IMP=0x00000000006b155d

// Remaining properties
@property(readonly) Class superclass;

@end
