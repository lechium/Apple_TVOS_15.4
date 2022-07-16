//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreBluetooth/CBPeripheral.h>

@interface CBPeripheral (TVSettings)
+ (long long)tvs_previousRemoteType;	// IMP=0x000000000007fe1f
- (id)_getFirmwarePropertyFromIOReg:(id)arg1;	// IMP=0x0000000000080070
- (id)_tvs_previouslyConnectedPeripheralInfo;	// IMP=0x000000000007ffa3
- (void)tvs_tagAsBluetoothGamepad;	// IMP=0x000000000007fd24
- (void)tvs_tagAsBluetoothRemoteWithRemoteType:(long long)arg1;	// IMP=0x000000000007fb7a
- (id)tvs_hardwareVersion;	// IMP=0x000000000007fb61
- (id)tvs_multiTouchFirmwareVersion;	// IMP=0x000000000007fb48
- (id)tvs_firmwareVersion;	// IMP=0x000000000007fb2f
- (unsigned long long)tvs_vendorIdentifierAndProductIdentifier:(unsigned long long *)arg1;	// IMP=0x000000000007fac7
- (unsigned long long)tvs_vendorIdentifier;	// IMP=0x000000000007fab3
- (_Bool)tvs_isBluetoothGamepad;	// IMP=0x000000000007fa4e
- (long long)tvs_bluetoothRemoteType;	// IMP=0x000000000007f92e
- (_Bool)tvs_isGenericBluetoothRemote;	// IMP=0x000000000007f914
- (_Bool)tvs_isBluetoothRemote;	// IMP=0x000000000007f8af
- (_Bool)tvs_wasPreviouslyConnected;	// IMP=0x000000000007f87c
@end

