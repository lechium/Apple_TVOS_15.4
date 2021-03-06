//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsVehicle
{
    SCNPhysicsBody *_chassisBody;	// 8 = 0x8
    NSArray *_wheels;	// 16 = 0x10
    SCNPhysicsWorld *_world;	// 24 = 0x18
    void *_vehicle;	// 32 = 0x20
    double _speedKmHour;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002c4fcf
+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;	// IMP=0x00000000002c4146
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002c4eb7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002c4e53
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;	// IMP=0x00000000002c4e41
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00000000002c4d57
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000002c4c65
- (id)wheelAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002c4c0d
- (_Bool)hasReferenceToPhysicsBody:(id)arg1;	// IMP=0x00000000002c4bea
@property(readonly, nonatomic) double speedInKilometersPerHour;
- (void)_update;	// IMP=0x00000000002c4a76
- (void)_handleCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000000002c47ef
- (void)_createWheel:(id)arg1;	// IMP=0x00000000002c45e8
- (void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2;	// IMP=0x00000000002c4557
- (void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2;	// IMP=0x00000000002c44c6
- (void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2;	// IMP=0x00000000002c4435
- (void)_willRemoveFromPhysicsWorld:(id)arg1;	// IMP=0x00000000002c43e1
- (void)_addToPhysicsWorld:(id)arg1 definition:(CDStruct_0557a1bb)arg2;	// IMP=0x00000000002c4343
- (void)_copyDefinition:(CDStruct_0557a1bb *)arg1;	// IMP=0x00000000002c433d
- (id)physicsWorld;	// IMP=0x00000000002c432c
- (void *)btVehicle;	// IMP=0x00000000002c431b
@property(readonly, nonatomic) NSArray *wheels;
@property(readonly, nonatomic) SCNPhysicsBody *chassisBody;
- (void)dealloc;	// IMP=0x00000000002c417a
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;	// IMP=0x00000000002c40bc
- (void)_initializeWheelsArray;	// IMP=0x00000000002c401e

@end

