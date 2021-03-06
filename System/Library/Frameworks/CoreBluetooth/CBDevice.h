//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CBDictionaryCodable-Protocol.h>
#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface CBDevice : NSObject <CUXPCCodable, CBDictionaryCodable>
{
    BOOL _classicRSSI;	// 8 = 0x8
    unsigned char _deviceType;	// 9 = 0x9
    BOOL _doubleTapActionLeft;	// 10 = 0xa
    BOOL _doubleTapActionRight;	// 11 = 0xb
    BOOL _doubleTapCapability;	// 12 = 0xc
    BOOL _microphoneMode;	// 13 = 0xd
    BOOL _placementMode;	// 14 = 0xe
    BOOL _smartRoutingMode;	// 15 = 0xf
    unsigned char _vendorIDSource;	// 16 = 0x10
    unsigned char _airplaySourceFlags;	// 17 = 0x11
    unsigned char _airplayTargetConfigSeed;	// 18 = 0x12
    unsigned char _airplayTargetFlags;	// 19 = 0x13
    unsigned char _homeKitV1CompatibleVersion;	// 20 = 0x14
    unsigned char _homeKitV1ConfigurationNumber;	// 21 = 0x15
    unsigned char _homeKitV1Flags;	// 22 = 0x16
    unsigned char _nearbyActionType;	// 23 = 0x17
    unsigned char _nearbyActivityLevel;	// 24 = 0x18
    unsigned char _objectDiscoveryBatteryState;	// 25 = 0x19
    unsigned char _objectDiscoveryMode;	// 26 = 0x1a
    unsigned char _objectSetupBatteryPerformance;	// 27 = 0x1b
    unsigned char _objectSetupBatteryState;	// 28 = 0x1c
    unsigned char _objectSetupColorCode;	// 29 = 0x1d
    unsigned char _proximityPairingSubType;	// 30 = 0x1e
    unsigned char _proximityServiceCategory;	// 31 = 0x1f
    unsigned char _proximityServiceFlags;	// 32 = 0x20
    BOOL _proximityServiceMeasuredPower;	// 33 = 0x21
    unsigned char _proximityServiceSubType;	// 34 = 0x22
    unsigned char _proximityServiceVersion;	// 35 = 0x23
    unsigned char _spatialInteractionFlags;	// 36 = 0x24
    unsigned short _vendorID;	// 38 = 0x26
    unsigned short _homeKitV1Category;	// 40 = 0x28
    unsigned short _homeKitV1StateNumber;	// 42 = 0x2a
    unsigned short _homeKitV2InstanceID;	// 44 = 0x2c
    unsigned short _homeKitV2StateNumber;	// 46 = 0x2e
    unsigned short _proximityServicePSM;	// 48 = 0x30
    unsigned short _proximityServiceVendorID;	// 50 = 0x32
    unsigned short _batteryInfoMain;	// 52 = 0x34
    unsigned short _batteryInfoLeft;	// 54 = 0x36
    unsigned short _batteryInfoRight;	// 56 = 0x38
    unsigned short _batteryInfoCase;	// 58 = 0x3a
    unsigned short _colorInfo;	// 60 = 0x3c
    int _audioStreamState;	// 64 = 0x40
    int _bleChannel;	// 68 = 0x44
    int _bleRSSI;	// 72 = 0x48
    unsigned int _connectedServices;	// 76 = 0x4c
    int _primaryPlacement;	// 80 = 0x50
    int _secondaryPlacement;	// 84 = 0x54
    unsigned int _productID;	// 88 = 0x58
    unsigned int _airplayTargetIPv4;	// 92 = 0x5c
    unsigned int _homeKitV1SetupHash;	// 96 = 0x60
    unsigned int _nearbyActionFlags;	// 100 = 0x64
    unsigned int _nearbyInfoFlags;	// 104 = 0x68
    unsigned int _objectDiscoveryProductID;	// 108 = 0x6c
    unsigned int _objectSetupFlags;	// 112 = 0x70
    unsigned int _proximityPairingProductID;	// 116 = 0x74
    unsigned int _proximityServiceProductID;	// 120 = 0x78
    unsigned int _spatialInteractionUWBTokenFlags;	// 124 = 0x7c
    unsigned int _internalFlags;	// 128 = 0x80
    unsigned int _supportedServices;	// 132 = 0x84
    unsigned int _spatialInteractionPeerID;	// 136 = 0x88
    NSString *_accountID;	// 144 = 0x90
    NSData *_bleAddressData;	// 152 = 0x98
    NSData *_bleAdvertisementData;	// 160 = 0xa0
    NSData *_bleAppleManufacturerData;	// 168 = 0xa8
    NSData *_btAddressData;	// 176 = 0xb0
    unsigned long long _changeFlags;	// 184 = 0xb8
    NSString *_contactID;	// 192 = 0xc0
    unsigned long long _deviceFlags;	// 200 = 0xc8
    unsigned long long _discoveryFlags;	// 208 = 0xd0
    NSString *_firmwareVersion;	// 216 = 0xd8
    NSString *_identifier;	// 224 = 0xe0
    NSString *_idsDeviceID;	// 232 = 0xe8
    NSString *_model;	// 240 = 0xf0
    NSString *_name;	// 248 = 0xf8
    NSString *_serialNumber;	// 256 = 0x100
    NSData *_homeKitV1DeviceIDData;	// 264 = 0x108
    NSData *_homeKitV2AccessoryIDData;	// 272 = 0x110
    NSData *_homeKitV2AuthTagData;	// 280 = 0x118
    unsigned long long _homeKitV2Value;	// 288 = 0x120
    NSData *_nearbyAuthTag;	// 296 = 0x128
    NSData *_objectDiscoveryNearOwnerID;	// 304 = 0x130
    NSData *_objectDiscoveryPublicKeyData;	// 312 = 0x138
    NSString *_objectSetupFontCode;	// 320 = 0x140
    NSString *_objectSetupMessage;	// 328 = 0x148
    NSData *_proximityServiceClassicAddress;	// 336 = 0x150
    NSData *_proximityServiceData;	// 344 = 0x158
    NSData *_proximityServiceSetupHash;	// 352 = 0x160
    NSArray *_spatialInteractionIdentifiers;	// 360 = 0x168
    NSData *_spatialInteractionTokenData;	// 368 = 0x170
    NSDictionary *_spatialInteractionUserInfo;	// 376 = 0x178
    NSData *_spatialInteractionUWBConfigData;	// 384 = 0x180
    NSMutableDictionary *_deviceInfo;	// 392 = 0x188
    unsigned long long _lastSeenTicks;	// 400 = 0x190
    unsigned long long _oldDiscoveryFlags;	// 408 = 0x198
    NSData *_nearbyActionAuthTag;	// 416 = 0x1a0
    NSData *_nearbyInfoAuthTag;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x0000000000061c80
@property(nonatomic) unsigned int spatialInteractionPeerID; // @synthesize spatialInteractionPeerID=_spatialInteractionPeerID;
@property(copy, nonatomic) NSData *nearbyInfoAuthTag; // @synthesize nearbyInfoAuthTag=_nearbyInfoAuthTag;
@property(copy, nonatomic) NSData *nearbyActionAuthTag; // @synthesize nearbyActionAuthTag=_nearbyActionAuthTag;
@property(nonatomic) unsigned int supportedServices; // @synthesize supportedServices=_supportedServices;
@property(nonatomic) unsigned long long oldDiscoveryFlags; // @synthesize oldDiscoveryFlags=_oldDiscoveryFlags;
@property(nonatomic) unsigned long long lastSeenTicks; // @synthesize lastSeenTicks=_lastSeenTicks;
@property(nonatomic) unsigned int internalFlags; // @synthesize internalFlags=_internalFlags;
@property(retain, nonatomic) NSMutableDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) unsigned short colorInfo; // @synthesize colorInfo=_colorInfo;
@property(nonatomic) unsigned short batteryInfoCase; // @synthesize batteryInfoCase=_batteryInfoCase;
@property(nonatomic) unsigned short batteryInfoRight; // @synthesize batteryInfoRight=_batteryInfoRight;
@property(nonatomic) unsigned short batteryInfoLeft; // @synthesize batteryInfoLeft=_batteryInfoLeft;
@property(nonatomic) unsigned short batteryInfoMain; // @synthesize batteryInfoMain=_batteryInfoMain;
@property(nonatomic) unsigned int spatialInteractionUWBTokenFlags; // @synthesize spatialInteractionUWBTokenFlags=_spatialInteractionUWBTokenFlags;
@property(copy, nonatomic) NSData *spatialInteractionUWBConfigData; // @synthesize spatialInteractionUWBConfigData=_spatialInteractionUWBConfigData;
@property(copy, nonatomic) NSDictionary *spatialInteractionUserInfo; // @synthesize spatialInteractionUserInfo=_spatialInteractionUserInfo;
@property(copy, nonatomic) NSData *spatialInteractionTokenData; // @synthesize spatialInteractionTokenData=_spatialInteractionTokenData;
@property(copy, nonatomic) NSArray *spatialInteractionIdentifiers; // @synthesize spatialInteractionIdentifiers=_spatialInteractionIdentifiers;
@property(nonatomic) unsigned char spatialInteractionFlags; // @synthesize spatialInteractionFlags=_spatialInteractionFlags;
@property(nonatomic) unsigned char proximityServiceVersion; // @synthesize proximityServiceVersion=_proximityServiceVersion;
@property(nonatomic) unsigned short proximityServiceVendorID; // @synthesize proximityServiceVendorID=_proximityServiceVendorID;
@property(nonatomic) unsigned char proximityServiceSubType; // @synthesize proximityServiceSubType=_proximityServiceSubType;
@property(copy, nonatomic) NSData *proximityServiceSetupHash; // @synthesize proximityServiceSetupHash=_proximityServiceSetupHash;
@property(nonatomic) unsigned short proximityServicePSM; // @synthesize proximityServicePSM=_proximityServicePSM;
@property(nonatomic) unsigned int proximityServiceProductID; // @synthesize proximityServiceProductID=_proximityServiceProductID;
@property(nonatomic) BOOL proximityServiceMeasuredPower; // @synthesize proximityServiceMeasuredPower=_proximityServiceMeasuredPower;
@property(nonatomic) unsigned char proximityServiceFlags; // @synthesize proximityServiceFlags=_proximityServiceFlags;
@property(copy, nonatomic) NSData *proximityServiceData; // @synthesize proximityServiceData=_proximityServiceData;
@property(copy, nonatomic) NSData *proximityServiceClassicAddress; // @synthesize proximityServiceClassicAddress=_proximityServiceClassicAddress;
@property(nonatomic) unsigned char proximityServiceCategory; // @synthesize proximityServiceCategory=_proximityServiceCategory;
@property(nonatomic) unsigned char proximityPairingSubType; // @synthesize proximityPairingSubType=_proximityPairingSubType;
@property(nonatomic) unsigned int proximityPairingProductID; // @synthesize proximityPairingProductID=_proximityPairingProductID;
@property(readonly, copy, nonatomic) NSString *objectSetupMessage; // @synthesize objectSetupMessage=_objectSetupMessage;
@property(readonly, copy, nonatomic) NSString *objectSetupFontCode; // @synthesize objectSetupFontCode=_objectSetupFontCode;
@property(readonly, nonatomic) unsigned int objectSetupFlags; // @synthesize objectSetupFlags=_objectSetupFlags;
@property(readonly, nonatomic) unsigned char objectSetupColorCode; // @synthesize objectSetupColorCode=_objectSetupColorCode;
@property(readonly, nonatomic) unsigned char objectSetupBatteryState; // @synthesize objectSetupBatteryState=_objectSetupBatteryState;
@property(readonly, nonatomic) unsigned char objectSetupBatteryPerformance; // @synthesize objectSetupBatteryPerformance=_objectSetupBatteryPerformance;
@property(copy, nonatomic) NSData *objectDiscoveryPublicKeyData; // @synthesize objectDiscoveryPublicKeyData=_objectDiscoveryPublicKeyData;
@property(nonatomic) unsigned int objectDiscoveryProductID; // @synthesize objectDiscoveryProductID=_objectDiscoveryProductID;
@property(copy, nonatomic) NSData *objectDiscoveryNearOwnerID; // @synthesize objectDiscoveryNearOwnerID=_objectDiscoveryNearOwnerID;
@property(nonatomic) unsigned char objectDiscoveryMode; // @synthesize objectDiscoveryMode=_objectDiscoveryMode;
@property(nonatomic) unsigned char objectDiscoveryBatteryState; // @synthesize objectDiscoveryBatteryState=_objectDiscoveryBatteryState;
@property(nonatomic) unsigned int nearbyInfoFlags; // @synthesize nearbyInfoFlags=_nearbyInfoFlags;
@property(copy, nonatomic) NSData *nearbyAuthTag; // @synthesize nearbyAuthTag=_nearbyAuthTag;
@property(readonly, nonatomic) unsigned char nearbyActivityLevel; // @synthesize nearbyActivityLevel=_nearbyActivityLevel;
@property(nonatomic) unsigned char nearbyActionType; // @synthesize nearbyActionType=_nearbyActionType;
@property(nonatomic) unsigned int nearbyActionFlags; // @synthesize nearbyActionFlags=_nearbyActionFlags;
@property(nonatomic) unsigned long long homeKitV2Value; // @synthesize homeKitV2Value=_homeKitV2Value;
@property(nonatomic) unsigned short homeKitV2StateNumber; // @synthesize homeKitV2StateNumber=_homeKitV2StateNumber;
@property(nonatomic) unsigned short homeKitV2InstanceID; // @synthesize homeKitV2InstanceID=_homeKitV2InstanceID;
@property(copy, nonatomic) NSData *homeKitV2AuthTagData; // @synthesize homeKitV2AuthTagData=_homeKitV2AuthTagData;
@property(copy, nonatomic) NSData *homeKitV2AccessoryIDData; // @synthesize homeKitV2AccessoryIDData=_homeKitV2AccessoryIDData;
@property(nonatomic) unsigned int homeKitV1SetupHash; // @synthesize homeKitV1SetupHash=_homeKitV1SetupHash;
@property(nonatomic) unsigned short homeKitV1StateNumber; // @synthesize homeKitV1StateNumber=_homeKitV1StateNumber;
@property(nonatomic) unsigned char homeKitV1Flags; // @synthesize homeKitV1Flags=_homeKitV1Flags;
@property(copy, nonatomic) NSData *homeKitV1DeviceIDData; // @synthesize homeKitV1DeviceIDData=_homeKitV1DeviceIDData;
@property(nonatomic) unsigned char homeKitV1ConfigurationNumber; // @synthesize homeKitV1ConfigurationNumber=_homeKitV1ConfigurationNumber;
@property(nonatomic) unsigned char homeKitV1CompatibleVersion; // @synthesize homeKitV1CompatibleVersion=_homeKitV1CompatibleVersion;
@property(nonatomic) unsigned short homeKitV1Category; // @synthesize homeKitV1Category=_homeKitV1Category;
@property(nonatomic) unsigned int airplayTargetIPv4; // @synthesize airplayTargetIPv4=_airplayTargetIPv4;
@property(nonatomic) unsigned char airplayTargetFlags; // @synthesize airplayTargetFlags=_airplayTargetFlags;
@property(nonatomic) unsigned char airplayTargetConfigSeed; // @synthesize airplayTargetConfigSeed=_airplayTargetConfigSeed;
@property(nonatomic) unsigned char airplaySourceFlags; // @synthesize airplaySourceFlags=_airplaySourceFlags;
@property(nonatomic) unsigned char vendorIDSource; // @synthesize vendorIDSource=_vendorIDSource;
@property(nonatomic) unsigned short vendorID; // @synthesize vendorID=_vendorID;
@property(nonatomic) BOOL smartRoutingMode; // @synthesize smartRoutingMode=_smartRoutingMode;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(nonatomic) BOOL placementMode; // @synthesize placementMode=_placementMode;
@property(nonatomic) int secondaryPlacement; // @synthesize secondaryPlacement=_secondaryPlacement;
@property(nonatomic) int primaryPlacement; // @synthesize primaryPlacement=_primaryPlacement;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) BOOL microphoneMode; // @synthesize microphoneMode=_microphoneMode;
@property(copy, nonatomic) NSString *idsDeviceID; // @synthesize idsDeviceID=_idsDeviceID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(nonatomic) BOOL doubleTapCapability; // @synthesize doubleTapCapability=_doubleTapCapability;
@property(nonatomic) BOOL doubleTapActionRight; // @synthesize doubleTapActionRight=_doubleTapActionRight;
@property(nonatomic) BOOL doubleTapActionLeft; // @synthesize doubleTapActionLeft=_doubleTapActionLeft;
@property(nonatomic) unsigned long long discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(nonatomic) unsigned char deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned long long deviceFlags; // @synthesize deviceFlags=_deviceFlags;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property(nonatomic) unsigned int connectedServices; // @synthesize connectedServices=_connectedServices;
@property(nonatomic) BOOL classicRSSI; // @synthesize classicRSSI=_classicRSSI;
@property(nonatomic) unsigned long long changeFlags; // @synthesize changeFlags=_changeFlags;
@property(copy, nonatomic) NSData *btAddressData; // @synthesize btAddressData=_btAddressData;
@property(nonatomic) int bleRSSI; // @synthesize bleRSSI=_bleRSSI;
@property(nonatomic) int bleChannel; // @synthesize bleChannel=_bleChannel;
@property(copy, nonatomic) NSData *bleAppleManufacturerData; // @synthesize bleAppleManufacturerData=_bleAppleManufacturerData;
@property(copy, nonatomic) NSData *bleAdvertisementData; // @synthesize bleAdvertisementData=_bleAdvertisementData;
@property(copy, nonatomic) NSData *bleAddressData; // @synthesize bleAddressData=_bleAddressData;
@property(nonatomic) int audioStreamState; // @synthesize audioStreamState=_audioStreamState;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)_parseMicrosoftSwiftPairPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000000060c40
- (void)_parseMicrosoftManufacturerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000000060c10
- (void)_parseSpatialInteractionPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000000060900
- (void)_parseProximityServiceHomeKitSetupPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000000060630
- (void)_parseProximityServiceData:(id)arg1;	// IMP=0x0000000000060570
- (void)_parseProximityPairingAccessoryStatusPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x00000000000601f0
- (void)_parseProximityPairingObjectSetupPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005feb0
- (void)_parseProximityPairingWxStatusPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005fea0
- (void)_parseProximityPairingWxSetupPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005fe90
- (void)_parseProximityPairingPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005fd80
- (void)_parseObjectDiscoveryPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005fb50
- (void)_parseNearbyInfoPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005f7a0
- (void)_parseNearbyActionV2Ptr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005f500
- (void)_parseNearbyActionPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005f070
- (void)_parseHomeKitV2Ptr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005ed50
- (void)_parseHomeKitV1Ptr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005ea80
- (void)_parseHeySiriPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005e820
- (void)_parseDSInfoPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005e760
- (void)_parseAirPlayTargetPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005e640
- (void)_parseAirPlaySourcePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005e5e0
- (void)_parseAppleManufacturerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005e420
- (void)_parseManufacturerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000000005e3d0
- (void)_clearUnparsedProperties;	// IMP=0x000000000005dfa0
- (void)updateWithRPIdentity:(id)arg1;	// IMP=0x000000000005dde0
- (unsigned long long)updateWithPowerSourceDescription:(id)arg1;	// IMP=0x000000000005dcd0
- (void)updateWithCBIdentity:(id)arg1;	// IMP=0x000000000005db00
- (unsigned long long)updateWithCBDevice:(id)arg1;	// IMP=0x000000000005c360
- (void)_setDeviceInfoKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000005c2a0
- (unsigned long long)removeInternalFlags:(unsigned int)arg1;	// IMP=0x000000000005bee0
- (_Bool)isEquivalentToCBDevice:(id)arg1 compareFlags:(unsigned int)arg2;	// IMP=0x000000000005ba40
@property(readonly, copy, nonatomic) NSString *stableIdentifier;
@property(readonly, nonatomic) BOOL rssi;
@property(nonatomic) unsigned char nearbyInfoStatusType;
@property(nonatomic) unsigned char nearbyInfoStatusTime;
@property(nonatomic) double nearbyInfoStatusProgress;
@property(nonatomic) unsigned char nearbyActionV2Type;
@property(copy, nonatomic) NSData *nearbyActionV2TargetData;
@property(nonatomic) unsigned int nearbyActionV2Flags;
- (void)setNearbyActionDeviceClass:(unsigned char)arg1;	// IMP=0x000000000005b5f0
@property(readonly, nonatomic) unsigned char nearbyActionDeviceClass;
@property(nonatomic) unsigned char mspSubScenario;
@property(copy, nonatomic) NSString *mspDisplayName;
@property(nonatomic) unsigned int mspDeviceClass;
@property(copy, nonatomic) NSData *mspAddressData;
@property(nonatomic) unsigned char heySiriSNR;
@property(nonatomic) unsigned char heySiriRandom;
@property(nonatomic) unsigned char heySiriProductType;
@property(nonatomic) unsigned short heySiriPerceptualHash;
@property(nonatomic) unsigned short heySiriDeviceClass;
@property(nonatomic) unsigned char heySiriConfidence;
@property(copy, nonatomic) NSData *gfpPayloadData;
@property(nonatomic) unsigned int gfpModelID;
@property(copy, nonatomic) NSData *fidoPayloadData;
@property(nonatomic) unsigned char dsInfoVehicleState;
@property(nonatomic) unsigned char dsInfoVehicleConfidence;
@property(nonatomic) unsigned char dsActionTieBreaker;
@property(nonatomic) BOOL dsActionMeasuredPower;
@property(nonatomic) unsigned char dsActionFlags;
@property(nonatomic) unsigned short airplayTargetPort;
@property(nonatomic) unsigned char accessoryStatusLidOpenCount;
@property(nonatomic) unsigned int accessoryStatusFlags;
@property(copy, nonatomic) NSData *ltkData;
@property(copy, nonatomic) NSData *linkKeyData;
@property(copy, nonatomic) NSData *irkData;
@property(nonatomic) unsigned int gapaFlags;
@property(nonatomic) unsigned int appearanceValue;
@property(readonly, nonatomic) unsigned char colorFlags;
@property(readonly, nonatomic) unsigned char colorCodeBest;
@property(readonly, nonatomic) unsigned char batteryStateCase;
@property(readonly, nonatomic) float batteryLevelCase;
@property(readonly, nonatomic) unsigned char batteryStateRight;
@property(readonly, nonatomic) float batteryLevelRight;
@property(readonly, nonatomic) unsigned char batteryStateLeft;
@property(readonly, nonatomic) float batteryLevelLeft;
@property(readonly, nonatomic) unsigned char batteryStateMain;
@property(readonly, nonatomic) float batteryLevelMain;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x00000000000574d0
- (id)description;	// IMP=0x00000000000574b0
- (id)dictionaryRepresentation;	// IMP=0x0000000000057440
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000573a0
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x00000000000563e0
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000055130

@end

