//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _PXValueDefaultAnimation
{
    double _initialValue;	// 88 = 0x58
    long long _curve;	// 96 = 0x60
}

- (double)approximateVelocity;	// IMP=0x00000000004b7224
- (double)currentValue;	// IMP=0x00000000004b70d7
- (id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;	// IMP=0x00000000004b7052
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;	// IMP=0x00000000004b6fd8

@end
