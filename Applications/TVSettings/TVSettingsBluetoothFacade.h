//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBluetoothClient, NSArray, NSMutableDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TVSettingsBluetoothFacade : NSObject
{
    NSArray *_sortDescriptors;	// 8 = 0x8
    int _derpDidStartNotificationToken;	// 16 = 0x10
    _Bool _derpDidStartNotificationTokenIsValid;	// 20 = 0x14
    int _derpDidStopNotificationToken;	// 24 = 0x18
    _Bool _derpDidStopNotificationTokenIsValid;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_cuBluetoothQueue;	// 32 = 0x20
    _Bool _isCapsLockEnabled;	// 40 = 0x28
    NSArray *_remotes;	// 48 = 0x30
    NSArray *_myDevices;	// 56 = 0x38
    NSArray *_otherDevices;	// 64 = 0x40
    NSArray *_connectedDevices;	// 72 = 0x48
    CUBluetoothClient *_discoveryClient;	// 80 = 0x50
    NSMutableDictionary *_pairedCUDevices;	// 88 = 0x58
    NSUserDefaults *_bluetoothUserDefaults;	// 96 = 0x60
}

+ (_Bool)isBTKeyboardConnected;	// IMP=0x002000000000a5d0
+ (long long)numberOfConnectedDevices;	// IMP=0x001000000000a550
+ (long long)numberOfConnectedRemotes;	// IMP=0x001000000000a2e0
+ (void)unpairDevice:(id)arg1;	// IMP=0x001000000000a0d0
+ (void)disconnectDevice:(id)arg1;	// IMP=0x001000000000a050
+ (void)connectDevice:(id)arg1;	// IMP=0x0010000000009fd0
+ (id)deviceStatusFormatterForDeviceType:(long long)arg1 headsetType:(long long)arg2 showConnectedState:(_Bool)arg3;	// IMP=0x0010000000007150
- (void).cxx_destruct;	// IMP=0x002000000000adb0
@property(retain, nonatomic) NSUserDefaults *bluetoothUserDefaults; // @synthesize bluetoothUserDefaults=_bluetoothUserDefaults;
@property(retain, nonatomic) NSMutableDictionary *pairedCUDevices; // @synthesize pairedCUDevices=_pairedCUDevices;
@property(retain, nonatomic) CUBluetoothClient *discoveryClient; // @synthesize discoveryClient=_discoveryClient;
@property(nonatomic) _Bool isCapsLockEnabled; // @synthesize isCapsLockEnabled=_isCapsLockEnabled;
@property(copy, nonatomic) NSArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(copy, nonatomic) NSArray *otherDevices; // @synthesize otherDevices=_otherDevices;
@property(copy, nonatomic) NSArray *myDevices; // @synthesize myDevices=_myDevices;
@property(copy, nonatomic) NSArray *remotes; // @synthesize remotes=_remotes;
- (id)_deviceSortDescriptors;	// IMP=0x001000000000aa90
@property(nonatomic) _Bool isAirPodsRoutingSuggestionEnabled;
@property(nonatomic) _Bool filterDeviceScan;
- (void)stopScanning;	// IMP=0x0010000000009f70
- (void)startScanning;	// IMP=0x0010000000009f10
- (void)_managerDidUpdate:(id)arg1;	// IMP=0x0010000000009c00
- (void)_updateConnectedDevicesWithSet:(id)arg1;	// IMP=0x0010000000009af0
- (void)_updateOtherDevicesWithSet:(id)arg1;	// IMP=0x00100000000099e0
- (void)_updateMyDevicesWithSet:(id)arg1;	// IMP=0x0010000000009730
- (void)_updateRemotesWithSet:(id)arg1;	// IMP=0x00100000000093c0
- (void)_willEnterForeground:(id)arg1;	// IMP=0x0010000000009370
- (void);	// IMP=0x0010000000009320
- (void)dealloc;	// IMP=0x0010000000009230
- (id)init;	// IMP=0x00100000000084e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

