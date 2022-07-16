//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CUWiFiDevice : NSObject
{
    unsigned int _deviceIECategory;	// 8 = 0x8
    unsigned int _deviceIEFlags;	// 12 = 0xc
    int _rssi;	// 16 = 0x10
    int _present;	// 20 = 0x14
    NSData *_bssid;	// 24 = 0x18
    NSData *_deviceIEBluetoothMAC;	// 32 = 0x20
    NSData *_deviceIEDeviceID;	// 40 = 0x28
    NSString *_deviceIEManufacturer;	// 48 = 0x30
    NSString *_deviceIEModel;	// 56 = 0x38
    NSString *_deviceIEName;	// 64 = 0x40
    NSData *_deviceIDOUI;	// 72 = 0x48
    NSData *_deviceIDSetupHash;	// 80 = 0x50
    NSUUID *_identifier;	// 88 = 0x58
    NSData *_ieData;	// 96 = 0x60
    id _platformObject;	// 104 = 0x68
    NSDictionary *_rawScanResult;	// 112 = 0x70
    NSString *_ssid;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000c194f
@property(nonatomic) int present; // @synthesize present=_present;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSDictionary *rawScanResult; // @synthesize rawScanResult=_rawScanResult;
@property(retain, nonatomic) id platformObject; // @synthesize platformObject=_platformObject;
@property(copy, nonatomic) NSData *ieData; // @synthesize ieData=_ieData;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *deviceIDSetupHash; // @synthesize deviceIDSetupHash=_deviceIDSetupHash;
@property(copy, nonatomic) NSData *deviceIDOUI; // @synthesize deviceIDOUI=_deviceIDOUI;
@property(copy, nonatomic) NSString *deviceIEName; // @synthesize deviceIEName=_deviceIEName;
@property(copy, nonatomic) NSString *deviceIEModel; // @synthesize deviceIEModel=_deviceIEModel;
@property(copy, nonatomic) NSString *deviceIEManufacturer; // @synthesize deviceIEManufacturer=_deviceIEManufacturer;
@property(nonatomic) unsigned int deviceIEFlags; // @synthesize deviceIEFlags=_deviceIEFlags;
@property(copy, nonatomic) NSData *deviceIEDeviceID; // @synthesize deviceIEDeviceID=_deviceIEDeviceID;
@property(nonatomic) unsigned int deviceIECategory; // @synthesize deviceIECategory=_deviceIECategory;
@property(copy, nonatomic) NSData *deviceIEBluetoothMAC; // @synthesize deviceIEBluetoothMAC=_deviceIEBluetoothMAC;
@property(copy, nonatomic) NSData *bssid; // @synthesize bssid=_bssid;
- (unsigned int)_updateWithDeviceIE:(const char *)arg1 end:(const char *)arg2;	// IMP=0x00000000000c0dc2
- (id)description;	// IMP=0x00000000000c0c2b

@end

