//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VirtualGarage/NSCopying-Protocol.h>
#import <VirtualGarage/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, VGVehicleState;

@interface VGVehicle : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSDate *_creationDate;	// 16 = 0x10
    NSDate *_lastStateUpdateDate;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_year;	// 40 = 0x28
    NSString *_manufacturer;	// 48 = 0x30
    NSString *_model;	// 56 = 0x38
    NSString *_colorHex;	// 64 = 0x40
    NSString *_headUnitBluetoothIdentifier;	// 72 = 0x48
    NSString *_headUnitIdentifier;	// 80 = 0x50
    NSString *_licensePlate;	// 88 = 0x58
    NSString *_lprVehicleType;	// 96 = 0x60
    NSString *_lprPowerType;	// 104 = 0x68
    unsigned long long _supportedConnectors;	// 112 = 0x70
    NSDictionary *_powerByConnector;	// 120 = 0x78
    VGVehicleState *_currentVehicleState;	// 128 = 0x80
    NSString *_pairedAppIdentifier;	// 136 = 0x88
    NSString *_iapIdentifier;	// 144 = 0x90
    NSString *_siriIntentsIdentifier;	// 152 = 0x98
    NSString *_pairedAppInstallDeviceIdentifier;	// 160 = 0xa0
    NSData *_pairedAppInstallSessionIdentifier;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002c8a
- (void).cxx_destruct;	// IMP=0x0000000000004147
@property(retain, nonatomic) NSData *pairedAppInstallSessionIdentifier; // @synthesize pairedAppInstallSessionIdentifier=_pairedAppInstallSessionIdentifier;
@property(retain, nonatomic) NSString *pairedAppInstallDeviceIdentifier; // @synthesize pairedAppInstallDeviceIdentifier=_pairedAppInstallDeviceIdentifier;
@property(retain, nonatomic) NSString *siriIntentsIdentifier; // @synthesize siriIntentsIdentifier=_siriIntentsIdentifier;
@property(retain, nonatomic) NSString *iapIdentifier; // @synthesize iapIdentifier=_iapIdentifier;
@property(retain, nonatomic) NSString *pairedAppIdentifier; // @synthesize pairedAppIdentifier=_pairedAppIdentifier;
@property(readonly, nonatomic) VGVehicleState *currentVehicleState; // @synthesize currentVehicleState=_currentVehicleState;
@property(readonly, copy, nonatomic) NSDictionary *powerByConnector; // @synthesize powerByConnector=_powerByConnector;
@property(nonatomic) unsigned long long supportedConnectors; // @synthesize supportedConnectors=_supportedConnectors;
@property(copy, nonatomic) NSString *lprPowerType; // @synthesize lprPowerType=_lprPowerType;
@property(copy, nonatomic) NSString *lprVehicleType; // @synthesize lprVehicleType=_lprVehicleType;
@property(copy, nonatomic) NSString *licensePlate; // @synthesize licensePlate=_licensePlate;
@property(readonly, copy, nonatomic) NSString *headUnitIdentifier; // @synthesize headUnitIdentifier=_headUnitIdentifier;
@property(readonly, copy, nonatomic) NSString *headUnitBluetoothIdentifier; // @synthesize headUnitBluetoothIdentifier=_headUnitBluetoothIdentifier;
@property(copy, nonatomic) NSString *colorHex; // @synthesize colorHex=_colorHex;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSDate *lastStateUpdateDate; // @synthesize lastStateUpdateDate=_lastStateUpdateDate;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003d8f
- (id)description;	// IMP=0x0000000000003c42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000039c6
- (double)batteryPercentageBasedOfCapacity;	// IMP=0x0000000000003782
- (unsigned long long)displayedBatteryPercentage;	// IMP=0x000000000000355d
- (id)combinedDisplayName;	// IMP=0x0000000000003505
- (_Bool)_canBeUpdatedFromState:(id)arg1;	// IMP=0x000000000000345a
- (id)_identifierForVehicleStateOrigin:(long long)arg1;	// IMP=0x0000000000003424
- (void)pairToIapIdentifier:(id)arg1 bluetoothIdentifier:(id)arg2;	// IMP=0x0000000000003284
- (id)_vehicleByUpdatingWithVehicle:(id)arg1;	// IMP=0x0000000000002ebc
- (void)_updateWithVehicleState:(id)arg1;	// IMP=0x0000000000002d27
@property(readonly, nonatomic) _Bool isPureElectricVehicle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002a64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002528
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 year:(id)arg3 manufacturer:(id)arg4 model:(id)arg5 colorHex:(id)arg6 licensePlate:(id)arg7 lprVehicleType:(id)arg8 lprPowerType:(id)arg9;	// IMP=0x0000000000002326
- (id)initWithLicensePlate:(id)arg1 lprVehicleType:(id)arg2 lprPowerType:(id)arg3;	// IMP=0x00000000000021c2
- (id)initWithDisplayName:(id)arg1 year:(id)arg2 manufacturer:(id)arg3 model:(id)arg4 colorHex:(id)arg5 headUnitIdentifier:(id)arg6 headUnitBluetoothIdentifier:(id)arg7 supportedConnectors:(unsigned long long)arg8 powerByConnector:(id)arg9;	// IMP=0x0000000000001fa0

@end

