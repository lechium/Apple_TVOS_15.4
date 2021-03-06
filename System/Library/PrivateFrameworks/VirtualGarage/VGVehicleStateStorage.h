//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VirtualGarage/NSCopying-Protocol.h>

@class NSData, NSString;

@interface VGVehicleStateStorage : PBCodable <NSCopying>
{
    double _batteryPercentage;	// 8 = 0x8
    double _currentBatteryCapacity;	// 16 = 0x10
    double _currentEVRange;	// 24 = 0x18
    double _dateOfUpdate;	// 32 = 0x20
    double _maxBatteryCapacity;	// 40 = 0x28
    double _maxEVRange;	// 48 = 0x30
    double _minBatteryCapacity;	// 56 = 0x38
    int _activeConnector;	// 64 = 0x40
    NSString *_chargingArguments;	// 72 = 0x48
    NSString *_consumptionArguments;	// 80 = 0x50
    NSString *_identifier;	// 88 = 0x58
    int _origin;	// 96 = 0x60
    NSString *_pairedAppInstallDeviceIdentifier;	// 104 = 0x68
    NSData *_pairedAppInstallSessionIdentifier;	// 112 = 0x70
    _Bool _isCharging;	// 120 = 0x78
    struct {
        unsigned int batteryPercentage:1;
        unsigned int currentBatteryCapacity:1;
        unsigned int currentEVRange:1;
        unsigned int dateOfUpdate:1;
        unsigned int maxBatteryCapacity:1;
        unsigned int maxEVRange:1;
        unsigned int minBatteryCapacity:1;
        unsigned int activeConnector:1;
        unsigned int origin:1;
        unsigned int isCharging:1;
    } _has;	// 124 = 0x7c
}

- (void).cxx_destruct;	// IMP=0x0000000000006b35
@property(retain, nonatomic) NSString *pairedAppInstallDeviceIdentifier; // @synthesize pairedAppInstallDeviceIdentifier=_pairedAppInstallDeviceIdentifier;
@property(retain, nonatomic) NSData *pairedAppInstallSessionIdentifier; // @synthesize pairedAppInstallSessionIdentifier=_pairedAppInstallSessionIdentifier;
@property(nonatomic) _Bool isCharging; // @synthesize isCharging=_isCharging;
@property(retain, nonatomic) NSString *chargingArguments; // @synthesize chargingArguments=_chargingArguments;
@property(retain, nonatomic) NSString *consumptionArguments; // @synthesize consumptionArguments=_consumptionArguments;
@property(nonatomic) double maxBatteryCapacity; // @synthesize maxBatteryCapacity=_maxBatteryCapacity;
@property(nonatomic) double currentBatteryCapacity; // @synthesize currentBatteryCapacity=_currentBatteryCapacity;
@property(nonatomic) double minBatteryCapacity; // @synthesize minBatteryCapacity=_minBatteryCapacity;
@property(nonatomic) double maxEVRange; // @synthesize maxEVRange=_maxEVRange;
@property(nonatomic) double currentEVRange; // @synthesize currentEVRange=_currentEVRange;
@property(nonatomic) double batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
@property(nonatomic) double dateOfUpdate; // @synthesize dateOfUpdate=_dateOfUpdate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000067e2
- (unsigned long long)hash;	// IMP=0x0000000000005f51
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005bd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005969
- (void)copyTo:(id)arg1;	// IMP=0x0000000000005762
- (void)writeTo:(id)arg1;	// IMP=0x0000000000005551
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000005544
- (id)dictionaryRepresentation;	// IMP=0x0000000000004990
- (id)description;	// IMP=0x00000000000048e1
@property(readonly, nonatomic) _Bool hasPairedAppInstallDeviceIdentifier;
@property(readonly, nonatomic) _Bool hasPairedAppInstallSessionIdentifier;
- (int)StringAsActiveConnector:(id)arg1;	// IMP=0x0000000000004764
- (id)activeConnectorAsString:(int)arg1;	// IMP=0x00000000000046a6
@property(nonatomic) _Bool hasActiveConnector;
@property(nonatomic) int activeConnector; // @synthesize activeConnector=_activeConnector;
@property(nonatomic) _Bool hasIsCharging;
@property(readonly, nonatomic) _Bool hasChargingArguments;
@property(readonly, nonatomic) _Bool hasConsumptionArguments;
@property(nonatomic) _Bool hasMaxBatteryCapacity;
@property(nonatomic) _Bool hasCurrentBatteryCapacity;
@property(nonatomic) _Bool hasMinBatteryCapacity;
@property(nonatomic) _Bool hasMaxEVRange;
@property(nonatomic) _Bool hasCurrentEVRange;
@property(nonatomic) _Bool hasBatteryPercentage;
- (int)StringAsOrigin:(id)arg1;	// IMP=0x0000000000004367
- (id)originAsString:(int)arg1;	// IMP=0x0000000000004301
@property(nonatomic) _Bool hasOrigin;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(nonatomic) _Bool hasDateOfUpdate;

@end

