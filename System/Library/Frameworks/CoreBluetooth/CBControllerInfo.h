//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSArray, NSData, NSError, NSString;

@interface CBControllerInfo : NSObject <CUXPCCodable>
{
    BOOL _hciTransportType;	// 8 = 0x8
    unsigned char _lmpVersion;	// 9 = 0x9
    unsigned char _vendorIDSource;	// 10 = 0xa
    unsigned short _vendorID;	// 12 = 0xc
    int _discoverableState;	// 16 = 0x10
    int _inquiryState;	// 20 = 0x14
    unsigned int _productID;	// 24 = 0x18
    unsigned int _supportedServices;	// 28 = 0x1c
    NSArray *_audioLinkQualityArray;	// 32 = 0x20
    long long _bluetoothState;	// 40 = 0x28
    NSString *_chipsetID;	// 48 = 0x30
    NSString *_firmwareName;	// 56 = 0x38
    NSString *_firmwareVersion;	// 64 = 0x40
    NSData *_hardwareAddressData;	// 72 = 0x48
    NSError *_lastChipsetInitError;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000277f0
@property(copy, nonatomic) NSError *lastChipsetInitError; // @synthesize lastChipsetInitError=_lastChipsetInitError;
@property(nonatomic) unsigned char vendorIDSource; // @synthesize vendorIDSource=_vendorIDSource;
@property(nonatomic) unsigned short vendorID; // @synthesize vendorID=_vendorID;
@property(nonatomic) unsigned int supportedServices; // @synthesize supportedServices=_supportedServices;
@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(nonatomic) unsigned char lmpVersion; // @synthesize lmpVersion=_lmpVersion;
@property(nonatomic) int inquiryState; // @synthesize inquiryState=_inquiryState;
@property(nonatomic) BOOL hciTransportType; // @synthesize hciTransportType=_hciTransportType;
@property(copy, nonatomic) NSData *hardwareAddressData; // @synthesize hardwareAddressData=_hardwareAddressData;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *firmwareName; // @synthesize firmwareName=_firmwareName;
@property(nonatomic) int discoverableState; // @synthesize discoverableState=_discoverableState;
@property(copy, nonatomic) NSString *chipsetID; // @synthesize chipsetID=_chipsetID;
@property(nonatomic) long long bluetoothState; // @synthesize bluetoothState=_bluetoothState;
@property(copy, nonatomic) NSArray *audioLinkQualityArray; // @synthesize audioLinkQualityArray=_audioLinkQualityArray;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000026650
- (id)description;	// IMP=0x0000000000026630
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x0000000000026390
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000025fe0

@end
