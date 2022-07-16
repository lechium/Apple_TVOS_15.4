//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable;

@interface UIDynamicItemBehavior
{
    _Bool _useDefaultViewPropertiesApplier;	// 8 = 0x8
    struct {
        unsigned int elasticityChanged:1;
        unsigned int frictionChanged:1;
        unsigned int densityChanged:1;
        unsigned int resistanceChanged:1;
        unsigned int angularResistanceChanged:1;
        unsigned int rotationEnabledChanged:1;
        unsigned int useDefaultViewPropertiesApplierChanged:1;
        unsigned int chargeChanged:1;
        unsigned int dynamicChanged:1;
    } _stateFlags;	// 12 = 0xc
    NSMapTable *_cachedAngularVelocities;	// 16 = 0x10
    NSMapTable *_cachedLinearVelocities;	// 24 = 0x18
    _Bool _anchored;	// 32 = 0x20
    _Bool _allowsRotation;	// 33 = 0x21
    double _elasticity;	// 40 = 0x28
    double _friction;	// 48 = 0x30
    double _density;	// 56 = 0x38
    double _resistance;	// 64 = 0x40
    double _angularResistance;	// 72 = 0x48
    double _charge;	// 80 = 0x50
}

+ (_Bool)_isPrimitiveBehavior;	// IMP=0x0000000000590e59
- (void).cxx_destruct;	// IMP=0x000000000059319a
@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic, getter=isAnchored) _Bool anchored; // @synthesize anchored=_anchored;
@property(nonatomic) double charge; // @synthesize charge=_charge;
@property(nonatomic) double angularResistance; // @synthesize angularResistance=_angularResistance;
@property(nonatomic) double resistance; // @synthesize resistance=_resistance;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double elasticity; // @synthesize elasticity=_elasticity;
- (id)description;	// IMP=0x0000000000592ed9
- (void)setUseDefaultViewPropertiesApplier:(_Bool)arg1;	// IMP=0x0000000000592e7d
- (_Bool)useDefaultViewPropertiesApplier;	// IMP=0x0000000000592e6d
- (void)_dissociate;	// IMP=0x0000000000592c23
- (void)_associate;	// IMP=0x00000000005926e7
- (void)_reevaluate:(unsigned long long)arg1;	// IMP=0x00000000005924d3
- (void)applyImpulse:(struct CGPoint)arg1 toItem:(id)arg2;	// IMP=0x0000000000592417
- (_Bool)_rotationEnabledForItem:(id)arg1;	// IMP=0x0000000000592384
- (double)_massForItem:(id)arg1;	// IMP=0x00000000005922eb
- (double)_angularResistanceForItem:(id)arg1;	// IMP=0x0000000000592252
- (double)_resistanceForItem:(id)arg1;	// IMP=0x00000000005921b9
- (double)_densityForItem:(id)arg1;	// IMP=0x0000000000592120
- (double)_frictionForItem:(id)arg1;	// IMP=0x0000000000592087
- (double)_elasticityForItem:(id)arg1;	// IMP=0x0000000000591fee
- (double)angularVelocityForItem:(id)arg1;	// IMP=0x0000000000591f14
- (void)addAngularVelocity:(double)arg1 forItem:(id)arg2;	// IMP=0x0000000000591d1f
- (double)_angleForItem:(id)arg1;	// IMP=0x0000000000591c86
- (void)_setAngle:(double)arg1 forItem:(id)arg2;	// IMP=0x0000000000591bd7
- (struct CGPoint)_positionForItem:(id)arg1;	// IMP=0x0000000000591b31
- (void)_setPosition:(struct CGPoint)arg1 forItem:(id)arg2;	// IMP=0x0000000000591a75
- (struct CGPoint)linearVelocityForItem:(id)arg1;	// IMP=0x000000000059196e
- (void)addLinearVelocity:(struct CGPoint)arg1 forItem:(id)arg2;	// IMP=0x0000000000591727
@property(readonly, copy, nonatomic) NSArray *items;
- (void)removeItem:(id)arg1;	// IMP=0x0000000000591266
- (void)addItem:(id)arg1;	// IMP=0x0000000000591130
- (void)_configureBody:(id)arg1 forView:(id)arg2;	// IMP=0x0000000000590f90
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000590e7a
- (id)init;	// IMP=0x0000000000590e61

@end

