//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource, AFBluetoothWirelessSplitterSessionInfo, AFBluetoothWirelessSplitterSessionStateObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface ADMobileBluetoothWirelessSplitterSessionProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    AFBluetoothWirelessSplitterSessionInfo *_wirelessSplitterSessionInfo;	// 32 = 0x20
    AFBluetoothWirelessSplitterSessionStateObserver *_observer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d1f26
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d1e58
- (void)_invalidate;	// IMP=0x00100000000d1cf1
- (void)_accessBTLocalDeviceUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d1a47
- (void)_fetchWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d1533
- (void)_updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000d12ce
- (void)_getWirelessSplitterSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d11dd
- (void)_reload:(_Bool)arg1;	// IMP=0x00100000000d1023
- (void)invalidate;	// IMP=0x00100000000d0fc2
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000d0f14
- (void)addObserver:(id)arg1;	// IMP=0x00100000000d0e23
- (void)getSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d0d76
- (void)bluetoothWirelessSplitterSessionStateObserver:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000000d0bc5
- (void)reload;	// IMP=0x00100000000d0b5f
- (void)updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000d0ab7
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000d0742
- (void)dealloc;	// IMP=0x00100000000d068d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
