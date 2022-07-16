//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VirtualGarage/NSCopying-Protocol.h>
#import <VirtualGarage/NSSecureCoding-Protocol.h>

@class NSDate, NSMeasurement, NSNumber, NSString;

@interface VGVehicleState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isCharging;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDate *_dateOfUpdate;	// 24 = 0x18
    long long _origin;	// 32 = 0x20
    NSMeasurement *_currentEVRange;	// 40 = 0x28
    NSMeasurement *_maxEVRange;	// 48 = 0x30
    NSMeasurement *_minBatteryCapacity;	// 56 = 0x38
    NSMeasurement *_currentBatteryCapacity;	// 64 = 0x40
    NSMeasurement *_maxBatteryCapacity;	// 72 = 0x48
    NSString *_consumptionArguments;	// 80 = 0x50
    NSString *_chargingArguments;	// 88 = 0x58
    unsigned long long _activeConnector;	// 96 = 0x60
    NSNumber *_batteryPercentage;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015eac
+ (id)_vehicleStateFromStorage:(id)arg1;	// IMP=0x0000000000015327
- (void).cxx_destruct;	// IMP=0x00000000000167dc
@property(readonly, nonatomic) NSNumber *batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
@property(readonly, nonatomic) unsigned long long activeConnector; // @synthesize activeConnector=_activeConnector;
@property(readonly, nonatomic) _Bool isCharging; // @synthesize isCharging=_isCharging;
@property(readonly, nonatomic) NSString *chargingArguments; // @synthesize chargingArguments=_chargingArguments;
@property(readonly, nonatomic) NSString *consumptionArguments; // @synthesize consumptionArguments=_consumptionArguments;
@property(readonly, nonatomic) NSMeasurement *maxBatteryCapacity; // @synthesize maxBatteryCapacity=_maxBatteryCapacity;
@property(readonly, nonatomic) NSMeasurement *currentBatteryCapacity; // @synthesize currentBatteryCapacity=_currentBatteryCapacity;
@property(readonly, nonatomic) NSMeasurement *minBatteryCapacity; // @synthesize minBatteryCapacity=_minBatteryCapacity;
@property(readonly, nonatomic) NSMeasurement *maxEVRange; // @synthesize maxEVRange=_maxEVRange;
@property(readonly, nonatomic) NSMeasurement *currentEVRange; // @synthesize currentEVRange=_currentEVRange;
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSDate *dateOfUpdate; // @synthesize dateOfUpdate=_dateOfUpdate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000001660b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001640b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001638b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001620f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015eb4
- (id)_storage;	// IMP=0x000000000001598f
- (_Bool)isSignificantlyDifferentFromVehicleState:(id)arg1;	// IMP=0x0000000000014df7
- (id)initWithIdentifier:(id)arg1 dateOfUpdate:(id)arg2 origin:(long long)arg3 batteryPercentage:(id)arg4 currentEVRange:(id)arg5 maxEVRange:(id)arg6 minBatteryCapacity:(id)arg7 currentBatteryCapacity:(id)arg8 maxBatteryCapacity:(id)arg9 consumptionArguments:(id)arg10 chargingArguments:(id)arg11 isCharging:(_Bool)arg12 activeConnector:(unsigned long long)arg13;	// IMP=0x0000000000014bf4

@end

