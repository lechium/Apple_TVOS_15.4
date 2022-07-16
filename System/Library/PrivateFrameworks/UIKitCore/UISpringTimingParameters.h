//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider>
{
    _Bool _implicitDuration;	// 8 = 0x8
    double _dampingRatio;	// 16 = 0x10
    double _mass;	// 24 = 0x18
    double _stiffness;	// 32 = 0x20
    double _damping;	// 40 = 0x28
    struct CGVector _initialVelocity;	// 48 = 0x30
}

+ (void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double *)arg4 response:(double *)arg5;	// IMP=0x0000000000099f7c
+ (void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double *)arg3 stiffness:(double *)arg4 damping:(double *)arg5;	// IMP=0x0000000000099f32
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000099dcd
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) _Bool implicitDuration; // @synthesize implicitDuration=_implicitDuration;
@property(readonly, nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(readonly, nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(readonly, nonatomic) double settlingDuration;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000099bd9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000099ad4
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009993a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009982a
- (id)initWithParameters:(id)arg1;	// IMP=0x0000000000099812
- (id)initWithParameters:(id)arg1 initialVelocity:(struct CGVector)arg2;	// IMP=0x0000000000099784
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x000000000009976c
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(struct CGVector)arg3;	// IMP=0x00000000000996eb
- (id)initWithDampingRatio:(double)arg1;	// IMP=0x00000000000996d3
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector)arg2;	// IMP=0x0000000000099665
- (id)initWithVelocity:(struct CGVector)arg1;	// IMP=0x0000000000099579
- (id)init;	// IMP=0x00000000000994a4
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4;	// IMP=0x00000000000993d5
- (id)description;	// IMP=0x0000000000099264
- (id)effectiveTimingFunction;	// IMP=0x000000000009925c
- (id)_mediaTimingFunction;	// IMP=0x0000000000099254
@property(readonly, nonatomic) long long timingCurveType;

@end
