//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>
#import <CoreUtils/CBPeripheralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheralManager, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUBluetoothClient : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate>
{
    NSData *_btAdvertisingAddress;	// 8 = 0x8
    CBCentralManager *_btCentralManager;	// 16 = 0x10
    _Bool _btCentralManagerNeeded;	// 24 = 0x18
    CBPeripheralManager *_btPeripheralManager;	// 32 = 0x20
    _Bool _btPeripheralManagerNeeded;	// 40 = 0x28
    _Bool _btConnectionEventsNeeded;	// 41 = 0x29
    _Bool _btConnectionDevicesInitialized;	// 42 = 0x2a
    struct {
        CDUnknownFunctionPointerType accessoryEvent;
        CDUnknownFunctionPointerType accessorySetupCommand;
        CDUnknownFunctionPointerType accessoryRelayMsgRecv;
        CDUnknownFunctionPointerType accessoryCommandStatus;
    } _btAccessoryCallbacks;	// 48 = 0x30
    _Bool _btAccessoryEventsNeeded;	// 80 = 0x50
    _Bool _btAccessoryEventsRegistered;	// 81 = 0x51
    struct BTAccessoryManagerImpl *_btAccessoryManager;	// 88 = 0x58
    struct BTSessionImpl *_btSession;	// 96 = 0x60
    _Bool _btSessionAddedServiceCallback;	// 104 = 0x68
    _Bool _btSessionAttaching;	// 105 = 0x69
    _Bool _btSessionNeeded;	// 106 = 0x6a
    _Bool _btSessionStarted;	// 107 = 0x6b
    struct BTLocalDeviceImpl *_btLocalDevice;	// 112 = 0x70
    NSData *_btLocalDeviceAddr;	// 120 = 0x78
    _Bool _btLocalDeviceAddrNeeded;	// 128 = 0x80
    struct {
        CDUnknownFunctionPointerType statusEvent;
        CDUnknownFunctionPointerType leTestStopped;
        CDUnknownFunctionPointerType afhMapChanged;
    } _btLocalDeviceCallbacks;	// 136 = 0x88
    _Bool _btLocalDeviceCallbacksNeeded;	// 160 = 0xa0
    _Bool _btLocalDeviceCallbacksRegistered;	// 161 = 0xa1
    struct BTPairingAgentImpl *_btPairingAgent;	// 168 = 0xa8
    _Bool _btPairingAgentNeeded;	// 176 = 0xb0
    _Bool _btPairingAgentStarted;	// 177 = 0xb1
    NSMutableDictionary *_btConnectedDevices;	// 184 = 0xb8
    NSMutableDictionary *_btPairedDevices;	// 192 = 0xc0
    _Bool _btPairedDevicesInitialized;	// 200 = 0xc8
    NSMutableArray *_findDeviceRequests;	// 208 = 0xd0
    _Bool _invalidateCalled;	// 216 = 0xd8
    _Bool _invalidateDone;	// 217 = 0xd9
    struct LogCategory *_ucat;	// 224 = 0xe0
    int _bluetoothState;	// 232 = 0xe8
    unsigned int _flags;	// 236 = 0xec
    unsigned int _requiredServices;	// 240 = 0xf0
    unsigned int _statusFlags;	// 244 = 0xf4
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 248 = 0xf8
    NSString *_label;	// 256 = 0x100
    CDUnknownBlockType _bluetoothAddressChangedHandler;	// 264 = 0x108
    CDUnknownBlockType _bluetoothStateChangedHandler;	// 272 = 0x110
    CDUnknownBlockType _deviceConnectedHandler;	// 280 = 0x118
    CDUnknownBlockType _deviceDisconnectedHandler;	// 288 = 0x120
    CDUnknownBlockType _deviceEventHandler;	// 296 = 0x128
    CDUnknownBlockType _devicePairedHandler;	// 304 = 0x130
    CDUnknownBlockType _deviceUnpairedHandler;	// 312 = 0x138
    CDUnknownBlockType _interruptionHandler;	// 320 = 0x140
    CDUnknownBlockType _invalidationHandler;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x000000000003f22a
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceUnpairedHandler; // @synthesize deviceUnpairedHandler=_deviceUnpairedHandler;
@property(copy, nonatomic) CDUnknownBlockType devicePairedHandler; // @synthesize devicePairedHandler=_devicePairedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceEventHandler; // @synthesize deviceEventHandler=_deviceEventHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceDisconnectedHandler; // @synthesize deviceDisconnectedHandler=_deviceDisconnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceConnectedHandler; // @synthesize deviceConnectedHandler=_deviceConnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothAddressChangedHandler; // @synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler;
@property(nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(nonatomic) unsigned int requiredServices; // @synthesize requiredServices=_requiredServices;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) int bluetoothState; // @synthesize bluetoothState=_bluetoothState;
- (void)updateStatusFlags;	// IMP=0x000000000003ef7e
- (void)updateDevice:(id)arg1 btDevice:(struct BTDeviceImpl *)arg2;	// IMP=0x000000000003e353
- (void)peripheralManagerDidUpdateState:(id)arg1;	// IMP=0x000000000003e29c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003e185
- (void)_handlePairingStatusChanged;	// IMP=0x000000000003d8fa
- (void)_handleDeviceEvent:(unsigned int)arg1 device:(struct BTDeviceImpl *)arg2;	// IMP=0x000000000003d7da
- (void)_handleDeviceDisconnected:(struct BTDeviceImpl *)arg1 reason:(int)arg2;	// IMP=0x000000000003d53d
- (void)_handleDeviceConnected:(struct BTDeviceImpl *)arg1;	// IMP=0x000000000003d336
- (void)_handleConnectedDevicesInit;	// IMP=0x000000000003ced8
- (void)_handleBluetoothAddressChanged;	// IMP=0x000000000003ccb9
- (id)_createCUBluetoothDeviceWithBTDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x000000000003ca87
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000000003c99f
- (struct BTDeviceImpl *)_btDeviceWithID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003c7c6
- (void)_btAccessoryPlacementChanged:(struct BTAccessoryManagerImpl *)arg1 device:(struct BTDeviceImpl *)arg2;	// IMP=0x000000000003c316
- (void)_btAccessoryStreamStateChanged:(int)arg1 device:(struct BTDeviceImpl *)arg2;	// IMP=0x000000000003c033
- (void)_btAccessoryNameChanged:(struct BTDeviceImpl *)arg1;	// IMP=0x000000000003bc1b
- (void)_btEnsureStopped;	// IMP=0x000000000003b7aa
- (void)_btEnsureStarted;	// IMP=0x000000000003aca9
- (void)_setDeviceFlags:(unsigned int)arg1 mask:(unsigned int)arg2 deviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003abf8
- (void)setDeviceFlags:(unsigned int)arg1 mask:(unsigned int)arg2 deviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003ab0a
- (void)_processFindDeviceRequests;	// IMP=0x000000000003a5a6
- (void)_findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a4d8
- (void)findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a433
- (void)_invalidated;	// IMP=0x000000000003a27d
- (void)invalidate;	// IMP=0x000000000003a20c
- (id)_internalDispatchQueue;	// IMP=0x000000000003a1fb
- (void)_externalInvokeBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a183
- (void)activate;	// IMP=0x000000000003a112
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000039fc2
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000039f58
- (id)init;	// IMP=0x0000000000039ed9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
