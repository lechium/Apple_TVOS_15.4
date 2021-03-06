//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPeripheralServices/TVPSBluetoothDeviceManaging-Protocol.h>
#import <TVPeripheralServices/TVSBluetoothManagerDelegate-Protocol.h>
#import <TVPeripheralServices/TVSBluetoothManagerScanObserver-Protocol.h>

@class NSDictionary, NSHashTable, NSSet, NSString, TVPSBluetoothDeviceManagerConfiguration;
@protocol OS_dispatch_queue_serial, TVPSBluetoothDeviceManagingPairingDelegate;

__attribute__((visibility("hidden")))
@interface TVPSTVSBluetoothDeviceManager : NSObject <TVSBluetoothManagerScanObserver, TVSBluetoothManagerDelegate, TVPSBluetoothDeviceManaging>
{
    TVPSBluetoothDeviceManagerConfiguration *_configuration;	// 8 = 0x8
    id <TVPSBluetoothDeviceManagingPairingDelegate> _pairingDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue_serial> *_accessQueue;	// 24 = 0x18
    NSHashTable *_pairedDevicesObservers;	// 32 = 0x20
    NSHashTable *_pairableDevicesObservers;	// 40 = 0x28
    NSDictionary *_pairedDevicesDictionary;	// 48 = 0x30
    NSDictionary *_pairableDevicesDictionary;	// 56 = 0x38
    NSDictionary *_backingDevicesDictionary;	// 64 = 0x40
}

+ (id)_processNewBackingDevices:(id)arg1 currentDevicesDictionary:(id)arg2 devicesUpdate:(id *)arg3;	// IMP=0x000000000000bd10
- (void).cxx_destruct;	// IMP=0x000000000000c810
@property(retain, nonatomic) NSDictionary *backingDevicesDictionary; // @synthesize backingDevicesDictionary=_backingDevicesDictionary;
@property(retain, nonatomic) NSDictionary *pairableDevicesDictionary; // @synthesize pairableDevicesDictionary=_pairableDevicesDictionary;
@property(retain, nonatomic) NSDictionary *pairedDevicesDictionary; // @synthesize pairedDevicesDictionary=_pairedDevicesDictionary;
@property(readonly, nonatomic) NSHashTable *pairableDevicesObservers; // @synthesize pairableDevicesObservers=_pairableDevicesObservers;
@property(readonly, nonatomic) NSHashTable *pairedDevicesObservers; // @synthesize pairedDevicesObservers=_pairedDevicesObservers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) TVPSBluetoothDeviceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_backingDeviceForDevice:(id)arg1;	// IMP=0x000000000000b6b0
- (id)_deviceForBackingDevice:(id)arg1;	// IMP=0x000000000000b5d0
- (void)_notifyPairableDevicesObserversWithUpdate:(id)arg1;	// IMP=0x000000000000b2f0
- (void)_notifyPairedDevicesObserversWithUpdate:(id)arg1;	// IMP=0x000000000000b010
- (void)_updateDeviceSets;	// IMP=0x0000000000009e80
- (void)_performWorkOnCalloutQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009d50
- (void)_performBluetoothManagerDeviceWorkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009a50
- (void)_performBluetoothManagerWorkWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009920
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000009800
- (void)_handleBluetoothManagerDidUpdateNotification:(id)arg1;	// IMP=0x00000000000096e0
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x0000000000009510
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x0000000000009340
- (void)bluetoothManager:(id)arg1 requestPairingPIN:(id)arg2;	// IMP=0x0000000000008c60
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x0000000000008900
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x0000000000008880
- (void)unpairDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000084c0
- (void)disconnectDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008100
- (void)connectDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007ce0
- (id)deviceForUniqueIdentifier:(id)arg1;	// IMP=0x0000000000007930
- (void)removePairableDevicesObserver:(id)arg1;	// IMP=0x00000000000076a0
- (void)addPairableDevicesObserver:(id)arg1;	// IMP=0x0000000000007430
@property(readonly, copy, nonatomic) NSSet *pairableDevices;
@property(readonly, copy, nonatomic) NSSet *disconnectedPairedDevices;
@property(readonly, copy, nonatomic) NSSet *disconnectingPairedDevices;
@property(readonly, copy, nonatomic) NSSet *connectedPairedDevices;
@property(readonly, copy, nonatomic) NSSet *connectingPairedDevices;
- (void)removePairedDevicesObserver:(id)arg1;	// IMP=0x0000000000006d00
- (void)addPairedDevicesObserver:(id)arg1;	// IMP=0x0000000000006b90
@property(readonly, copy, nonatomic) NSSet *pairedDevices;
@property(nonatomic) __weak id <TVPSBluetoothDeviceManagingPairingDelegate> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
- (void)dealloc;	// IMP=0x00000000000064d0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000006150
- (id)init;	// IMP=0x0000000000006110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

