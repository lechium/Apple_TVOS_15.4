//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _PXValueSpringAnimation
{
    double _A;	// 88 = 0x58
    double _B;	// 96 = 0x60
    double _omega0;	// 104 = 0x68
}

+ (double)durationOfSpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5;	// IMP=0x00000000004b6de2
- (double)approximateVelocity;	// IMP=0x00000000004b699a
- (double)currentValue;	// IMP=0x00000000004b68fa
- (id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;	// IMP=0x00000000004b66ea
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;	// IMP=0x00000000004b6677

@end
