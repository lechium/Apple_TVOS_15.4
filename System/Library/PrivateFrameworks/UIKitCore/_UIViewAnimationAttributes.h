//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding>
{
    double _duration;	// 8 = 0x8
    double _delay;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    struct CAFrameRateRange _preferredFrameRateRange;	// 32 = 0x20
    unsigned int _updateReason;	// 44 = 0x2c
    _Bool _hasSpringAttributes;	// 48 = 0x30
    double _springDamping;	// 56 = 0x38
    double _springVelocity;	// 64 = 0x40
    double _springMass;	// 72 = 0x48
    double _springStiffness;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000001064269
@property(readonly, nonatomic, getter=_springStiffness) double springStiffness; // @synthesize springStiffness=_springStiffness;
@property(readonly, nonatomic, getter=_springMass) double springMass; // @synthesize springMass=_springMass;
@property(readonly, nonatomic, getter=_springVelocity) double springVelocity; // @synthesize springVelocity=_springVelocity;
@property(readonly, nonatomic, getter=_springDamping) double springDamping; // @synthesize springDamping=_springDamping;
@property(readonly, nonatomic, getter=_hasSpringAttributes) _Bool hasSpringAttributes; // @synthesize hasSpringAttributes=_hasSpringAttributes;
@property(readonly, nonatomic, getter=_delay) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic, getter=_duration) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic, getter=_updateReason) unsigned int updateReason;
@property(readonly, nonatomic, getter=_preferredFrameRateRange) struct CAFrameRateRange preferredFrameRateRange;
@property(readonly, nonatomic, getter=_frameInterval) double frameInterval;
@property(readonly, nonatomic, getter=_curve) long long curve;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001064430
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001064271

@end

