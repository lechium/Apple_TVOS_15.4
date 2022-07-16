//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, NSArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PBBluetoothObserver : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workSerialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessSerialQueue;	// 24 = 0x18
    CBCentralManager *_coreBluetoothManager;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_reloadDevicesSource;	// 40 = 0x28
    NSArray *_currentPairedDevices;	// 48 = 0x30
}

+ (id)_connectedDevicesFromDevices:(id)arg1;	// IMP=0x00200000000917a0
+ (id)sharedInstance;	// IMP=0x0010000000090c20
- (void).cxx_destruct;	// IMP=0x0020000000092a20
@property(retain, nonatomic) NSArray *currentPairedDevices; // @synthesize currentPairedDevices=_currentPairedDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reloadDevicesSource; // @synthesize reloadDevicesSource=_reloadDevicesSource;
@property(retain, nonatomic) CBCentralManager *coreBluetoothManager; // @synthesize coreBluetoothManager=_coreBluetoothManager;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessSerialQueue; // @synthesize accessSerialQueue=_accessSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workSerialQueue; // @synthesize workSerialQueue=_workSerialQueue;
- (void)_signalReloadDevicesSource;	// IMP=0x0010000000092850
- (void)_workQueue_reloadDevices;	// IMP=0x0010000000091da0
- (void)_workQueue_activate;	// IMP=0x0010000000091870
- (void)_handleBluetoothManagerNotificationHandler:(id)arg1;	// IMP=0x0010000000091750
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00100000000916b0
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0010000000091630
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00100000000915f0
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;	// IMP=0x0010000000091570
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;	// IMP=0x00100000000914d0
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;	// IMP=0x0010000000091450
@property(readonly, nonatomic) NSArray *connectedDevices;
@property(readonly, nonatomic) NSArray *pairedDevices;
- (void)activate;	// IMP=0x0010000000090f10
- (void)dealloc;	// IMP=0x0010000000090e30
- (id)_init;	// IMP=0x0010000000090d50
- (id)init;	// IMP=0x0010000000090d20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

